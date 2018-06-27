#include<iostream>
#include<string>
#include <sys/socket.h>
#include <netinet/in.h>
#include"data.pb.h"

#define PORT 8080

using namespace std;

int main()
{
  Demo::myData userData;

  int server_fd, new_socket, valread;
  struct sockaddr_in address;
  int opt = 1;
  
  if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
  {
    cout << "socket creation  failed" << endl;
    return -1;
  }

  if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT,
	&opt, sizeof(opt)))
  {
    cout << "setsockopt failed" << endl;;
    return -1;
  }

  address.sin_family = AF_INET;
  address.sin_addr.s_addr = INADDR_ANY;
  address.sin_port = htons( PORT );
  int addrlen = sizeof(address);

  // Forcefully attaching socket to the port 8080
  if (bind(server_fd, (struct sockaddr *)&address, 
	sizeof(address))<0)
  {
    cout << "Bind Failed" << endl;
    return -1;
  }

  if (listen(server_fd, 5) < 0)
  {
    cout << "listen failed" << endl;
    return -1;
  }

  cout << "Request for accept " << endl;
  if ((new_socket = accept(server_fd, (struct sockaddr *)&address, 
	  (socklen_t*)&addrlen))<0)
  {
    cout << "Accept failed " << endl;
    return -1;
  }
  cout << "after Request for accept " << endl;

  char my_data[1024];
  
  valread = read( new_socket , my_data, 1024);
  string proDataStr(my_data);
  userData.ParseFromString(proDataStr);
  cout << "Data is " << userData.str() << " length is " << userData.length() << endl;
  userData.set_length(userData.str().size());
  string my_str;
  userData.SerializeToString(&my_str);
  send(new_socket , my_str.c_str() , my_str.size(), 0);  
  close(server_fd);
  return 0; 
}

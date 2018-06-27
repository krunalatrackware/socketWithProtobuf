#include<iostream>
#include<string>
#include <sys/socket.h>
#include <netinet/in.h>
#include"data.pb.h"
#include <stdlib.h>
#include <arpa/inet.h>

#define PORT 8080

using namespace std;

int main()
{
 string data;
 bool flag;
 struct sockaddr_in address;
 int sock = 0, valread;
 struct sockaddr_in serv_addr;

 Demo::myData userData;
 string proDataStr;

 cout << "Enter the data or leave blank : ";
 getline(cin, data);
 if (data.empty()) {
   cout << "Thanks " << endl;
   return 0;
 } 

 userData.set_str(data); 

 flag = userData.SerializeToString(&proDataStr);
 if(!flag)
 {
   cout << "Unable to serialize the data" << endl;
   return 1;
 }


 if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
 {
     cout << "Socket creation error " << endl;
     return -1;
 }

  memset(&serv_addr, '0', sizeof(serv_addr));
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_port = htons(PORT);

  if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0) 
  {
      cout << " Invalid address not supported" << endl;
      return -1;
  }
 
  cout << "Connect request " << endl;
  if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
  {
      cout << " Connection Failed \n" << endl;
      return -1;
  }
  
  cout << "After Connect request " << endl;
  send(sock , proDataStr.c_str() , proDataStr.size() , 0 );
 
  char my_data[1024];
  valread = read( sock , my_data, 1024); 

  string response(my_data);
  Demo::myData userData1;  
  flag = userData1.ParseFromString(response);
  if(!flag)
  {
    cout << "Unable to Parse the data " << endl;
    return -1;
  }

  cout << "Length of the data is "  << userData1.length() << endl;
  return 0;
}

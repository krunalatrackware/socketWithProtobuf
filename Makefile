
all:
	export LD_LIBRARY_PATH=/usr/local/lib
	protoc --cpp_out=./ data.proto
	g++ Client.cpp data.pb.cc -pthread -lprotobuf -lpthread -o client
	g++ Server.cpp data.pb.cc -pthread -lprotobuf -lpthread -o server
clean:
	rm -f data.pb.cc data.pb.h client server

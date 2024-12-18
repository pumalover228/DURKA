#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <netdb.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#define MAXDATASIZE 100 

#include <iostream>
#include <string>

namespace network{
	int speak_to_server(std::string info);
	void init_server(std::string &hostname, std::string &port);
}

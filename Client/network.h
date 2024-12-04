#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <netdb.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#define PORT "3490"
#define MAXDATASIZE 100 
#define HOSTNAME "obnoxious"

#include <iostream>
#include <string>

namespace network{
	int speak_to_server(std::string info);
}

#include "network.h"

#include <cstring>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void network::init_server(string &hostname, string &port)
{
		ifstream config_file("config.txt");
		
		getline(config_file, hostname);
		getline(config_file, port);
		
		config_file.close();
}

int network::speak_to_server(string info)
{
	int sockfd, numbytes;  
	char buf[MAXDATASIZE];
	struct addrinfo hints, *servinfo, *p;
	int rv;
	int valread;
	char s[INET6_ADDRSTRLEN];

	string HOSTNAME;
	string PORT;
	network::init_server(HOSTNAME, PORT);
	

	memset(&hints, 0, sizeof hints);
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;

	if ((rv = getaddrinfo(HOSTNAME.c_str(), PORT.c_str(), &hints, &servinfo)) != 0) {
	  fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(rv));
	  return 1;
	}

	for(p = servinfo; p != NULL; p = p->ai_next) {
	  if ((sockfd = socket(p->ai_family, p->ai_socktype,
		       p->ai_protocol)) == -1) {
		   perror("client: socket");
		   continue;
	  }
	  if (connect(sockfd, p->ai_addr, p->ai_addrlen) == -1) {
		   close(sockfd);
		   perror("client: connect");
		   continue;
	  }
	  break;
	}

	if (p == NULL) {
	  fprintf(stderr, "client: failed to connect\n");
	  return 2;
	}

	send(sockfd, info.c_str() , strlen(info.c_str()), 0);

	char buffer[1024] = {0};
	valread = read(sockfd, buffer, 1024);
	string str_buffer = buffer;

	cout << '\n' << str_buffer << endl;

	close(sockfd);

	return 0;
}

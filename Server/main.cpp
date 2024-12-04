#include <iostream>
#include <string>

#include "menu.h"
#include "network.h"

using namespace std;

int main(void)
{

	PsychiatryServer dbShizov;

	struct sockaddr_storage their_addr;
	socklen_t sin_size;
	int valread;
	int sockfd, new_fd;
	string log;
	char s[INET6_ADDRSTRLEN];
	
	connect_with_client(sockfd);

	printf("server: waiting for connections...\n");

	while(1) {
		sin_size = sizeof their_addr;
		new_fd = accept(sockfd, (struct sockaddr *)&their_addr, &sin_size);
		if (new_fd == -1) {
			perror("accept");
			continue;
		}
		
		inet_ntop(their_addr.ss_family, get_in_addr((struct sockaddr *)&their_addr), s, sizeof s);
		
		cout << "server: got connection from " << s << endl;

		char buf[1024] = {0};
		valread = read(new_fd, buf, 1024);
		string str_buffer = buf;

		log = server_menu(str_buffer, dbShizov);
		
		send(new_fd, log.c_str() , strlen(log.c_str()), 0);
	}

	return 0;
}

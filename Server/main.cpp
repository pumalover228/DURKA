#include <iostream>
#include <string>

#include "menu.h"
#include "network.h"

using namespace std;

int main(void)
{
	struct sockaddr_storage their_addr;
	socklen_t sin_size;
	int valread;
	int sockfd, new_fd;
	

	connect_with_client(sockfd);

	printf("server: waiting for connections...\n");

	while(1) {
		sin_size = sizeof their_addr;
		new_fd = accept(sockfd, (struct sockaddr *)&their_addr, &sin_size);
		if (new_fd == -1) {
			perror("accept");
			continue;
		}

		char buf[1024] = {0};

		valread = read(new_fd, buf, 1024);
		
		string str_buffer = buf;
		
		server_menu(str_buffer);
	}

	return 0;
}

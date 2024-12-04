#ifndef NETWORK_H
#define NETWORK_H

#include <stdlib.h>
#include <cstdio>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <signal.h>

#define PORT "3490"
#define BACKLOG 10

void sigchld_handler(int s);
void connect_with_client(int &sockfd);

#endif

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

#include <string>

#define PORT "8080"
#define BACKLOG 10

void *get_in_addr(struct sockaddr *sa);
void sigchld_handler(int s);
void connect_with_client(int &sockfd);

#endif

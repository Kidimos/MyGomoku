//
// Created by Kidimos on 2023/11/29.
//

#ifndef MYGOMOKU_MY_SOCKET_H
#define MYGOMOKU_MY_SOCKET_H

#include <cstdio>
#include <cstdlib>
#include <string>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define ASSERT(flag,msg) ((flag)?NULL:(fprintf(stdout,(msg)),exit(EXIT_FAILURE)))//如果flag为假，则执行后面

enum Mode{
    MY_TCP = 1,
    MY_UDP
};

class MySocket{
public:

private:
    struct sockaddr* pSA;
    struct sockaddr_in SA;
};

#endif //MYGOMOKU_MY_SOCKET_H

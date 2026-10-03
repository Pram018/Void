#pragma once

#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string>
#include <iostream>

class Server {
  public:
    const constexpr int port = 8080;

    Server();
    ~Server();

  private:
    int server_fd;
    struct sockaddr_in addr;
    const int port;
    void handleClient(int client_fd);
};

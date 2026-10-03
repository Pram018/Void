#include "server.h"
#include <iostream>


Server::Server() {
  if((server_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
    std::cerr << "Cannot create a Socket\n";
    return 0;
  }


}

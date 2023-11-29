cmake_minimum_required(VERSION 3.19)
project(MyGomoku)

set(CMAKE_CXX_STANDARD 14)

include_directories(client)
include_directories(server)
include_directories(Utils)

add_executable(MyGomoku
        client/server.cpp
        server/client.cpp
        Utils/checkWin.cpp
        Utils/gomoku.h
        Utils/my_socket.cpp
        Utils/my_socket.h)

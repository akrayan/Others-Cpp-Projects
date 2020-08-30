cmake_minimum_required(VERSION 3.8)
project(Babel_server)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Common/IFSAbstract.hh
        Common/ISocket.hh
        Common/main.cpp
        Common/MySocket.cpp
        Common/MySocket.hh
        Common/Parser.cpp
        Common/Parser.hh
        Common/Server.cpp
        Common/Server.hh
        Common/User.cpp
        Common/User.hh
        Unix/CFSUnix.cpp
        Unix/CFSUnix.hh
        Unix/UnixSocket.cpp
        Unix/UnixSocket.hh)

add_executable(Babel_server ${SOURCE_FILES})
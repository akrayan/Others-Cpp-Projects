cmake_minimum_required(VERSION 3.8)
project(cpp_babel)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Babel_server/Babel_server/Common/ISocket.hh
        Babel_server/Babel_server/Common/main.cpp
        Babel_server/Babel_server/Common/MySocket.cpp
        Babel_server/Babel_server/Common/MySocket.hh
        #Babel_server/Babel_server/Windows/WinSocket.cpp
        #Babel_server/Babel_server/Windows/WinSocket.hh
        Babel_server/Babel_server/Unix/UnixSocket.cpp
        Babel_server/Babel_server/Unix/UnixSocket.hh
        Babel_server/Babel_server/Unix/CFSUnix.cpp
        Babel_server/Babel_server/Unix/CFSUnix.hh
        #Babel_server/Babel_server/Windows/CFSWindows.cpp
        #Babel_server/Babel_server/Windows/CFSWindows.hh
        Babel_server/Babel_server/Common/IFSAbstract.hh
        Babel_server/Babel_server/Common/User.cpp Babel_server/Babel_server/Common/User.hh Babel_server/Babel_server/Common/Parser.cpp Babel_server/Babel_server/Common/Parser.hh Babel_server/Babel_server/Common/Server.cpp Babel_server/Babel_server/Common/Server.hh)

add_executable(cpp_babel ${SOURCE_FILES})
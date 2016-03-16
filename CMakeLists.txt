PROJECT(broadcast)

CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

SET(CMAKE_C_FLAGS "-Wall -g -O2")
SET(CMAKE_CXX_FLAGS "-Wall -g -O2 -std=gnu++0x")

FILE(GLOB_RECURSE SRC_LIST "src/*.cpp")

INCLUDE_DIRECTORIES("include")
INCLUDE_DIRECTORIES("script")

ADD_LIBRARY(broadcast SHARED ${SRC_LIST})

ADD_EXECUTABLE(signal  "test/signal.cpp")
TARGET_LINK_LIBRARIES(signal broadcast)
TARGET_LINK_LIBRARIES(signal pthread)

ADD_EXECUTABLE(receive  "test/receive.cpp")
TARGET_LINK_LIBRARIES(receive broadcast)
TARGET_LINK_LIBRARIES(receive pthread)

cmake_minimum_required(VERSION 3.18)
project("ChatServer")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost REQUIRED COMPONENTS system)
find_package(Threads REQUIRED)

set(SOURCES
  listener.cpp
  server.cpp
  shared_state.cpp
  websocket_session.cpp
)

set(HEADERS
  listener.hpp
  beast.hpp
  shared_state.hpp
  websocket_session.hpp
)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_link_libraries(${PROJECT_NAME} PUBLIC Threads::Threads ${Boost_SYSTEM_LIBRARY})
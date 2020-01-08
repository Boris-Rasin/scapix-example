cmake_minimum_required(VERSION 3.16)

project(ScapixTut VERSION 1.0)

add_library(
  person
  ./source/person.h
  ./source/person.cpp
)

add_executable(myExe ./source/main.cpp)

target_link_libraries(myExe PRIVATE person)

include(./scapix/project/cmake/modules/scapix.cmake)
scapix_bridge_headers(
  person
  "com.foo.scapix"
  "./source/person.h"
)

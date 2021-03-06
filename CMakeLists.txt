cmake_minimum_required(VERSION 3.16)

project(ScapixTut VERSION 1.0)

include(FetchContent)
FetchContent_Declare(
  cmodule
  URL "https://github.com/scapix-com/cmodule/archive/v1.0.5.tar.gz"
  URL_HASH SHA256=a1f8c68593e28371c6e5854a6293deaae728f63beb947fe09751d8a62d8080aa
)
FetchContent_MakeAvailable(cmodule)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON) # not required, but speeds up compilation of SCAPIX_META_STRING with clang and gcc

add_library(
  person
  ./source/person.h
  ./source/person.cpp
)

find_package(Scapix REQUIRED)

scapix_bridge_headers(
  person
  "com.foo.scapix"
  "source/person.h"
)

add_executable(myExe ./source/main.cpp)
target_link_libraries(myExe PRIVATE person)

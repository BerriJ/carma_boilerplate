cmake_minimum_required(VERSION 3.16)

project(onion VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

find_package(pybind11 REQUIRED)
find_package(Armadillo REQUIRED)
find_package(carma REQUIRED)

include_directories(${CMAKE_SOURCE_DIR})

file (GLOB SOURCE_FILES "src/*.cpp")
file (GLOB HEADER_FILES "include/onion/*.hpp")

pybind11_add_module(onion 
${SOURCE_FILES}
${HEADER_FILES}
)

target_link_libraries(onion PRIVATE carma::carma)
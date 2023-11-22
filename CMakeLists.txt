cmake_minimum_required(VERSION 3.0.0)
cmake_policy(SET CMP0054 NEW)

project(onion VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

include_directories(/usr/local/include)
include_directories(/usr/include/python3.10)
include_directories(/usr/local/vcpkg/installed/x64-linux/include)
include_directories("${CMAKE_SOURCE_DIR}")

# find_package(carma CONFIG REQUIRED COMPONENTS) # This does not work

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

file (GLOB SOURCE_FILES "src/*.cpp")
file (GLOB HEADER_FILES "include/*.hpp")

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCE_FILES} ${HEADER_FILES} ${PYTHON_FILES} )

# Pybind11
find_package(pybind11 REQUIRED)
pybind11_add_module(onion 
${SOURCE_FILES}
${HEADER_FILES}
${PYTHON_FILES}
)

# Carma
find_package(carma REQUIRED)

target_link_libraries(onion PRIVATE carma::carma)
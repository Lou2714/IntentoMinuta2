cmake_minimum_required(VERSION 3.10)  # Versión mínima de CMake

project(MiProyecto)  # Nombre del proyecto

set(CMAKE_CXX_STANDARD 23)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

include_directories(include)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(unit_tests include/prueba.h src/funciones.cpp test/test.cpp)
target_compile_definitions(unit_tests PRIVATE TESTING)
target_link_libraries(unit_tests PRIVATE Catch2::Catch2WithMain)

list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)

include(CTest)
include(Catch)
catch_discover_tests(unit_tests)


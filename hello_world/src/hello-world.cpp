#include "hello-world.hpp"
#include <CMakePublic/cmake_public.hpp>

std::string say_goodbye() {
    int val = cmake_public::call_cmake_public();
    std::string str = std::to_string(val);
    return (std::string("Goodbye from CMake Public! ") + str);
}

std::string say_hello() { return std::string("Hello, CMake superbuild!"); }
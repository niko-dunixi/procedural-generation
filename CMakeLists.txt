cmake_minimum_required(VERSION 3.9)
project(procedural_generation)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR})

# REFERENCES FOR POSTERITY:
#   https://brendanwhitfield.wordpress.com/2015/02/26/using-cmake-with-sdl2/
#   https://github.com/brendan-w/collector/blob/master/cmake/
#   brew install sdl2 sdl2_image sdl2_ttf
#find_package(SDL2 REQUIRED)
#find_package(SDL2_IMAGE REQUIRED)
#find_package(SDL2_TTF REQUIRED)
#include_directories(${SDL2_INCLUDE_DIR} ${SDL2_IMAGE_INCLUDE_DIR} ${SDL2_TTF_INCLUDE_DIR})
#find_package(SFML 2 REQUIRED network audio graphics window system)
find_package(SFML 2.4 COMPONENTS system window graphics audio REQUIRED)
include_directories(${SFML_INCLUDE_DIR})

add_executable(procedural_generation main.cpp SimpleRandom.cpp SimpleRandom.h)
#target_link_libraries(procedural_generation ${SDL2_LIBRARY})
target_link_libraries(procedural_generation ${SFML_LIBRARIES})
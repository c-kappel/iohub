cmake_minimum_required(VERSION 3.10)
project(iohub)

find_package(Freetype REQUIRED)
include_directories(/Users/christiankappel/SDL/include) #include SDL3 path and SDL3_ttf

link_directories(/Users/christiankappel/SDL/build)
link_directories(/Users/christiankappel/SDL_ttf/build)

add_executable(run src/main.cpp)

target_link_libraries(run SDL3 /Users/christiankappel/SDL_ttf/build/libSDL3_ttf.dylib)




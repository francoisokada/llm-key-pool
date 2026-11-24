cmake_minimum_required(VERSION 3.16)
project(llm-key-pool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(llmkeypool
    src/main.cpp
    src/pool.cpp
    src/proxy.cpp
    src/cooldowns.cpp
)

target_include_directories(llmkeypool PRIVATE include)

if(WIN32)
    target_link_libraries(llmkeypool PRIVATE userenv)
endif()

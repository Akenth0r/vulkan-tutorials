cmake_minimum_required(VERSION 3.0.0)
project(vulkan-tutorials VERSION 0.1.0)

include(CTest)
enable_testing()

file(GLOB SOURCES
    src/*.hpp
    src/*.cpp    
)

find_package(Vulkan REQUIRED FATAL_ERROR)
add_subdirectory(glfw)
add_subdirectory(glm)

include_directories(glfw/include)
include_directories(glm)
include_directories(${Vulkan_INCLUDE_DIRS})

set(LIBRARIES glfw ${Vulkan_LIBRARIES})

add_executable(${PROJECT_NAME} ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
target_link_libraries(${PROJECT_NAME} ${LIBRARIES})

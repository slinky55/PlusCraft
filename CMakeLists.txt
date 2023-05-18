cmake_minimum_required(VERSION 3.17)
project(PlusCraft CXX)

include(FetchContent)

set(CMAKE_CXX_STANDARD 17)

# libraries

set(GLFW_BUILD_DOCS FALSE)
set(GLFW_BUILD_EXAMPLES FALSE)
set(GLFW_BUILD_TESTS FALSE)

FetchContent_Declare(
        glfw
        GIT_REPOSITORY https://github.com/glfw/glfw.git
        GIT_TAG 3.3.4
        GIT_PROGRESS TRUE)

FetchContent_Declare(
        glad
        GIT_REPOSITORY https://github.com/Dav1dde/glad
        GIT_TAG v0.1.34
        GIT_PROGRESS TRUE)

FetchContent_Declare(
        glm
        GIT_REPOSITORY https://github.com/g-truc/glm
        GIT_TAG 0.9.9.8
        GIT_PROGRESS TRUE)

FetchContent_MakeAvailable(glfw glad glm)

add_executable(${PROJECT_NAME} main.cpp)

#add_custom_target(
#        copy-shaders ALL
#        COMMENT "Copying shaders"
#        COMMAND ${CMAKE_COMMAND} -E copy_directory
#        ${CMAKE_CURRENT_SOURCE_DIR}/src/shaders ${CMAKE_BINARY_DIR}/shaders)

add_dependencies(${PROJECT_NAME} glfw glad glm)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME} PRIVATE glfw glad glm)
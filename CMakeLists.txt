CMAKE_MINIMUM_REQUIRED(VERSION 3.4)
PROJECT(opengl)

include_directories(include)
link_directories(lib)
SET(SOURCE_FILES src/glad.c src/HelloWindow.cpp)
ADD_EXECUTABLE(opengl ${SOURCE_FILES})
target_link_libraries(opengl "glfw3" "opengl32")
SET_TARGET_PROPERTIES(opengl PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

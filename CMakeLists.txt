CMAKE_MINIMUM_REQUIRED(VERSION 3.4)
PROJECT(opengl)

include_directories(include)
link_directories(lib)
SET(INCLUDE_FILES src/glContextInit.h src/Shader.h src/stb_image.h)
SET(SOURCE_FILES src/glad.c src/texture_combined.cpp)

ADD_EXECUTABLE(opengl ${SOURCE_FILES} ${INCLUDE_FILES})
target_link_libraries(opengl "glfw3" "opengl32")
SET_TARGET_PROPERTIES(opengl PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

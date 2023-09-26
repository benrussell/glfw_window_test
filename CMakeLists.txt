cmake_minimum_required(VERSION 3.17)
project(glfw_window_test)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)


INCLUDE_DIRECTORIES(
        /opt/homebrew/Cellar/glfw/3.3.8/include
        ${OPENGL_INCLUDE_DIRS}
        ${GLUT_INCLUDE_DIRS}

)

LINK_DIRECTORIES(
        /opt/homebrew/Cellar/glfw/3.3.8/lib
)


SET( LIBS_MAC
        ${OPENGL_LIBRARIES}
        ${GLUT_LIBRARY}
        glfw
        )

SET( USE_LIBS
        ${LIBS_MAC}
        )


add_executable(glfw_window_test main.cpp)

target_link_libraries( glfw_window_test  ${USE_LIBS} )
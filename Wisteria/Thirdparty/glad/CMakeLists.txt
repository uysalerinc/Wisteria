project(glad)

add_library(glad STATIC
    src/glad.c
    include/KHR/khrplatform.h
    include/glad/glad.h
)

target_include_directories(glad PUBLIC #Static lib for now
    ${CMAKE_SOURCE_DIR}/Wisteria/Thirdparty/
)

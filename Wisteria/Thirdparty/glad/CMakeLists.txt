project(glad)

add_library(glad STATIC
    src/glad.c
    include/KHR/khrplatform.h
    include/glad/glad.h
)

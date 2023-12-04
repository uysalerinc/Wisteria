project(Sandbox)

add_executable(Sandbox
    Sandbox.cpp
)

target_include_directories(Sandbox PRIVATE
    ${CMAKE_SOURCE_DIR}/Wisteria
    ${CMAKE_SOURCE_DIR}/Wisteria/Wisteria-App
)

if(WIN32)
    target_link_libraries(Sandbox PRIVATE
        ${BUILD_DIR}/Wisteria/lib/Debug/Wisteria-App.lib
        ${BUILD_DIR}/Wisteria/lib/Debug/glfw3.lib
        ${BUILD_DIR}/Wisteria/lib/Debug/glad.lib
    )
endif()
if(UNIX AND NOT APPLE) # For Linux and BSD
    target_link_libraries(Sandbox PRIVATE
        ${BUILD_DIR}/Wisteria/lib/libWisteria-App.a
        ${BUILD_DIR}/Wisteria/lib/libglfw3.a
        ${BUILD_DIR}/Wisteria/lib/libglad.a
    )
endif()

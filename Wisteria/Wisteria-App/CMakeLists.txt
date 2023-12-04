project(Wisteria-App)
file(GLOB_RECURSE SOURCES "*.cpp" "*.h")

add_library(Wisteria-App STATIC
    ${SOURCES}
)

target_include_directories(Wisteria-App PUBLIC #Static lib for now
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/Wisteria/Thirdparty/
)

cmake_minimum_required(VERSION 3.23)

project(Wisteria)

set(CMAKE_SUPPRESS_REGENERATION true) # Remove ZERO_CHECK project

if(WIN32)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON) #Export DLL
endif()
if(UNIX AND NOT APPLE) # For Linux and BSD
    # For LSP Server
    set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
endif()
#if(APPLE) #For MacOS (or Apple in general idk)

#endif()


add_subdirectory(Wisteria)
add_subdirectory(Sandbox)


if(WIN32)
    set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Sandbox)
endif()

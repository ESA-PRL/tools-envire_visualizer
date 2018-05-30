rock_library(envire_visualizer
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(envire_visualizer_bin Main.cpp
    DEPS envire_visualizer)



add_executable(test_padleft
    test_padleft.cpp
    catch_main.cpp
)
target_link_libraries(test_padleft PRIVATE padleft)
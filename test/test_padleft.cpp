
#include "catch.hpp"

#include <padleft.hpp>

using pl::pad_left;

TEST_CASE("pad_left with positive num_ints")
{
    const std::string str = "Hello";
    
    REQUIRE(pad_left(str, 3) == "   Hello");
}

TEST_CASE("pad_left with zero")
{
    const std::string str = "Hello";
    
    REQUIRE(pad_left(str, 0) == str);
}

TEST_CASE("pad_left with negative num_ints")
{
    const std::string str = "Hello";
    
    REQUIRE(pad_left(str, -22) == str);
}


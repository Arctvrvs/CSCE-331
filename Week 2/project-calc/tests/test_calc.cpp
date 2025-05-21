#include <catch2/catch_test_macros.hpp>
#include "calc.hpp"

using namespace std;


TEST_CASE("add") {
    REQUIRE(add(2, 3) == 5);
}

TEST_CASE("sub") {
    REQUIRE(sub(6, 2) == 4);
}

TEST_CASE("mul") {
    REQUIRE(mul(2, 3) == 6);
}

TEST_CASE("div_mine") {
    REQUIRE(div_mine(6, 2) == 3);
    REQUIRE_THROWS_AS(div_mine(1, 0), invalid_argument);
}

TEST_CASE("safe_div")
{
    REQUIRE(safe_div(6, 3) == 2);
    REQUIRE_FALSE(safe_div(1,0).has_value());
}
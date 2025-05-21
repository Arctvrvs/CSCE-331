#include <catch2/catch_test_macros.hpp>
#include "calc.hpp"

TEST_CASE("add") {
    REQUIRE(add(2, 3) == 5);
}

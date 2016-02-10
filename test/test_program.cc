#include "catch.hpp"
#include "program.h"

// Go here for more information on using catch for unit testing:
// https://github.com/philsquared/Catch

TEST_CASE("simple test") {
    SECTION("sub test") {
        REQUIRE("Hi there" == sayHi());
    }
}

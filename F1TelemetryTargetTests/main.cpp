//
//  main.cpp
//  F1TelemetryTargetTests
//
//  Created by Connor Wyatt on 29/08/2017.
//  Copyright © 2017 Connor Wyatt. All rights reserved.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "F1TelemetryTarget/test.hpp"

TEST_CASE("basic test to make sure it works", "[main]") {
  REQUIRE(F1TelemetryTarget::testFn() == true);
}

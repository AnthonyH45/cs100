#include "gtest/gtest.h"

#include "visitor_test.hpp"
#include "iterator_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

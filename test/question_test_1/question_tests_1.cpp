#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

using std::cout;
using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

// TEST_CASE("test")
// {
// 	REQUIRE(test_config() == true);
// }

TEST_CASE("Verify palindrome test, true or false")
{
	is_palindrome("abcba");
	REQUIRE(is_palindrome("abcba") == true);
	REQUIRE(is_palindrome("abc") == false);
	REQUIRE(is_palindrome("hannah") == true);
	REQUIRE(is_palindrome("hanna") == false);
}
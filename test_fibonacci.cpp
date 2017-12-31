#include "fibonacci.h"
#include <gtest/gtest.h>

TEST(FibTEST, HandleZeroInput)
{
	EXPECT_EQ(0, fibonacci(0));
	
}



int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

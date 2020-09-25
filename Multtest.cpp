#include<gtest/gtest.h>

int Mulitply(int a, int b) {
	int c = a * b; 
  return c; 
}

TEST(testMult, integerTests){
    EXPECT_EQ(4, Multiply(2,2));
    EXPECT_EQ(12, Multiply(3,4));
    EXPECT_EQ(24, Multiply(12,2));
}

int main(int argc, char* argv[]){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

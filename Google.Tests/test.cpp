#include "pch.h"
#include "SampleUtils.h"
#include "SamplePoint.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(SampleTest, AddTest) {
    EXPECT_EQ(10, Add(3, 7));
}

TEST(SampleTest, ConstructorTest) {
    SamplePoint pt(1, 7);
    EXPECT_EQ(2, pt.GetX(), "test3");
}
#include "gmock/gmock.h"

class Cal {
public:
	// 이곳에 코드 작성
	int getSumSum(int a, int b, int c) {
		return (a + b + c);
	}
};

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}
TEST(t1, t6) {
	Cal cal;
	EXPECT_EQ(6, cal.getSumSum(1, 2, 3));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
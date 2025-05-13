#include "gmock/gmock.h"

class Cal {
public:
	// �̰��� �ڵ� �ۼ�
	int getSumSum(int a, int b, int c) {
		return (a + b + c);
  }
	int getMinus(int a, int b) {
		return a - b;
	}
	int getSum(int a, int b) {
		return a + b;
	}

	int getGop(int a, int b) {
		return a * b;
	}

	int getDivide(int a, int b) {
		if (b == 0) {
			return -1;
		}
		return a / b;
	}

	int getZegop(int a) {
		return a * a;
	}
};
TEST(CalcTest, testGetSum) {
	Cal cal;
	EXPECT_EQ(5, cal.getSum(2, 3));
}

TEST(CalcTest, testGetMinus) {
	Cal cal;

	int ret = cal.getMinus(30, 10);

	EXPECT_EQ(20, ret);
}
TEST(CalcTest, testGetDivide) {
	Cal cal;

	int ret = cal.getDivide(30, 10);

	EXPECT_EQ(3, ret);
}
TEST(CalcTest, testGetGop) {
	Cal cal;
	EXPECT_EQ(6, cal.getGop(2,3));
}
TEST(CalcTest, testGetZegop) {
	Cal cal;
	EXPECT_EQ(4, cal.getZegop(2));
}
TEST(CalcTest, testgetSumSum) {
	Cal cal;
	EXPECT_EQ(6, cal.getSumSum(1, 2, 3));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
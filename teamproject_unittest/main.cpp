#include "gmock/gmock.h"

class Cal {
public:
	int getGop(int a, int b) {
		return a * b;
	}
	int getZegop(int a) {
		return a * a;
	}
};

TEST(t1, Gop) {
	Cal cal;
	EXPECT_EQ(6, cal.getGop(2,3));
}
TEST(t1, Zegop) {
	Cal cal;
	EXPECT_EQ(4, cal.getZegop(2));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
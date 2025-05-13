#include "gmock/gmock.h"

class Cal {
public:
	int getMinus(int a, int b) {
		return a - b;
	}
};

TEST(Group, TC4) {
	Cal cal;

	int ret = cal.getMinus(30, 10);

	EXPECT_EQ(20, ret);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
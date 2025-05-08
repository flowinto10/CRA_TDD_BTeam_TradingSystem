#include "gmock/gmock.h"

using namespace testing;

class ATS; // Auto Trading System
class StockBroker;
class MockDriver;

// MockDriver 생성
TEST(StockTS, TC0) {
	StockBroker* app = nullptr;

	EXPECT_NE(nullptr, app);
}

// ATS 생성
TEST(StockTS, TC1) {
	ATS* app = nullptr;

	EXPECT_NE(nullptr, app);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
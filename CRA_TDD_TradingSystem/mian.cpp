#include "gmock/gmock.h"

using namespace testing;

class ATS; // Auto Trading System
class StockBroker;
class MockDriver;

// StockBroker Driver 생성
TEST(StockTS, CreateStockDriver) {
	StockBroker* app = nullptr;

	EXPECT_NE(nullptr, app);
}

// StockBroker Driver 생성
TEST(StockTS, CreateMockkDriver) {
	MockDriver* app = nullptr;

	EXPECT_NE(nullptr, app);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
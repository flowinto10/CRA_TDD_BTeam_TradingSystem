#include "gmock/gmock.h"
#include "stock_broker.h"

using namespace testing;

class ATS; // Auto Trading System
class StockBroker;
class MockDriver;

// StockBroker Driver 생성
TEST(StockTS, CreateStockDriver) {
	StockBroker* app = new TestStockBroker{};

	EXPECT_NE(nullptr, app);
}

// StockBroker Driver 생성
TEST(StockTS, CreateMockkDriver) {
	MockDriver* app = nullptr;

	EXPECT_NE(nullptr, app);
}


// StockBroker Driver 생성
TEST(StockTS, CreateATS) {
	ATS* app = nullptr;

	EXPECT_NE(nullptr, app);
}


int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
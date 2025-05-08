#include "gmock/gmock.h"
#include "stock_broker.h"
#include "mockdriver.cpp"
#include "ats.cpp"
#include "mockdriver.cpp"


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
	MockDriver* app = new MockDriver{};

	EXPECT_NE(nullptr, app);
}


// ATS 생성
TEST(StockTS, CreateATS) {
	//ATS app;
	ATS* app = new ATS{};

	EXPECT_NE(nullptr, app);
}


int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
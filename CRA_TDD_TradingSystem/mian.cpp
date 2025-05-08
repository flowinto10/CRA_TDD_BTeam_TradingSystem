#include "gmock/gmock.h"
#include "stock_broker.h"
#include "ats.cpp"

using namespace testing;

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

// ATS 생성
TEST(StockTS, CreateATS) {
	//ATS app;
	ATS* app = new ATS{};

	EXPECT_NE(nullptr, app);
}

// ATS 증권사 선택 
TEST(StockTS, selectStockBroker) {
	//ATS app;
	ATS app;

	app.selectStockBroker("Mock");

	std::string expectStockBrokerName = app.getStockBroker();

	EXPECT_EQ(expectStockBrokerName, "Mock");
}

// ATS 증권사 선택 
TEST(StockTS, getPrice) {
	//ATS app;
	ATS app;

	//EXPECT_CALL(app, getPrice(_)).Times(1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
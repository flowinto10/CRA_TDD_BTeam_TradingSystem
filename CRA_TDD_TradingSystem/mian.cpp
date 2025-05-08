#include "gmock/gmock.h"
#include "stock_broker.h"
#include "mockdriver.cpp"
#include "ats.cpp"

using namespace testing;


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

TEST(StockTS, GetPriceTC_PriceCheck) {
	MockDriver mockDriver;
	
	std::string stockCode{ "00700" };
	int minute = 1;
	int expectedPrice = 10000;

	EXPECT_CALL(mockDriver, getPrice(stockCode, minute))
		.Times(1)
		.WillRepeatedly(Return(expectedPrice));

	ATS* ats = new ATS{ &mockDriver };

	EXPECT_EQ(expectedPrice, ats->getPrice(stockCode, minute));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
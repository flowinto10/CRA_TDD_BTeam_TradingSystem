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

TEST(StockTS, GetPriceTC_MethodCheck) {
	ATS ats;
	
	EXPECT_CALL(ats, getPrice(_)).Times(1);
}


TEST(StockTS, GetPriceTC_PriceCheck) {
	MockDriver mockDriver;
	
	EXPECT_CALL(mockDriver, getPrice(_, _))
		.Times(1)
		.WillRepeatedly(Return(10000));

	ATS* ats = new ATS{ mockDriver };

	EXPECT_EQ(10000, ats->getPrice(0070));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
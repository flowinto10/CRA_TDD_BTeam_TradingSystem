#include "gmock/gmock.h"
#include "stock_broker.h"
#include "mockdriver.cpp"
#include "ats.cpp"

#include <string>

using namespace std;
using namespace testing;

class StockItem : public Test {
protected:
	void SetUp() override {
		stockTr = { "0070", 10000, 100 };
	}
private:
	struct stockTransaction {
		string STOCK_CODE;
		int STOCK_PRICE;
		int STOCK_COUNT;
	} stockTr;
public:
	StockBroker* ats = new TestStockBroker{};
	MockDriver* mock = new MockDriver{};
};


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

TEST(StockTS, BuyStock0) {
	MockDriver mock;

	EXPECT_CALL(mock, buy(_, _, _))
		.Times(1);

	ATS* app = new ATS{&mock};
	EXPECT_EQ(true, app->buy("0080", 10000, 10));
}

TEST(StockTS, SellStock0) {
	MockDriver mock;

	EXPECT_CALL(mock, sell(_, _, _))
		.Times(1);

	ATS* app = new ATS{&mock};
	EXPECT_EQ(true, app->sell("0080", 10000, 10));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
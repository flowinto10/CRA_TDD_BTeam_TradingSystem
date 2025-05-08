#include "gmock/gmock.h"
#include "stock_broker.h"
using namespace testing;

class MockDriver : public TestStockBroker {
public:	
	MOCK_METHOD(void, login, (std::string ID, std::string pass), (override));
	MOCK_METHOD(void, buy, (std::string stockCode, int price, int count), (override));
	MOCK_METHOD(void, sell, (std::string stockCode, int price, int count), (override));
	MOCK_METHOD(int, getPrice, (std::string stockCode, int minute), (override));
};
#include "stock_broker.h"
#include <string>

using namespace std;

class ATS {
public:
	ATS() : stockBroker{ nullptr } {
	}

	ATS(StockBroker* stockBroker_)
		: stockBroker{ stockBroker_ }{

	}

	void selectStockBroker();
	bool buy(string code, int price, int count) {
		stockBroker->buy(code, price, count);
		return true;
	};
	bool sell(string code, int price, int count) {
		stockBroker->sell(code, price, count);
		return true;
	};
	
	int getPrice(std::string stockCode, int minute) {
		if (stockBroker == nullptr) return -1;
		return stockBroker->getPrice(stockCode, minute);
	}

private:
	StockBroker* stockBroker;
};
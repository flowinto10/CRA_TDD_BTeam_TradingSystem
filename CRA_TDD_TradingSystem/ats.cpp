#include "stock_broker.h"

class ATS {
public:
	ATS() : stockBroker{ nullptr } {
	}

	ATS(StockBroker* stockBroker_)
		: stockBroker{ stockBroker_ }{

	}

	int getPrice(std::string stockCode, int minute) {
		if (stockBroker == nullptr) return -1;
		return stockBroker->getPrice(stockCode, minute);
	}

private:
	StockBroker* stockBroker;
};
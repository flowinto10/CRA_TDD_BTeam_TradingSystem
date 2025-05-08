#include "stock_broker.h"
#include <string>

using namespace std;

class ATS {
public:
	ATS(){}
	ATS(StockBroker* stockBroker) : stockBroker{stockBroker}
	{}

	void selectStockBroker();
	bool buy(string code, int price, int count) { 
		stockBroker->buy(code, price, count);
		return true; };
	bool sell(string code, int price, int count) { 
		stockBroker->sell(code, price, count);
		return true; };
	int getPrice(string code, int price, int count) {};

private:
	StockBroker* stockBroker;

};
#include <string>

class ATS {
public:
	ATS(){}

	void selectStockBroker(std::string name) {
		stockBroker = name;
	}

	std::string getStockBroker() {
		if (stockBroker.empty()) return "Need to select\n";
		return stockBroker;
	}


private:
	std::string stockBroker;
};
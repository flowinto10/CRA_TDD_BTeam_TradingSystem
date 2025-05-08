#pragma once
#include <string>

struct StockBroker {
    virtual void login(std::string ID, std::string pass) = 0;
    virtual void buy(std::string stockCode, int price, int count) = 0;
    virtual void sell(std::string stockCode, int price, int count) = 0;
    virtual int getPrice(std::string stockCode, int minute) = 0;
};

class TestStockBroker : public StockBroker {
    virtual void login(std::string ID, std::string pass) override {}
    virtual void buy(std::string stockCode, int price, int count) override {}
    virtual void sell(std::string stockCode, int price, int count) override {}
    virtual int getPrice(std::string stockCode, int minute) override {
        return 0;
    }
};
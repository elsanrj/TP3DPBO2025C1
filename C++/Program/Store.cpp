#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Business.cpp"

using namespace std;

class Store : public Business {
private:
    string mainlySell;
    vector<string> openingDay;
    pair<int, int> openingHour;

public:
    // Constructor
    Store(){}

    Store(string owner, string name, string address, string mainlySell, vector<string> openingDay, pair<int, int> openingHour)
        : Business(owner, name, address) {
        this->mainlySell = mainlySell;
        this->openingDay = openingDay;
        this->openingHour = openingHour;
    }

    // Getter and Setter for mainlySell
    string getMainlySell() {
        return mainlySell;
    }

    void setMainlySell(string mainlySell) {
        this->mainlySell = mainlySell;
    }

    // Getter and Setter for openingDay
    vector<string> getOpeningDay() {
        return openingDay;
    }

    void setOpeningDay(vector<string> openingDay) {
        this->openingDay = openingDay;
    }

    // Getter and Setter for openingHour
    pair<int, int> getOpeningHour() {
        return openingHour;
    }

    void setOpeningHour(pair<int, int> openingHour) {
        this->openingHour = openingHour;
    }
};
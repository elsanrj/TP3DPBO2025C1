#pragma once
#include <iostream>
#include <string>

using namespace std;

class Equipment {
private:
    string name;
    string purpose;

public:

    // Constructor
    Equipment(){}

    Equipment(string name, string purpose) {
        this->name = name;
        this->purpose = purpose;
    }

    // Getter and Setter for name
    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    // Getter and Setter for purpose
    string getPurpose() {
        return purpose;
    }

    void setPurpose(string purpose) {
        this->purpose = purpose;
    }
};
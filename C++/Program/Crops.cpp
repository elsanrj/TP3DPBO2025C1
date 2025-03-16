#pragma once
#include <iostream>
#include <string>

using namespace std;

class Crops {
private:
    string name;
    string type;
    string season;

public:
    // Constructor
    Crops(){}
    
    Crops(string name, string type, string season) {
        this->name = name;
        this->type = type;
        this->season = season;
    }

    // Getter and Setter for name
    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    // Getter and Setter for type
    string getType() {
        return type;
    }

    void setType(string type) {
        this->type = type;
    }

    // Getter and Setter for season
    string getSeason() {
        return season;
    }

    void setSeason(string season) {
        this->season = season;
    }
};
#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Quest {
private:
    string name;
    string description;
    vector<string> reward;
    int EXP;

public:
    // Constructor
    Quest(){}

    Quest(string name, string description, vector<string> reward, int EXP) {
        this->name = name;
        this->description = description;
        this->reward = reward;
        this->EXP = EXP;
    }

    // Getter and Setter for name
    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    // Getter and Setter for description
    string getDescription() {
        return description;
    }

    void setDescription(string description) {
        this->description = description;
    }

    // Getter and Setter for reward
    vector<string> getReward() {
        return reward;
    }

    void setReward(vector<string> reward) {
        this->reward = reward;
    }

    // Getter and Setter for EXP
    int getEXP() {
        return EXP;
    }

    void setEXP(int EXP) {
        this->EXP = EXP;
    }
};
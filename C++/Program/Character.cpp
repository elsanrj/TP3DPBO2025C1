#pragma once
#include <iostream>
#include <string>

using namespace std;

class Character {
private:
    string name;
    string livesAt;
    string mainSkill;

public:
    // Constructor
    Character(){}

    Character(string name, string livesAt, string mainSkill) {
        this->name = name;
        this->livesAt = livesAt;
        this->mainSkill = mainSkill;
    }

    // Getter and Setter for name
    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    // Getter and Setter for livesAt
    string getLivesAt() {
        return livesAt;
    }

    void setLivesAt(string livesAt) {
        this->livesAt = livesAt;
    }

    // Getter and Setter for mainSkill
    string getMainSkill() {
        return mainSkill;
    }

    void setMainSkill(string mainSkill) {
        this->mainSkill = mainSkill;
    }
};
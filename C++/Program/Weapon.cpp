#pragma once
#include <iostream>
#include <string>
#include "Equipment.cpp"

using namespace std;

class Weapon : public Equipment {
private:
    string obtainedBy;
    int level;
    int damage;

public:
    // Constructor
    Weapon(){}
    
    Weapon(string name, string purpose, string obtainedBy, int level, int damage)
        : Equipment(name, purpose) {
        this->obtainedBy = obtainedBy;
        this->level = level;
        this->damage = damage;
    }

    // Getter and Setter for obtainedBy
    string getObtainedBy() {
        return obtainedBy;
    }

    void setObtainedBy(string obtainedBy) {
        this->obtainedBy = obtainedBy;
    }

    // Getter and Setter for level
    int getLevel() {
        return level;
    }

    void setLevel(int level) {
        this->level = level;
    }

    // Getter and Setter for damage
    int getDamage() {
        return damage;
    }

    void setDamage(int damage) {
        this->damage = damage;
    }
};

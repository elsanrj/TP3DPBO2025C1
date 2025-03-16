#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Character.cpp"

using namespace std;

class Monster : public Character {
private:
    int HP;
    vector<string> itemDrops;
    string damageEffect;

public:
    // Constructor
    Monster(){}

    Monster(string name, string livesAt, string mainSkill, int HP, vector<string> itemDrops, string damageEffect)
        : Character(name, livesAt, mainSkill) {
        this->HP = HP;
        this->itemDrops = itemDrops;
        this->damageEffect = damageEffect;
    }

    // Getter and Setter for HP
    int getHP() {
        return HP;
    }

    void setHP(int HP) {
        this->HP = HP;
    }

    // Getter and Setter for itemDrops
    vector<string> getItemDrops() {
        return itemDrops;
    }

    void setItemDrops(vector<string> itemDrops) {
        this->itemDrops = itemDrops;
    }

    // Getter and Setter for damageEffect
    string getDamageEffect() {
        return damageEffect;
    }

    void setDamageEffect(string damageEffect) {
        this->damageEffect = damageEffect;
    }
};
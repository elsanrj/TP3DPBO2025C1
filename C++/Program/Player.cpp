#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Character.cpp"
#include "Farm.cpp"
#include "Quest.cpp"
#include "Tools.cpp"
#include "Weapon.cpp"

using namespace std;

class Player : public Character {
private:
    int HP;
    Farm farm;
    vector<Quest> quests;
    Weapon weapon;
    vector<Tools> tools;

public:
    // Constructor
    Player(){}

    Player(string name, string livesAt, string mainSkill, int HP, Farm farm, vector<Quest> quests, Weapon weapon, vector<Tools> tools)
        : Character(name, livesAt, mainSkill) {
        this->HP = HP;
        this->farm = farm;
        this->quests = quests;
        this->weapon = weapon;
        this->tools = tools;
    }

    // Getter and Setter for HP
    int getHP() {
        return HP;
    }

    void setHP(int HP) {
        this->HP = HP;
    }

    // Getter and Setter for farm
    Farm getFarm() {
        return farm;
    }

    void setFarm(Farm farm) {
        this->farm = farm;
    }

    // Getter and Setter for quests
    vector<Quest> getQuests() {
        return quests;
    }

    void setQuests(vector<Quest> quests) {
        this->quests = quests;
    }

    // Getter and Setter for weapon
    Weapon getWeapon() {
        return weapon;
    }

    void setWeapon(Weapon weapon) {
        this->weapon = weapon;
    }

    // Getter and Setter for tools
    vector<Tools> getTools() {
        return tools;
    }

    void setTools(vector<Tools> tools) {
        this->tools = tools;
    }
};

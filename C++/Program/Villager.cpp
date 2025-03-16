#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Character.cpp"
#include "Store.cpp"

using namespace std;

class Villager : public Character {
private:
    vector<string> likes;
    string occupation;
    Store store;

public:
    // Constructor
    Villager(){}

    Villager(string name, string livesAt, string mainSkill, vector<string> likes, string occupation, Store store)
        : Character(name, livesAt, mainSkill) {
        this->likes = likes;
        this->occupation = occupation;
        this->store = store;
    }

    // Getter and Setter for likes
    vector<string> getLikes() {
        return likes;
    }

    void setLikes(vector<string> likes) {
        this->likes = likes;
    }

    // Getter and Setter for occupation
    string getOccupation() {
        return occupation;
    }

    void setOccupation(string occupation) {
        this->occupation = occupation;
    }

    // Getter and Setter for store
    Store getStore() {
        return store;
    }

    void setStore(Store store) {
        this->store = store;
    }
};
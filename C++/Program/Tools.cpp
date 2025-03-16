#pragma once
#include <iostream>
#include <string>
#include "Equipment.cpp"

using namespace std;

class Tools : public Equipment {
private:
    int cost;
    string ingredient;
    string improvement;

public:
    // Constructor
    Tools(){}

    Tools(string name, string purpose, int cost, string ingredient, string improvement)
        : Equipment(name, purpose) {
        this->cost = cost;
        this->ingredient = ingredient;
        this->improvement = improvement;
    }

    // Getter and Setter for cost
    int getCost() {
        return cost;
    }

    void setCost(int cost) {
        this->cost = cost;
    }

    // Getter and Setter for ingredient
    string getIngredient() {
        return ingredient;
    }

    void setIngredient(string ingredient) {
        this->ingredient = ingredient;
    }

    // Getter and Setter for improvement
    string getImprovement() {
        return improvement;
    }

    void setImprovement(string improvement) {
        this->improvement = improvement;
    }
};
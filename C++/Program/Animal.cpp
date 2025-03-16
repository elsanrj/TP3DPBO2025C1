#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
    string name;
    string diet;
    string produce;

public:
    // Constructor
    Animal() {}

    Animal(string name, string diet, string produce)
    {
        this->name = name;
        this->diet = diet;
        this->produce = produce;
    }

    // Getter and Setter for name
    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    // Getter and Setter for diet
    string getDiet()
    {
        return diet;
    }

    void setDiet(string diet)
    {
        this->diet = diet;
    }

    // Getter and Setter for produce
    string getProduce()
    {
        return produce;
    }

    void setProduce(string produce)
    {
        this->produce = produce;
    }
};
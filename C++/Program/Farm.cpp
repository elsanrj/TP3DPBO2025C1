#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Business.cpp"
#include "Crops.cpp"
#include "Animal.cpp"

using namespace std;

class Farm : public Business
{
private:
    string type;
    vector<Crops> crops;
    vector<Animal> animals;

public:
    // Constructor
    Farm() {}

    Farm(string owner, string name, string address, string type, vector<Crops> crops, vector<Animal> animals)
        : Business(owner, name, address)
    {
        this->type = type;
        this->crops = crops;
        this->animals = animals;
    }

    // Getter and Setter for type
    string getType()
    {
        return type;
    }

    void setType(string type)
    {
        this->type = type;
    }

    // Getter and Setter for crops
    vector<Crops> getCrops()
    {
        return crops;
    }

    void setCrops(vector<Crops> crops)
    {
        this->crops = crops;
    }

    // Getter and Setter for animals
    vector<Animal> getAnimals()
    {
        return animals;
    }

    void setAnimals(vector<Animal> animals)
    {
        this->animals = animals;
    }
};
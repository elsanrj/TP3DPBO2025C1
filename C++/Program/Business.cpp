#pragma once
#include <iostream>
#include <string>

using namespace std;

class Business
{
private:
    string owner;
    string name;
    string address;

public:
    // Constructor
    Business() {}

    Business(string owner, string name, string address)
    {
        this->owner = owner;
        this->name = name;
        this->address = address;
    }

    // Getter and Setter for owner
    string getOwner()
    {
        return owner;
    }

    void setOwner(string owner)
    {
        this->owner = owner;
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

    // Getter and Setter for address
    string getAddress()
    {
        return address;
    }

    void setAddress(string address)
    {
        this->address = address;
    }
};
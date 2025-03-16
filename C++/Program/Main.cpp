#include <iostream>
#include <vector>
#include "Crops.cpp"
#include "Animal.cpp"
#include "Quest.cpp"
#include "Weapon.cpp"
#include "Tools.cpp"
#include "Farm.cpp"
#include "Player.cpp"
#include "Store.cpp"
#include "Villager.cpp"
#include "Monster.cpp"

using namespace std;

int main()
{
    // Membuat objek Crop
    vector<Crops> cropList = {
        Crops("Cauliflower", "Vegetable", "Spring"),
        Crops("Melon", "Fruit", "Summer"),
        Crops("Amaranth", "Vegetable", "Fall"),
        Crops("Ancient Fruit", "Fruit", "Anytime")};

    // Membuat objek Animal
    vector<Animal> animalList = {
        Animal("Pig", "Grains", "Truffle"),
        Animal("Chicken", "Hay", "Chicken Egg"),
        Animal("Rabbit", "Grass", "Rabbit Foot")};

    // Membuat objek Farm
    Farm farm("Kucing", "Bahagia Selalu Farm", "The Farm", "Forest Farm", cropList, animalList);

    // Membuat objek Quest
    vector<Quest> questList = {
        Quest("Find the Lost Sword", "Retrieve the lost sword from the cave.", {"Sword", "Gold"}, 50),
        Quest("Kill 100 Green Slimes", "Slimes are invasive for the Mining, kill them all", {"Slime Egg", "Gold"}, 125)};

    Weapon weapon("Galaxy Sword", "Slain Monster", "Three Pillars", 13, 80);
    vector<Tools> toolsList = {
        Tools("Axe", "Chop Woods", 10000, "Gold", "Chops Faster"),
        Tools("Watering Can", "Watering Crops", 25000, "Iridium", "Increases Watering Area"),
        Tools("Pickaxe", "Break Stones", 5000, "Steel", "Break Stones a Bit Faster")};

    // Membuat objek Player
    Player player("Kucing", "Farmhouse", "Farming", 100, farm, questList, weapon, toolsList);

    // Membuat objek Store
    Store store("Gus", "Stardrop Saloon", "Pelican Town", "Foods", {"Everyday"}, {12, 23});
    Store store2("Robin", "Carpenter Shop", "24 Mountain Road", "Crafts", {"Mon", "Wed", "Thu", "Sat", "Sun"}, {9, 17});

    // Membuat objek Villager
    Villager villager1("Gus", "Saloon", "Cooking", {"Orange", "Diamond"}, "Cooks", store);
    Villager villager2("Robin", "Carpentry", "Crafting", {"Cheese", "Wood"}, "Carpenter", store2);

    // Membuat objek Monster
    Monster monster("Serpent", "Skull Cavern", "Fast", 150, {"Spicy Eel", "Diamond"}, "Fast Kill");

    // Menampilkan detail
    cout << "Player:" << endl;
    cout << "  Name       : " << player.getName() << endl;
    cout << "  Lives at   : " << player.getLivesAt() << endl;
    cout << "  Main Skill : " << player.getMainSkill() << endl;
    cout << "  HP         : " << player.getHP() << endl;
    cout << endl;

    cout << "Farm:" << endl;
    cout << "  Name : " << player.getFarm().getName() << endl;
    cout << "  Type : " << player.getFarm().getType() << endl;
    cout << endl;

    cout << "Crops:" << endl;
    for (Crops &crop : player.getFarm().getCrops())
    {
        cout << "  Name   : " << crop.getName() << endl;
        cout << "  Type   : " << crop.getType() << endl;
        cout << "  Season : " << crop.getSeason() << endl;
        cout << endl;
    }

    cout << "Animals:" << endl;
    for (Animal &animal : player.getFarm().getAnimals())
    {
        cout << "  Name    : " << animal.getName() << endl;
        cout << "  Diet    : " << animal.getDiet() << endl;
        cout << "  Produce : " << animal.getProduce() << endl;
        cout << endl;
    }
    
    cout << "\nQuests:" << endl;
    for (Quest& quest : player.getQuests()) {
        cout << "  Name        : " << quest.getName() << endl;
        cout << "  Description : " << quest.getDescription() << endl;
        cout << "  Reward      : ";
        for (size_t i = 0; i < quest.getReward().size(); i++) {
            cout << quest.getReward()[i];
            if (i < quest.getReward().size() - 1) cout << ", ";
        }
        cout << endl;
        cout << "  EXP         : " << quest.getEXP() << endl;
        cout << endl;
    }

    cout << "Weapon:" << endl;
    cout << "  Name        : " << player.getWeapon().getName() << endl;
    cout << "  Purpose     : " << player.getWeapon().getPurpose() << endl;
    cout << "  Obtained By : " << player.getWeapon().getObtainedBy() << endl;
    cout << "  Level       : " << player.getWeapon().getLevel() << endl;
    cout << "  Damage      : " << player.getWeapon().getDamage() << endl;
    cout << endl;

    cout << "Tools:" << endl;
    for (Tools &tool : player.getTools())
    {
        cout << "  Name        : " << tool.getName() << endl;
        cout << "  Purpose     : " << tool.getPurpose() << endl;
        cout << "  Cost        : " << tool.getCost() << endl;
        cout << "  Ingredient  : " << tool.getIngredient() << endl;
        cout << "  Improvement : " << tool.getImprovement() << endl;
        cout << endl;
    }

    cout << "Villagers:" << endl;
    vector<Villager> villagers = {villager1, villager2};
    for (Villager& villager : villagers) {
        cout << "  Name          : " << villager.getName() << endl;
        cout << "  Main Skill    : " << villager.getMainSkill() << endl;
        cout << "  Likes         : ";
        for (size_t i = 0; i < villager.getLikes().size(); i++) {
            cout << villager.getLikes()[i];
            if (i < villager.getLikes().size() - 1) cout << ", ";
        }
        cout << endl;
        cout << "  Occupation    : " << villager.getOccupation() << endl;
        cout << "  Store Name    : " << villager.getStore().getName() << endl;
        cout << "  Store Address : " << villager.getStore().getAddress() << endl;
        cout << "  Mainly Sell   : " << villager.getStore().getMainlySell() << endl;
        cout << "  Opening Days  : ";
        for (size_t i = 0; i < villager.getStore().getOpeningDay().size(); i++) {
            cout << villager.getStore().getOpeningDay()[i];
            if (i < villager.getStore().getOpeningDay().size() - 1) cout << ", ";
        }
        cout << endl;
        pair<int, int> openingHour = villager.getStore().getOpeningHour();
        cout << "  Opening Hours : " << openingHour.first << ":00 - " << openingHour.second << ":00" << endl;
        cout << endl;
    }

    cout << "Monster:" << endl;
    cout << "  Name          : " << monster.getName() << endl;
    cout << "  Lives at      : " << monster.getLivesAt() << endl;
    cout << "  Main Skills   : " << monster.getMainSkill() << endl;
    cout << "  Damage Effect : " << monster.getDamageEffect() << endl;
    cout << "  HP            : " << monster.getHP() << endl;
    cout << "  Item Drops    : ";
    for (size_t i = 0; i < monster.getItemDrops().size(); i++) {
        cout << monster.getItemDrops()[i];
        if (i < monster.getItemDrops().size() - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
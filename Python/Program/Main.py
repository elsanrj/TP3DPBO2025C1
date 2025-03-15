from Crops import Crops
from Animal import Animal
from Quest import Quest
from Weapon import Weapon
from Tools import Tools
from Farm import Farm
from Player import Player
from Store import Store
from Villager import Villager
from Monster import Monster

def main():
    # Membuat objek Crop
    crop_list = [
        Crops("Cauliflower", "Vegetable", "Spring"),
        Crops("Melon", "Fruit", "Summer"),
        Crops("Amaranth", "Vegetable", "Fall"),
        Crops("Ancient Fruit", "Fruit", "Anytime")
    ]
    
    # Membuat objek Animal
    animal_list = [
        Animal("Pig", "Grains", "Truffle"),
        Animal("Chicken", "Hay", "Chicken Egg"),
        Animal("Rabbit", "Grass", "Rabbit Foot")
    ]
    
    # Membuat objek Farm (dimiliki oleh Player)
    farm = Farm("Kucing", "Bahagia Selalu Farm", "The Farm", "Forest Farm", crop_list, animal_list)
    
    # Membuat objek Quest
    quest_list = [
        Quest("Find the Lost Sword", "Retrieve the lost sword from the cave.", ["Sword", "Gold"], 50),
        Quest("Kill 100 Green Slimes", "Slimes are invasive for the Mining, kill them all", ["Slime Egg", "Gold"], 125)
    ]
    
    weapon = Weapon("Galaxy Sword", "Slain Monster", "Three Pillars", 13, 80)
    tools_list = [
        Tools("Axe", "Chop Woods", 10000, "Gold", "Chops Faster"),
        Tools("Watering Can", "Watering Crops", 25000, "Iridium", "Increases Watering Area"),
        Tools("Pickaxe", "Break Stones", 5000, "Steel", "Break Stones a Bit Faster")
    ]
    
    # Membuat objek Player dengan farm dan quest
    player = Player("Kucing", "Farmhouse", "Farming", 100, farm, quest_list, weapon, tools_list)
    
    # Membuat objek Store (untuk Villager)
    store = Store("Gus", "Stardrop Saloon", "Pelican Town", "Foods", ["Everyday"], (12, 23))
    store2 = Store("Robin", "Carpenter Shop", "24 Mountain Road", "Crafts", ["Mon", "Wed", "Thu", "Sat", "Sun"], (9, 17))
    
    # Membuat objek Villager dengan store
    villager1 = Villager("Gus", "Saloon", "Cooking", ["Orange", "Diamond"], "Cooks", store)
    villager2 = Villager("Robin", "Carpentry", "Crafting", ["Cheese", "Wood"], "Carpenter", store2)
    
    # Membuat objek Monster
    monster = Monster("Serpent", "Skull Cavern", "Fast", 150, ["Spicy Eel", "Diamond"], "Fast Kill")
    
    # Menampilkan detail
    print("Player:")
    print("  Name         :", player.get_name())
    print("  Lives at     :", player.get_lives_at())
    print("  Main Skill   :", player.get_main_skill())
    print("  HP           :", player.get_HP())

    print("\nFarm:")
    print("  Name         :", player.get_farm().get_name())
    print("  Type         :", player.get_farm().get_type())

    print("\nCrops:")
    for crop in player.get_farm().get_crops():
        print("  Name         :", crop.get_name())
        print("  Type         :", crop.get_type())
        print("  Season       :", crop.get_season())
        print("")

    print("Animals:")
    for animal in player.get_farm().get_animal():
        print("  Name         :", animal.get_name())
        print("  Diet         :", animal.get_diet())
        print("  Produce      :", animal.get_produce())
        print("")

    print("Quests:")
    for quest in player.get_quests():
        print("  Name         :", quest.get_name())
        print("  Description  :", quest.get_description())
        print("  Reward       :", ", ".join(quest.get_reward()))
        print("  EXP          :", quest.get_EXP())
        print("")

    print("Weapon:")
    print("  Name         :", player.get_weapon().get_name())
    print("  Purpose      :", player.get_weapon().get_purpose())
    print("  Obtained By  :", player.get_weapon().get_obtained_by())
    print("  Level        :", player.get_weapon().get_level())
    print("  Damage       :", player.get_weapon().get_damage())

    print("\nTools:")
    for tool in player.get_tools():
        print("  Name         :", tool.get_name())
        print("  Purpose      :", tool.get_purpose())
        print("  Cost         :", tool.get_cost())
        print("  Ingredient   :", tool.get_ingredient())
        print("  Improvement  :", tool.get_improvement())
        print("")

    print("Villagers:")
    villagers = [villager1, villager2]
    for villager in villagers:
        print("  Name         :", villager.get_name())
        print("  Main Skill   :", villager.get_main_skill())
        print("  Likes        :", ", ".join(villager.get_likes()))
        print("  Occupation   :", villager.get_occupation())
        print("  Store Name   :", villager.get_store().get_name())
        print("  Store Address:", villager.get_store().get_address())
        print("  Mainly Sell  :", villager.get_store().get_mainly_sell())
        print("  Opening Days :", ", ".join(villager.get_store().get_opening_day()))
        print(f"  Opening Hours: {villager.get_store().get_opening_hour()[0]}:00 - {villager.get_store().get_opening_hour()[1]}:00")
        print("")

    print("Monster:")
    print("  Name         :", monster.get_name())
    print("  Lives at     :", monster.get_lives_at())
    print("  Main Skills  :", monster.get_main_skill())
    print("  Damage Effect:", monster.get_damage_effect())
    print("  HP           :", monster.get_HP())
    print("  Item Drops   :", ", ".join(monster.get_item_drops()))

if __name__ == '__main__':
    main()

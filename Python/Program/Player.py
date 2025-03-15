from Character import Character
from Farm import Farm
from Quest import Quest
from Tools import Tools
from Weapon import Weapon

class Player(Character):
    def __init__(self, name: str, lives_at: str, main_skill: str, HP: int, farm: Farm, quests: list[Quest], weapon: Weapon, tools: list[Tools]):
        super().__init__(name, lives_at, main_skill)
        self._HP = HP
        self._farm = farm      
        self._quests = quests
        self._weapon = weapon
        self._tools = tools

    def get_HP(self) -> int:
        return self._HP

    def set_HP(self, HP: int):
        self._HP = HP

    def get_farm(self) -> Farm:
        return self._farm

    def set_farm(self, farm: Farm):
        self._farm = farm

    def get_quests(self) -> list[Quest]:
        return self._quests

    def set_quests(self, quests: list[Quest]):
        self._quests = quests
        
    def get_weapon(self) -> Weapon:
        return self._weapon

    def set_weapon(self, weapon: Weapon):
        self._weapon = weapon
        
    def get_tools(self) -> list[Tools]:
        return self._tools

    def set_tools(self, tools: list[Tools]):
        self._tools = tools
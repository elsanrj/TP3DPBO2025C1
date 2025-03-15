from Character import Character

class Monster(Character):
    def __init__(self, name: str, lives_at: str, main_skill: str, HP: int, item_drops: list, damage_effect: str):
        super().__init__(name, lives_at, main_skill)
        self._HP = HP
        self._item_drops = item_drops
        self._damage_effect = damage_effect

    def get_HP(self) -> int:
        return self._HP

    def set_HP(self, HP: int):
        self._HP = HP

    def get_item_drops(self) -> list:
        return self._item_drops

    def set_item_drops(self, item_drops: list):
        self._item_drops = item_drops
        
    def get_damage_effect(self) -> str:
        return self._damage_effect

    def set_damage_effect(self, damage_effect: str):
        self._damage_effect = damage_effect
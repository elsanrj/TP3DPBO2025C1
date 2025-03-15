from Equipment import Equipment

class Weapon(Equipment):
    def __init__(self, name: str, purpose: str, obtained_by: str, level: int, damage: int):
        super().__init__(name, purpose)
        self._obtained_by = obtained_by
        self._level = level
        self._damage = damage

    def get_obtained_by(self):
        return self._obtained_by

    def set_obtained_by(self, obtained_by: str):
        self._obtained_by = obtained_by

    def get_level(self):
        return self._level

    def set_level(self, level: int):
        self._level = level

    def get_damage(self):
        return self._damage

    def set_damage(self, damage: int):
        self._damage = damage
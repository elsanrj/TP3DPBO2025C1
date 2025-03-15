class Crops:
    def __init__(self, name: str, type_: str, season: str):
        self._name = name
        self._type = type_
        self._season = season

    def get_name(self) -> str:
        return self._name

    def set_name(self, name: str):
        self._name = name

    def get_type(self) -> str:
        return self._type

    def set_type(self, type_: str):
        self._type = type_

    def get_season(self) -> str:
        return self._season

    def set_season(self, season: str):
        self._season = season

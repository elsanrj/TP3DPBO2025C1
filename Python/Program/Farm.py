from Business import Business
from Crops import Crops
from Animal import Animal

class Farm(Business):
    def __init__(self, owner: str, name: str, address: str, type_: str, crops: list[Crops], animal: list[Animal]):
        super().__init__(owner, name, address)
        self._type = type_
        self._crops = crops      
        self._animal = animal  

    def get_type(self) -> str:
        return self._type

    def set_type(self, type_: str):
        self._type = type_

    def get_crops(self) -> list[Crops]:
        return self._crops

    def set_crops(self, crops: list[Crops]):
        self._crops = crops

    def get_animal(self) -> list[Animal]:
        return self._animal

    def set_animal(self, animal: list[Animal]):
        self._animal = animal
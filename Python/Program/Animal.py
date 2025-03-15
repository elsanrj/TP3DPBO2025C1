class Animal:
    def __init__(self, name: str, diet: str, produce: str):
        self._name = name
        self._diet = diet
        self._produce = produce

    def get_name(self) -> str:
        return self._name

    def set_name(self, name: str):
        self._name = name

    def get_diet(self) -> str:
        return self._diet

    def set_diet(self, diet: str):
        self._diet = diet

    def get_produce(self) -> str:
        return self._produce

    def set_produce(self, produce: str):
        self._produce = produce
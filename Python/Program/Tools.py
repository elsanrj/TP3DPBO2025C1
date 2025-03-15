from Equipment import Equipment

class Tools(Equipment):
    def __init__(self, name: str, purpose: str, cost: int, ingredient: str, improvement: str):
        super().__init__(name, purpose)
        self._cost = cost
        self._ingredient = ingredient
        self._improvement = improvement

    def get_cost(self):
        return self._cost

    def set_cost(self, cost: int):
        self._cost = cost

    def get_ingredient(self):
        return self._ingredient

    def set_ingredient(self, ingredient: str):
        self._ingredient = ingredient

    def get_improvement(self):
        return self._improvement

    def set_improvement(self, improvement: str):
        self._improvement = improvement
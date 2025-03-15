class Quest:
    def __init__(self, name: str, description: str, reward: list, EXP: int):
        self._name = name
        self._description = description
        self._reward = reward
        self._EXP = EXP

    def get_name(self) -> str:
        return self._name

    def set_name(self, name: str):
        self._name = name

    def get_description(self) -> str:
        return self._description

    def set_description(self, description: str):
        self._description = description

    def get_reward(self) -> list:
        return self._reward

    def set_reward(self, reward: list):
        self._reward = reward

    def get_EXP(self) -> int:
        return self._EXP

    def set_EXP(self, EXP: int):
        self._EXP = EXP
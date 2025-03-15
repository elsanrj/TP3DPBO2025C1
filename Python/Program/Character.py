class Character:
    def __init__(self, name: str, lives_at: str, main_skill: str):
        self._name = name
        self._lives_at = lives_at
        self._main_skill = main_skill

    def get_name(self) -> str:
        return self._name

    def set_name(self, name: str):
        self._name = name

    def get_lives_at(self) -> str:
        return self._lives_at

    def set_lives_at(self, lives_at: str):
        self._lives_at = lives_at

    def get_main_skill(self) -> str:
        return self._main_skill

    def set_main_skill(self, main_skill: str):
        self._main_skill = main_skill
from Character import Character
from Store import Store

class Villager(Character):
    def __init__(self, name: str, lives_at: str, main_skill: str, likes: list, occupation: str, store: Store):
        super().__init__(name, lives_at, main_skill)
        self._likes = likes
        self._occupation = occupation
        self._store = store

    def get_likes(self) -> list:
        return self._likes

    def set_likes(self, likes: list):
        self._likes = likes

    def get_occupation(self) -> str:
        return self._occupation

    def set_occupation(self, occupation: str):
        self._occupation = occupation

    def get_store(self) -> Store:
        return self._store

    def set_store(self, store: Store):
        self._store = store

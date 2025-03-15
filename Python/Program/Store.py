from Business import Business

class Store(Business):
    def __init__(self, owner: str, name: str, address: str, mainly_sell: str, opening_day: list, opening_hour: tuple):
        super().__init__(owner, name, address)
        self._mainly_sell = mainly_sell
        self._opening_day = opening_day
        self._opening_hour = opening_hour

    def get_mainly_sell(self) -> str:
        return self._mainly_sell

    def set_mainly_sell(self, mainly_sell: str):
        self._mainly_sell = mainly_sell

    def get_opening_day(self) -> list:
        return self._opening_day

    def set_opening_day(self, opening_day: list):
        self._opening_day = opening_day

    def get_opening_hour(self) -> tuple:
        return self._opening_hour

    def set_opening_hour(self, opening_hour: tuple):
        self._opening_hour = opening_hour

class Business:
    def __init__(self, owner: str, name: str, address: str):
        self._owner = owner
        self._name = name
        self._address = address

    def get_owner(self) -> str:
        return self._owner

    def set_owner(self, owner: str):
        self._owner = owner

    def get_name(self) -> str:
        return self._name

    def set_name(self, name: str):
        self._name = name

    def get_address(self) -> str:
        return self._address

    def set_address(self, address: str):
        self._address = address
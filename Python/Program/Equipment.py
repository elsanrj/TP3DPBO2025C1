class Equipment:
    def __init__(self, name: str, purpose: str):
        self._name = name
        self._purpose = purpose

    def get_name(self):
        return self._name

    def set_name(self, name: str):
        self._name = name

    def get_purpose(self):
        return self._purpose

    def set_purpose(self, purpose: str):
        self._purpose = purpose
class Rotation:

    def __init__(self):
        pass

    @staticmethod
    def is_substring(self, s1, s2):
        return s1 in s2

    def is_rotation(self, s1, s2):
        if(s1 is None or s2 is None) or (len(s1) !=len(s2)):
            return False
        return self.is_substring(s1, s1 + s2)


if __name__ == "__main__":
    r = Rotation()
    print (r.is_rotation("o", "oo"))
class UniqueCharsSet:
    def __init__(self):
        pass

    #using set
    @staticmethod
    def has_unique_chars(self, string):
        if string is None:
            return False
        return len(set(string)) == len(string)
    
    #using set
    def has_unique_chars2(self, string):
        if string is None:
            return False 
        chars_set = set() 
        for char in string:
            if char in chars_set:
                return False 
            else:
                chars_set.add(char)
        return True
    #using count method of string 
    def has_unique_chars3(self, string):
        if string is None:
            return False 
        for char in string:
            if string.count(char) > 1:
                return False
        return True


if __name__ == "__main__":
    uc = UniqueCharsSet()
    print(uc.has_unique_chars(uc,"abdul"))
    print(uc.has_unique_chars2("abdul"))
    print(uc.has_unique_chars3("abdul"))
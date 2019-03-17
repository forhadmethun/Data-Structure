class Reversechars:
    def reverse(self, chars):
        if chars is None or not chars:
            return chars
        size = len(chars)
        for i in range(size // 2):
            chars[i], chars[(size - 1) - i] = \
                chars[(size - 1) - i], chars[i]
        return chars

    def reverse_pythonic_method(self, string):
        if string is None or not string:
            return None 
        return string[::-1]
    def reverse_pythonic_method2(self, string):
        if string is None or not string:
            return None 
        return ''.join(reversed(string))


if __name__ == '__main__':
    rs = Reversechars()
    chars = ['a', 'b', 'd', 'u', 'l']
    print (rs.reverse(chars))

    print ( rs.reverse_pythonic_method(chars) ) 

    print ( rs.reverse_pythonic_method2(chars) ) 



class stringingCompress:
    def compress(self, string):
        if(len(string) == 0):
            return
        s = string[0]
        out = ""
        c = 1
        for i in range(1, len(string)):
            if(s == string[i]):
                c = c + 1
            else:
                out = out +  str(s)
                if(c != 1):
                    out+=str(c)
                s = string[i]
                c = 1
        out = out +  str(s)
        if(c!=1):
            out = out +  str(c)
        return out

if __name__ == '__main__':
    string = "aabbcddeffghi"
    compress_obj = stringingCompress()
    print(compress_obj.compress(string))      
         

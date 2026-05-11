class Solution:

    def encode(self, strs: List[str]) -> str:
        result:str = ""

        for s in strs:
            result += str(len(s)) + "$" + s

        return result  

    def decode(self, s: str) -> List[str]:
        result:List[str] = []
        i:int = 0

        while i < len(s):
            j = i
            while s[j] != "$":
                j += 1
            length:int = int(s[i:j])
            i = j + 1
            j = i + length 
            result.append(s[i:j])
            i = j

        return result  


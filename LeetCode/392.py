class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        j =0
        for i in range(len(t)):
            if j == len(s):
                break
            if t[i] == s[j]:
                j += 1
        if j >= len(s):
            return("true")
        else:
            return("false")

    s = input()
    t = input()
    print(isSubsequence(0,s,t))
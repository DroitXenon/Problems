class Solution:
    def isIsomorphic(self, s, t):
        if len(s) != len(t):
            return False
        dic = {}
        dic[s[0]] = t[0]
        for i in range(len(s)):
            if (s[i] not in dic) and (t[i] not in dic.values()) :
                dic[s[i]] = t[i]
            elif (s[i] not in dic) or dic[s[i]] != t[i]:
                return False
        return True
    
    
    s = input()
    t = input()
    print(isIsomorphic(0,s,t))
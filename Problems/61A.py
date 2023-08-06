string1 = input()
string2 = input()
# print(string1,string2)
string3 = ""
for i in range(0, len(string1)):
    if string1[i] != string2[i]:
        string3 += "1"
    else:
        string3 += "0"
print(string3)

n = input()
games = input()
if games.count("A") > games.count("D"):
    print("Anton")
elif games.count("A") < games.count("D"):
    print("Danik")
else:
    print("Friendship")
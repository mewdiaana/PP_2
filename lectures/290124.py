"""
#11
i = int(input())
while(i > 0):
    print("meow")
    i = i - 1

#2
for a in range(i):
    print("meow")


#3
characters = ["Tyrion", "John Snow", "Robert", "Tywin"]
houses = ["Lannister", "Targarien", "Baratheon", "Lannister"]

for c in range(4):
    print(characters(c), houses(c))
"""

#4
game_of_thrones = [
    {"Name": "Tyrion", "House" : "Lannister"}
    {"Name": "John Snow","House" : "Targarien"}
    {"Name": "Robert", "House" : "Baratheon"}
    {"Name": "Tywin", "House" : "Lannister"}]

for g in game_of_thrones:
    print(g["Names"], g["House"])
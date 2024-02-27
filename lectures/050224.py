def main():
    res = get_stud()

class Human():
    def _init_(self, genderParam, raceParam, nationParam):
        self.gender = genderParam
        self.race = raceParam
        self.nation = nationParam

    def _str_(self):
        return "It's the Human class objects"

    def get_info(self):
        print(self.gender, self.race, self.nation)

    def set_name(self, firstname, lastname):
        self.first = firstname
        self.last = lastname

    def get_name(self):
        print(self.first, self.last)

class Persona(Human):
    def _init_(self, genderParam, raceParam, nationParam, favoriteFood, hobby, education):
        super()._init_(genderParam, raceParam, nationParam)
        self.favoriteFood = favouriteFood
        self.hobby = hobby
        self.education = education

arnur = Persona("Male", "Mongoloid", "Kazakh", "Indian Dumplings", "Sports", "Higher")

"""
human1 = Human("Female", "Caucasian", "Swedish")
human2 = Human("Male", "Asian", "Korean")
print(human1) # we see the code with objects parameters
print(human2)
human1.get_info("Harley", "Potter")
human1.set_name()
"""

'''  
def get_stud():
        name = input("Your name: ")
        school = input("Your school: ")
        result = {"key1": name, "key2": school}
        return result
'''

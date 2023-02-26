"""
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
"""

# Class declaration #
class Human:
    # private class
    __id = 0
    __num = ""
    __name = ""
    __gender = ""

    # default constructor
    def __init__(self, n = 0, nik = "", name = "", gender = ""):
        self.__id = n
        self.__num = nik
        self.__name = name
        self.__gender = gender

    # methods #
    # setter
    def setId(self, n):
        self.__id = n
    def setNum(self, nik):
        self.__num = nik
    def setName(self, name):
        self.__name = name
    def setGen(self, gender):
        self.__gender = gender

    # getter
    def getId(self):
        return self.__id
    def getNum(self):
        return self.__num
    def getName(self):
        return self.__name
    def getGender(self):
        return self.__gender
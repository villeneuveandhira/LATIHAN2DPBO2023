"""
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
"""

# Import library #
from Human import Human

# Class declaration #
class Sivitas(Human):
    # private class
    __univ = ""
    __emailEdu = ""

    # default constructor
    def __init__(self, n = 0, nik = "", nama = "", jenis_kelamin = "", univ = "", emailEdu = ""):
        super().__init__(n, nik ,nama, jenis_kelamin)
        self.__univ = univ
        self.__emailEdu = emailEdu

    # methods #
    # setter
    def setUniv (self, univ):
        self.__univ = univ
    def setEmailEdu (self, emailEdu):
        self.__emailEdu = emailEdu

    # getter
    def getUniv (self):
        return self.__univ
    def getEmailEdu (self):
        return self.__emailEdu
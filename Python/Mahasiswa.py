"""
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
"""

# Import library #
from os import system
from Sivitas import Sivitas

# Class declaration #
class Mahasiswa(Sivitas):
    # Private class
    __MHS_NUM = ""     # NIM mahasiswa
    __MHS_PRODI = ""   # Program studi
    __MHS_FAC = ""     # Fakultas

    # default constructor
    def __init__(self, n = 0, nik = "", nama = "", jenis_kelamin = "", asal_universitas = "", email_edu = "", nim = "", prodi = "", fakultas = ""):
        super().__init__(n, nik, nama, jenis_kelamin, asal_universitas, email_edu)
        self.__MHS_NUM = nim
        self.__MHS_PRODI = prodi
        self.__MHS_FAC = fakultas

    # setter
    def setMHS_ID(self, nim):
        self.__MHS_NUM = nim
    def setMHS_PRODI(self, prodi):
        self.__MHS_PRODI = prodi
    def setMHS_FAC(self, fakultas):
        self.__MHS_FAC = fakultas

    # getter
    def getMHS_ID(self):
        return self.__MHS_NUM
    def getMHS_PRODI(self):
        return self.__MHS_PRODI
    def getMHS_FAC(self):
        return self.__MHS_FAC

    # methods
    # to DISPLAY all data #
    def Show(self, m, n):
        system("cls")
        print("########## Daftar Mahasiswa ##########")
        # if there isn't data yet
        if (n == 0):
            print("!!!No data!!!")
        # if at least 1 record in data
        else:
            for i in range(n):
                print("ID                  : ", m[i].getId())
                print("NIK                 : ", m[i].getNum())
                print("NIM                 : ", m[i].getMHS_ID())
                print("NAMA                : ", m[i].getName())
                print("JENIS KELAMIN       : ", m[i].getGender())
                print("E-mail              : ", m[i].getEmailEdu())
                print("PRODI               : ", m[i].getMHS_PRODI())
                print("FAKULTAS            : ", m[i].getMHS_FAC())
                print("Asal Universitas    : ", m[i].getUniv())
                print("========================================\n")
        # new line after
        print("\n")
        # ---------------------------------------------------------------- #

    # to ADD data #
    def Insert(self):
        system("cls")
        print("### INSERT DATA ###")
        print("--- No space allowed!")
        # ID data
        self.setId(input("ID                                 : "))
        # NIK mahasiswa
        self.setNum(input("Masukkan NIK mahasiswa             : "))
        # NIM mahasiswa
        self.setMHS_ID(input("Masukkan NIM mahasiswa             : "))
        # Nama mahasiswa
        self.setName(input("Masukkan Nama mahasiswa            : "))
        # Jenis_kelamin mahasiswa
        self.setGen(input("Masukkan Jenis_kelamin mahasiswa   : "))
        # E-mail mahasiswa
        self.setEmailEdu(input("Masukkan E-mail mahasiswa          : "))
        # Program studi
        self.setMHS_PRODI(input("Masukkan Program studi mahasiswa   : "))
        # Fakultas
        self.setMHS_FAC(input("Masukkan Fakultas mahasiswa        : "))
        # Universitas mahasiswa
        self.setUniv(input("Masukkan Universitas mahasiswa     : "))
        print("\n### Data added ... ###\n\n\n")

    # ---------------------------------------------------------------- #

    # to EDIT a data by id #
    def Update(self, m, n):
        system("cls")
        # print all data
        temp = Mahasiswa()
        temp.Show(m, n)
        # init
        find = 0
        found = 0
        # find ID in data
        print("\n\n### UPDATE DATA ###")
        find = input("Masukkan ID mahasiswa yang ingin diubah :")
        # update each attribute
        for i in range(n):
            # record that has same id
            if find == m[i].getMHS_ID():
                print("\n\n### updating ... ###")
                m[i].setNum(input("Masukkan NIK baru mahasiswa             : "))
                m[i].setMHS_ID(input("Masukkan NIM baru mahasiswa             : "))
                m[i].setName(input("Masukkan Nama baru mahasiswa            : "))
                m[i].setGen(input("Masukkan Jenis_kelamin baru mahasiswa   : "))
                m[i].setEmailEdu(input("Masukkan E-mail baru mahasiswa          : "))
                m[i].setMHS_PRODI(input("Masukkan Program studi baru mahasiswa   : "))
                m[i].setMHS_FAC(input("Masukkan Fakultas baru mahasiswa        : "))
                m[i].setUniv(input("Masukkan Universitas baru mahasiswa     : "))
                # sign that the current record was updated
                print("\n\n### Data updated ###\n\n")
                # it means that the record has found
                found = 1
                return
            
        # if the ID is not found in data
        if found == 0:
            print("### ID is not found ###")

    # ---------------------------------------------------------------- #

    # to DELETE a data by id #
    def Delete(self, m, n):
        system("cls")
        # print all data
        temp = Mahasiswa()
        temp.Show(m, n)
        # init
        find = 0
        found = 0
        # find ID in data
        print("\n\n### DELETE DATA ###")
        find = input("Masukkan ID mahasiswa yang ingin dihapus :")
        for i in range(n):
            # record that has same id
            if find == m[i].getMHS_ID():
                # shift record to maks
                for j in range(i, n-1):
                    m[j] = m[j+1]
                # sign that the current record was deleted
                print("\n\n### Data successfully deleted ###\n\n")
                # it means that the record has found
                found = 1
                return
        
        # if the ID is not found in data
        if found  == 0:
            print("\n\n### ID is not found ###\n\n")
"""
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
"""

# Import library #
from os import system
from Mahasiswa import Mahasiswa

# Program #
def main():
    system("cls")

    # Instantiate
    list = [Mahasiswa() for i in range(99)]  # List
    temp = Mahasiswa()

    # Initialize
    menu = 0
    n = 0

    # Output
    while True:
        print("*** LATIHAN 2 DPBO 2023 ***")
        print("=== Informasi Daftar Mahasiswa ===")
        print("\nChoose option :")
        print("1. Show Data")
        print("2. Insert Data")
        print("3. Update Data")
        print("4. Delete Data")
        print("5. Terminate")
        print("\n\nOption : ")
        # user input
        menu = int(input())
        # to display all records
        if menu == 1:
            # new / reset object ('temp')
            temp = Mahasiswa()
            system("cls")
            temp.Show(list, n)
        # to add data
        elif menu == 2:
            # new / reset object ('temp')
            temp = Mahasiswa()
            system("cls")
            temp.Insert()
            list[n] = temp
            n += 1
        # to edit data
        elif menu == 3:
            # new / reset object ('temp')
            temp = Mahasiswa()
            system("cls")
            temp.Update(list, n)
        # to delete data
        elif menu == 4:
            # new / reset object ('temp')
            temp = Mahasiswa()
            system("cls")
            temp.Delete(list, n)
            n -= 1
        # to terminate or close the program
        elif menu == 5:
            break
        # any num other than the case(s)
        else:
            system("cls")
            print("### WARNING!! Please choose from 1-5 .. ###\n\n\n")
            
if __name__ == "__main__":
    main()
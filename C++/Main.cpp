/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import library */
#include <iostream>
#include <string>
#include "Mahasiswa.cpp"
#include <bits/stdc++.h>

/* Using standard namespace */
using namespace std;

/* Program */
int main () {
    system("cls");

    // Instantiate
    Mahasiswa list[99];
    int menu, n;

    // Initialize
    n = 0;

    // Output
    do {
        cout << "*** LATIHAN 2 DPBO 2023 ***" << endl;
        cout << "=== Informasi Daftar Mahasiswa ===" << endl;
        cout << "\nChoose option :" << endl;
        cout << "1. Show Data" << endl;
        cout << "2. Insert Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Delete Data" << endl;
        cout << "5. Terminate" << endl;
        cout << "\n\nOption : ";
        // user input
        cin >> menu;
        switch(menu) {
            // to display all records
            case 1:
                list->Show(list, n);
                break;
            // to add data
            case 2:
                list[n].Insert(list, n);
                n++;
                break;
            // to edit data
            case 3:
                list->Update(list, n);
                break;
            // to delete data
            case 4:
                list->Delete(list, n);
                break;
            // to terminate or close the program
            case 5:
                exit(0);
            // any num other than the case(s)
            default:
                system("cls");
                cout << "### WARNING!! Invalid option .. ###\n\n" << endl;
        }
    } while (menu != 5); // still looping as long as it's not case 5 or exit

    return 0;
}
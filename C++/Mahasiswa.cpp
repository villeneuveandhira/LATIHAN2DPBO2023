/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import library */
#include <iostream>
#include <string>
#include "Sivitas.cpp"

/* Using standard namespace */
using namespace std;

/* Class declaration */
class Mahasiswa : public Sivitas {
    private:
        string MHS_NUM;     // NIM mahasiswa
        string MHS_PRODI;   // Program studi
        string MHS_FAC;     // Fakultas

    public:
        // default constructor
        Mahasiswa() {
            this->MHS_NUM = "";
            this->MHS_PRODI = "";
            this->MHS_FAC = "";
        }

        //constructor
        Mahasiswa(int n, string nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string nim, string prodi, string fakultas) {
            Sivitas(n, nik, nama, jenis_kelamin, asal_universitas, email_edu);
            this->MHS_NUM = nim;
            this->MHS_PRODI = prodi;
            this->MHS_FAC = fakultas;
        }

        // setter
        void setMHS_ID(string nim) {
            this->MHS_NUM = nim;
        }
        void setMHS_PRODI(string prodi) {
            this->MHS_PRODI = prodi;
        }
        void setMHS_FAC(string fakultas) {
            this->MHS_FAC = fakultas;
        }

        // getter
        string getMHS_ID() {
            return this->MHS_NUM;
        }
        string getMHS_PRODI(){
            return this->MHS_PRODI;
        }
        string getMHS_FAC(){
            return this->MHS_FAC;
        }

        // methods
        /* to DISPLAY all data */
        void Show(Mahasiswa m[], int n) {
            system("cls");
            cout << "########## Daftar Mahasiswa ##########" << endl;
            // if there isn't data yet
            if (n == 0) {
                cout << "!!!No data!!!" << endl;
            }
            // if at least 1 record in data
            else {
                for (int i = 0; i < n; i++) {
                    cout << "ID                  : " << m[i].getId() << endl;
                    cout << "NIK                 : " << m[i].getNum() << endl;
                    cout << "NIM                 : " << m[i].MHS_NUM << endl;
                    cout << "NAMA                : " << m[i].getName() << endl;
                    cout << "JENIS KELAMIN       : " << m[i].getGender() << endl;
                    cout << "E-mail              : " << m[i].getEmailEdu() << endl;
                    cout << "PRODI               : " << m[i].MHS_PRODI << endl;
                    cout << "FAKULTAS            : " << m[i].MHS_FAC << endl;
                    cout << "Asal Universitas    : " << m[i].getUniv() << endl;
                    cout << "========================================" << endl;
                }
            }
            // new line after
            cout << "\n" << endl;
        }

        /* to ADD data */
        void Insert(Mahasiswa m[], int n) {
            system("cls");
            // Instantiate
            int intInput;
            char strInput[99];
            cout << "### INSERT DATA ###" << endl;
            cout << "--- No space allowed!" << endl;
            // ID data
            cout << "ID                                 : ";
            cin >> intInput;
            m[n].setId(intInput);
            // NIK mahasiswa
            cout << "Masukkan NIK mahasiswa             : ";
            cin >> strInput;
            m[n].setNum(strInput);
            // NIM mahasiswa
            cout << "Masukkan NIM mahasiswa             : ";
            cin >> strInput;
            m[n].setMHS_ID(strInput);
            // Nama mahasiswa
            cout << "Masukkan Nama mahasiswa            : ";
            cin >> strInput;
            m[n].setName(strInput);
            // Jenis_kelamin mahasiswa
            cout << "Masukkan Jenis_kelamin mahasiswa   : ";
            cin >> strInput;
            m[n].setGen(strInput);
            // E-mail mahasiswa
            cout << "Masukkan E-mail mahasiswa          : ";
            cin >> strInput;
            m[n].setEmailEdu(strInput);
            // Program studi mahasiswa
            cout << "Masukkan Program studi mahasiswa   : ";
            cin >> strInput;
            m[n].setMHS_PRODI(strInput);
            // Fakultas mahasiswa
            cout << "Masukkan Fakultas mahasiswa        : ";
            cin >> strInput;
            m[n].setMHS_FAC(strInput);
            // Universitas mahasiswa
            cout << "Masukkan Universitas mahasiswa     : ";
            cin >> strInput;
            m[n].setUniv(strInput);
            // notification
            cout << "\n### Data added ... ###\n" << endl;
            cout << "\n\n";
        }

        /* to EDIT a data by id */
        void Update(Mahasiswa m[], int n) {
            system("cls");
            // print all data
            Show(m, n);
            // instantiate
            int find, found;
            int intInput;
            char strInput[99];
            // find ID in data
            cout << "\n\n### UPDATE DATA ###" << endl;
            cout << "Masukkan ID mahasiswa yang ingin diubah :";
            cin >> find;
            // init
            found = 0;
            // update each attribute
            for (int i = 0; i < n; i++) {
                // record that has same id
                if (find == m[i].getId()) {
                    cout << "\n\n### updating ... ###" << endl;
                    // NIK mahasiswa
                    cout << "Masukkan NIK baru mahasiswa            : ";
                    cin >> strInput;
                    m[i].setNum(strInput);
                    // NIM mahasiswa
                    cout << "Masukkan NIM baru mahasiswa            : ";
                    cin >> strInput;
                    m[i].setMHS_ID(strInput);
                    // Nama mahasiswa
                    cout << "Masukkan Nama baru mahasiswa           : ";
                    cin >> strInput;
                    m[i].setName(strInput);
                    // Jenis_kelamin mahasiswa
                    cout << "Masukkan Jenis_kelamin baru mahasiswa  : ";
                    cin >> strInput;
                    m[i].setGen(strInput);
                    // E-mail mahasiswa
                    cout << "Masukkan E-mail baru mahasiswa         : ";
                    cin >> strInput;
                    m[i].setEmailEdu(strInput);
                    // Program studi mahasiswa
                    cout << "Masukkan Program studi baru mahasiswa  : ";
                    cin >> strInput;
                    m[i].setMHS_PRODI(strInput);
                    // Fakultas mahasiswa
                    cout << "Masukkan Fakultas baru mahasiswa       : ";
                    cin >> strInput;
                    m[i].setMHS_FAC(strInput);
                    // Universitas mahasiswa
                    cout << "Masukkan Universitas baru mahasiswa    : ";
                    cin >> strInput;
                    m[i].setUniv(strInput);
                    // sign that the current record was updated
                    cout << "\n\n### Data updated ###" << endl;
                    // new line after
                    cout << "\n\n";
                    // it means that the record has found
                    found = 1;
                    break;
                }
            }
            // if the ID is not found in data
            if (found == 0) {
                cout << "### ID is nout found ###" << endl;
            }
        }

        /* to DELETE a data by id */
        void Delete(Mahasiswa m[], int &n) {
            system("cls");
            // print all data
            Show(m, n);
            // instantiate
            int find, found;
            // find ID in data
            cout << "\n\n### DELETE DATA ###" << endl;
            cout << "Masukkan ID mahasiswa yang ingin dihapus :";
            cin >> find;
            // init
            found = 0;
            for (int i = 0; i < n; i++) {
                // record that has same id
                if (find == m[i].getId()) {
                    // shift record to maks
                    for (int j = i; j < n; j++) {
                        m[j] = m[j+1];
                    }
                    // delete record
                    n--;
                    // sign that the current record was deleted
                    cout << "\n\n### Data successfully deleted ###" << endl;
                    // new line after
                    cout << "\n\n";
                    // it means that the record has found
                    found = 1;
                    break;
                }
            }
            // if the ID is not found in data
            if (found  == 0) {
                cout << "\n\n### ID is nout found ###" << endl;
                cout << "\n\n";
            }

        }
    
        // destructor
        ~Mahasiswa() {
        }
};
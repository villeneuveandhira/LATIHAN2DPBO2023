/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import library */
#include <iostream>
#include <string>

/* Using standard namespace */
using namespace std;

/* Class declaration */
class Human {
    private:
        int id;
        string num;     // NIK
        string name;    // nama
        string gender;  // jenis_kelamin

    public:
        // default constructor
        Human() {
            this->id = 0;
            this->num = "";
            this->name = "";
            this->gender = "";
        }

        // constructor
        Human(int n, string nik, string name, string gender) {
            this->id = n;
            this->num = nik;
            this->name = name;
            this->gender = gender;
        }

        // setter
        void setId(int n) {
            this->id = n;
        }
        void setNum(string nik) {
            this->num = nik;
        }
        void setName(string name) {
            this->name = name;
        }
        void setGen(string gender) {
            this->gender = gender;
        }

        // getter
        int getId() {
            return this->id;
        }
        string getNum() {
            return this->num;
        }
        string getName() {
            return this->name;
        }
        string getGender(){
            return this->gender;
        }

        // destructor
        ~Human() {
        }
};
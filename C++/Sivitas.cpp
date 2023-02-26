/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import library */
#include <iostream>
#include <string>
#include "Human.cpp"

/* Using standard namespace */
using namespace std;

/* Class declaration */
class Sivitas: public Human{
    private:
        string univ;        // asal_universitas
        string emailEdu;    // email_edu

    public:
        // default constructor
        Sivitas() {
            this->univ = "";
            this->emailEdu = "";
        }

        // constructor
        Sivitas(int n, string nik, string nama, string jenis_kelamin, string univ, string emailEdu) {
            Human(n, nik ,nama, jenis_kelamin);
            this->univ = univ;
            this->emailEdu = emailEdu;
        }

        // setter
        void setUniv (string univ) {
            this->univ = univ;
        }
        void setEmailEdu (string emailEdu) {
            this->emailEdu = emailEdu;
        }

        // getter
        string getUniv () {
            return this->univ;
        }
        string getEmailEdu () {
            return this->emailEdu;
        }

        // destructor
        ~Sivitas() {
        }
};
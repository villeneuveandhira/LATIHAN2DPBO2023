/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Class declaration */
public class Human {
    private int id;
    private String num;     // NIK
    private String name;    // nama
    private String gender;  // jenis_kelamin

    // constructor
    public Human() {
        this.id = 0;
        this.num = "";
        this.name = "";
        this.gender = "";
    }

    // constructor
    public Human(int n, String nik, String name, String gender) {
        this.id = n;
        this.num = nik;
        this.name = name;
        this.gender = gender;
    }

    // setter
    public void setId(int n) {
        this.id = n;
    }
    public void setNum(String nik) {
        this.num = nik;
    }
    public void setName(String name) {
        this.name = name;
    }
    public void setGen(String gender) {
        this.gender = gender;
    }

    // getter
    public int getId() {
        return this.id;
    }
    public String getNum() {
        return this.num;
    }
    public String getName() {
        return this.name;
    }
    public String getGender(){
        return this.gender;
    }
}
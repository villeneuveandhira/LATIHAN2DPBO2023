/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Class declaration */
public class Sivitas extends Human {
    private String univ;        // asal_universitas
    private String emailEdu;    // email_edu

    // constructor
    public Sivitas() {
        this.univ = "";
        this.emailEdu = "";
    }

    // constructor
    public Sivitas(int n, String nik, String nama, String jenis_kelamin, String univ, String emailEdu) {
        super(n, nik ,nama, jenis_kelamin);
        this.univ = univ;
        this.emailEdu = emailEdu;
    }

    // setter
    public void setUniv (String univ) {
        this.univ = univ;
    }
    public void setEmailEdu (String emailEdu) {
        this.emailEdu = emailEdu;
    }

    // getter
    public String getUniv () {
        return this.univ;
    }
    public String getEmailEdu () {
        return this.emailEdu;
    }
}
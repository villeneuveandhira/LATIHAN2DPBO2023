/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import library */
import java.util.Scanner;

/* Class declaration */
public class Mahasiswa extends Sivitas {
    private String MHS_NUM;     // NIM mahasiswa
    private String MHS_PRODI;   // Program studi
    private String MHS_FAC;     // Fakultas

    // constructor
    public Mahasiswa() {
        this.MHS_NUM = "";
        this.MHS_PRODI = "";
        this.MHS_FAC = "";
    }

    //constructor
    public Mahasiswa(int n, String nik, String nama, String jenis_kelamin, String asal_universitas, String email_edu, String nim, String prodi, String fakultas) {
        super(n, nik, nama, jenis_kelamin, asal_universitas, email_edu);
        this.MHS_NUM = nim;
        this.MHS_PRODI = prodi;
        this.MHS_FAC = fakultas;
    }

    // setter
    public void setMHS_ID(String nim) {
        this.MHS_NUM = nim;
    }
    public void setMHS_PRODI(String prodi) {
        this.MHS_PRODI = prodi;
    }
    public void setMHS_FAC(String fakultas) {
        this.MHS_FAC = fakultas;
    }

    // getter
    public String getMHS_ID() {
        return this.MHS_NUM;
    }
    public String getMHS_PRODI(){
        return this.MHS_PRODI;
    }
    public String getMHS_FAC(){
        return this.MHS_FAC;
    }

    // methods
    /* to DISPLAY all data */
    public void Show(Mahasiswa m, int n) {
        System.out.print("\033[H\033[2J");
        System.out.flush();
        System.out.println("########## Daftar Mahasiswa ##########");
        // if there isn't data yet
        if (n == 0) {
            System.out.println("!!!No data!!!");
        }
        // if at least 1 record in data
        else {
            for (int i = 0; i < n; i++) {
                System.out.println("ID                  : " + m.getId());
                System.out.println("NIK                 : " + m.getNum());
                System.out.println("NIM                 : " + m.MHS_NUM);
                System.out.println("NAMA                : " + m.getName());
                System.out.println("JENIS KELAMIN       : " + m.getGender());
                System.out.println("E-mail              : " + m.getEmailEdu());
                System.out.println("PRODI               : " + m.MHS_PRODI);
                System.out.println("FAKULTAS            : " + m.MHS_FAC);
                System.out.println("Asal Universitas    : " + m.getUniv());
                System.out.println("========================================");
            }
        }
        // new line after
        System.out.println("\n");
    }
}
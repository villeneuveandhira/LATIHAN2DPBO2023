/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import library */
import java.util.Scanner;
import java.util.ArrayList;

/* Program */
public class Main {
    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");
        System.out.flush();        

        // Instantiate
        ArrayList<Mahasiswa> list = new ArrayList<>();  // List
        int menu, n;
        Scanner sc = new Scanner(System.in);

        // Initialize
        menu = 0;
        n = 0;

        // Output
        do {
            System.out.println("*** LATIHAN 2 DPBO 2023 ***");
            System.out.println("=== Informasi Daftar Mahasiswa ===");
            System.out.println("\nChoose option :");
            System.out.println("1. Show Data");
            System.out.println("2. Terminate");
            System.out.print("\n\nOption : ");
            // user input
            try {
                menu = sc.nextInt();
            } catch (Exception e) {
                System.out.println("The input is invalid!");
            }
            switch(menu) {
                // to display all records
                case 1:
                    // clear
                    System.out.print("\033[H\033[2J");
                    System.out.flush();
                    // data
                    // 'new' / reset object
                    Mahasiswa temp = new Mahasiswa(); 
                    // set object
                    temp.setId(1);
                    temp.setNum("1234567");
                    temp.setMHS_ID("2108067");
                    temp.setName("Villen");
                    temp.setGen("Laki-laki");
                    temp.setEmailEdu("v.andhira@upi.edu");
                    temp.setMHS_PRODI("Ilmu_komputer");
                    temp.setMHS_FAC("FPMIPA");
                    temp.setUniv("UPI");
                    list.add(temp);
                    n += 1;
                    temp.Show(temp, n);
                    break;
                // to terminate or close the program
                case 2:
                    System.exit(0);
                // any num other than the case(s)
                default:
                    System.out.print("\033[H\033[2J");
                    System.out.flush();
                    System.out.println("### WARNING!! Invalid option .. ###");
                    System.out.println("\n");
            }
        } while (menu != 2); // still looping as long as it's not case 5 or exit
        // close scanner
        // sc.close();
    }
}
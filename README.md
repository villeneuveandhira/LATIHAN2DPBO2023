# Data diri
NIM               : 2108067<br />
Nama              : Villeneuve Andhira Suwandhi<br />
Program Studi     : Ilmu Komputer C1 2021<br />

# LATIHAN2DPBO2023
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++, Java, Python, dan PHP yang mengimplementasikan konsep Multi-level Inheritance pada kelas - kelas tersebut:
<br />
● Mahasiswa: NIM, nama, jenis_kelamin, fakultas, prodi<br />
● Human: NIK, nama, jenis_kelamin<br />
● SivitasAkademik: asal_universitas, email_edu<br />
<br />
Note.<br />
● Boleh menambahkan properti/atribut baru<br />
● Tampilkan data selengkap-lengkapnya dalam bentuk list/tabel<br />
● Program dikumpulkan pada repository GitHub yang dibuat public dengan nama
“LATIHAN2DPBO2023”<br />
○ Hanya program pada branch Main yang akan dinilai dan diperiksa<br />
○ Jika waktu pengumpulan sudah habis dan ingin mengupdate kode program,
update pada branch lain karena mengupdate branch Main setelah waktu
pengumpulan terlewat maka program tidak akan dinilai<br />
● Struktur folder<br />
○ CPP (program, screenshot)<br />
○ Java<br />
○ Python<br />
○ PHP<br />
○ README.md<br />
● File README berisi desain program, penjelasan alur, dan dokumentasi saat
program dijalankan (screenshot/screen record, pilih salah satu bahasa sebagai
contoh)<br />

# Desain Program () {}
Latihan 2 DPBO -> buat kelas:<br />
- human
- sivitas-akademik
- mahasiswa
<br />
Berikut adalah kelas-kelasnya:<br />
Class 'Human' {<br />
      &nbsp;-> private atr :<br />
            &nbsp;&nbsp;- nomor id,<br />
            &nbsp;&nbsp;- NIK,<br />
            &nbsp;&nbsp;- Nama,<br />
            &nbsp;&nbsp;- Jenis_kelamin,<br />
      &nbsp;-> constructor<br />
      &nbsp;-> public (setter-getter) :<br />
            &nbsp;&nbsp;a. set<br />
            &nbsp;&nbsp;b. get<br />
      &nbsp;-> destructor (ex. Java, Py)<br />
}<br />
<br />
Class 'Sivitas' is a 'Human' {<br />
      &nbsp;-> private atr :<br />
            &nbsp;&nbsp;- Asal_universitas,<br />
            &nbsp;&nbsp;- E-mail,<br />
      &nbsp;-> constructor:<br />
            &nbsp;&nbsp;- access(nomor id, NIK, Nama, Jenis_kelamin),<br />
      &nbsp;-> public (setter-getter, dan methods) :<br />
            &nbsp;&nbsp;a. set<br />
            &nbsp;&nbsp;b. get<br />
      &nbsp;-> destructor (ex. Java, Py)<br />
}<br />
<br />
Class 'Mahasiswa' is a 'Sivitas' {<br />
      &nbsp;-> private atr :<br />
            &nbsp;&nbsp;- NIM,<br />
            &nbsp;&nbsp;- Prodi,<br />
            &nbsp;&nbsp;- Fakultas,<br />
      &nbsp;-> constructor<br />
            &nbsp;&nbsp;- access(nomor id, NIK, Nama, Jenis_kelamin, Asal_universitas, E-mail),<br />
      &nbsp;-> public (setter-getter, dan methods) :<br />
            &nbsp;&nbsp;a. set<br />
            &nbsp;&nbsp;b. get<br />
            &nbsp;&nbsp;c. method/fitur:<br />
                  &nbsp;&nbsp;&nbsp;- menampilkan     (display/show),<br />
                  &nbsp;&nbsp;&nbsp;- menambah        (add/insert),<br />
                  &nbsp;&nbsp;&nbsp;- mengubah        (update/edit),<br />
                  &nbsp;&nbsp;&nbsp;- menghapus       (delete/erase).<br />
      &nbsp;-> destructor (ex. Java, Py)<br />
}<br />
<br />
Main program {<br />
      &nbsp;- clear/cls (optional) // supaya bersih aja<br />
      &nbsp;- 'new'/instansiasi,<br />
      &nbsp;- init (jika perlu),<br />
      &nbsp;- tampilan :<br />
            &nbsp;&nbsp;1. loop pakai switch-case,<br />
            &nbsp;&nbsp;2. exit/out sampai pilihan user,<br />
            &nbsp;&nbsp;3. case(s) ;<br />
                  &nbsp;&nbsp;&nbsp;3.1.) show,<br />
                  &nbsp;&nbsp;&nbsp;3.2.) insert,<br />
                  &nbsp;&nbsp;&nbsp;3.3.) update,<br />
                  &nbsp;&nbsp;&nbsp;3.4.) delete,<br />
                  &nbsp;&nbsp;&nbsp;3.5.) exit.<br />
}<br />
<br />
Alasan urutan kelasnya:<br />
- Secara objek antara mahasiswa dan sivitas itu sama yaitu manusia / human, tapi tidak semua sivitas itu mahasiswa saja melainkan ada dosen dll.<br />
- Atribut-atribut pada kelas human dipakai semua di dalam kelas sivitas.<br />
- Sivitas akademika artinya warga di lingkungan akademis tertentu, maka mahasiswa termasuk sivitas(akademika).<br />
- Kemudian dari antara objek manusia dengan sivitas sama.
- Jadi menurut saya, base classnya adalah 'Human', lalu derived class 'Human' adalah 'Sivitas' (akademik), dan kelas 'Sivitas' inherits dengan kelas 'Mahasiswa'

# Documentation () {}
Untuk dokumentasi menggunakan snapshot/screenshot saat menjalankan program,
dan yang dipilih salah satu yaitu dengan bahasa Java dan C++.<br />

Kemudian, ada penjelasan alur programnya:
1. compile file sesuai bahasa (c++, java, python, php) e.g. (C++):<br />
            &nbsp;&nbsp;-> g++ -c *.cpp<br />
            &nbsp;&nbsp;-> g++ main.cpp -o main.exe<br />
2. run programnya e.g. :<br />
            &nbsp;&nbsp;-> .\main (powershell)<br />
3. setelah itu, akan muncul judul ('latihan-2-dpbo-2023') beserta pilihan opsinya dengan angka satu sampai lima<br />
4. pilih salah satu opsi untuk memulai program CRUD sederhana dengan file lokal<br />
5. pilihannya ada lima mulai dari;<br />
      &nbsp;a. show<br />
            &nbsp;&nbsp;ini untuk menampilkan semua data informasi mahasiswa yang dimasukkan tapi,
            apabila belum ada masukkan setelah program di-run maka tidak akan muncul datanya,
            atau ada message/pesan warning tidak ada data.<br />
      &nbsp;b. insert<br />
            &nbsp;&nbsp;dipilihan ke-dua untuk menambahkan data mahasiswa,
            pertama akan diminta untuk memasukkan nomor id, dilanjut nik, nim, nama, jenis-kelamin, e-mail, prodi, fakultas,
            dan asal-universitas.
            di akhir akan ada pesan bahwa data berhasil dimasukkan.<br />
      &nbsp;c. update<br />
            &nbsp;&nbsp;disini pilihan untuk mengubah data yang ada,
            sebelum mengubah akan ditampilkan data yang ada saat ini,
            kemudian diminta nomor id tujuan yang akan diubah,
            lalu mulai mengubah data setiap atributnya satu per satu.<br />
      &nbsp;d. delete<br />
            &nbsp;&nbsp;hampir sama dengan update akan ditampilkan terlebih dahulu data saat ini,
            akan tetapi berbeda disini fitur untuk menghapus data dengan nomor id tujuan yang dimasukkan user,
            setelah itu langsung data akan terhapus sesuai tujuan nomor id.<br />
      &nbsp;e. terminate<br />
            &nbsp;&nbsp;ini opsi untuk langsung mengakhiri program yang sedang berjalan.<br />

# Format janji
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2<br />
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.<br />
Aamiin.<br />

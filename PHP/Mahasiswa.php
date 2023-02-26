<?php

/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import */
require_once 'Sivitas.php';

/* Class declaration */
class Mahasiswa extends Sivitas{
    private $MHS_NUM = "";     // NIM mahasiswa
    private $MHS_PRODI = "";   // Program studi
    private $MHS_FAC = "";     // Fakultas
    
    // constructor
    public function __construct($n = 0, $nik = "", $nama = "", $jenis_kelamin = "", $asal_universitas = "", $email_edu = "", $nim = "", $prodi = "", $fakultas = "") {
        parent::__construct($n, $nik, $nama, $jenis_kelamin, $asal_universitas, $email_edu);
        $this->MHS_NUM = $nim;
        $this->MHS_PRODI = $prodi;
        $this->MHS_FAC = $fakultas;
    }
    
    // setter
    public function setMHS_ID($nim) {
        $this->MHS_NUM = $nim;
    }
    public function setMHS_PRODI($prodi) {
        $this->MHS_PRODI = $prodi;
    }
    public function setMHS_FAC($fakultas) {
        $this->MHS_FAC = $fakultas;
    }

    // getter
    public function getMHS_ID() {
        return $this->MHS_NUM;
    }
    public function getMHS_PRODI(){
        return $this->MHS_PRODI;
    }
    public function getMHS_FAC(){
        return $this->MHS_FAC;
    }

    // destructor
    function __destruct(){
    }
}

?>
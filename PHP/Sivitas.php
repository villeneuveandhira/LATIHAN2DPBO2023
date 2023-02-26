<?php

/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import */
require_once 'Human.php';

/* Class declaration */
class Sivitas extends Human {
    private $univ = 0 ;         // asal_universitas
    private $emailEdu = "";     // email_edu
    
    // constructor
    public function __construct($n = 0, $nik = "", $nama = "", $jenis_kelamin = "", $univ = "", $emailEdu = "") {
        parent::__construct($n, $nik, $nama, $jenis_kelamin);
        $this->univ = $univ;
        $this->emailEdu = $emailEdu;
    }
    
    // setter
    public function setUniv($univ) {
        $this->univ = $univ;
    }
    public function setEmailEdu($emailEdu) {
        $this->emailEdu = $emailEdu;
    }

    // getter
    public function getUniv() {
        return $this->univ;
    }
    public function getEmailEdu() {
        return $this->emailEdu;
    }

    // destructor
    function __destruct(){
    }
}

?>
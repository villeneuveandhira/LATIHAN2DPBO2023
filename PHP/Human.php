<?php

/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Class declaration */
class Human {
    private $id = 0 ;       // Nomor data
    private $num = "";      // NIK
    private $name = "";     // Nama
    private $gender = "";   // Jenis_kelamin
    
    // constructor
    public function __construct($n = 0, $nik = "", $name = "", $gender = "") {
        $this->id = $n;
        $this->num = $nik;
        $this->name = $name;
        $this->gender = $gender;
    }
    
    // setter
    public function setId($n) {
        $this->id = $n;
    }
    public function setNum($nik) {
        $this->num = $nik;
    }
    public function setName($name) {
        $this->name = $name;
    }
    public function setGen($gender) {
        $this->gender = $gender;
    }

    // getter
    public function getId() {
        return $this->id;
    }
    public function getNum() {
        return $this->num;
    }
    public function getName() {
        return $this->name;
    }
    public function getGender(){
        return $this->gender;
    }

    // destructor
    function __destruct(){
    }
}

?>
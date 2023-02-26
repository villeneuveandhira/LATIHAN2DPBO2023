<?php

/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 2
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import */
require 'Mahasiswa.php';

// check session
session_start();
if (!isset($_SESSION["list"])) {
    $_SESSION["list"] = array();
}

// Instantiate
$list = $_SESSION["list"];

// Initialize
$menu = 0;
$n = 0;

// Output
echo "*** LATIHAN 2 DPBO 2023 ***<br>";
echo "=== Informasi Daftar Mahasiswa ===<br>";

// Options
echo '<form method="post">';
    echo '<input type="submit" name="show" value="Show Data"> --- ';
    echo '<input type="submit" name="insert" value="Add Data"> ---';
    echo '<input type="submit" name="delete" value="Delete Data">';
echo '</form>';
$opt = 0;
if(isset($_POST['show'])){
  $opt = 1;
}
elseif(isset($_POST['insert'])){
  $opt = 2;
}
elseif(isset($_POST['delete'])){
    $opt = 3;
}
// Input
if ($opt == 1) {
    echo '########## Daftar Mahasiswa ##########<br>';
    // if at least 1 record in data
    $n = 0;
    $i = 1;
    foreach($list as $mhs) {
        $n = 1;
        echo "ID            : ".$mhs->getId()."<br>";
        echo "NIK           : ".$mhs->getNum()."<br>";
        echo "NIM           : ".$mhs->getMHS_ID()."<br>";
        echo "NAMA          : ".$mhs->getName()."<br>";
        echo "JENIS KELAMIN : ".$mhs->getGender()."<br>";
        echo "E-mail        : ".$mhs->getEmailEdu()."<br>";
        echo "PRODI         : ".$mhs->getMHS_PRODI()."<br>";
        echo "FAKULTAS      : ".$mhs->getMHS_FAC()."<br>";
        echo "UNIVERSITAS   : ".$mhs->getUniv()."<br>";
        echo '========================================<br>';
        $i++;
    }
    // if there isn't data yet
    if ($n == 0) {
        echo '!!!No data!!!<br>';
    }
    // new line after
    echo '<br><br>';
}
if($opt == 2 || $opt == 3) {
    echo '<form action="main.php" method="post" enctype="multipart/form-data">';
        if ($opt == 2) {
            // ID
            echo '<label for="id">ID</label><br>';
            echo '<input type="text" name="id", id="id"><br>';
            // NIK
            echo '<label for="nik">NIK</label><br>';
            echo '<input type="text" name="nik", id="nik"><br>';
            // NIM
            echo '<label for="nim">NIM</label><br>';
            echo '<input type="text" name="nim", id="nim"><br>';
            // Nama
            echo '<label for="nama">Nama</label><br>';
            echo '<input type="text" name="nama" id="nama"><br>';
            // Jenis_kelamin
            echo '<label for="jenis_kelamin">Jenis Kelamin</label><br>';
            echo '<input type="text" name="jenis_kelamin" id="jenis_kelamin"><br>';
            // E-mail
            echo '<label for="email_edu">Email EDU</label><br>';
            echo '<input type="text" name="email_edu", id="email_edu"><br><br>';
            // Prodi
            echo '<label for="prodi">Program Studi</label><br>';
            echo '<input type="text" name="prodi" id="prodi"><br>';
            // Fakultas
            echo '<label for="fakultas">Fakultas</label><br>';
            echo '<input type="text" name="fakultas" id="fakultas"><br>';
            // Universitas
            echo '<label for="univ">Asal Universitas</label><br>';
            echo '<input type="text" name="univ" id="univ"><br>';
            // button
            echo '<input type="submit" name="submitInsert" value="Submit">';
            echo '<input type="submit" name="end" value="Reset">';
        }
        if($opt == 3){
            echo '<label for="id_delete">Masukkan ID mahasiswa yang ingin diubah :</label><br>';
            echo '<input type="text" name="id_delete", id="id"><br><br>';
            // button
            echo '<input type="submit" name="submitDelete" value="Submit">';
        }
    echo '</form>';
}

// Insert data
if (isset($_POST['submitInsert'])) {
    // set
    $id = $_POST["id"];
    $nik = $_POST["nik"];
    $nim = $_POST["nim"];
    $nama = $_POST["nama"];
    $jenis_kelamin = $_POST["jenis_kelamin"];
    $email_edu = $_POST["email_edu"];
    $prodi = $_POST["prodi"];
    $fakultas = $_POST["fakultas"];
    $univ = $_POST["univ"];
    // add array
    $mhs = new Mahasiswa($id, $nik, $nim, $nama, $jenis_kelamin, $email_edu, $prodi, $fakultas, $univ);
    array_push($list, $mhs);
    // notification
    echo '<br>### Data added ... ###<br>';
    echo '<br><br><br>';
}

// Delete data
if(isset($_POST['submitDelete'])) {
  $n = 0;
  $i = 0;
  foreach($list as $mhs){
    // find ID in data
    if($mhs->getID() == $_POST["id_delete"]){
      echo 'Data Berhasil Dihapus...';
      unset($list[$i]);
      // reset
      $list = array_values($list);
      $n = 1;
      break;
    } else{
      $i = $i + 1;
    }
  }  
  if($n == 0){
    echo '\n\n### ID is not found ###\n\n';
  }
}

// new session
$_SESSION["list"] = $list;

if(isset($_POST['end'])){
   session_destroy();
   header("Location: main.php");
}

?>
##deskripsi
Ini adalah program simulasi pet cafe bernama "Pet Cafes Sukma's Family" di mana user dapat berinteraksi dengan karakter rubah dan pegawai manusia. Program ini memungkinkan pengguna melihat atribut karakter, meningkatkan atribut dengan memberi "petting" pada rubah, serta menampilkan daftar rubah berdasarkan atribut loves mereka dari yang tertinggi.

##fitur program
Atribut Karakter: Lihat atribut energy dan loves dari karakter yang ada di pet cafe.
Petting Rubah: Memberi petting kepada rubah tertentu untuk meningkatkan atribut energy dan loves mereka.
Tampilkan Daftar Rubah: Menampilkan rubah berdasarkan atribut loves dari yang tertinggi ke terendah.

##struktur data
Program ini menggunakan dua struktur data utama:
struct Rubah: Untuk karakter rubah dengan atribut nama, energy, dan loves.
struct Human: Untuk karakter manusia (pegawai) dengan atribut nama, energy, dan loves.

##cara penggunaan
Jalankan program.
1. Masukkan nama, energy, dan loves untuk membuat karakter pengguna.
2. Pilih salah satu perintah berikut:
ATTR [nama]: Untuk melihat atribut pegawai tertentu.
PETTING [nama]: Untuk memberi petting pada rubah tertentu (menambah energy dan loves rubah).
SHOW FOX LOVES: Untuk menampilkan rubah berdasarkan atribut loves dari tertinggi ke terendah.

Setelah selesai, pengguna akan ditanya apakah ingin bermain lagi. Jawaban "ya" akan menjalankan simulasi lagi, sedangkan jawaban lainnya akan mengakhiri program.

##catatan
1. Program ini menggunakan metode Bubble Sort untuk mengurutkan rubah berdasarkan loves.
2. Program akan terus berjalan sesuai perintah pengguna hingga pengguna memilih untuk mengakhiri program.
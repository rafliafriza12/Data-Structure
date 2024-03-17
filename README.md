# Data-Structure
This is my data structure task repository

# Run the code
Pertama-tama yang harus dijalankan adalah file seedRandomNumber.c untuk menghasilkan nomor acak dari 1 sampai 1juta, dijalankan dengan cara di compile terlebih dahulu lalu jalankan file executablenya, file ini hanya perlu dijalankan sekali, JIKA DI DALAM REPOSITORY SAYA SUDAH ADA FILE YANG BERNAMA "data_random.txt" MAKA FILE INI TIDAK PERLU DIJALANKAN LAGI

> gcc seedRandomnumber.c -o seedRandomNumber
> ./seedRandomNumber

ketika file seedRandomNumber.c sudah dijalankan, selanjutnya menjalankan file 2208107010028_Simple_sorting.c dengan cara di compile terlebih dahulu dan menjalankan file executablenya

> gcc 2208107010028_Simple_sorting.c -o main
> ./main

# Note
=> angka acak akan tersimpan secara otomatis di file data_random.txt

=> angka yang telah tersorting akan otomatis tersimpan ketika program selesai     dijalankan

=> waktu yang ditempuh setiap sorting akan otomatis tercatat di file waktu_sorting.txt

# My function
Funsi yang saya gunakan di file seedRandomNumber.c hanya fungsi main dan fungsi seedRandomNumber, yang dimana fungsi seedRandomNumber berguna untuk menghasilkan nilai acak dan memasukkannya ke sebuah array, nilai acak yang dihasilkan pasti akan berbeda dan tidak ada yang sama, lalu fungsi main berguna untuk menjalankan program, memanggil fungsi seedRandomNumber, dan menuliskan angka acak yang sudah disimpan di array ke dalam sebuah file txt.

Fungsi yang saya gunakan di file 2208107010028_Simple_sorting.c hanya fungsi main, isi dari fungsi main yaitu, membuka file yang diperlukan, membaca file untuk memasukkan data random ke array untuk di sorting, dan mencatat waktu setiap sorting yang dilakukan
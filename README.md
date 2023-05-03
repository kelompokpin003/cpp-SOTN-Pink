Kelas yang digunakan dalam program ini adalah FinancialRatio, yang memiliki dua member variabel current_assets dan current_liabilities serta dua member fungsi current_ratio() dan quick_ratio(). Member fungsi current_ratio() digunakan untuk menghitung rasio keuangan current ratio, sedangkan quick_ratio() digunakan untuk menghitung rasio keuangan quick ratio.

Pada fungsi current_ratio(), perhitungan rasio keuangan dilakukan dengan membagi nilai member variabel current_assets dengan current_liabilities. Sedangkan pada fungsi quick_ratio(), perhitungan rasio keuangan dilakukan dengan mengurangi nilai member variabel inventory dari nilai current_assets dan kemudian membagi hasilnya dengan current_liabilities.

Variabel inventory merupakan variabel anggota pribadi (private) kelas FinancialRatio yang memiliki nilai default sebesar 5000.

Di dalam fungsi main(), sebuah objek bernama ratio1 dibuat dari kelas FinancialRatio. Objek ini kemudian diberi nilai pada member variabel current_assets dan current_liabilities menggunakan sintaks penugasan (=).

Setelah itu, fungsi current_ratio() dan quick_ratio() dipanggil untuk menghitung rasio keuangan current ratio dan quick ratio. Hasil perhitungan kemudian ditampilkan pada layar konsol menggunakan fungsi cout.

Program ini menggambarkan bagaimana penggunaan kelas, objek, dan fungsi dapat membantu kita dalam mengorganisasi dan menghitung rasio keuangan sederhana dalam bidang akuntansi

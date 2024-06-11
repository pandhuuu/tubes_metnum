#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    // Loop Pilihan
    char pilihan_awal;
    char pilihan_menu;
    while (true) {

        // Header
        cout << "=============================" << endl;
        cout << "Solusi Matematika Siswa (SMS)" << endl;
        cout << "=============================" << endl;
        
        // Daftar Pilihan
        cout << endl << "Silahkan dipilih yang ingin digunakan :" << endl;
        cout << "1. Menghitung Luas dan Keliling Persegi            " << endl;
        cout << "2. Menghitung Luas dan keliling Segitiga siku-siku " << endl;
        cout << "3. Menghitung Luas dan keliling Belah Ketupat      " << endl;
        cout << "4. Membuat Segitiga Pascal                         " << endl;
        cout << "5. Perhitungan Pecahan                             " << endl;
        cout << "6. Membuat Deret Aritmatika                        " << endl;
        cout << "7. Membuat Deret Geometri                          " << endl;
        cout << "8. Mencari Akar-akar Persamaan Kuadrat             " << endl;
        cout << "9. Mencari Matriks                                 " << endl;

        // Pilihan
        cout << endl << "Pilihan anda (1-9) [Q/q = Keluar] : ";
        cin >> pilihan_awal;

        if (pilihan_awal == 'Q' || pilihan_awal == 'q') { // Keluar Program
            break;
        }
        else if (pilihan_awal == '1' || pilihan_awal == '2' || pilihan_awal == '3' || pilihan_awal == '4' || pilihan_awal == '5' || pilihan_awal == '6' || pilihan_awal == '7' || pilihan_awal == '8' || pilihan_awal == '9') {
            switch (pilihan_awal) { 
            case '1' :
                system("cls");
                while (true) {
                    // Header
                    cout << "=============================" << endl;
                    cout << "Solusi Matematika Siswa (SMS)" << endl;
                    cout << "=============================" << endl;
                    cout << endl;

                    cout << endl << "1. Menghitung Keliling dan Luas Persegi";
                    cout << endl << endl;

                    // Isi
                    float K_1, L_1, s_1;
                    cout << "Masukan sisi : ";
                    cin >> s_1;
                    //kondisi biar ga negatif
                    if( s_1 < 0) {
                        cout << "Panjang tidak bisa negatif!";
                    }
                    else {
                    //rumus
                    L_1 = s_1 * s_1;
                    K_1 = 4 * s_1;
                    //output
                    cout << endl;
                    cout << "Luas persegi : " << s_1 << " * " << s_1 << " = " << L_1 << endl;
                    cout << "Keliling persegi : " << 4 << " * " << s_1 << " = " << K_1 << endl;
                    cout << endl;

                    for (int i = 1; i <= s_1; i++) {
                        for (int j = 1; j <= s_1; j++) {
                            cout << " *";
                        }
                        cout << endl;
                    }
                    }
                    cout << endl;   
                    // Pilihan
                    cout << "Ingin membuat lagi? [Y/y = Iya] : ";
                    cin >> pilihan_menu;

                    if (pilihan_menu == 'Y' || pilihan_menu == 'y') {
                        system("cls");
                    }
                    else {
                        system("cls");
                        return main();
                    }

                }
            case '2' :
                system("cls");
                while (true) {
                    // Header
                    cout << "=============================" << endl;
                    cout << "Solusi Matematika Siswa (SMS)" << endl;
                    cout << "=============================" << endl;
                    cout << endl;

                    cout << endl << "2. Menghitung Luas Dan Keliling Segitiga Siku-Siku";
                    cout << endl << endl;
                    // Isi
                    float k_2, a_2, T_2, A_2;
                    //input
                    cout << "Masukkan Ukuran alas segitiga : ";
                    cin >> A_2;
                    cout << "Masukkan Ukuran tinggi segitiga : ";
                    cin >> T_2;
                    cout << endl;
                    //kondisi biar ga negatif
                    if( T_2 && A_2 < 0) {
                        cout << "Panjang tidak bisa negatif!";
                    }
                    else {
                    /*rumus*/
                    a_2 = 0.5 * A_2 * T_2;
                    k_2 = sqrt(pow(A_2, 2) + pow(T_2, 2)) + A_2 + T_2;

                    /*output*/
                    cout << endl << "Hasil luas segitiga adalah : " << a_2 << endl;
                    cout << endl << "Hasil keliling segitiga adalah : " << k_2 << endl;
                    cout << endl;
                    }
                    // Pilihan
                    cout << "Ingin membuat lagi? [Y/y = Iya] : ";
                    cin >> pilihan_menu;

                    if (pilihan_menu == 'Y' || pilihan_menu == 'y') {
                        system("cls");
                    }
                    else {
                        system("cls");
                        return main();
                    }
                }
            case '3' :
                system("cls");
                while (true) {
                    // Header
                    cout << "=============================" << endl;
                    cout << "Solusi Matematika Siswa (SMS)" << endl;
                    cout << "=============================" << endl;
                    cout << endl;

                    cout << endl << "3. Menghitung Luas dan keliling Belah Ketupat";
                    cout << endl << endl;
                    // Isi
                    float d1_3, d2_3, a_3, k_3;
                    //input
                    cout << "Masukkan diagonal 1 belah ketupat : ";
                    cin >> d1_3;
                    cout << "\n";
                    cout << "Masukkan diagonal 2 belah ketupat : ";
                    cin >> d2_3;
                    //kondisi biar ga negatif
                    if(d1_3 && d2_3 < 0) {
                        cout << "Panjang tidak bisa negatif!" << endl;
                    }
                    else {
                    //rumus
                    a_3 = 0.5 * d1_3 * d2_3;
                    k_3 = 4 * sqrt(pow((0.5 * d1_3), 2) + pow((0.5 * d2_3), 2));
                    //outpur
                    cout << endl << "Hasil luas belah ketupat adalah : " << a_3 << endl;
                    cout << endl << "Hasil keliling belah ketupat adalah : " << k_3 << endl;
                    cout << endl;
                    }
                    // Pilihan
                    cout << "Ingin membuat lagi? [Y/y = Iya] : ";
                    cin >> pilihan_menu;

                    if (pilihan_menu == 'Y' || pilihan_menu == 'y') {
                        system("cls");
                    }
                    else {
                        system("cls");
                        return main();
                    }
                }
            case '4' :
                system("cls");
                while (true) {
                    // Header
                    cout << "=============================" << endl;
                    cout << "Solusi Matematika Siswa (SMS)" << endl;
                    cout << "=============================" << endl;
                    cout << endl;

                    cout << endl << "4. Membuat Segitiga Pascal";
                    cout << endl << endl;

                    // Isi
                    int pscl[100][100], n, line;

                    cout << "Masukkan jumlah kolom yang diinginkan (bilangan bulat positif): ";
                    cin >> n;
                    cout << endl;
                        for (int line = 0; line < n; line++) 
                        { 
                            for (int i = 0; i <= line; i++) 
                            { 
                            if (line == i || i == 0) 
                                pscl[line][i] = 1;  
                            else 
                                pscl[line][i] = pscl[line - 1][i - 1] +  
                                                pscl[line - 1][i]; 
                            cout << pscl[line][i] << " "; 
                            } 
                            cout << "\n"; 
                        } 
                    cout << endl;

                    // Pilihan
                    cout << "Ingin membuat lagi? [Y/y = Iya] : ";
                    cin >> pilihan_menu;

                    if (pilihan_menu == 'Y' || pilihan_menu == 'y') {
                        system("cls");
                    }
                    else {
                        system("cls");
                        return main();
                    }
                }
            case '5' :
                system("cls");
                while (true) {
                    // Header
                    cout << "=============================" << endl;
                    cout << "Solusi Matematika Siswa (SMS)" << endl;
                    cout << "=============================" << endl;
                    cout << endl;

                    cout << endl << "5. Perhitungan pecahan";
                    cout << endl << endl;

                    // Isi
                    float sbt_a, blg_a, sbt_b, blg_b, hsl_a, hsl_b;
                    char opr_5;
                    float pch_5;

                    cout << "masukan nilai penyebut pecahan pertama : ";
                    cin >> sbt_a;
                    cout << "masukan nilai pembilang pecahan pertama : ";
                    cin >> blg_a;
                    cout << "masukan nilai penyebut pecahan kedua : ";
                    cin >> sbt_b;
                    cout << "masukan nilai pembilang pecahan kedua : ";
                    cin >> blg_b;
                    cout << "operasi apa yang ingin anda lakukan? [+|-|/|*] : ";
                    cin >> opr_5;

                    if (opr_5 == '+') {
                        hsl_a = sbt_a * blg_b + sbt_b * blg_a;
                        hsl_b = blg_a * blg_b;
                        pch_5 = hsl_a / hsl_b;
                        cout << "hasil penambahan pecahan anda adalah : " << hsl_a << "/" << hsl_b << " atau " << pch_5 << endl;
                    }
                    else if (opr_5 == '-') {
                        hsl_a = sbt_a * blg_b - sbt_b * blg_a;
                        hsl_b = blg_a * blg_b;
                        pch_5 = hsl_a / hsl_b;
                        cout << "hasil pengurangan pecahan anda adalah : " << hsl_a << "/" << hsl_b << " atau " << pch_5 << endl;
                    }
                    else if (opr_5 == '/') {
                        hsl_a = sbt_a * blg_b;
                        hsl_b = sbt_b * blg_a;
                        pch_5 = hsl_a / hsl_b;
                        cout << "hasil pembagian pecahan anda adalah : " << hsl_a << "/" << hsl_b << " atau " << pch_5 << endl;
                    }
                    else if (opr_5 == '*') {
                        hsl_a = sbt_a * sbt_b;
                        hsl_b = blg_b * blg_a;
                        pch_5 = hsl_a / hsl_b;
                        cout << "hasil perkalian pecahan anda adalah : " << hsl_a << "/" << hsl_b << " atau " << pch_5 << endl;
                    }
                    else {
                        cout << "operator yang anda input tidak terdaftar";
                    };
                 
                    // Pilihan
                    cout << "Ingin membuat lagi? [Y/y = Iya] : ";
                    cin >> pilihan_menu;

                    if (pilihan_menu == 'Y' || pilihan_menu == 'y') {
                        system("cls");
                    }
                    else {
                        system("cls");
                        return main();
                    }
                }
            case '6' :
                system("cls");
                while (true) {
                    // Header
                    cout << "=============================" << endl;
                    cout << "Solusi Matematika Siswa (SMS)" << endl;
                    cout << "=============================" << endl;
                    cout << endl;

                    cout << endl << "6. Membuat Deret Aritmatika";
                    cout << endl << endl;

                    // Isi
                    // Input
                    int a_6, b_6, jumlah_6, n_6;

                    cout << "Masukkan Suku Pertama : ";
                    cin >> a_6;

                    cout << "Masukkan Beda : ";
                    cin >> b_6;

                    cout << "Masukkan Jumlah Deret : ";
                    cin >> jumlah_6;

                    cout << "Cari Suku n : ";
                    cin >> n_6;

                    cout << "\n-------------------------\n" << endl;

                    // Output
                        //Baris aritmatika
                    int x_6, un_6, sn_6;

                    sn_6 = jumlah_6 / 2 * (2 * a_6 + (jumlah_6 - 1) * b_6); //mencari deret aritmatika

                    //mencari suku ke n
                    for (x_6 = 1; x_6 <= n_6; x_6++) {
                        un_6 = a_6 + (n_6 - 1) * b_6;

                    }//mencari suku ke n

                    //print output_6
                    int y_6, output_6;

                    cout << "hasil deret aritmatika : "; //nampilin deret aritmatika
                    for (y_6 = 1; y_6 <= jumlah_6; y_6++) {
                        output_6 = a_6 + (y_6 - 1) * b_6;
                        cout << output_6 << ' ';
                    }

                    cout << endl;

                    cout << "jumlah dari deret aritmatika : " << sn_6 << endl;

                    cout << "suku ke " << n_6 << " : " << un_6 << endl;
                    cout << endl;

                    // Pilihan
                    cout << "Ingin membuat lagi? [Y/y = Iya] : ";
                    cin >> pilihan_menu;

                    if (pilihan_menu == 'Y' || pilihan_menu == 'y') {
                        system("cls");
                    }
                    else {
                        system("cls");
                        return main();
                    }
                }
            case '7' :
                system("cls");
                while (true) {
                    // Header
                    cout << "=============================" << endl;
                    cout << "Solusi Matematika Siswa (SMS)" << endl;
                    cout << "=============================" << endl;
                    cout << endl;

                    cout << endl << "7. Membuat Deret Geometri";
                    cout << endl << endl;

                    // Isi
                    int a_7, r_7, jumlah_7, n_7;

                    cout << "Masukkan Suku Pertama : ";
                    cin >> a_7;

                    cout << "Masukkan Rasio : ";
                    cin >> r_7;

                    cout << "Masukkan Jumlah Deret : ";
                    cin >> jumlah_7;

                    cout << "Cari Suku n : ";
                    cin >> n_7;

                    cout << "\n-------------------------\n" << endl;

                    int x_7, un_7, sn_7; // Output

                    if (r_7 > 1) {
                        sn_7 = a_7 * (pow(r_7, jumlah_7) - 1) / (r_7 - 1);
                    } // Menghitung jumlah deret jika r > 1
                    else {
                        sn_7 = a_7 * (1 - pow(r_7, jumlah_7)) / (1 - r_7);
                    } // Menghitung jumlah deret jika r < 1

                    for (x_7 = 1; x_7 <= n_7; x_7++) {
                        un_7 = a_7 * pow(r_7, (x_7 - 1));
                    } // Mencari suku n

                    int y_7, output_7; // Print Output

                    cout << "Hasil Deret Geometri : "; // Print Hasil deret geometri

                    for (y_7 = 1; y_7 <= jumlah_7; y_7++) {
                        output_7 = a_7 * pow(r_7, (y_7 - 1));
                        cout << output_7 << ' ';
                    } // Hasil deret geometri

                    cout << endl;

                    cout << "Jumlah Dari Deret Geometri : " << sn_7 << endl; // Print Jumlah deret geometri

                    cout << "Suku ke " << n_7 << " : " << un_7 << endl; // Print Suku n
                    cout << endl;

                    // Pilihan
                    cout << "Ingin membuat lagi? [Y/y = Iya] : ";
                    cin >> pilihan_menu;

                    if (pilihan_menu == 'Y' || pilihan_menu == 'y') {
                        system("cls");
                    }
                    else {
                        system("cls");
                        return main();
                    }
                }
            case '8' :
                system("cls");
                while (true) {
                    // Header
                    cout << "=============================" << endl;
                    cout << "Solusi Matematika Siswa (SMS)" << endl;
                    cout << "=============================" << endl;
                    cout << endl;

                    cout << endl << "8. Mencari Akar-akar Persamaan Kuadrat";
                    cout << endl << endl;

                    // Isi
                    float x1, x2, a, b, c, D, xmax, ymax;

                    cout << "Diketahui persamaan kuadrat: ax^2 + bx + c\n";
                    cout << endl;

                    //input koefisien 
                    cout << "masukkan koefisien a : ";
                    cin >> a;
                    cout << "Masukkan koefisien b : ";
                    cin >> b;
                    cout << "masukkan koefisien c : ";
                    cin >> c;
                    cout << "- - - - - - - - - - - \n";

                    //rumus diskriminan 
                    D = pow (b, 2) - 4 * a * c;

                    //rumus abc persamaan kuadrat 
                    if (D > 0)
                        {
                        x1 = (-b + sqrt (D)) / (2 * a);
                        x2 = (-b - sqrt (D)) / (2 * a);
                        xmax = -b / (2 * a);
                        ymax = a * pow (xmax, 2) + b * xmax + c;
                        cout << "persamaan kuadrat yang terbentuk adalah : " << a << "x^2 + " <<
                        b << "x + " << c << endl;
                        cout << "persamaan tersebut memiliki akar akar : " << endl;
                        cout << "x1 = " << x1 << endl;
                        cout << "x2 = " << x2 << endl;
                        cout << "titik balik parabola = (" << xmax << "," << ymax << ")" <<
                        endl;
                        cout << endl;
                        }
                    else if (D == 0)
                        {
                        x1 = (-b + sqrt (D)) / (2 * a);
                        x2 = x1;
                        xmax = -b / (2 * a);
                        ymax = a * pow (xmax, 2) + b * xmax + c;
                        cout << "persamaan kuadrat yang terbentuk adalah : " << a << "x^2 + " <<
                        b << "x + " << c << endl;
                        cout << "persamaan tersebut memiliki akar akar : " << endl;
                        cout << "x1 = " << x1 << endl;
                        cout << "x2 = " << x2 << endl;
                        cout << "titik balik parabola = (" << xmax << "," << ymax << ")" <<
                        endl;
                        cout << endl;
                        }
                    else
                        {
                        cout << "D kurang dari 0, akar D merupakan bilangan imajiner, sehingga akar-akar persamaan tidak real";
                        }

                    // Pilihan
                    cout << "Ingin membuat lagi? [Y/y = Iya] : ";
                    cin >> pilihan_menu;

                    if (pilihan_menu == 'Y' || pilihan_menu == 'y') {
                        system("cls");
                    }
                    else {
                        system("cls");
                        return main();
                    }
                }
            case '9' :
                system("cls");
                while (true) {
                    // Header
                    cout << "=============================" << endl;
                    cout << "Solusi Matematika Siswa (SMS)" << endl;
                    cout << "=============================" << endl;
                    cout << endl;

                    cout << endl << "9. Perhitungan Matriks";
                    cout << endl << endl;

                    // Isi
                    int a[10][10], b[10][10], hasil[10][10], r1, c1, r2, c2, i, j, k;
                    char opr_9;

                    cout << "Operasi apa yang ingin anda lakukan? [+|-|*] : ";
                    cin >> opr_9;
                    //penjumlahan
                    if (opr_9 == '+') {
                    cout << "Masukan baris matriks : ";
                    cin >> r1;
                    cout << "Masukan kolom matriks : ";
                    cin >> c1;
                    cout << endl << "Masukan elemen matriks pertama : " << endl;
                    for(i = 0; i < r1; ++i)
                    for(j = 0; j < c1; ++j)
                    {
                        cout << "Masukan elemen a" << i + 1 << j + 1 << " : ";
                        cin >> a[i][j];
                    }
                    cout << endl << "Masukan elemen matriks kedua : " << endl;
                    for(i = 0; i < r1; ++i)
                    for(j = 0; j < c1; ++j)
                    {
                        cout << "Masukan elemen b" << i + 1 << j + 1 << " : ";
                        cin >> b[i][j];
                    }
                    for(i = 0; i < r1; ++i)
                        for(j = 0; j < c1; ++j)
                            hasil[i][j] = a[i][j] + b[i][j];
                    //output
                    cout << endl << "Matriks pertama: " << endl;
                    for(i = 0; i < r1; ++i)
                    for(j = 0; j < c1; ++j)
                    {
                        cout << " " << a[i][j];
                        if(j == c1-1)
                            cout << endl;
                    }

                    cout << endl << "Matriks kedua: " << endl;
                    for(i = 0; i < r1; ++i)
                    for(j = 0; j < c1; ++j)
                    {
                        cout << " " << b[i][j];
                        if(j == c1-1)
                            cout << endl;
                    }

                    cout << endl << "Jumlah kedua matriks tersebut adalah : " << endl;
                    for(i = 0; i < r1; ++i)
                        for(j = 0; j < c1; ++j)
                        {
                            cout << hasil[i][j] << "  ";
                            if(j == c1 - 1)
                                cout << endl;
                        }
                    }
                    //perkalian
                    else if (opr_9 == '*') {
                    cout << "Masukan baris dan kolom matriks pertama : ";
                    cin >> r1 >> c1;
                    cout << "Masukan baris dan kolom matriks kedua : ";
                    cin >> r2 >> c2;

                    while (c1!=r2)
                    {
                        cout << "Error! baris matriks pertama tidak sama dengan kolom matriks kedua.";

                        cout << "Masukan baris dan kolom matriks pertama : ";
                        cin >> r1 >> c1;

                        cout << "Masukan baris dan kolom matriks kedua : ";
                        cin >> r2 >> c2;
                    }
                    cout << endl << "Masukan elemen matriks pertama:" << endl;
                    for(i = 0; i < r1; ++i)
                        for(j = 0; j < c1; ++j)
                        {
                            cout << "Masukan elemen a" << i + 1 << j + 1 << " : ";
                            cin >> a[i][j];
                        }
                    cout << endl << "Masukan elemen matriks kedua:" << endl;
                    for(i = 0; i < r2; ++i)
                        for(j = 0; j < c2; ++j)
                        {
                            cout << "Masukan elemen b" << i + 1 << j + 1 << " : ";
                            cin >> b[i][j];
                        }


                    for(i = 0; i < r1; ++i)
                        for(j = 0; j < c2; ++j)
                        {
                            hasil[i][j]=0;
                        }


                    for(i = 0; i < r1; ++i)
                        for(j = 0; j < c2; ++j)
                            for(k = 0; k < c1; ++k)
                            {
                                hasil[i][j] += a[i][k] * b[k][j];
                            }
                    //output
                    cout << endl << "Matriks pertama: " << endl;
                    for(i = 0; i < r1; ++i)
                    for(j = 0; j < c1; ++j)
                    {
                        cout << " " << a[i][j];
                        if(j == c1-1)
                            cout << endl;
                    }

                    cout << endl << "Matriks kedua: " << endl;
                    for(i = 0; i < r2; ++i)
                    for(j = 0; j < c2; ++j)
                    {
                        cout << " " << b[i][j];
                        if(j == c2-1)
                            cout << endl;
                    }

                    cout << endl << "Matriks hasil: " << endl;
                    for(i = 0; i < r1; ++i)
                    for(j = 0; j < c2; ++j)
                    {
                        cout << " " << hasil[i][j];
                        if(j == c2-1)
                            cout << endl;
                    }
                    }
                    //pengurangan
                    else if (opr_9 == '-') {
                    cout << "Masukan baris matriks: ";
                    cin >> r1;

                    cout << "Masukan kolom matriks: ";
                    cin >> c1;

                    cout << endl << "Masukan elemen matriks pertama: " << endl;


                    for(i = 0; i < r1; ++i)
                    for(j = 0; j < c1; ++j)
                    {
                        cout << "Masukan elemen a" << i + 1 << j + 1 << " : ";
                        cin >> a[i][j];
                    }


                    cout << endl << "Masukan elemen matriks kedua: " << endl;
                    for(i = 0; i < r1; ++i)
                    for(j = 0; j < c1; ++j)
                    {
                        cout << "Masukan elemen b" << i + 1 << j + 1 << " : ";
                        cin >> b[i][j];
                    }


                    for(i = 0; i < r1; ++i)
                        for(j = 0; j < c1; ++j)
                            hasil[i][j] = a[i][j] - b[i][j];
                    
                    cout << endl << "Matriks pertama: " << endl;
                    for(i = 0; i < r1; ++i)
                    for(j = 0; j < c1; ++j)
                    {
                        cout << " " << a[i][j];
                        if(j == c1-1)
                            cout << endl;
                    }

                    cout << endl << "Matriks kedua: " << endl;
                    for(i = 0; i < r1; ++i)
                    for(j = 0; j < c1; ++j)
                    {
                        cout << " " << b[i][j];
                        if(j == c1-1)
                            cout << endl;
                    }


                    cout << endl << "Hasil pengurangan matriks adalah: " << endl;
                    for(i = 0; i < r1; ++i)
                        for(j = 0; j < c1; ++j)
                        {
                            cout << hasil[i][j] << "  ";
                            if(j == c1 - 1)
                                cout << endl;
                        }
                    }
                    else {
                        cout << "silahkan hitung sendiri :)" << endl;
                    }
                    // Pilihan
                    cout << "Ingin membuat lagi? [Y/y = Iya] : ";
                    cin >> pilihan_menu;

                    if (pilihan_menu == 'Y' || pilihan_menu == 'y') {
                        system("cls");
                    }
                    else {
                        system("cls");
                        return main();
                    }
            }
        }
    }
    return 0;
}
}
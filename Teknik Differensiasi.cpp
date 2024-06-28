#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>
using namespace std;

// Fungsi untuk menghitung nilai y berdasarkan x dan y
double f(double x, double y) {
    return x + 2 * x * y + 3;
}

double x,y,x0,yo,h,k1,k2,k3,k4,yi,dy1,y_i,dy2,dy_avg,y_n;

double left_riemann(double a, double b, int n) {
    double xi[100000], area, total = 0;

    for (int i = 0; i <= n; i++) {
        xi[i] = b + a * i;
    }
    for (int i = 0; i < n; i++) {
        area = f(xi[i], y) * a;
        total += area;
    }
    return total;
}

double right_riemann(double a, double b, int n) {
    double xi[100000], area, total = 0;

    for (int i = 0; i <= n; i++) {
        xi[i] = b + a * i;
    }
    for (int i = 1; i <= n; i++) {
        area = f(xi[i], y) * a;
        total += area;
    }
    return total;
}

double trapezium(double a, double b, int n) {
    double xi[100000], area, total = 0;

    for (int i = 0; i <= n; i++) {
        xi[i] = b + a * i;
    }

    for (int i = 1; i < n; i++) {
        area = (f(xi[i], y) + f(xi[i - 1], y)) * a / 2;
        total += area;
    }
    return total;
}

// Fungsi utama untuk diferensiasi maju
void diferensiasiMaju(double x, double y, double h, int n) {
    // Print header tabel
    cout << setw(10) << "Iterasi" << setw(10) << "x" << setw(10) << "y" << setw(10) << "y'" << endl;

    // Lakukan iterasi sebanyak n kali
    for (int i = 0; i <= n; i++) {
        // Hitung turunan maju (y')
        double dy = f(x, y);

        // Print nilai saat ini
        cout << setw(10) << i << setw(10) << x << setw(10) << y << setw(10) << dy << endl;

        // Update nilai x dan y
        x = x + h;
        y = y + dy * h;
    }
}

// Fungsi untuk menghitung turunan menggunakan metode diferensiasi tengah
double turunan_tengah(double x, double y, double h) {
    double y_forward = f(x + h, y);
    double y_backward = f(x - h, y);
    return (y_forward - y_backward) / (2 * h);
}

// Fungsi untuk diferensiasi tengah
void diferensiasiTengah(double x, double y, double h) {
    // Hitung nilai y untuk x yang diberikan
    double nilai_y = f(x, y);

    // Hitung turunan menggunakan metode diferensiasi tengah
    double nilai_turunan = turunan_tengah(x, y, h);

    // Tampilkan hasil dalam bentuk tabel
    cout << setw(10) << "x" << setw(10) << "y" << setw(15) << "y(x)" << setw(20) << "Turunan Tengah" << endl;
    cout << setw(10) << x << setw(10) << y << setw(15) << nilai_y << setw(20) << nilai_turunan << endl;
}

// Fungsi untuk menghitung turunan menggunakan metode diferensiasi mundur
double backward_difference(double x, double y, double h) {
    return (f(x, y) - f(x - h, y)) / h;
}

// Fungsi untuk diferensiasi mundur
void diferensiasiMundur(double x, double y, double h, int n) {
    // Vektor untuk menyimpan hasil
    vector<vector<double>> results;

    // Menghitung diferensiasi mundur untuk setiap iterasi
    for (int i = 0; i < n; ++i) {
        double derivative = backward_difference(x, y, h);
        results.push_back({ x, y, derivative });

        // Update nilai x dan y
        x -= h;  // Memundurkan x dengan langkah h
        y = f(x, y);  // Menghitung nilai y baru berdasarkan persamaan
    }

    // Menampilkan hasil dalam bentuk tabel
    cout << setw(10) << "Iterasi" << setw(10) << "x" << setw(10) << "y" << setw(20) << "Turunan Mundur" << endl;
    for (int i = 0; i < results.size(); ++i) {
        cout << setw(10) << i + 1 << setw(10) << results[i][0] << setw(10) << results[i][1] << setw(20) << results[i][2] << endl;
    }
}

int main() {
    int pilihan;
    cout << "=> DIFERENSIASI <=" << endl;
    cout << endl;
    cout << "Selesaikan Persamaan berikut dengan Teknik Differensiasi" << endl;
    cout << "y = x^2 + 2xy + 3" << endl;
    cout << endl;
    cout << "Silahkan Pilih Teknik Diferensiasi" << endl;
    cout << "1. Diferensiasi Maju" << endl;
    cout << "2. Diferensiasi Tengah" << endl;
    cout << "3. Diferensiasi Mundur" << endl;
    cout << "4. Persaaan Diferensial Metode Euler" << endl;
    cout << "5. Persaaan Diferensial Metode Euler termodifikasi" << endl;
    cout << "6. Persaaan Diferensial Metode Runge Kutta" << endl;
    cout << "7. Integrasi Numerik" << endl;

    cout << endl;
    cout << "Masukkan Pilihan Anda : ";
    cin >> pilihan;

    double x, y, h;
    int n;

    switch (pilihan) {
    case 1:
        cout << endl;
        cout << "==========================" << endl;
        cout << "==DIFFERENSIASI MAJU==" << endl;
        cout << endl;
        cout << "Masukkan nilai awal x: ";
        cin >> x;
        cout << "Masukkan nilai awal y: ";
        cin >> y;
        cout << "Masukkan nilai h: ";
        cin >> h;
        cout << "Masukkan jumlah iterasi n: ";
        cin >> n;
        cout << endl;

        // Panggil fungsi untuk melakukan diferensiasi maju
        diferensiasiMaju(x, y, h, n);
        cout << endl;
        cout << "Diferensiasi Maju" << endl;
        break;

    case 2:
        cout << endl;
        cout << "==========================" << endl;
        cout << "==DIFFERENSIASI TENGAH==" << endl;
        cout << endl;
        cout << "Masukkan nilai x: ";
        cin >> x;
        cout << "Masukkan nilai y: ";
        cin >> y;
        cout << "Masukkan nilai h: ";
        cin >> h;
        cout << endl;

        // Panggil fungsi untuk melakukan diferensiasi tengah
        diferensiasiTengah(x, y, h);
        cout << endl;
        cout << "Diferensiasi Tengah" << endl;
        break;

    case 3:
        cout << endl;
        cout << "==========================" << endl;
        cout << "==DIFFERENSIASI MUNDUR==" << endl;
        cout << endl;
        cout << "Masukkan nilai x awal: ";
        cin >> x;
        cout << "Masukkan nilai y awal: ";
        cin >> y;
        cout << "Masukkan nilai h: ";
        cin >> h;
        cout << "Masukkan jumlah iterasi: ";
        cin >> n;
        cout << endl; 
        // Panggil fungsi untuk melakukan diferensiasi mundur
        diferensiasiMundur(x, y, h, n);
        cout << endl;
        cout << "Diferensiasi Mundur" << endl;
        break;

        case 4: //pilihan jika memilih 1, Penyelesaian dengan Metode Euler
                cout << "Kondisi awal untuk y: ";
                cin >> yo; //user menginput nilai y awal
                cout << "Kondisi awal untuk x: ";
                cin >> x0; //user menginput nilai x awal
                cout << "Nilai x pada saat y yang dicari: ";
                cin >> x; //user menginput nilai x pada saat y yang dicari
                cout << "Besar increment (h): ";
                cin >> h; //user menginput lebar increment
            cout << "Penyelesaian Menggunakan Metode Euler" << endl;
            cout << setw(5) << "x"<< setw(16)<< "y"<<setw(16)<<"y'"<<setw(16)<<"hy'"<<setw(16)<<"y+hy'\n"; //Membuat table untuk menampilkan hasil
            cout << "__________________________________________________________________________\n";
            yi = yo;
            while(x0<x){ //Membuat loop agar program terus berjalan dari x0 hingga x yang ditentukan berdasarkan increment yang dipilih
                y=yi+h*f(x0,yi);
                cout<< setw(5) << x0 << setw(16) << yi << setw(16) << f(x0,yi) << setw(16) << h*f(x0,yi) << setw(16) << y << "\n"; //Membuat table untuk menampilkan hasil
                yi=y;
                x0=x0+h;
            }
            cout << setw(5) << x0 << setw(16)  << yi << "\n";
            cout << "__________________________________________________________________________\n";
            cout << "Nilai y pada x = " << x << " adalah " << y << "\n\n"; //Menampilkan hasil final
            break;
        case 5: //pilihan jika memilih 2, Penyelesaian dengan Metode Euler Termodifikasi
            cout << "Kondisi awal untuk y: ";
            cin >> yo; //user menginput nilai y awal
            cout << "Kondisi awal untuk x: ";
            cin >> x0; //user menginput nilai x awal
            cout << "Nilai x pada saat y yang dicari: ";
            cin >> x; //user menginput nilai x pada saat y yang dicari
            cout << "Besar increment (h): ";
            cin >> h; //user menginput lebar increment
            cout << "Penyelesaian Menggunakan Metode Euler Termodifikasi" << endl;
            cout<< setw(5)<<"x"<<setw(16)<<"y"<<setw(16)<<"hy'"<<setw(16)<<"y_new"<<setw(16)<<"hy_new'"<<setw(16)<<"hy'avg"<<setw(16)<<"y_n+1"<<endl; //Membuat table untuk menampilkan hasil
            cout<<"--------------------------------------------------------------------------------------------------\n"; 
            while(fabs(x-x0)>0.0000001){   //Membuat loop agar program terus berjalan dari x0 hingga x yang ditentukan berdasarkan increment yang dipilih
                dy1=h*f(x0,yo);       
                y_i=yo+dy1;           
                dy2=h*f(x0+h,y_i);     
                dy_avg=(dy1+dy2)/2.0;  
                y_n=yo+dy_avg;             
                cout<< setw(5)<<x0<<setw(16)<<yo<<setw(16)<<dy1<<setw(16)<<y_i<<setw(16)<<dy2<<setw(16)<<dy_avg<<setw(16)<<y_n<<endl; //Membuat table untuk menampilkan hasil
                x0=x0+h;           
                yo=y_n;           
            }
            cout<< setw(5)<<x0<<setw(16)<<yo<<endl;
            cout << "____________________________________________________________________________________________________________\n";
            cout << "Nilai y pada x = " << x << " adalah " << yo << "\n\n"; //Menampilkan hasil final
            break;
        case 6: //pilihan jika memilih 3, Penyelesaian dengan Metode Runge Kutta
            cout << "Kondisi awal untuk y: ";
            cin >> yo; //user menginput nilai y awal
            cout << "Kondisi awal untuk x: ";
            cin >> x0; //user menginput nilai x awal
            cout << "Nilai x pada saat y yang dicari: ";
            cin >> x; //user menginput nilai x pada saat y yang dicari
            cout << "Besar increment (h): ";
            cin >> h; //user menginput lebar increment
            cout << "Penyelesaian Menggunakan Runge Kutta" << endl;
            cout << setw(5) << "x" << setw(16) << "y" << setw(16) << "k1" << setw(16) << "k2" << setw(16) << "k3" << setw(16) << "k4" << setw(16) << "K average" << "\n"; //Membuat table untuk menampilkan hasil
            while(x0<x){ //Membuat loop agar program terus berjalan dari x0 hingga x yang ditentukan berdasarkan increment yang dipilih
                k1=h*f(x0,yo);
                k2=h*f(x0+h/2.0,yo+k1/2.0);
                k3=h*f(x0+h/2.0,yo+k2/2.0);
                k4=h*f(x0+h,yo+k3);
                cout << setw(5) << x0 << setw(16) << yo << setw(16) << k1 << setw(16) << k2 << setw(16) << k3 << setw(16) << k4 << setw(16) << 1/6.0*(k1+2*k2+2*k3+k4) << "\n"; //Membuat table untuk menampilkan hasil
                y=yo+1/6.0*(k1+2*k2+2*k3+k4);
                yo=y;
                x0=x0+h;
             }
            cout << setw(5) << x0 << setw(16)  << yo << "\n";
            cout << "____________________________________________________________________________________________________________\n";
            cout << "Nilai y pada x = " << x << " adalah " << y << "\n\n"; //Menampilkan hasil final         
            break;
        case 7:
        double a, b, delta;
        cout << "+====================================================+" << endl;
        cout << "|                  Integral Riemann                  |" << endl;
        cout << "+====================================================+" << endl;
        cout << "            Masukkan batas bawah: ";
        cin >> a;
        cout << "+----------------------------------------------------+" << endl;
        cout << "            Masukkan batas atas: ";
        cin >> b;
        cout << "+----------------------------------------------------+" << endl;
        cout << "            Masukkan jumlah partisi: ";
        cin >> n;
        cout << "+====================================================+"  << endl;
        delta = (b - a) / n;
        cout << "        Hasil integral Riemann kiri: " << left_riemann(delta, a, n) << endl;
        cout << "        Hasil integral Riemann kanan: " << right_riemann(delta, a, n) << endl;
        cout << "        Hasil integral trapezoida: " << trapezium(delta, a, n) << endl;
        cout << "+====================================================+" << endl;
        cout << "\n"; 

    default:
        cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}

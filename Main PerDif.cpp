#include <iostream>
#include <cmath>
#include<cstring> 
using namespace std;

void menuPerDif() {
    int pilihan;

    cout << "Pilih Metode untuk Penyelesaian Differensiasi Numerik: " << endl;
    cout << "1. Metode Euler" << endl;
    cout << "2. Metode Euler Termodifikasi" << endl;
    cout << "3. Metode Runge Kutta" << endl;

    // Input pilihan user 
    cout << "Masukkan pilihan Anda: "; 
    cin >> pilihan; 

    // Validasi input 
    while (pilihan < 1 || pilihan > 3) { 
        cout << "Pilihan tidak valid. Masukkan kembali pilihan Anda: "; 
        cin >> pilihan; 
    } 

    switch (pilihan) {
        case 1: //Euler
            cout << "Anda memilih specific enthalpy" << endl;
            
            break;
        case 2:
            cout << "Anda memilih specific entrophy" << endl;
            strcpy(cari, "entrophy");
            break;
        case 3: //Runge Kutta
            cout << "Penyelesaian Menggunakan Runge Kutta" << endl;
            while(x0<x){
                k1=h*f(x0,y0);
                k2=h*f(x0+h/2.0,y0+k1/2.0);
                k3=h*f(x0+h/2.0,y0+k2/2.0);
                k4=h*f(x0+h,y0+k3);
                cout << x0 << setw(16) << y0 << setw(16) << k1 << setw(16) << k2 << setw(16) << k3 << setw(16) << k4 << setw(16) << 1/6.0*(k1+2*k2+2*k3+k4) << "\n";
                y=y0+1/6.0*(k1+2*k2+2*k3+k4);
                y0=y;
                x0=x0+h;
             }
            cout << x0 << "\t" << y0 << "\n";
            cout << "____________________________________________________________________________________________________________\n";
            cout << "Nilai y pada x = " << x << "adalah" << y << "\n\n";
            
            break;
    }
}

int main() {
    menuPerDif();
}

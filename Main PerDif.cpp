#include <iostream>
#include <cmath>
#include <cstring> 
#include <iomanip>
using namespace std;

//Mendefinisikan persamaan diferensial ((-2x - y + x^2y^3))
double f(double x, double y){
    return -2*x - y + pow(x, 2)*pow(y, 3);
}

double x,y,x0,yo,h,k1,k2,k3,k4,yi,dy1,y_i,dy2,dy_avg,y_n;

void menuPerDif() {
    int pilihan;
    //Menampilkan menu untuk user memilih
    cout << "Pilih Metode untuk Penyelesaian Differensiasi Numerik: " << endl;
    cout << "1. Metode Euler" << endl; 
    cout << "2. Metode Euler Termodifikasi" << endl;
    cout << "3. Metode Runge Kutta" << endl;

    // Input pilihan user 
    cout << "Masukkan pilihan Anda: "; 
    cin >> pilihan; 

    // Validasi input, hanya menerima pilihan dari menu sampai 3
    while (pilihan < 1 || pilihan > 3) {  
        cout << "Pilihan tidak valid. Masukkan kembali pilihan Anda: "; 
        cin >> pilihan; 
    }

    switch (pilihan) {
        case 1: //pilihan jika memilih 1, Penyelesaian dengan Metode Euler
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
        case 2: //pilihan jika memilih 2, Penyelesaian dengan Metode Euler Termodifikasi
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
        case 3: //pilihan jika memilih 3, Penyelesaian dengan Metode Runge Kutta
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
    }
}

int main() {
    int i;
    cout << "Kondisi awal untuk y: ";
    cin >> yo; //user menginput nilai y awal
    cout << "Kondisi awal untuk x: ";
    cin >> x0; //user menginput nilai x awal
    cout << "Nilai x pada saat y yang dicari: ";
    cin >> x; //user menginput nilai x pada saat y yang dicari
    cout << "Besar increment (h): ";
    cin >> h; //user menginput lebar increment
    menuPerDif(); //memanggil fungsi untuk memilih metode penyelesaian
}
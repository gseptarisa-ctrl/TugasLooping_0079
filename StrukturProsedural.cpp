//membuat library
#include <iostream>
using namespace std;

//variabel global
int n;          // menyimpan angka yang diinput
int pilihan;    // menyimpan pilihan menu

//fungsi cek bilangan prima
bool cekPrima(int n){
    if (n <= 1){
        return false;
    }
    int i = 2; //variabel lokal

    while (i < n){  //perulangan while
        if (n % i == 0){    //percabangan
            return false;
        }
        i++;
    }
    return true;
}

//fungsi cek bilangan fibonacci
bool cekFibonacci(int n){
    int a = 0; //variabel lokal
    int b = 1; //variabel lokal
    int c = a + b; //variabel lokal

       if (n == 0 || n == 1){
        return true;
    }
    while (c <= n){
        if (c == n){
            return true;
        }
        a = b;
        b = c;
        c = a + b;
    }

    return false;
}

//menambahkan prosedur input
void input(){
    cout << "Masukkan angka : ";
    cin >> n;
}

//prosedur hasil prima
void hasilPrima(){
    if (cekPrima(n)){
        cout << n << " adalah bilangan prima." << endl;
    } else {
        cout << n << " bukan bilangan prima." << endl;
    }
}

//prosedur hasil fibonacci
void hasilFibonacci(){
    if (cekFibonacci(n)){
        cout << n << " adalah bilangan fibonacci." << endl;
    } else {
        cout << n << " bukan bilangan fibonacci." << endl;
    }
}

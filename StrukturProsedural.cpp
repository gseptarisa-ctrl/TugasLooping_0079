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
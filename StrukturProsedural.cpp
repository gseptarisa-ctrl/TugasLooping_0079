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
    
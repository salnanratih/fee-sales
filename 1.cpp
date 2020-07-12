#include<iostream>
#include<conio.h>
using namespace std;

float fee, penjualan;

main(){
    cout << "Masukkan total penjualan :";
    cin >> penjualan;

    fee = 0.23 * penjualan;

    cout << "fee penjualan yang diperoleh : " << fee << endl;
    getch();
    return 0;
}

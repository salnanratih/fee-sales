#include<iostream>
#include<conio.h>
using namespace std;

//mendeklarasikan variabel
float fee, penjualan;

main(){
	//menampilkan perintah untuk memasukkan total penjualan
    cout << "Masukkan total penjualan :";
	//memasukkan total penjualan
    cin >> penjualan;
	
	//menghitung fee (23% dari penjualan)
    fee = 0.23 * penjualan;

	//menampilkan fee
    cout << "fee penjualan yang diperoleh : " << fee << endl;
    getch();
    return 0;
}

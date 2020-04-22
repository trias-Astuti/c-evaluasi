#include <iostream>
using namespace std;

int main() {
int nilai, bilangan, prima, hasil;
cout <<" Menentukan Bilangan Prima" <<endl;
cout <<" Masukkan Bilangan : ";
cin >> nilai;
bilangan = 2;
 	for (bilangan = 2; hasil<= nilai; bilangan ++ ){
 		prima = 0;
 	for (hasil = 2; hasil< bilangan; hasil ++ ){
 		if (bilangan % hasil == 0 ){
 			prima = 1;
		 }
	 }
	 if (prima == 0){
	 	cout <<" Bilangan Prima : "<< bilangan <<endl;
	 } else
	 cout <<" Bilangan Tidak Prima : "<< bilangan <<endl;
	 }
	 return 0;
}

 #include <iostream>
using namespace std;

int main()
{
	// deklarasi n, deret dan k;
	int n, deret_awal, deret_akhir;
	float nilai_tengah;
	int jarak, k;

	// tampilan awal dan input n;
	cout << "===program belah ketupat sederhana===\n";
	cout << "masukan panjang belah ketupat : ";
	cin >> n;
	k = n;
	//pengkondisian
	if(n%2==1){
		// loop baris
		for(int i = 1; i <= n; i++){
			
			 nilai_tengah =(n/2)+0.5;
			 if(i < nilai_tengah){
			 	//loop awal " ";
			 	deret_awal = (i*2)-1;
			 	for(int j = n; j > i; j--){
			 		cout << " ";
			 	}
			 	//loop awal "*";
			 	for(int j = 1; j <= deret_awal;j++){
			 		cout << "*";
			 	} cout << endl;

			 } else if(i == nilai_tengah){
			 	//loop untuk " ";
			 	for(int j = 1; j < nilai_tengah; j++){
			 		cout << " ";
			 	}
			 	for(int j=1; j <= n ; j++){
			 		cout << "*";
			 	} cout << endl;

			 } else if(i > nilai_tengah){
			 	jarak = k - i;
			 	deret_akhir =(jarak*2)+1;
			 	for(int j = 1; j < i; j++){
			 		cout << " ";
			 	}
			 	for(int j = 1; j <= deret_akhir; j++){
			 		cout << "*";
			 	} cout << endl;
			 }

		}

	} else {
		cout << "masukan angka genap" << endl;
	}
	
	
	return 0;
}

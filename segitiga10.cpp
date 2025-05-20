#include <iostream>
using namespace std;

int main()
{
	// deklarasi n dan deret;
	int n, k, deret;
	// rumus baris ke n = (n*2)-1;

	//tampilan awal dan input n;
	cout <<"===program segitiga sederhana===\n";
	cout << "masukan panjang segitiga : ";
	cin >> n;
	k = n;
	//loop untuk banyak baris
	for(int i = 1; i <= n; i++){
		for(int j = 1; j < i; j++){
			cout << " ";
		}
		if( i == n){
			cout << "*";
		} else {
			deret = (k*2)-1;
			for(int j = 1; j <=  deret; j++){
				cout << "*";
			}
			k--;
		}
		cout << endl;
	}
	return 0;
}

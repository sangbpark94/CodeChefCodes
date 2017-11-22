#include <iostream>

using namespace std;

int main(){
	int T;
	int A, B, C;
	cin >> T;
	
	while(T > 0){
		
		cin >> A;
		cin >> B;
		cin >> C;
		
		if(A == 0 || B == 0 || C == 0)
			cout << "NO" << endl;
			
		else if( (A + B + C) != 180)
			cout << "NO" << endl;
			
		else
			cout << "YES" << endl;
		
		T--;
	}
}

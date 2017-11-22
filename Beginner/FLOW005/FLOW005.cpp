#include <iostream>
#include <fstream>  

using namespace std;

int main() {
	
	int T;
	cin >> T;
	
	int N;
	
	while(T > 0){
		
		int count = 0;
		
		while(true){
			
			cin >> N;
			
			count += N / 100;
			
			N = N % 100;
			
			if(N == 0)
				break;
			
			count += N / 50;
			
			N = N % 50;
			
			if(N == 0)
				break;	
				
			count += N / 10;
			
			N = N % 10;
			
			if(N == 0)
				break;	
				
			count += N / 5;
			
			N = N % 5;
			
			if(N == 0)
				break;	
				
			count += N / 2;
			
			N = N % 2;
			
			if(N == 0)
				break;	
			
			count += N;
			
			N = N % 1;
			
			if(N == 0)
				break;
		}
		
		cout << count << endl;
		
		T--;
	} 
}

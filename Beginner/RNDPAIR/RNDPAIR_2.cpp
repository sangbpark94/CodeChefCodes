#include <iostream>
#include <fstream>
#include <iomanip>  

using namespace std;

int main() {
	
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
	
	int T;
	int N;
	int max = 0;
	int nextmax = 0;
	int pos;
	int numOfMax;
	
	cin >> T;
	
	while (T > 0){
		
		cin >> N;
	
		int a[1001] = {0};	
		nextmax = 0;
		max = 0;
		
		for(int i = 0; i <= N - 3; i++){
			cin >> pos;
			a[pos]++;
		}
		
		cin >> pos;
		a[pos]++;
		nextmax = pos;
		
		cin >> pos;
		a[pos]++;
		max = pos;
		
		if(max == nextmax)
			numOfMax = (a[max] * (a[max] - 1)) / 2;
		else
			numOfMax = a[nextmax];
			
		int total = (N * (N - 1)) / 2;
		double prob = ((double) numOfMax) / ((double) total);
		cout << fixed << setprecision(8) << prob << "\n";
		
		T--;
	}
}

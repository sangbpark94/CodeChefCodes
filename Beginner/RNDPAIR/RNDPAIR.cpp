#include <iostream>
#include <fstream>
#include <iomanip>  

using namespace std;

int main() {
	
	//freopen("input.txt", "r", stdin); // redirects standard input
	//freopen("output.txt", "w", stdout); // redirects standard output
	
	int numOfCases;
	cin >> numOfCases;
	while (numOfCases != 0) {
		int numOfInts;
		cin >> numOfInts;
		int * arrI = new int[numOfInts];
		for(int index = 0; index < numOfInts; index++)
			cin >> arrI[index];
		
		if(arrI[0] == arrI[numOfInts-1]){
			double prob = 1.0;
			cout << fixed << setprecision(8) << prob << "\n";
		}
		else{
			int max = arrI[numOfInts - 2];
			int numOfMax;
			int count = 2;
			int i = numOfInts - 3;
			while(arrI[i--] == max){
				count++;
			}
			if(max == arrI[numOfInts - 1])
				numOfMax = (count * (count - 1) ) / 2;
			else
				numOfMax = count - 1;
				
			int total = (numOfInts * (numOfInts - 1) ) / 2;
			
			double prob = ((double) numOfMax) / ((double) total);
			cout << fixed << setprecision(8) << prob << "\n";
		}
		delete [] arrI;
		
		numOfCases--;
	}
		
	return 0;

}

#include <iostream>
using namespace std;
template <typename T>
void insertionSort(T d[],int N){
	double temp ;
 	for(int j = 1;j < N;j++){
		for(int i = 0;i < j ;i++){
			if(d[i] < d[j] ){
				temp = d[i];
				d[i] = d[j] ;
				d[j] = temp ;		
			}

		}
	cout << "Pass " << j << ":" ;
	for(int k = 0;k < N;k++){
		cout << d[k] << " " ;
	}
	cout << "\n" ;

	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
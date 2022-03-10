#include <iostream>
using namespace std;

int binarySearch (int a[], int x, int l, int r){
	for (;;){
		int mid = (l + r) / 2;
		
		if (x > a[mid]) l = mid + 1; 
		else r = mid;
		if (x == a[mid]) return mid;
		
		if (r <= l){
			if (x > a[l]) return l + 1;
			else return l;
		}
	}
}

void insertionSort (int a[], int n){
	for (int i = 2; i <= n; i++){
		int j = i - 1;
		
		int tmp = a[i];
		int index = binarySearch (a, tmp, 1, j);
		
		for (int j = i; j > index; j--) a[j] = a[j - 1];
		a[index] = tmp;
	}
}

int n;
int a[10001];

int main(){
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	
	insertionSort(a, n);
	
	for (int i = 1; i <= n; i++) cout << a[i] << " ";
	return 0;
}

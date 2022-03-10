#include <iostream>
using namespace std;

int x, n;
int a[10001];

int main(){
	cin >> x; //gtri can tim
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	
	int i = 1, j = n;
	while (i < j){
		int tmp1 = i + (j - i) / 3;
		int tmp2 = j - (j - i) / 3;
		
		if (x <= a[tmp1]) j = tmp1;
		else if (x >= a[tmp2]) i = tmp2;
		else {
			i = tmp1 + 1;
			j = tmp2 - 1;
		}
		
		if (x == a[tmp1]){
			cout << tmp1;
			return 0;
		}
		if (x == a[tmp2]){
			cout << tmp2;
			return 0;
		}
	}
	
	cout << "khong co " << x << " trong day";
	return 0;
}

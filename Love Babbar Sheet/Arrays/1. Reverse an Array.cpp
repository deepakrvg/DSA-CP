#include <iostream>
using namespace std;

int main() {
	//code
	int tt;
	cin >> tt;
	while (tt--) {
	    int n;
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    
	    // reversing the array
	    int i = 0;
	    while (i < n / 2) {
	        int temp = a[i];
	        a[i] = a[n - i - 1];
	        a[n - i - 1] = temp;
	        i++;
	    }
	    
	    for (int i = 0; i < n; i++) {
	        cout << a[i] << " ";
	    }
	    cout << "\n";
	}
	
	return 0;
}

#include<iostream>
#include<fstream>
#include<vector>
#include<ctime>
#include<math.h>
#include<conio.h>
using namespace std;

int main() {
	int n;
	ifstream f("27B.txt");
	f >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++) f >> a[i];
	
	int ms = 0;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if (((a[i] + a[j])&1) == 0 and (a[i]%23==0 or a[j]%23==0)) ms=max(ms,a[i]+a[j]);
		}
		if(i==10000 or i%50000==0) cout << i << ' ' << clock()/60000. * (n-i)/i/2 << endl;
	}
	cout << ms << endl;
	
	return 0;
}

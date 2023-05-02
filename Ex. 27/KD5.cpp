#include<iostream>
#include<fstream>
#include<vector>
#include<ctime>
using namespace std;

int main(){
    long long n;
    ifstream f("27B_2733.txt");
    f>>n;

    vector<int> a(n);
    for (int i=0;i<n;i++) f>>a[i];

    long long c=0;
    for (int x=0; x<n;x++){
        for (int y=x+1; y<n;y++){
            if (((a[x]+a[y])%80==0) and ((a[x]>50000) or (a[y]>50000))) c+=1;
        }
        if(x==10000 or x%50000==0) cout<<x<<' '<<clock()/60000.*(n-x)/x<<endl;
    }
    cout<<c;

}

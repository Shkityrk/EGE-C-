#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"x y z w"<<endl;
    for(int(x)=0;x<=1;x++)
    for(int(y)=0;y<=1;y++)
    for(int(z)=0;z<=1;z++)
    for(int(w)=0;w<=1;w++)
    {
        if (((x<=z)==(y<=x)) and (w<=y)) {
            cout<<x<<" "<<y<<" "<<z<<" "<<w<<endl;
        }
    }
}
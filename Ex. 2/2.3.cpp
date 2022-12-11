#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"a b c d"<<endl;
    for(int(a)=0;a<=1;a++)
    for(int(b)=0;b<=1;b++)
    for(int(c)=0;c<=1;c++)
    for(int(d)=0;d<=1;d++)
    {
        if (((a or b) and c or d or a and (not b))==0){
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        }
    }
}
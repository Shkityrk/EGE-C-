#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"x y z w"<<endl;
    for (int(x)=0; x<=1;x++)
        for (int(y)=0; y<=1;y++)
            for (int(z)=0; z<=1;z++)
                for (int(w)=0; w<=1;w++){
                    if ((not w) and((not x) and (not y)and z or x and(not z))==1){
                        cout<<x<<" "<<y<<" "<<z<<" "<<w<<" "<<endl;
                    }
                }



}
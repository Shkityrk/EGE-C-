#include <iostream>
#include <conio.h>
using namespace std;

int main()
{   
    int x, L, M, i;
    for (i=1; i<10000; i++){
        x=i;
        L = 0;
        M = 0;
        while (x > 0){
            M = M + 1;
            if(x % 2 == 0){
            L = L + 1;
            }
            x = x / 2;
        }
        if (L==6 && M==7){
            cout<< "Answer: "<< i;
            break;
        }
        else{
            cout<<i<<endl;
        }
    }
    getch();
}
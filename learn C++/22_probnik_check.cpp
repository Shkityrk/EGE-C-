#include <iostream>
#include <conio.h>

using namespace std;


int main()

{

int x, L, M;

cin >> x;

L = 0;

M = 0;

while (x > 0){

M = M + 1;

if(x % 2 == 0){

L = L + 1;

}

x = x / 2;

}

cout << L << endl << M << endl;

getch();

}
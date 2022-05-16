#include<bits/stdc++.h>
#include<conio.h>

using namespace std;
int main(){
  clock_t start, end;
  start = clock();

  int x, a, b, d, w, x0;
  cout << "Hello"<< endl;
  for (x0=1; x0<1000000000; x0++){
    x=x0;
    a = 5;
    b = 13;
    w = 7; 
    while (x > 0) {
      d = x % w;
      a *= d;
      if (d < 5)
        b += d;
      x /= w;
      w = 12 - w;
      }
    if ((a==225) & (b==27)){
      
      cout << x0 << endl;
    }
}
  end = clock();
  printf("The above code block was executed in %.4f second(s)\n", ((double) end - start) / ((double) CLOCKS_PER_SEC));

  getch();
}
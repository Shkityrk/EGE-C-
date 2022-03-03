

#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s(70, '8'); 
   cout << s << endl;
   int p2 = s.find("2222");
   int p8 = s.find("8888");
   while( p2 != string::npos or p8 != string::npos ) {
      if( p2 != string::npos ) 
        s.replace( p2, 4, "88" );  
      else 
        s.replace( p8, 4, "22" );  
      p2 = s.find("2222");
      p8 = s.find("8888");
      cout << s << endl;
      }
   cout << s;
}

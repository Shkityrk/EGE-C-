#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int count =0;
    int Min;
    for (int i=6666; i<=9999; i++)
    {
        if (i%3==0 && i%6==0 and i%66!=0 and i%99!=0)
        {
            count++;
            if (count ==1)
            {
                Min=i;
            }

        }
    }
    cout<<count<< ' '<<Min<<endl;
    return 0;
    getch();

}

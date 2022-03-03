#include <iostream>

using namespace std;

int main()
{
    int count =0;
    int Min;
    for (int i=1017; i<=7937; i++)
    {
        if (i%3==0 && i%2!=0)
        {
            count++;
            if (count ==1)
            {
                Min=i;
            }

        }
    }
    cout<<count<<Min<<endl;
    return 0;
}

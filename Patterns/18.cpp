//                  *    *    *
//             *    *    *
//        *    *    *
//   *    *    *
#include<iostream>
using namespace std;
int main()
{
    int n=6;
    int x=n/2;
    int y=n;
    for(int i=0;i<n/2+1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((j>=x&&j<n)&&(j>=x&&j<=y-1))
            {
                cout<<"  *  ";
            }
            else
            {
                cout<<"     ";
            }
        }
        x--;
        y--;
        cout<<endl;
    }
}

//   *         *         *         *         *
//        *         *         *         *
//             *         *         *
//                  *         *
//                       *

#include<iostream>
using namespace std;
int main()
{
    int n=3;
    int x=0;
    int y=n*n-1;
    for(int i=0;i<=n+1;i++)
    {
        for(int j=0;j<n*n;j++)
        {
            if(j>=x&&j<=y)
            {
                if(i%2==0)
                {
                    if(j%2==0)
                    {
                        cout<<"  *  ";
                    }
                    else
                    {
                        cout<<"     ";
                    }
                }
                else
                {
                    if(j%2!=0)
                    {
                        cout<<"  *  ";
                    }
                    else
                    {
                        cout<<"     ";
                    }
                }
            }
            else
            {
                cout<<"     ";
            }
        }
        x++;
        y--;
        cout<<endl;
    }
}

//   *         *         *         *         *
//        *         *         *         *
//             *         *         *
//                  *         *
//                       *
//                  *         *
//             *         *         *
//        *         *         *         *
//   *         *         *         *         *
#include<iostream>
using namespace std;
int main()
{
    int n=9;
    int x,y;
    x=0;
    y=n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
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
        if(i<n/2)
        {
            x++;
            y--;
        }
        else
        {
            x--;
            y++;
        }
        cout<<endl;
    }
}

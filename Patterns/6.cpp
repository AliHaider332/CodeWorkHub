//                       *
//                  *    *
//             *    *    *
//        *    *    *    *
//   *    *    *    *    *
//        *    *    *    *
//             *    *    *
//                  *    *
//                       *
#include<iostream>
using namespace std;
int main()
{
    int n=9;
    int x=n/2;
    for(int i=0;i<n;i++)
    {
        if(i<x+1)
        {
            for(int j=x;j>=0;j--)
            {
                if(j<=i)
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
            for(int j=0;j<=x;j++)
            {
                if(i-x>j)
                {
                    cout<<"     ";
                }
                else
                {
                    cout<<"  *  ";
                }
            }

        }

        cout<<endl;

    }
}

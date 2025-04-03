//                       *
//                  *
//             *
//        *
//   *

#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int x=0,y=n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==x&&j==y)
            {
                cout<<"  *  ";
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

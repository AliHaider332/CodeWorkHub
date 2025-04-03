//             *
//        *    *    *       
//   *    *    *    *    *  
//        *    *    *       
//             *      
            
#include<iostream>
using namespace std;
int main()
{
    int x,y,n=5;
    x=y=n/2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=x&&j<=y)
            {
                cout<<"  *  ";
            }
            else
            {
                cout<<"     ";
            }
        }
        if(i<n/2)
        {
            x--;
            y++;
        }
        else
        {
            x++;
            y--;
        }
        cout<<endl;
    }
}

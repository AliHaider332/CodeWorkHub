//   *                   *
//        *         *
//             *
//        *         *
//   *                   *
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    x=0,y=4;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==j || (x==i&&y==j))
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

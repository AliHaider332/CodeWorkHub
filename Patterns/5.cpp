//   *    *    *    *    *    *    *
//   *    *    *    *    *    *
//   *    *    *    *    *
//   *    *    *    *
//   *    *    *
//   *    *
//   *
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<7;i++)
    {
        for(int j=6;j>=0;j--)
        {
            if(j>=i)
            {
                cout<<"  *  ";
            }
            else
            {
                cout<<"     ";
            }
        }
        cout<<endl;
    }
}

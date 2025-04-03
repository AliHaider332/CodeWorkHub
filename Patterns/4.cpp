//                                 *
//                            *    *
//                       *    *    *
//                  *    *    *    *
//             *    *    *    *    *
//        *    *    *    *    *    *
//   *    *    *    *    *    *    *
#include<iostream>
using namespace std;
int main()
{
    for(int i=6;i>=0;i--)
    {
        for(int j=0;j<7;j++)
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

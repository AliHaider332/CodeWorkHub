//   1    0    1    0    1
//   0    1    0    1    0
//   1    0    1    0    1
//   0    1    0    1    0
//   1    0    1    0    1
#include<iostream>
using namespace std;
int main()
{
    bool x=1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<"  "<<x<<"  ";
            if(x==0)
            {
                x=1;
            }
            else
            {
                x=0;
            }
        }
        cout<<endl;
    }
}

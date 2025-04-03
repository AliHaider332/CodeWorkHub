//   A    B    C    D    E
//   A    B    C    D
//   A    B    C
//   A    B
//   A
#include<iostream>
using namespace std;
int main()
{

    for(int i=4;i>=0;i--)
    {
        char x='A';
        for(int j=0;j<=i;j++)
        {
            cout<<"  "<<char(x+j)<<"  ";
        }
        cout<<endl;
    }
}

//   A
//   A    B
//   A    B    C
//   A    B    C    D
//   A    B    C    D    E
#include<iostream>
using namespace std;
int main()
{

    for(int i=0;i<5;i++)
    {
        char x='A';
        for(int j=0;j<=i;j++)
        {
            cout<<"  "<<char(x+j)<<"  ";
        }
        cout<<endl;
    }
}

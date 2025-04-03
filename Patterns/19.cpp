//    *
//        *
//   *         *
//        *
//   *

#include<iostream>
using namespace std;
int main()
{
    int k=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j<=k)
                {
                    if(k%2==0)
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
        }
        if(i<2)
        {
            k++;
        }
        else
        {
            k--;
        }

        cout<<endl;
    }
}

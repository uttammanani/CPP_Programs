#include <iostream>

using namespace std;

int main()
{
    //int i;
    double income,tax=0, netincome=0;
    char ch;

    do
    {
    cout<<"Enter Your Annual Income: ";
    cin>>income;

    if(income<0)
    {
        cout<<"Please Enter Valid Income!";
    }

    if(income<=500000 && income>=0)
    {
        tax=0;
    }

    if(income>500000 && income<=1000000)
    {
        tax=10;
    }

    if(income>1000000)
    {
        tax=20;
    }

    netincome=income-(income*(tax/100));

    cout<<"Income After Tax Is "<<netincome<<endl;

    cout<<"Do You Want To Check Again?(Y/N): ";
    cin>>ch;

    }while (ch=='Y' || ch=='y');

    return 0;
}

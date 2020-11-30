//C++ program to print memory occupied in your system by different Datatypes

#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Size Of Integer: "<<sizeof(a)<<endl;

    short int si;
    cout<<"Size Of Short Integer: "<<sizeof(si)<<endl;

    long int li;
    cout<<"Size Of Long Integer: "<<sizeof(li)<<endl;

    float b;
    cout<<"Size Of Float: "<<sizeof(b)<<endl;

    char c;
    cout<<"Size Of Character: "<<sizeof(c)<<endl;

    double d;
    cout<<"Size Of Double: "<<sizeof(d)<<endl;

    bool e;
    cout<<"Size Of Boolean: "<<sizeof(e);

    return 0;
}

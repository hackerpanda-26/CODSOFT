#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    float c;
    cout<<"enter two operands :"<<endl;
    cin>>a;
    cin>>b;
    cout<<"Enter operator: ";
    cin>>op;

    switch(op)
    {
        case '+':
        c = a+b;
        break;

        case '-':
        c = a-b;
        break;

        case '*':
        c = a*b;
        break;

        case '/':
        c = a/b;
        break;
    }
    cout<<"Result = "<<c;
    return 0;


}

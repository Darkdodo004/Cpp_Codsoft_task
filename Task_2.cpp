// Task_2:-Develop a calculator program that performs basic arithmetic
// operations such as addition, subtraction, multiplication, and
// division. Allow the user to input two numbers and choose an
// operation to perform.

#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    char c;
    cout<<"Enter Num1 :";
    cin>>num1;
    cout<<"\n Enter Num2 :";
    cin>>num2;
    cout<<"\n Enter Operator (+,-,*,/) :";
    cin>>c;
    switch (c)
    {
    case '+':
        cout<<"\n Result :"<<num1+num2;
        break;
    case '-':
        cout<<"\n Result :"<<num1-num2;
        break;
    case '*':
        cout<<"\n Result :"<<num1*num2;
        break;
    case '/':
        cout<<"\n Result :"<<num1/num2;
        break;
    
    default:
    cout<<"Invalid operator";
        break;
    }

    return 0;
}
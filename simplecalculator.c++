#include<iostream>
using namespace std;
int main()
{

    float num1,num2,result;
    char op;

    cout <<"Enter first number=> ";
    cin >> num1;

    cout << "Enter the second number=> ";
    cin >> num2;

    cout <<"Enter your Opration (+,-,*,/)=> ";
    cin >> op;
  
    switch(op){
        case '+':
        result= num1+num2;
        break;

        case '-':
        result= num1-num2;
        break;

        case '*':
        result= num1*num2;
        break;

        case '/':
        if(num2!=0){
            result=num1/num2;
        }
        else{
            cout <<"ZeroDivisonError";
        }
        default:
        cout<< "Invalid Input,Enter valid Operation";

    }
    cout<< "Result: "<<result<<endl;


}
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
# include <iostream> /*input output stream */
using namespace std;

void calculate(){
    char op;
    float num1, num2, sum, subtract, multiply, division;
    
    cout<<"Enter an operator (+,-,*,/) : " ;
    cin>>op;
       
    cout << "Enter first number : ";
    cin>>num1;
       
    cout<<"Enter second number : ";
    cin>>num2;
   
    sum=num1+num2;
    subtract=num1-num2;
    multiply=num1*num2;
    division=num1/num2;
    
    switch(op){
        case '+':
            cout<< num1 << " + " << num2 << " = " << sum << endl;
            break;
        
        case '-':
            cout<< num1 << " - " << num2 << " = " << subtract << endl;
            break;
        
        case '*':
            cout<< num1 << " * " << num2 << " = " << multiply << endl;
            break;
            
        case '/':
            cout<< num1 << " / " << num2 << " = " << division << endl;
            break;
        
        default:
            //If the operator is other than +, -, *, or /, error message is shown
            cout << "Error! Operator is not correct!" << endl;
            break;
    }
}

int main()
{   
    char choice;
    
    do{
        calculate();
        cout << "Would you like to calculate another time?\n";
        cout << "Enter Y if you would like to continue.\n";
        cin >> choice;
    }while(choice=='Y' || choice =='y');
    
    return 0;
}

 




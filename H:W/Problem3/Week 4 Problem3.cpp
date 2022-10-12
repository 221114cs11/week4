/* Write C++ program that acts as a calculator. Create a menu where users can choose the
mathematical operations: add, subtract, multiply and divide(’+’,’-’,’*’,’/’ ). Then, take two
numbers from the user input. Perform the operation and print the result. (Switch/case) */
// 221114
// Mukhammadamin Akhmadjonov

# include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

  char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /,:";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;
  
  switch(op) {

    case '+':
      cout<<num1<<"+"<<num2<<"="<<num1+num2;
          cout<<"\n";
      break;

          
    case'-':
      cout<<num1<<"-"<<num2<<"="<<num1-num2;
          cout<<"\n";
      break;

          
    case'*':
      cout<<num1<<"*"<<num2<<"="<<num1*num2;
          cout<<"\n";
      break;

          
    case'/':
      cout<<num1<<"/"<<num2<<"="<<num1/num2;
          cout<<"\n";
      break;

          
    default:

      cout<<"Error! operator is not correct";
    
      break;
       
  }
  return 0;
}


//Write a program that asks the user for her name and greets her with her name.
#include<iostream>
using namespace std;
int main()
{
  string name;
  cout << "What is your name?"<<endl;
  cin >> name;
  cout << "Hello, " << name << "!" <<endl;
  return 0;
}

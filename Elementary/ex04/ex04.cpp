//Write a program that asks the user for a number n and prints the sum of
//the numbers 1 to n.
#include<iostream>
using namespace std;
int main()
{
  int n = 0;
  int sum = 0;
  cout << "Please enter a number. We will then take your number and";
  cout << "return the sum of 1 to said number." <<endl;
  cin >> n;
  for (int i = 0; i <= n; i++)
    sum += i;
  cout << sum << endl;
}

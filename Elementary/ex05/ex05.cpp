//Modify the previous program such that only multiples of three or five
//are considered in the sum, e.g. 3,5,6,9,10,12,15 for n=17
#include<iostream>
using namespace std;
int main()
{
  int n = 0;
  int sum = 0;
  cout << "Please enter a number. We will then take your number and ";
  cout << "return the sum from 1 to said number, in multiples of 3 and 5.";
  cout << endl;
  cin >> n;
  for (int i = 0; i <= n; i++){
    if (i % 3 == 0 || i % 5 == 0)
      sum += i;
  }
  cout << sum << endl;
}

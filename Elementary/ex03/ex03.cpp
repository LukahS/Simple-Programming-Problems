//Modify the previous program such that only the users Alice and Bob are greeted with their names.
#include<iostream>
using namespace std;
int main()
{
  string name;
  cout << "Please enter your name." << endl;
  cin >> name;
  if (name == "Alice" || name == "alice" || name == "Bob" || name == "bob")
    cout << "Hello, " << name << "!" << endl;
  return 0;
}

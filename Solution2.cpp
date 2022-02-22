#include <iostream>
using namespace std;
#include <cmath>

int get_year(int age);
string odd_or_even(int year);

int main() {
  int age;
  int year;
  string result;
  cout << "Input your age in years\n";
  cin >> age;
  year = get_year(age);
  result = odd_or_even(year);
  cout << "You were born on " << year << " which is an " << result <<" year.";
  return 0;
}

int get_year(int age){
  int year;
  year = 2022 - age + 1;
  return year;
}
string odd_or_even(int year)
{   
  string result;
  if ( year % 2 == 0)
    result = "Even";
  else
    result ="Odd";
  return result;
}

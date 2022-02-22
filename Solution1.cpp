#include <iostream>
using namespace std;
#include <cmath>

int get_year(int age, int yes);
string odd_or_even(int year);

int main() {
  int age;
  int yes;
  int year;
  string result;
  cout << "Input your age in years\n";
  cin >> age;
  cout << "if your birthday has already passed input 1 else input 0\n";
  cin >> yes;
  year = get_year(age,yes);
  result = odd_or_even(year);
  cout << "You were born on " << year << " which is an " << result <<" year.";
  return 0;
}

int get_year(int age, int yes){
  int year;
  if ( yes == 0)
    year = 2022-age-1;
  else
    year = 2022-age;
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


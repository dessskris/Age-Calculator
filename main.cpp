#include <iostream>
using namespace std;

int main() {
  int c_year, c_month, c_age, b_month;
  cout << "Enter the current year then press RETURN." << endl;
  cin >> c_year;
  cout << "Enter the current month (a number from 1 to 12)." << endl;
  cin >> c_month;
  cout << "Enter your current age in years." << endl;
  cin >> c_age;
  cout << "Enter the month in which you were born (a number from 1 to 12)." << endl;
  cin >> b_month;
  
  int t_year, t_month;
  cout << "Enter the year for which you wish to know your age." << endl;
  cin >> t_year;
  cout << "Enter the month in this year." << endl;
  cin >> t_month;
  
  int b_year;
  int r_year, r_month;
  // Calculate the results depending on whether the birthday month has passed
  if (t_month >= b_month) {
    b_year = c_year - c_age;
    r_month = t_month - b_month;
    r_year = t_year - b_year;
  } else {
    b_year = c_year - c_age - 1;
    r_month = 12 - abs(t_month - b_month);
    r_year = t_year - b_year - 1;
  }
    
  cout << "Your age in " << t_month << "/" << t_year << ": ";
  cout << r_year << " years and " << r_month << " months." << endl;
  
  return 0;
}

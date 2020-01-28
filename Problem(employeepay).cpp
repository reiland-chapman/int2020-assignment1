#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int numHoursWorked = 0;
  double dollarsPerHour = 16.0;
  double grossPay = 0.0;
  double pay = 0.0;

  cout << "How many hours did you work this week?" << endl;
  cin >> numHoursWorked;

  // Calculate regular gross pay and overtime
  if (numHoursWorked > 40) {
    int overtimeHours = numHoursWorked-40;
    grossPay = (dollarsPerHour*40)+(dollarsPerHour*1.5*overtimeHours);
    cout << endl << "You worked " << overtimeHours << " hours of overtime!" << endl;
  }
  else {
    grossPay = dollarsPerHour*numHoursWorked;
  }

  cout << endl << "Gross pay is $" << grossPay << endl << endl;

  pay = grossPay;

  // 6% is withheld for Social Security tax
  pay = pay - grossPay*0.06;
  cout << "$" << grossPay*0.06 << " is withheld for Social Security tax." << endl;
  cout << "Pay after deduction: $" << pay << endl << endl;

  // 14% is withheld for federal income tax
  pay = pay - grossPay*0.14;
  cout << "$" << grossPay*0.14 << " is withheld for federal income tax." << endl;
  cout << "Pay after deduction: $" << pay << endl << endl;

  // 5% is withheld for state income tax
  pay = pay - grossPay*0.05;
  cout << "$" << grossPay*0.05 << " is withheld for state income tax." << endl;
  cout << "Pay after deduction: $" << pay << endl << endl;

  // $10 per week is withheld for medical insurance
  pay = pay - 10;
  cout << "$10 is withheld for medical insurance." << endl;
  cout << "Pay after deduction: $" << pay << endl << endl;

  cout << "Net take-home pay for the week: $" << pay << endl << endl;

  return 0;
}

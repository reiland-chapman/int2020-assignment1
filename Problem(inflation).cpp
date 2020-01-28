#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  double currentItemCost = 0.0;
  int numOfYears = 0;
  double rateOfInflation = 0.0;

  cout << "What is the cost of the item?" << endl << "$";
  cin >> currentItemCost;

  cout << "How many years from now will the item be purchased?" << endl;
  cin >> numOfYears;

  cout << "What is the rate of inflation?" << endl;
  cin >> rateOfInflation;
  rateOfInflation = rateOfInflation/100;

  currentItemCost = currentItemCost + (currentItemCost * rateOfInflation * numOfYears);

  cout << "Item costs $" << currentItemCost << endl;
  return 0;
}

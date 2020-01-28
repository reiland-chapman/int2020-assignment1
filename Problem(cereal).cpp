#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  double metricTonInOunces = 35273.92;
  int ounces;
  double metricTonOutput = 0.0;
  double numBoxes = 0.0;

  cout << "Enter the weight of a package of breakfast cereal in ounces" << endl;

  cin >> ounces;
  metricTonOutput = ounces/metricTonInOunces;
  numBoxes = metricTonInOunces/ounces;

  cout << "There are " << metricTonOutput << " metric tons in " << ounces << " ounces" << endl;
  cout << "it would take " << numBoxes << " boxes to yield one metric ton of cereal." << endl;

  return 0;
}

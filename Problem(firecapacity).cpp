#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int roomCap;
  int numAttend;

  cout << "What is the maximum room capacity?" << endl;
  cin >> roomCap;

  cout << "How many people are attending the meeting?" << endl;
  cin >> numAttend;

  if (numAttend <= roomCap) {
    cout << "It is legal to hold the meeting." << endl;
    cout << roomCap-numAttend << " additional people may attend. " << endl;
  }
  else {
    cout << "The meeting cannot be held as planned due to fire regulations." << endl;
    cout << numAttend-roomCap << " people must be excluded to meet fire regulations." << endl;
  }

  return 0;
}

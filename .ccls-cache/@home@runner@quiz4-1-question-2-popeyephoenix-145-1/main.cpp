#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double weight, dis, tcharge;
  double rate1 = 1.10, rate2 = 2.20, rate3 = 3.70, rate4 = 4.80;

  
  cout << "Weight of package?: ";
  cin >> weight;
  cout << "Distance it needs to be shipped?: ";
  cin >> dis;

  if ((weight < 0) || (weight > 20)) {
    cout << "Unacceptable package weight.\n";
    return (0);
    }

  if ((dis < 10) || (dis > 3000)) {
    cout << "Unacceptable shipping distance.\n";
    return (0);
    }

if (weight <= 2) {
    tcharge = (dis / 500.00) * rate1;
    cout << setprecision(2) << fixed;
    cout << "Total price: " << tcharge;
  return (0);
  }

  else if ((weight > 2) && (weight <= 6)) {
    tcharge = (dis / 500.00) * rate2;
    cout << setprecision(2) << fixed;
    cout << "Total price: " << tcharge;
  return (0);
  }

  else if ((weight > 6) && (weight <= 10)) {
    tcharge = (dis / 500.00) * rate3;
    cout << setprecision(2) << fixed;
    cout << "Total price: " << tcharge;
  return (0);
  }

  else if ((weight > 10) && (weight < 20)) {
    tcharge = (dis / 500.00) * rate4;
    cout << setprecision(2) << fixed;
    cout << "Total price: " << tcharge;
  return (0);
  }

else {
  cout << "INVALID.\n";
}
    
}
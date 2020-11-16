#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main() {
  long double x, z;
  string q;
  cout << "AT Calculator Super\nEnter the code mathematical operation to be performed. For a list of all them along with their meanings, please type \"IDK\".\n";
  ant:
  getline(cin, q);
  if (q == "IDK") {
    cout << "Add\tAddition\nMinus\tSubtraction\nProd\tMultiplication\nDiv\tDivision\nHypot\tHypotenuse\nPow\tExponent\nRt\tRoot\nLog\tLogarithm\nSin\tSine\nCos\tCosine\nTan\tTangent\nAtan\tInverse Tangent\nPi\tPi\nE\tNapier's Constant(also called Euler's Number)\nPhi\tGolden Ratio\nNow enter your mathematical operation code.\n";
    goto ant;
  }
  else if ((q == "Add")||(q == "Subtract")||(q == "Prod")||(q == "Div")||(q == "Hypot")||(q == "Pow")||(q == "Rt")||(q == "Log")) {
    long double y;
    cout << "Enter first number.\n";
    cin >> x;
    cout << "Enter second number.\n";
    cin << y;
    if (q == "add") {
      z = x + y;
    }
  }
  getch();
  return 0;
}

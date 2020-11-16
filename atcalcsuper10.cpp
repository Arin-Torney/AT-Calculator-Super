#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main() {
  long double x, y, z;
  string q;
  cout << "AT Calculator Super\nEnter which mathematical operation is to be performed. For a list of all, please type \"IDK\".\n";
  ant:
  getline(cin, q);
  if (q == "IDK") {
    cout << "Add\tAddition\nMinus\tSubtraction\nProd\tMultiplication\nDiv\tDivision\nHypot\tHypotenuse\nPow\tExponent\nRt\tRoot\nLog\tLogarithm\nSin\tSine\nCos\tCosine\nTan\tTangent\nAtan\tInverse Tangent\nPi\tPi\nE\tNapier's Constant(also called Euler's Number)\nPhi\tGolden Ratio\nNow enter your mathematical operation code.\n";
    goto ant;
  }
  getch();
  return 0;
}

#include <iostream>
#include <string>
#include <cmath>
#include <conio.h>
using namespace std;

int error() {
  string f;
  cout << "Wrong CODE!!! Enter \"a\" to reenter.";
  cin >> f;
  cout << "\n\n";
  return (f == "a") ? 5 : 4;
}

int main() {
  long double x, z;
  string q, p;
  my:
  cout << "AT Calculator Super\nEnter the code mathematical operation to be performed or mathematical constant to be displayed. For a list of all them along with their meanings, please type \"IDK\".\n";
  ant:
  getline(cin, q);
  if (q == "IDK") {
    cout << "Add\tAddition\nMinus\tSubtraction\nProd\tMultiplication\nDiv\tDivision\nHypot\tHypotenuse\nPow\tExponent\nRt\tRoot\nLog\tLogarithm\nSin\tSine\nCos\tCosine\nTan\tTangent\nAtan\tInverse Tangent\nPi\tPi\nEn\tNapier's Constant(also called Euler's Number)\nPhi\tGolden Ratio\nNow enter your mathematical operation or constant value code.\n";
    goto ant;
  }
  else if ((q == "Add")||(q == "Subtract")||(q == "Prod")||(q == "Div")||(q == "Hypot")||(q == "Pow")||(q == "Rt")||(q == "Log")) {
    long double y;
    cout << "Enter first number.(decimals are allowed as input)\n";
    cin >> x;
    cout << "Enter second number.\n";
    cin >> y;
    if (q == "Add") {
      z = x + y;
    }
    else if (q == "Minus") {
      z = x - y;
    }
    else if (q == "Prod") {
      z = x * y;
    }
    else if (q == "Div") {
      z = x / y;
    }
    else if (q == "Hypot") {
      z = hypot(x, y);
    }
    else if (q == "Pow") {
      z = pow(x, y);
    }
    else if (q == "Rt") {
      long double s;
      s = 1 / y;
      z = pow(x, s);
    }
    else if (q == "Log") {
      z = log(y) / log(x);
    }
  }
  else if((q == "Sin")||(q == "Cos")||(q == "Tan")||(q == "Atan")) {
    cout << "Enter one number.(decimals are allowed as input)";
    cin >> x;
    if (q == "Sin") {
      z = sin(x);
    }
    else if (q == "Cos") {
      z = cos(x);
    }
    else if (q == "Tan") {
      z = tan(x);
    }
    else if (q == "Atan") {
      z = atan(x);
    }
  }
  else if ((q == "Pi")||(q == "En")||(q == "Phi")) {
    if (q == "Pi") {
      z = M_PI; //3.14159265358979323846264338327950288419716939937510582097494;
    }
    else if (q == "En") {
      z = exp(1);
    }
    else if (q == "Phi") {
      z = (1 + pow(5, 0.5)) / 2;
    }
  }
  else {
    int b;
    here:
    b = error();
    if (b == 5) {
      goto my;
    }
    else {
      string h;
      cout << "Do you really want to quit\? If yes, then enter \"a\".\n";
      cin >> h;
      if (h == "a") {
        goto here;
      }
      else {
        goto real;
      }
    }
  }
  cout << "Answer is : " << z << endl << "\n\n";
  cout << "Need to calculate anything else? Enter \"b\" if you want to calculate.\n";
  cin >> p;
  goto my;
  getch();
  real:
  return 0;
}

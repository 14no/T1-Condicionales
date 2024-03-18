
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
  cin >> s1 >> s2 >> s3;
  string min = s1;
  if (s2 < min) {
    min = s2;
  } if (s3 < min) {
      min = s3;
  }
  cout << min;
}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
  double arg = B * B - 4 * A * C;
  double div = 2 * A;
  if (arg > 0 && A != 0) {
    double sarg = sqrt (arg);
    double r1 = (-B + sarg) / div;
    double r2 = (-B - sarg) / div;
    cout << r1 << " " << r2 << endl;
  } else if (arg == 0 && A != 0) {
    double sarg = sqrt (arg) 
    double r1 = (-B + sarg) / div;
    cout << r1 << endl;
  } else if (A == 0 && B != 0) {
    cout << (-1 * (C))/ B << endl;
  } else if (A != 0 && B == 0) {
      cout<< sqrt (C/A) <<endl;
  } else {
        cout<<"";
  }
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
  cin >> a >> b;
  if (b == 0) {
    cout << "Impossible" << endl;
  } else {
    int div = a / b;
    cout << div << endl;
  }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
  cin >> n >> a >> b >> x >> y;
  if(a < b) {
    if (n > b) {
      cout << n - ((y * n) / 100) << endl;
    } else if(n > a) {
      cout << n - ((x * n) / 100) << endl;
    } else {
      cout << n << endl;
    }  
  }
}


void exercise_5(char character) {
  // TODO: YOUR CODE HERE
  cin >> character;
  if (65 <= character && character <= 90) {
    cout << "upper-case alphabet" << endl;
  } else if (97 <= character && character <= 122) {
    cout << "lower-case alphabet" << endl;
  } else {
    cout << "not an alphabet" << endl;
  }
}


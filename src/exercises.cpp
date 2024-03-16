
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
  cin >> A >> B >> C;
  double arg = B * B - 4 * A * C;
  double div = 2 * A;
  if (arg >= 0 && A != 0 && B != 0) {
    double sarg = sqrt(arg);
    double r1 = (-B + sarg) / div;
    double r2 = (-B - sarg) / div;
    cout << r1 << r2;
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

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
  cin >> number;
  switch (number){
    case 1:
    cout << "Monday" << endl;
    break;
    case 2:
    cout << "Tuesday" << endl;
    break;
    case 3:
    cout << "Wednesday" << endl;
    break;
    case 1:
    cout << "Thursday" << endl;
    break;
    case 1:
    cout << "Friday" << endl;
    break;
    case 1:
    cout << "Saturday" << endl;
    break;
    case 1:
    cout << "Sunday" << endl;
    break;
    default;
    cout << "invalid input" << endl;
    break;
  }
  
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  cin >> r;
  if (r < 0){
    cout << "Error: Radius cannot be negative." << endl;
  } else {
    cout << 4 * 3, 14 * r * r << endl;
  }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
  
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
   cin >> s1 >> s2 >> s3 >> s4 >> s5;
    char w1 = s1[0];
    char w2 = s2[0];
    char w3 = s3[0];
    char w4 = s4[0];
    char w5 = s5[0];
    cout << w1 << w2 << w3 << w4 << w5 << endl;
    
    if (w1 == w5) {
        cout << "Hemos encontrado algo!";
    } else {
        cout << "Aun sin suerte";
    }
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  cin >> a >> b;
  if (a < 0 || b < 0){
    cout << 0;
  } else {
    int sum = a + b;
    string s = to_string(sum);
    int lenght = s.size();
    int result = sum * lenght;
    cout << result;
  }
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  cin >> number;
  string si = "Se encontro Fibonacci";
  string no = "Esto no es de Fibonacci";
  if (number == 11235813) {
    cout << si;
  } else {
    cout << no;
  }
  return no;
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE

  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}
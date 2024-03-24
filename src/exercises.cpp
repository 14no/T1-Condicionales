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
  double arg, div, sarg;
  arg = B * B - 4 * A * C;
  sarg = sqrt(arg);
  div = 2 * A;
    
  if (A == 0 && B != 0) {
    cout << ((-1 * C) / B) << endl;
  } else if (B == 0 && A == 0) {
  } else if (arg > 0 && C != 0) {
    double r1 = (-B + sarg) / div;
    double r2 = (-B - sarg) / div;
    cout << r1 << " " << r2 << endl;
  } else if (arg == 0 && C != 0) {
    double r1 = (-B + sarg) / div;
    cout << r1 << endl;
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
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  if (r >= 0) {
    cout << 4 * 3.14 * r * r << endl;
  } else if (r < 0) {
    cout << "Error: Radius cannot be negative." << endl;
  }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  cout << s1[0] << s2[0] << s3[0] << s4[0] << s5[0] << endl;
  if (s1[0] == s5[0]) {
    return "Hemos encontrado algo!";
  } else {
    return "Aun sin suerte";
  }
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  int result;
  if (a < 0 || b < 0) {
    result = 0;
  } else {
    int sum = a + b;
    string s = to_string(sum);
    int digits = s.size();
    result = sum * digits;
  }
  return result;
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  string msg;
  if (number == 11235813) { 
    msg = "Se encontro a Fibonacci";
  } else {
    msg = "Esto no es de Fibonacci";
  }
  return msg;
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  if (age >= 18 && years_of_experience >= 5) {
    return "Senior project manager";
  } else if(age >= 18 && years_of_experience >= 3) {
    return "Project manager";
  } else if(age >= 18) {
    return "Project coordinator";
  } else {
    return "Not eligible"; 
  }
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  if (number_of_docs == 0) {
    return "No se encontraron documentos";
  } else if (number_of_docs == 1) {
    return "Se encontro un documento";
  } else if (number_of_docs >= 2) {
    return to_string(number_of_docs)+" documentos encontrados"s;
  } 
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}
  
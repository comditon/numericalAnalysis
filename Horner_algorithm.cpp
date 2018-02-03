/*
 * This program caculate a polynomial a_n*x^n + ... + a_0 using Horner`s algorithm (nested multiplication).
 */
#include <iostream>

using namespace std;

double polynomial[6] = {1.0,2.0, 1.231, 1.222, 5.222, 5.3}; //polynomial[i] indicate a_i

double calc_polynomial(double x);

int main(void){
  cout << calc_polynomial(3.0) << endl;
  return 0;
}

double calc_polynomial(double x){

  int start = sizeof(polynomial) / sizeof(double) - 1;
  double result = polynomial[start];
  start--;

  for(int i = start; i >= 0; i--){
    result *= x;
    result += polynomial[i];
  }
  
  return result;
}

/*
const in cpp
http://people.cs.aau.dk/~normark/ap/basic-facilities-slide-const-reference.html
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

typedef int T;

const T& f(double d){
//   double e = 2 * d;
//   return e;                      // Compiler warning:
                                 // returning reference to temporary
// d = 9.5;
return d;
}

int main(){
  double expression = 5.3;

  const T &var = f(expression);  
                                 
  cout << var << endl;           // ??
}
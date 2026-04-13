#include "myMath.h"

int main() {
  // exponents used by powerAll()
  int intExp = 3;
  int doubleExp = 2;
  
  // input arrays
  int intArr[5] = {1, -2, 3, 4, -5};
  double doubleArr[3] = {1.414, -1.732, 2.236};

  // create objects from the class template
  MathUtility<int> obj1(intArr, 5); // T --> int
  MathUtility<double> obj2(doubleArr, 3); // T --> double

  // call member functions of MathUtility
  cout << "== Integer object == " << endl;
  cout << "Original: ";
  obj1.display();

  obj1.absoluteAll();
  cout << "After absolute: ";
  obj1.display();

  obj1.powerAll(intExp);
  cout << "After power: ";
  obj1.display();
  cout << endl;
  
  cout << "== Double object == " << endl;
  cout << "Original: ";
  obj2.display();

  obj2.absoluteAll();
  cout << "After absolute: ";
  obj2.display();

  obj2.powerAll(doubleExp);
  cout << "After power: ";
  obj2.display();

  return 0;
}

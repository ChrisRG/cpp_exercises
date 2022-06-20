#include <iostream>
using std::cout;
using std::endl;

class Blah {
  public:
    void Func() { cout << "Non const" << endl; }
    void Func() const { cout << "Const" << endl; }
};

int main () {
  Blah blah;
  blah.Func();

  const Blah& blah_ref = blah;
  blah_ref.Func();
  return 0;
}

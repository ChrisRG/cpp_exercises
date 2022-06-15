#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  const int kIterCount = 10;

  vector<string> vec = {"Hello", "World"};

  for (const auto &c : vec.front()) {
    cout << c << endl;
  }
}

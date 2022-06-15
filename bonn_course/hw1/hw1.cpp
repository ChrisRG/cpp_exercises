#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char const* argv[]) {
  srand(time(nullptr));
  int range = 99 - 1 + 1;
  int rand_num = rand() % range + 1;
  int guess = 0;
  cout << "Guess a number:" << endl; 
  while (guess != rand_num) {
    cin >> guess;
    if (guess < rand_num) {
      cout << "Too low!" << endl;
    } else if (guess > rand_num) {
      cout << "Too high!" << endl;
    } else {
      cout << "Correct!" << endl;
    }
  }
}

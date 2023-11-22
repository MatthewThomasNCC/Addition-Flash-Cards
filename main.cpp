#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  int num1, num2, userAnswer;
  int numOfCorrect = 0; 
  int numOfIncorrect = 0;
  int i = 1;
  bool finished = false;
  srand(time(0));


  while (!finished) {
    num1 = (rand() % 12) + 1;
    num2 = (rand() % 12) + 1;
    cout << "Problem #" << i << ": " << num1 << " + " << num2 << " = " << endl;
    cin >> userAnswer;
    i++; 
    
    if (userAnswer != (num1 + num2)) {
      cout << "  Incorrect. The answer is " << num1 + num2 << "." << endl;
      numOfIncorrect++;
    } else numOfCorrect++;
    if (numOfCorrect == 7) {
      cout << "Congratulations! You passed!";
      finished = true;
    } else if (numOfIncorrect == 4) {
      cout << "Sorry. You failed.";
      finished = true;
    } else finished = false;
  }
  return 0;
}

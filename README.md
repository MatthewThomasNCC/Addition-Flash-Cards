# Addition-Flash-Cards

Remember the old flash cards for arithmetic from your elementary school days? If not, perhaps you instructor is just showing his age. In any case, a flash card would be printed on one side with a simple arithmetic problem, such as "3 + 4". The student was to respond with the answer. The answer was printed on the back for the teacher's benefit.

![Flash Cards](assets/flash-cards.png)

Write a program that generates up to 10 simple addition problems. Each problem will be the addition of two random numbers between 1 and 12 inclusive. The problem should be presented to the user, who will then enter a response. In the event of an incorrect response, the program should issue a message and give the expected correct response. If a correct answer is given, just move on to the next problem.

Assume that your user is an elementary school student who is being tested on their addition skills. In order to pass the test, they need to correctly solve 7 out of a possible 10 problems. This means that your program should present the user with random problems until either 7 are answered correctly or 4 are answered incorrectly, after which they will be told if they passed or failed.

Please see the two sample runs below. Your output and responses should be formatted as shown in the samples.

There are no test cases provided for this assignment as the problems are randomly generated so actual output will vary.

## Sample Run #1

```
Problem #1: 5 + 3 = 8
Problem #2: 8 + 4 = 12
Problem #3: 12 + 3 = 3
  Incorrect. The answer is 15.
Problem #4: 11 + 5 = 16
Problem #5: 1 + 8 = 9
Problem #6: 2 + 10 = 12
Problem #7: 7 + 10 = 17
Problem #8: 6 + 11 = 17
Congratulations! You passed!
```

User responses appear to the right of the equal sign.

## Sample Run #2

```
Problem #1: 8 + 3 = 11
Problem #2: 6 + 2 = 8
Problem #3: 1 + 12 = 14
  Incorrect. The answer is 13.
Problem #4: 9 + 4 = 14
  Incorrect. The answer is 13.
Problem #5: 4 + 6 = 10
Problem #6: 8 + 2 = 10
Problem #7: 4 + 2 = 7
  Incorrect. The answer is 6.
Problem #8: 8 + 2 = 10
Problem #9: 3 + 8 = 12
  Incorrect. The answer is 11.
Sorry. You failed.
```

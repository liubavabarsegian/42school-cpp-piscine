# CPP Module 01
## Evaluation
### ex00
*	The `newZombie.cpp`, `randomChump.cpp` files are missing. (-5 points)

Final Mark: 5/10
### ex01
Final Mark: 15/15
### ex02
Final Mark: 15/15
### ex03
*	Your header guards for `Human`s are defined incorrectly. Means there's a possibility to include the definitions of the classes more than once which will result in a compilation error. (-5 points)

Final Mark: 15/20
### ex04
*	Your checking if the word corresponds to `s1` is flawed (-10 points): when a file with the following content is passed,
```
Isaa
```
And, the program is run with "Isaac" and "Magdalene" as 2nd and 3rd arguments, the content of the produced file is:
```
Magdalene
```
Final Mark: 10/20
### ex05
Nicely done!
Final Mark: 10/10
### ex06
*	You must've used a switch which allows an elegant solution with its logics of using the `default` and `break` keywords. (-5 points)
Final Mark: 5/10
## Final Grade
# __75/100__
Note: Passing grades start from 80/100.
## Notes
*	Sometimes you define destructors in the header file which is prohibited.
*	Please take into account the feedback on your getters from CPP00 next time.
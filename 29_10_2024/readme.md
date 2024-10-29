## Question for 29/10/2024

### Q-> Write a c program to replace 0 and 1 in a number and display the new number.

### Filename:
- `Q.c`

### Variable declaration:
- n : for taking user number from the user.
- new_n(intially 0) : for storing the number after replacing 0 and 1.
- place(initaially 1) : it stores the place of the digit while checking each digit. For example: one's place -> 1, ten's place -> 10, etc.
- digit(initialized under while loop) : for accessing each digit of the number. 

### Logic:
1. The program reads an integer from the user.
2. It processes each digit of the number(using while loop):
   - If a digit is `0`, it is replaced with `1`.
   - If a digit is `1`, it is replaced with `0`.
3. The modified number is formed by replacing all `0` and `1` digits with their corresponding values.
4. Finally, the new number is displayed.


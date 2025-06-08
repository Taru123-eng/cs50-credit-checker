# cs50-credit-checker

A simple C program that checks the validity of a credit card number using **Luhn’s Algorithm**.  
Built as part of the [CS50x](https://cs50.harvard.edu/x/) course offered by Harvard University.

##  Overview

This project takes a credit card number as input and determines:
- Whether it is **valid** based on Luhn’s Algorithm.
- The **type** of card: `AMEX`, `MASTERCARD`, `VISA`, or `INVALID`.

##  What is Luhn's Algorithm?

Luhn’s Algorithm is a checksum formula used to validate various identification numbers, especially credit card numbers.

The steps are:
1. Starting from the second-last digit, double every other digit.
2. If doubling results in a two-digit number, add the digits of that product.
3. Sum all the digits (both modified and unmodified).
4. If the total ends in 0, the card number is valid.

##  Sample Output

Number: 378282246310005
AMEX

Number: 4111111111111111
VISA

Number: 1234567890
INVALID


##  How to Run

1. **Compile the code**: make credit
2. **Run the programme**: ./credit
3. Enter a credit card no. when prompted

credit.c: Main source code file containing the credit checker logic.

Created by Taru123-eng as part of the CS50 problem set.



# Seive-Of-Erastosthenes
Three different types of arrays to demonstrate the classic Seive of Erastosthenes program, which is used to find out prime number below a number N.
<br>
_This is just an excuse to implement a bit array in C._

## About the Seive of Erastosthenes method of finding primes
This method basically works by eliminating possible prime numbers by seeing if they are the multiples of already processed numbers. In each pass through the array, multiples of the initial number are changed to 0.

## The three ways of implementation demonstrated here
- **Integer Array**: A simple int array is used to hold either 1 or 0 (1 indicating that it is prime).
- **Character Array**: The same as above, with the slight difference that each element now holds either '1' or '0' (chars). Just this simple change of data type means that the array now occupies only 1/4 of the space the int array occupied!
- **Bit Array**: Each int in C contains 32 bits, so using an int array instead of a bit array wastes _31/32 (!)_ of the space, which is way to significant to be ignored. Since the array only needs to store either a 0 or a 1, using a bit array is the most viable option here. Bitwise operators are used to define macros which set, clear and test the bit at the kth position.

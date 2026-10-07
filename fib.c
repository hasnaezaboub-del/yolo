
A contribution by User123
 Approved by Cakeisalie5,StepBack13andSflubaduba
 	Goal
The Fibonacci sequence (0, 1, 1, 2, 3, 5, 8, 13, 21, ...) is a famous sequence where each number (other than the first two) is the sum of the two preceding ones. Computing the nᵀᴴ (0-indexed) number of this sequence can be done with a recursive function fib(), where fib(0) = 0, fib(1) = fib(2) = 1, fib(3) = 2, etc. The pseudocode for fib() can be written as follows:

function fib(n) {
    if n = 0 or n = 1 then return n
    else return fib(n-1) + fib(n-2)
}

Whenever n > 1, a call to fib(n) recursively calls fib(n-1) and fib(n-2). Those calls recursively call fib() in the same way until reaching fib(0) or fib(1), which return immediately.

Given the value of n, how many calls to fib() does it take to compute the nᵀᴴ Fibonacci number? As an example, when n = 4, there are 9 calls to fib() in total:

                fib(4)
               /      \
         fib(3)        fib(2)
        /     \       /      \
    fib(2)  fib(1) fib(1)   fib(0)
   /      \
fib(1)   fib(0)
Input
Line 1: A single non-negative integer n.
Output
Line 1: The number of fib() calls made to compute the nᵀᴴ Fibonacci number, including the initial / top-most call.
Constraints
0 ≤ n ≤ 50
1 ≤ number of fib() calls made < 50,000,000,000
Example
Input
4
Output
9

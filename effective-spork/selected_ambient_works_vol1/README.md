Halloumi Boxes - Greedy
[text](https://codeforces.com/problemset/problem/1903/A)
reversing of length 2 is the same as swapping
to sort an element, we must swap elements
if k >= 2, there is always a way to sort the array

Line Trip - Greedy on Distance
[text](https://codeforces.com/problemset/problem/1901/A)
let V as the amount of required fuel
V must met a1 <= V, a2-a1 <= V,...,an-an-1 <= V, 2(x-an) V
x-an must be multplied by 2, because there is no gas station at x,
and we have to go back again from x to an
the answer is the max diff from {a1 <= V, a2-a1 <= V,...,an-an-1 <= V, 2(x-an)}

Cover in Water - Greedy String Observations
[text](https://codeforces.com/problemset/problem/1900/A)
if there exist ai, such that ai-1 == '.' ai == '.' ai+1 == '.' then
the answer is 2, because the rest element can be filled from ai
otherwise its the frequency of '.'

Number Game - Greedy
[text](https://codeforces.com/problemset/problem/1899/A)
optimally vonya will try to make the integer divisible by 3 after her turn
optimally vova will try to make the integer not divisible by 3 after her turn
if n is divisible by 3, then vova will win, 
in every vonya turn, the integer wont be divisible by 3, 
and optimally vova will make it the integer divisible by 3 again
if n is not divisible by 3, then vonya will win,
after vonya turn, the integer will be divisible by 3, 
add odd num to even will make it odd

Jagged Swaps - Greedy
[text](https://codeforces.com/problemset/problem/1896/A)
a1 cannot be changed because of 2 <= i <= n-1, 
therefore if a1 does not equal to 1 then the array cant be sorted

Doremy's Paint 3 - Constructive
[text](https://codeforces.com/problemset/problem/1890/A)
statement says b1+b2=b2+b3=....=bn-1+bn=k, 
rewrite as bi+bi+1=bi+1+bi+2, we get bi=bi+2, 
extending this logic {b1=b3=b5.....}. 
We know that there are ceil(n/2) odd numbers and floor(n/2) even numbers in [1,n]. Therefore, 
if there are exactly floor(n/2) same numbers (even), 
the remaining will be ceil(n/2) same numbers, then its possible,
this is for cases where there are only 2 unique numbers. 
it is not possible if there are more than 3 numbers
[3,3,3,3] is possible
[1, 2, 1, 2] is possible
[1,2,3] is not possible

Don't try to count - Brute Force
[text](https://codeforces.com/problemset/problem/1881/A)
the constraints states that 1<=n*m<=25, if n = 1 and m = 25, 
therefore maximum size of m is 25, we can double the string 5 times, 
and it will be guaranteed to be greater than m, hence there will be an instance where s is a substring of x

How Much Does Daytona Cost? - Greedy
[text](https://codeforces.com/problemset/problem/1878/A)
a subsegment with length of 1, the single element will be the element that has the most occurrences, 
therefore if k exist, then a subsegment of length of 1 containing k, 
makes k the element that the most occurrences in that subsegment

Goals of Victory - Math
[text](https://codeforces.com/problemset/problem/1877/A) 
each goal increase a team efficiency by 1, but decreases the other team efficiency by -1 (this is a zero sum concept). 
This means the sum of all efficiency will be 0, therefore the answer is, says ai = the efficiency of i-th team, 
a1+a2+...an-1+x=0; a1+a2+x=0; x=-a1-a2; x=-(a1+a2)

Target Practice - Implementation
[text](https://codeforces.com/problemset/problem/1873/C)
hardcode the values, loop through input, fetch the corresponding value from the hardcoded values

Ambitious Kid - Math
[text](https://codeforces.com/problemset/problem/1866/A)
in order to make an array product equal to 0, one element must be 0, 
therefore the minimum operation is the number with the lowest diff to 0, 
in otherword the smallest absolute number

Sequence Game - Constructive
[text](https://codeforces.com/problemset/problem/1862/B)
the condition states that ai-1 <= ai for 2 <= i <= n, therefore we can just make ai-1 =ai, 
if ai-1 > ai, insert 1 in between to make ai valid number

United We Stand - Math
[text](https://codeforces.com/problemset/problem/1859/A)
if nominator is smaller than denominator, then its not gonna be divisible,
therefore store the largest element and its duplicates to c


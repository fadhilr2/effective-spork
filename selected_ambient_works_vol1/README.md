[Halloumi Boxes](https://codeforces.com/problemset/problem/1903/A) - **Greedy**
A reverse operation of length 2 is functionally identical to a swap.If $k
\ge 2$, we can swap any adjacent elements (like Bubble Sort), meaning the array
can always be sorted. If $k = 1$, the array must already be sorted to be valid.

[Line Trip](https://codeforces.com/problemset/problem/1901/A) - **Greedy**

The fuel capacity $V$ must be large enough to cover the maximum
gap between any two points. The distance between the last station $a_n$ and
the destination $x$ must be multiplied by 2, as there is no station at $x$ and
you must return to $a_n$ to refuel. $V = \max(a_1, a_2-a_1, \dots,
a_n-a_{n-1}, 2(x-a_n))$.

[Cover in Water](https://codeforces.com/problemset/problem/1900/A) - **Greedy**
String Observations  If there are 3 consecutive empty cells (...), you can
create an infinite water source. If ... exists, the answer is always 2 (to
fill the initial cells). Otherwise, you must manually fill every empty cell,
making the answer equal to the total count of . characters.

[Number Game](https://codeforces.com/problemset/problem/1899/A) - **Math**

 The game revolves around divisibility by 3. Vanya wins if she can immediately make $n$ divisible by 3. If $n \pmod 3 \neq 0$, Vanya wins on her first turn by adding or
subtracting 1. If $n \pmod 3 = 0$, Vova can always counter Vanya’s moves to keep the number divisible by 3 on his turn, eventually winning.

[Jagged Swaps](https://codeforces.com/problemset/problem/1896/A) - **Greedy**

 The first element $a_1$ is immutable (can't be changed) because the operation only allows swapping $a_i$ if $2 \le i \le n-1$.  If $a_1 \neq 1$, the array can never be fully
sorted since the smallest element cannot move to the front. 

[Doremy's Paint 3](https://codeforces.com/problemset/problem/1890/A) - **Constructive**
 For the condition $b_i + b_{i+1} = k$ to hold for all $i$, the array must alternate between two
values ($b_1, b_2, b_1, b_2 \dots$). This is only possible if there are at most 2 unique numbers and their frequencies differ by no more than 1 (i.e., $\lfloor n/2 \rfloor$ and $\lceil n/2 \rceil$).

[Don't try to count](https://codeforces.com/problemset/problem/1881/A)- **Brute Force**
Because the string length grows exponentially (doubling each time), $s$ will quickly exceed the maximum possible length of $m$. Since $n \times m \le 25$, doubling the
string 5 or 6 times is enough to guarantee that $s$ either contains $x$ as a
substring or never will.

[How much does daytona cost?](https://codeforces.com/problemset/problem/1878/A) - **Greedy**
subsegment can be as small as a single element. If $k$ exists anywhere in the array, we
can simply pick a subsegment of length 1 containing only $k$. In that
subsegment, $k$ is automatically the most frequent element.

[Goals of Victory](https://codeforces.com/problemset/problem/1877/A) - **Math**
 This is a zero-sum system. Every goal scored (+1 efficiency for one team)
implies a goal conceded (-1 efficiency for another).  The sum of all
efficiencies must be 0. Therefore, the missing efficiency $x$ is simply $-\sum
a_i$.

[Target Practice](https://codeforces.com/problemset/problem/1873/C) - **Implementation**
hardcode the values, loop through input, fetch the corresponding value from the hardcoded values

[Ambitious Kid](https://codeforces.com/problemset/problem/1866/A) - **Math**
To make the product of an array 0, at least one element must be 0. Find the element
 with the smallest absolute value; the number of operations required is simply
 $\min(|a_i|)$.

[Sequence Game](https://codeforces.com/problemset/problem/1862/B) - **Constructive**
 We need to build an array where $a_{i-1} \le a_i$. If the current element is smaller than
the previous one, "pad" the sequence by inserting the current element (or a 1)
before it to satisfy the non-decreasing condition.

[United We Stand](https://codeforces.com/problemset/problem/1859/A)- **Math**
An element $x$ cannot be a divisor of $y$ if $x > y$. To ensure no element in $b$ divides
any element in $c$, move all instances of the maximum value to array $c$ and
everything else to array $b$.

[Buttons](https://codeforces.com/problemset/problem/1858/A) - **Greedy**
Both players will optimally exhaust the shared buttons $c$ first. If $a \neq b$,
the player with more personal buttons wins regardless of $c$. If $a = b$, the
winner is determined by the parity of $c$: if $c$ is odd, Anna wins because she
takes the last shared button, whereas if $c$ is even, Katie wins because Anna is
forced to use her own buttons first.

[Array Coloring](https://codeforces.com/problemset/problem/1857/A) - **Math** 
For two sub-groups to share the same parity, their total sum must be even, as the sum of two numbers with identical parity is always even. Since parity is only toggled by
odd numbers, this condition is satisfied if and only if the total count of odd
integers in the array is even.

[Desorting](https://codeforces.com/problemset/problem/1853/A) - **Greedy**
To minimize operations for making an array unsorted, identify the adjacent pair
with the smallest difference $diff = a_{i+1} - a_i$. Since each operation moves
the elements toward each other by 2 units total (increasing $a_i$ and decreasing
$a_{i+1}$), it takes $\lfloor diff / 2 \rfloor + 1$ operations to achieve $a_i >
a_{i+1}$, unless the array is already unsorted.

[Forbidden Integer](https://codeforces.com/problemset/problem/1845/A) - **Greedy**
If $x \neq 1$, the sum $n$ can be formed simply by using $n$ ones. If $x = 1$, an even $n$ can be
formed using $n/2$ twos provided $k \ge 2$, while an odd $n$ requires at least
one 3 combined with $(n-3)/2$ twos if $k \ge 3$; otherwise, it is impossible to
represent $n$ using the allowed integers

[Grasshopper on a Line](https://codeforces.com/problemset/problem/1845/A) - **Math**

if $x$ is not divisible by $k$ then print $x$

otherwise $1$ and $n-1$ steps would be enought, because $1$ cant be divided by $k > 1$ and $n-1$ and $n$ cant be divisible by $k$ at the same time

[Unit Array](https://codeforces.com/problemset/problem/1834/A) - **Math**

$a_1+a_2+…+a_n≥0$ can be satisfied if there are more or equal amount of 1s against amount of negative 1s

$a_1⋅a_2⋅…⋅a_n=1$ can be satisfied if there are even amount of negative 1s, because product of a pair of negative 1s is 1

therefore satisfy first condition while maintaining the even parity of negative 1s

[Twin Permutations](https://codeforces.com/problemset/problem/1831/A) - **Constructive**

Since $a_1+b_1≤a_2+b_2≤a_3+b3_≤…≤a_n+b_n$ a permutation $b$ that met the condition $a_1+b_1=a_2+b_2=a_3+b_3=…=a_n+b_n$ will be valid

if $b_i=n+1-a_i$  $b$ is going to be a permutation, because all the element are distinct, therefore the difference of $n-a_i$ will be a unique value that is in the range of $0$ to $n-1$, problem with this solution array $a$ constraints states $1 <= a_i <= n$ therefore to remove $0$  we must add 1, making $b_i=b+1-a_i$  

[Blank Space](https://codeforces.com/problemset/problem/1829/B) - **Implementation**

if $a_i$ does not equal to $1$ then set a counter,

else reset the counter

find the maximum count

[Coins](https://codeforces.com/problemset/problem/1814/A) - **Math**

$2$ coins of denomination $k$ can be replaced with $k$ coins of denomination $2$, therefore we only ever need either $0$ or $1$ $k$ coins, because if its greater than 1, 2 coins of denomination k will be swapped out with 1 coin of denomination 2. if the answers exists, then there is such a set of coins, where there is no more than 1 coin of denomination k

[Walking Master]([Problem - 1806A - Codeforces](https://codeforces.com/problemset/problem/1806/A)) - **Math**

Notice for every $(x+1, y+1)$ moves, $x-y$  is invariate (unchanging),  while for every $(x-1, y)$ moves, $y$ is non-decreasing. therefore, its possible to move from $(a,b)$ to $(c, d)$ if $b >= d$ AND $a-b >= c-d$ . hence, the answer is, $(d-b)+(a+(d-b)-c)$ 

[Polycarp and coins](https://codeforces.com/problemset/problem/1551/A) - **Math**

Make $c_1 = c_2$ and $c_1+2c_2=n$ then $c_1+2c_1=n; 3c_1=n;c_1=n/3$ . Therefore, initialized $c_1$ and $c_2$ to $n/3$ , now collect remainders to fill the gap

if remainder is $0$ then there's no need to get more coins

if remainder is $1$ then we need to get $1$ more coin of denomination $1$ , therefore $c_1=c_2+1$ or $c_1 += 1$

if remainder is $2$ then we need to get $1$ more coin of denomination $2$ , therefore $c_2 = c_1 + 1$ or $c_2 +=c_1$ 

a number remainder is always ${[0, n-1]}$ 

[Odd Set](https://codeforces.com/problemset/status?my=on) - **Math**

if $oddCnt == evenCnt$ then its possible because to produce $n$ pairs where the sum of each pair are odd there must be 1 even and 1 odd in each pair, therefore if there isnt an equal amount of even and odd, some pairs will have numbers with the same parity

[Arithmetic Array]([Problem - 1537A - Codeforces](https://codeforces.com/problemset/problem/1537/A)) - **Math**

mean is equal to 1 if the sum is equal to n

if sum == 0 we dont need to add more number

if sum < n the answer is always 1, because we can add 1 k numbers, such that $sum+k=n+1$

if sum > n the answer is $sum-n$ , because all we had to do is add 0s, until $n$ is equal to sum

[Digit Sum](https://codeforces.com/contest/1553/problem/A) - **Greedy**

number with last digit 9 is an interesting number, else the digit will increase by 1 making it greater than x. Therefore, the answer is $(n+1)/10$  just count how many tens are there from 1 to n

[We Need The Zero]([Problem - 1805A - Codeforces](https://codeforces.com/problemset/problem/1805/A)) - **Bitmask**

$b_i=a_i\oplus x$ this means the set of $b$ can be represented as ${(a_i\oplus x)(a_{i+1}\oplus x)...(a_n\oplus x)}$ we can rewrite $b_1\oplus b_2\oplus ... \oplus b_n = 0$ as $(a_i\oplus x)\oplus(a_{i+1}\oplus x)\oplus ...\oplus (a_n\oplus x) = 0$ recall XOR commutative property $a\oplus b=b\oplus a$ therefore $(x\oplus x)\oplus(x\oplus x)\oplus ...\oplus (a_{n-1}\oplus a_n) = 0$  

if there are an even amount of $x$ , it will cancel each other out, therefore leaving us with $a_1\oplus a_2\oplus ,...,\oplus a_n$ ,  if the remainder is equal to $0$ then we can output any number. Otherwise, it is not possible

if there are an odd amount of $x$ , it will leave us with $x\oplus a_1\oplus a_2\oplus ,...,\oplus a_n$, therefore in order for it to be zero, $x=a_1\oplus a_2\oplus ,...,\oplus a_n$

[Prepend and Append](https://codeforces.com/problemset/problem/1791/C) - **Implementation**

count how many 0 1 or 1 0 must be removed, then subtract by $n$ that will gives the initial string length

while(a[left] != a[right]) do count += 1

answer is $n-(2*count)$

 [Serval and Mocha's Array](https://codeforces.com/contest/1789/problem/A) - **Math**

Considering $n >= 2$, the following inequality holds $2 <= i <= n$ 

$gcd(\{a_1,a_2,...,a_i\})<=gcd(a_1,a_2)<=2$ 

if there exist a pair $gcd(x, y)<=2$ , we can move it to the front and as the prefix length grew, the gcd will decrease or remain unchange   

[One and Two](https://codeforces.com/problemset/problem/1788/A) - **Math**

There should be same number of twos at $a_1, a_2,...,a_k$ and $a_{k+1},a_{k+2},...,a_{n}$. Therefore we must count how many twos and if its not even, then its not possible, otherwise find the separation point where two sides will have same amount of twos

[Make it Beautiful](https://codeforces.com/problemset/problem/1783/A) - **Constructive**

if we put the maximum and minimum element at the front, for every element starting from 3, the sum before it will be greater than it. 

However, if maximum == minimum, the second element can make the array ugly, therefore if maximum == minimum, this means theres only 1 element, hence impossible to construct a beatiful array

[Everybody Likes Good Arrays](https://codeforces.com/contest/1777/problem/A)- **Math**

Replace every even numbers with $0$ and every odd numbers with $1$ now the operation is equivalent to $a[i]=a[i+1]$ .

Note that the amount of $a[i]\neq a[i+1]$ remains constant no matter how many operation is done, therefore every segment of 0s and 1s can be handled independently($odd*odd=odd$; $even*even=even$). Now to make every $a[i]$ not having same parity with $a[i+1]$ , we must reduce every segment length to 1,  says $L$ is the length of the segment, operation to reduce segment size to 1 is $L-1$ . says k is the amount of segments, therefore the answer is $(L_1-1)+(L_2-1)+...+(L_k-1)$   , simplify it to $(L_1+L_2+...+L_k)-(1+1+...k)$ .Now, the sum of segment length is equal to $n$ , therefore $n-k$. 

We can simplify it even further, Note that the amount of segments is equal to amount of separators($a[i]\neq a[i+1]$) + 1 , Let $S$ be the amount of separators, then$n-(x+1)=n-x-1$

[Extremely Round](https://codeforces.com/problemset/problem/1766/A) - **Greedy**

Note that the constraints is $1 <= n <=999999$, notice that extremely round numbers are rare. The naive approach is to check from $1$ to $n$ making the complexity $O(tn)$ . We can optimize this by finding all the extremely round number from $1$ to $9999999$ once only. And check how many round numbers are there from 1 to $n$ using that array for each test case

[Two Permutations](https://codeforces.com/contest/1761/problem/A) - **Math**

if $a+b=n$ we'll be using all the numbers, therefore the longest common prefix and suffix will be the same, and we cant create a different permutation, this case is only true if $a=b=n$

if$a+b=n-1$ , this means theres 1 number left in the middle, thus making $a+1$ or  $b+1$ 

to create a different permutation, there must be a buffer zone of at least two number, therefore $a+b+2 <= n$ , this ensures element at $a+1$ is different from $n-b$ 

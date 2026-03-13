[Halloumi Boxes](https://codeforces.com/problemset/problem/1903/A) - **Greedy**

If $k \ge 2$, any adjacent elements can be swapped, so it's always sortable. If $k=1$, the array must be pre-sorted.

A reverse operation of length 2 is functionally identical to a swap operation.If $k
\ge 2$, we can swap any adjacent elements (like Bubble Sort), meaning the array
can always be sorted. If $k = 1$, the array must already be sorted to be valid.

[Line Trip](https://codeforces.com/problemset/problem/1901/A) - **Greedy**

Fuel capacity $V$ must cover all gaps, including $2(x - a_n)$ for the return trip. $V = \max(a_1, a_2-a_1, \dots, a_n-a_{n-1}, 2(x-a_n))$.

Notice that we can cover all distances by the largest gap, and  The distance between the last station $a_n$ and the destination $x$ must be multiplied by 2, as there is no station at $x$ and you must return to $a_n$ to refuel.

[Cover in Water](https://codeforces.com/problemset/problem/1900/A) - **Greedy**
3 consecutive empty cells (`...`) create infinite water answer = 2. Otherwise, answer = count of `.`.

Notice that the answer are at most two, if there are 3 consecutive empty cells. 

[Number Game](https://codeforces.com/problemset/problem/1899/A) - **Math**

Vanya wins if $n \pmod 3 \neq 0$ by making it divisible on turn 1. If $n \pmod 3 = 0$, Vova counters and wins.

Vanya wins if she can immediately make $n$ divisible by 3. If $n \pmod 3 \neq 0$, Vanya wins on her first turn by adding or subtracting 1. If $n \pmod 3 = 0$, Vova can always counter Vanya’s moves to keep the number divisible by 3 on his turn, eventually winning.

[Jagged Swaps](https://codeforces.com/problemset/problem/1896/A) - **Greedy**

$a_1$ is immutable. If $a_1 \neq 1$, it can never be sorted because 1 can't move to the front.

Notice that we can select $i$ at minimum index 2, if one is not at index one, then we cannot sort the array. 

[Doremy's Paint 3](https://codeforces.com/problemset/problem/1890/A) - **Constructive**

We only have to check if there are $<=2$  distinct values and the difference of frequency is $<=1$ .

Consider $b_1+b_2=b_2+b_3$ , we can rewrite this as $b_i+b_{i+1}=b_{i+1}+b_{i+2}$ , then $b_i=b_{i+2}$ , knowing this, we can infer that there can only be at most two distinct values. Now, these two distinct values must also have a difference of frequency at most one, if difference is greater than 1, then there be numbers that doesn't have pairs. 

[Don't try to count](https://codeforces.com/problemset/problem/1881/A)- **Brute Force**

Double the string five times, and check each string if the string has $s$ as a subtring.

Notice the constraint is $1<=n*m<=25$ , assume $n$ is equal to one, then $m$ will be at most five, due to the constraint

[How much does daytona cost?](https://codeforces.com/problemset/problem/1878/A) - **Greedy**
If $k$ exists anywhere, a subsegment of length one containing $k$ makes $k$ the most frequent.

subsegment can be as small as a single element. If $k$ exists anywhere in the array, we can simply pick a subsegment of length one containing only $k$. In that subsegment, $k$ is automatically the most frequent element.

[Goals of Victory](https://codeforces.com/problemset/problem/1877/A) - **Math**

Zero-sum system: sum of efficiencies is 0. Missing efficiency is $-\sum a_i$.

 This is a zero-sum system. Every goal scored +1 efficiency for one team implies a goal conceded (-1 efficiency for another).  recall that this is zero sum, then the sum of all efficiencies must be 0. Therefore, the missing efficiency $x$ is simply $-\sum
a_i$.

[Target Practice](https://codeforces.com/problemset/problem/1873/C) - **Implementation**
Hardcode values for rings and loop through input to sum values.

[Ambitious Kid](https://codeforces.com/problemset/problem/1866/A) - **Math**
Product is 0 if there's any element equal to 0. Minimum operations = $\min(\|a_i\|)$.

the element with the smallest absolute value, is the element closest to zero, hence giving us minimum operations.

[Sequence Game](https://codeforces.com/problemset/problem/1862/B) - **Constructive**
If $a_{i-1} > a_i$, "pad" the sequence by inserting $a_i$ before it.

 If the current element is smaller thanthe previous one, "pad" the sequence by inserting the current element (or a 1) before it to satisfy the non-decreasing condition.

[United We Stand](https://codeforces.com/problemset/problem/1859/A)- **Math**
To prevent $x$ dividing $y$, move all instances of the max value to $c$ and others to $b$.

An element $x$ cannot be a divisor of $y$ if $x > y$. 

[Buttons](https://codeforces.com/problemset/problem/1858/A) - **Greedy**
Exhaust shared buttons $c$ first. If $a=b$, parity of $c$ determines the winner (odd = Anna, even = Katie).

Both players will optimally exhaust the shared buttons $c$ first. 

- If $a \neq b$, the player with more personal buttons wins regardless of $c$. 

- If $a = b$, the winner is determined by the parity of $c$: 
  
  - if $c$ is odd, Anna wins because she takes the last shared button,
  
  - whereas if $c$ is even, Katie wins because Anna is
    forced to use her own buttons first.

[Array Coloring](https://codeforces.com/problemset/problem/1857/A) - **Math** 
Sum of two groups has same parity if total sum is even. Only even count of odd integers satisfies this.

Recall that $even+even=even$ and $odd+even=odd$ , we can see that odd can toggle the sum, if we can evenly distribute the odd numbers to two groups, in other other words the odd counts is divisible by 2, then its possible. 

[Desorting](https://codeforces.com/problemset/problem/1853/A) - **Greedy**

Find smallest $diff = a_{i+1} - a_i$. Operations needed: $\lfloor diff / 2 \rfloor + 1$.

Since each operation moves the elements toward each other by 2 units total, increasing $a_i$ and decreasing $a_{i+1}$. Let $a_i=a$ and $a_{i+1}=b$ , $a+x=b-x$ , we can isolate the $x$ , $x=\frac{b-a}{2}$ , then we have add one, otherwise it's gonna be equal.

[Forbidden Integer](https://codeforces.com/problemset/problem/1845/A) - **Greedy**
if $x \neq 1$ then we can take $n$ amount of ones, otherwise there's two conditions:

1. If $n$ is less than $k$ then its not possible

2. if $n$ is greater than the highest sum of $k$ ,then its not possible

otherwise its possible. 

Notice that we can get any number by the sum of ones. Otherwise, we need to check if $k$ is in the given boundaries.

[Grasshopper on a Line](https://codeforces.com/problemset/problem/1845/A) - **Math**

At most the operation is two. if $x$ is not divisible by $k$ , then we only need one moves. Otherwise, we  only need two moves: one and $x-1$ .

Notice the $k$ constraint $2<=k<=100$ , which means one is not divisible by $k$ . if $x$ is divisible by $k$ , then $x-1$ cant be divisible by $k$ , because $x$ and $x-1$ cant be simultenously be divisible by $k$ , unless $k$ is one, which can't be, due to the constraint.

[Unit Array](https://codeforces.com/problemset/problem/1834/A) - **Math**

We must ensure that there are more ones than negative ones while keeping the amount of negative ones even.

Notice that when theres more positive than negative, the sum is greater than or equal to zero. Notice that the product of an even amount of negatives is positive.

[Twin Permutations](https://codeforces.com/problemset/problem/1831/A) - **Constructive**

let $s$ be $n+1$ , for each $b_i$ its equal to $s-a_i$ .

Notice that we can pair numbers that summed to some constant sum, that sum being $n+1$ .

[Blank Space](https://codeforces.com/problemset/problem/1829/B) - **Implementation**

Maximize counter of consecutive zeros; reset if $1$ is encountered.

[Coins](https://codeforces.com/problemset/problem/1814/A) - **Math**

An even amount of $k$ burles can be replaced with $k$ amount of $2$ burles, we only need to check for $y=0$ and $y=1$. 

Notice that an even amount of $k$ burles is a multiplies of $2$, hence why we can replace it with $k$ amount of two burles. If looked closely, this means at most we only have to use $1$ $k$ burle, as that is the biggest remainder we can get from division by two .

[Walking Master]([Problem - 1806A - Codeforces](https://codeforces.com/problemset/problem/1806/A)) - **Math**

let $|d-b|$ be $g$ , we only need to check $d<b$ , and $a+g<c$ , the minimum operation is equal to $g+|a-b|$ , if both condition passed.

We first must match the $y$ first, hence $|d-b|$ , but this won't be possible if $d<b$ , recall that the constraints state that we can only move $+1$ on the $y$ axis. After $y$ is matched, we need to match $x$ , but this is not possible if $c>b$ , because we can only move $-1$ on the $x$ axis.

[We need the zero](https://codeforces.com/problemset/problem/1805/A) - **Construction** 

We first need to do XOR operation against the entire array, let this result be $g$ . If the array is even and $g==0$ , then its $0$ , otherwise its not possible. If the array is odd then its $g$ .

Rewrite $b$ as $\{a_i\oplus x \oplus a_{i+1} \oplus x\oplus\dots\oplus a_n\oplus x\}  $ , recall the commutative property of XOR $A\oplus B=B\oplus A$ , therefore we can rewrite $b$ as $\{a_i\oplus a_{i+1}\oplus\dots\oplus a_n (\oplus x \ n \ times)\} $ , recall that $A\oplus A=0$ , if $n$ is even, then $x$ can be paired up with each other and it will cancels out, hence it doesnt matter what $x$ is for case $n$ even. Otherwise, if $n$ is odd, there will be one $x$ remainder, therefore $x$ must be equal to $g$  to get $0$ . 

[Prepend and Append](https://codeforces.com/problemset/problem/1791/C) - **Implementation** 

Iterate from $i$ and $j$ until $a_i\neq a_j$ and $i<j$ , such that $i=1$ and $j=n$ , the answer is $n-(2*cnt)$ 

[Serval and Mocha's Array](https://codeforces.com/problemset/problem/1789/A) - **Math** 

If there exists a pair of $i$ and $j$  , such that $gcd(a_i, a_{j})<=2$ , then it's possible, otherwise its not.

If there exists a pair of number that is $good$, then the whole array can be reordered to be $beautiful$ . Recall that $gcd(x,y)<=min(x,y)$ , in other words, as more elements are added, the $gcd$ wont get larger. Hence, if there exist a pair, such that $gcd(a_i,a_j)<=2$ or a $good$  pair , we can move it to the front, and the array wil be beautiful.

[One and Two](https://codeforces.com/problemset/problem/1788/A) - **Greedy** 

let $g$ be equal to $n/2$ . if $n$ is not divisible by $2$ then its not possible. Otherwise,   iterate from $i$ ,such that $1<=i<=n$ , let $cnt2$ be a counter of $2$ occurrence, iterate until $cnt2=g$ , then $k=cnt2$ .

Notice that $1$ doesn't affect product of any multiplication, therefore as long as we can distribute $2$ evenly at $a_1,a_2,\dots,a_k$ and $a_{k+1},a_{k+2},\dots,a_n$, then its possible.  
[Make it beautiful](https://codeforces.com/problemset/problem/1783/A) - **Constructive**

If we put the maximum in the array on the first position, then for every element, starting from the third one, the sum of elements before it will be greater than it (since that sum is greater than the maximum value in the array). So, the only element that can make our array ugly is the second element. We need to make sure that it is not equal to the first element.

Let's put the maximum element on the first position, the minimum element on the second position, and then fill the rest of the array arbitrarily. The only case when it fails is when the maximum element is equal to the minimum element — and it's easy to see that if the maximum is equal to the minimum, then the first element of the array will be equal to the second element no matter what, and the array cannot become beautiful.

[Everybody Likes Good Arrays]([Problem - 1777A - Codeforces](https://codeforces.com/problemset/problem/1777/A) - **Greedy** 

We only need to count how many pairs with same parity.

[Extremely Round]([Problem - 1766A - Codeforces](https://codeforces.com/problemset/problem/1766/A) - **Brute Force** 

initialize an array that contains number with $1$ digit within $1<=x<=999999$ , let this be $a$ , iterate through $a$ and count, if $a_i>n$ then stops.

Notice that numbers with $1$ digit are extremely rare, notice the constraint is $1<=x<10^6$  ,we can first find all numbers with $1$ digit ONCE and store it in an array, and for each input we only have to iterate through $a$ .

[Two Permutations](https://codeforces.com/problemset/problem/1761/A) - **Constructive** 

Its always possible to form a valid set, if $a+b<=n-2$ or$a==b==n$ .

For case $a==b==n$ their prefix and suffix will always be equal. Notice that we need at least length of $2$ of buffer zone to split the common longest prefix and suffix, so that the prefix or suffix wont get longer, hence why the length of suffix and prefix must be less than $n-2$ . 

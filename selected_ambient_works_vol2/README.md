[Array Reordering](https://codeforces.com/problemset/problem/1535/B) - **Math**

Any even number $E$ can be written as $2k$. Therefore, $gcd(E, 2a_j) = gcd(2k, 2a_j)$, which is at least **2**. This pair is "guaranteed" a success.

therefore, we must order the array by even first then odd, as its guaranteed to give a good pair. For the remaining odd values, their order is not important, because $gcd(a_i, 2a_j)$ = $gcd(a_i, a_j)$  for odd $a_i$ and $a_j$ , therefore we keep the remaining odd numbers as it is, and only add it to the answer if their gcd is greater than $1$, which exists, if both number parity stays the same after $a_j$ multiplied by $2$

[Bad Boy](https://codeforces.com/problemset/problem/1537/B) - **Math**

The Manhattan distance function is **convex**. In any rectangle, the maximum distance from an arbitrary point to a set of points is always achieved at the **vertices (corners)**.

The answer is top left and bottom right. We can notice that the furthest point in any reactangle is the opposite corner, therefore no matter where anton initial position is, the distance would still be the maximum, that distance being $2(n-1)+2(m-1)$ 

recall manhattan distance $|x_2-x_1|+|y_2+y_1|$

Start -> yoyo 1 $(i-1)+(j-1)$ 

yoyo 1 -> yoyo 2 $(n-1)+(j-1)$

yoyo 2 -> start $(n-i)+(m-j)$

total distance $(i-1)+(j-1)+(n-1)+(j-1)+(n-i)+(m-j)$

[Forked](https://codeforces.com/problemset/problem/1904/A) - **Construction**

Find starting point by moving a and b in respect to king, then to queen, store in array, and find common elements, if there are common elements, therefore the knight can attack both piece

[Chemistry](https://codeforces.com/problemset/problem/1883/B) - **Greedy**

The invariant here is that a palindrome can always be formed if there are $<=1$ characters with odd frequencies. Count how many characters have odd frequency, subtract by k, if there less than equal to $1$ then its true, otherwise false

[Vasilije in Cacak](https://codeforces.com/problemset/problem/1878/C) - **Math**

Note that we can get any number $x$ by sum of $k$ distinct integers from $1 \ to \ n$ as long $x$ is in the boundaries of the smallest sum and largest sum. Let $S_{min}$ be the sum of the $k $smallest integers $(1 \dots k)$ and $S_{max}$ be the sum of the $k$ largest integers $(n-k+1 \dots n)$.Therefore, if $x$ is in the boundaries of smallest sum ($1 \ to \ k$) and largest sum ($n-k+1 \ to \ n$) then its true. 

[Jellyfish and Undertale](https://codeforces.com/problemset/problem/1875/A) - **Greedy**

to maximize time, only use tool when time is at $1$, therefore, assume $c$ is current time, and say $c = 1$, loop through all the tools, and the total time gained would be $min(c+x_i, a)$, plug in $c$, $min(1+x_i, a)$, after time is added, subtract 1 (because the time will passed after using the tool), therefore $min(1+x_i, a)-1$

[Make it Zero](https://codeforces.com/problemset/problem/1869/A?adcd1e=caf4f0fat4iouc&csrf_token=55aea101a2f2d04814abf28aae6c209d) - **Greedy**

recall XOR property $A \oplus B  = 0$, therefore if n is even, do XOR operation against the entire array and say the result is S, Note that ai 1 <= i <= n will be replace with S, now all the element will be equal, do XOR operation against the entire array again, and all the element is gonna cancels out.

if n is odd, doing the sequence of operation above will have 1 non zero element remains,therefore, do XOR operations against $1 \  to\ N-1$, we cancels out the even part first, after that, all it remains is $0 \ and\  a_n$, do XOR operations against $N-1 \ to \   N$ and the element is going to be equal, therefore doing XOR operation again against the entire segment, will makes it 0, and element before $N-1$ has already cancels out

[Longest Divisors Interval](https://codeforces.com/contest/1855/problem/B) - **Math**

Suppose you find a valid interval $[l,r]$ . Note that the interval $[l,r]$ contains at least one multiple of $x$ for $1<= x<=r-l+1$ . Therefore, the interval $[1,r-l+1]$ is also valid and also has the same length. 

[Balanced Round](https://codeforces.com/problemset/problem/1850/D) - **Sorting** 

Calculate maximum length of a valid segment, then the answer is $n$ subtracted by that length.

A segment that minimizes its absolute difference between adjacent elements is always a sorted segment 

[Comparison String](https://codeforces.com/problemset/problem/1837/B) - **Math** 

Note that for each $s[i]$ the array representaion must have at least $2$ distinct element. Find the longest equal element segment, and add $1$ to the length.

To create a sequence such that $a[i]>a[i+1]>a[i+2]> \dots>a[n]$ or $a[i]<a[i+1]<a[i+2]<\dots<a[n]$ , there must be exactly $n$ distinct elements.

Therefore, we must find the longest segment, to know the minimum $n$ distinct elements we need. 

[Permutation Swap](https://codeforces.com/problemset/problem/1828/B) - **Math**

To sort the permutation using a fixed swap distance $k$, every element $a_i$ must eventually move to its target position $i$. The distance an element needs to travel is $|a_i - i|$.

Since each swap moves an element by exactly $k$ positions, the total distance traveled by any element must be a multiple of $k$. Therefore, $k$ must be a common divisor of all displacements $|a_i - i|$. To find the largest possible value for $k$, we simply calculate:

$\text{result} = \gcd(|a_1 - 1|, |a_2 - 2|, \dots, |a_n - n|)$

[Odd Queries](https://codeforces.com/problemset/problem/1807/D) - **Math**

To find out if the sum changes after changing the element from $a_l,a_{l+1},\dots,a_r$ by $k$, note that changing the element from $a_l,a_{l+1},\dots,a_r$ by $k$ is equal to $k*(r-l+1)$, we must remove the sum of L to R from the original array, and replace it with $k*(r-l+1)$

[Not Dividing](https://codeforces.com/problemset/problem/1794/B) - **Constructive**

to make adjacent element not divisible by $a_i$ , both elements must be of different parity or divisor ($a_i$) is greater than its adjacent element. Therefore, add 1 if adjacent element is divisible by $a_i$ this will make the adjacant element of different parity. But the problem is, $1$ can divide anything regardless of its parity, therefore we have to make 1 to $2$ , as $2$ cannot divide odd numbers.

[Mainak and Array]([Problem - 1726A - Codeforces](https://codeforces.com/problemset/problem/1726/A) - **Greedy**

Cyclically rotating an element means displacing every $a_i$ for $1 <=i<=n$ by $1$ . To maximize the value of $a_n-1$ .  we would only have to check 4 cases, this covered all possible combination of $a_n$ and $a_1$

1. Check for $a_n$ and every $a_i$ for $1<=i<=n-1$ . 

2. Check for every $a_i$ for $2<=i<=n$  and $a_1$

3. Check for $a_i$ and $a_{i+1}$  . Given enough rotation for the whole array, eventually $a_{i+1}$ will be $a_1$ and $a_i$ will be $a_n$ 

4. Check for $a_1-a_n$ . Given enough rotation for the whole array, eventually $a_1$ and $a_n$ will be swapped

[NIT Destroys the Universe]([Problem - 1696B - Codeforces](https://codeforces.com/problemset/problem/1696/B) - **Greedy**

Notice that at most we only need $2$ operations.

if there's a exist a non zero segment with zero in the middle then its $2$ 

otherwise its $1$ 

if amount of zeroes is equal to $n$ then its $0$ 

[Avtobus]([Problem - 1679A - Codeforces](https://codeforces.com/problemset/problem/1679/A) - **Math**

Notice that if $n$ is odd it's not possible, therefore $n$ must be even. Notice that the remainder of division by $6$ is $0,2,4$ .

To get the minimum, we must fit as much bus $6$ wheels, and we will get several remainder case, which ares

1. remainder is $0$ , $n$ divisible by $6$ 

2. remainder is $2$ , we can borrow $2$ from $6$ to create a $4$ wheel bus

3. remainder is $4$ , we can fit a $4$ wheel bus

To get the maximum, we must fit as much bus $4$ wheels 

[Make It Increasing]([Problem - 1675B - Codeforces](https://codeforces.com/problemset/problem/1675/B) - **Greedy**

Notice that an array is in increasing order if all the element are less than $a_n$ 

Start the loop from $n-1$ divide $a_i$ by $2$ until $a_i$ is less than $a_{i+1}$ if at some point $a_{i+1}$ is $0$ then it wont be possible  because there are no possitive integers less than $0$

[Deletive Editing]([Problem - 1666D - Codeforces](https://codeforces.com/problemset/problem/1666/D?adcd1e=caf4fy5tvfa9yh&csrf_token=7f955356994948207dacd978c84a9981) - **Greedy**

The key observation is that the order in which the letters are called out does not matter in this game.

Notice that one of the invariant properties of equal words is both have the same amount of characters frequency.

Match character frequency by deleting leftmost occurrence, if at some point $s_i$   frequency is less than $t_i$ frequency then it is not possible. After character frequency is matched, check if both string are equal.

[Array Cloning Technique]([Problem - 1665B - Codeforces](https://codeforces.com/problemset/problem/1665/B) - **Greedy**

Notice that for every cloning we are doubling the frequency of each charater.

We only have to keep track the largest frequency, keep doubling until largest frequency is equal to $n$ . At some point after largest frequency is doubled, it will be greater than $n$ therefore we only have to take what's needed $n-largestFreq$  

[Make AP]([Problem - 1624B - Codeforces](https://codeforces.com/problemset/problem/1624/B) - **Math**

Fix on one number, and assume the rest forms an Arithmetic Progression. manipulate the fixed number, such that it forms an Arithmetic Progression, let $x$ be the new number and $y$ be the initial numbers. If $x$ is divisible by $y$ therefore $x$ is a multiplies of $y$ hence $m$ is equal to $x/y$ . We also have to check if $m$ is positive, recall that $0$ is not a positive, therefore we have to check if $x/y > 0$ 

1. Fixing on $a$ , for $a$ to be AP, $a$ must be equal to $b-d$ , we can get $d$ by $c-b$ therefore $a=b-(c-b)=b-c+b=2b-c$ 

2. Fixing on $c$ , for $c$ to be AP, $c$ must be equal to $b+d$ , we can get $d$ by $b-a$ , therefore $c=b+(b-a)=2b-a$ 

3. Fixing on $b$ , for $b$ to be AP, $b$ must satisfy $b-a=c-b$ , therefore $b=(a+c)/2$ for this to be AP, $a+c$ must be even

[Odd Grasshopper]([Problem - B - Codeforces](https://codeforces.com/contest/1607/problem/B) -  **Math**

Notice that for every multiples of $4$ steps the coordinate goes back to $x_0$ 

$0 \rightarrow -1 \rightarrow 1 \rightarrow 4 \rightarrow 0 \rightarrow -5 \rightarrow 1 \rightarrow 8 \rightarrow 0$
Knowing this we can deduce the following for $x_0 = 0$ 

if $n \equiv 1 \mod{4}$ then its $n*-1$ 

if $n \equiv 2 \mod{4}$ then its $n-1$

if $n \equiv 3 \mod{4}$ then its $n+1$

if $n\equiv 0 \mod {4}$ then its $x_0$ 

if $x_0$ is even then its going be the same case as $0$ because both are even, therefore will go the same way, then we can treat the $0$ cases as $D$ for displacement, therefore $x_0+D$ . For odd numbers, its going be the opposite way $x_0-D$ 

[AB Balance]([Problem - A - Codeforces](https://codeforces.com/contest/1606/problem/A) - **Greedy**

Notice that $s$ balanced is determined by $s_1$ and $s_n$ .

if $s_1=s_n$ then its balanced. if we start at 'a' and we have to end with 'a', you must eventually end up back at 'a' by the end of the string, you are forced to transition back from 'b' to 'a' at some point, creating a matching "ba".

if $s_1\neq s_n$ then it will never be balanced.  If we start at 'a' and end with 'b', then we have made exactly one more transition from 'a' to 'b' than 'b' to 'a'. For example "abaabb"

[Make it Divisible by 25]([Problem - 1593B - Codeforces](https://codeforces.com/problemset/problem/1593/B) - **greedy**

Notice that numbers that are divisible by $25$ always end with these digits $25, 50, 75, 00$ Solve the subtask of digit $x$ and $y$ remove digits from the right until its equal to $y$ remove digits from second last digit until its equal to $x$ find the minimum operations 

[Luntik and Subsequence]([Problem - B - Codeforces](https://codeforces.com/contest/1582/problem/B) - **Math**

Notice that we can remove zeros and exactly one 1 to get $s-1$ , therefore we need to count the number of ways to remove zeros and multiply it by the number of ways to remove one $1$ .

[Mocha and Math]([Problem - 1559A - Codeforces](https://codeforces.com/problemset/problem/1559/A)) - **Greedy**

Notice that the result of $a \& b$ is always less than or equal to $min(a,b)$ . We can do AND operator for the whole array, as this guarantee to minimize the maximum values, as more value are added, $a_i\&a_{i+1}$ will be reduced or stayed the same

[Exciting Bets]([Problem - 1543A - Codeforces](https://codeforces.com/problemset/problem/1543/A) - **Math**

Notice that $a-b$ never change, despite how many operation are applied. Let $g=abs(a-b)$ , recall that $gcd(x,y)=gcd(abs(x-y),y)$ therefore $gcd(a\pm k, b\pm k)=gcd(g, b\pm k)$ notice that $b$ can be any arbitrary number recall that $gcd(x,y)<=min(x,y)$ , therefore excitement will never exceeds $g$ . To find the minimum operation, we must make $b\pm k$ divisible by $g$ . Therefore, we choose the smallest $k$ such that $b\pm k$ is a multiple of $g$ . To find $k$ we must find the closest multiple of $g$ that is greater than or equal to $b$ .    

[BadBoy]([Problem - 1537B - Codeforces](https://codeforces.com/problemset/problem/1537/B) - **Math**

We can put the yoyo at top left, and bottom right. This will always guarantee the maximum distance, as the distance is always be $2*(n-1)+2*(m-1)$  .1st yoyo is at $(1, 1)$, 2nd yoyo is at $(n, m)$ .         

[Odd Divisor]([Problem - 1475A - Codeforces](https://codeforces.com/problemset/problem/1475/A) - **Math** 

Recall that a product of prime numbers can result to any integer $n>1$ . Notice that every prime factor is either $2$ or odd prime. if $n$ had an odd prime factor, then $n$ has an odd divisor. Otherwise, if $n$ has no odd divisor then it has no odd prime factor. Therefore, if $n$ is a power of two, then it cant have odd divisor.

[Strange Partition]([Problem - 1471A - Codeforces](https://codeforces.com/problemset/problem/1471/A) - **Math**

Note that, $\left\lceil \frac{a + b}{x} \right\rceil \leq \left\lceil \frac{a}{x} \right\rceil + \left\lceil \frac{b}{x} \right\rceil$ . We can get the maximum sum by keeping the array as it is, and we can the minimum sum by doing the operation until the array length is $1$

[Sum Of Medians]([Problem - 1440B - Codeforces](https://codeforces.com/problemset/problem/1440/B)) - **Greedy**

Notice that there are $\lceil \frac{n}{2} \rceil -1$ elements larger than the median, and there are $\lfloor \frac{n}{2} \rfloor$ elements smaller than the median.  We must efficiently waste the element larger than the median.Since the array is already sorted in a non decreasing order, we can loop $k$ times from the end of the array and jump $\lceil \frac{n}{2} \rceil -1$  element.

[Three Indices]([Problem - 1380A - Codeforces](https://codeforces.com/problemset/problem/1380/A) - **Brute Force**

Find an index $j$ such that $a[j-1] < a[j]$ and $a[j]>a[j+1]$ 

[01 Game]([Problem - 1373B - Codeforces](https://codeforces.com/problemset/problem/1373/B) - **Greedy**

let amount of two different adjacent characters = g, Notice that the g are determined by min(0s frequncy, 1s frequency) if g is odd then alice wins, otherwise bob wins. 

[Multiply by 2, divide by 6]([Problem - B - Codeforces](https://codeforces.com/contest/1374/problem/B) - **Math**

We can get to $1$ if $n$ only have $2$ and $3$ prime factors. Notice that division by $6$ removes $2$ and $3$ prime factors simultaneously decreasing both of them by $1$ . The amount of operation is equal to $(3s-2s)+3s$ . If there are more twos than threes, then its not possible, because we wont be able to remove enough twos to make 3s and 2s equal

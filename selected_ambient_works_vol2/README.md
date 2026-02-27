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

[Mainak and Array]([Problem - 1726A - Codeforces](https://codeforces.com/problemset/problem/1726/A)) - **Greedy**

Cyclically rotating an element means displacing every $a_i$ for $1 <=i<=n$ by $1$ . To maximize the value of $a_n-1$ .  we would only have to check 4 cases, this covered all possible combination of $a_n$ and $a_1$

1. Check for $a_n$ and every $a_i$ for $1<=i<=n-1$ . 

2. Check for every $a_i$ for $2<=i<=n$  and $a_1$

3. Check for $a_i$ and $a_{i+1}$  . Given enough rotation for the whole array, eventually $a_{i+1}$ will be $a_1$ and $a_i$ will be $a_n$ 

4. Check for $a_1-a_n$ . Given enough rotation for the whole array, eventually $a_1$ and $a_n$ will be swapped

[Make It Increasing]([Problem - 1675B - Codeforces](https://codeforces.com/problemset/problem/1675/B)) - **Greedy**

Notice that an array is in increasing order if all the element are less than $a_n$ 

Start the loop from $n-1$ divide $a_i$ by $2$ until $a_i$ is less than $a_{i+1}$ if at some point $a_{i+1}$ is $0$ then it wont be possible  because there are no possitive integers less than $0$

[Deletive Editing]([Problem - 1666D - Codeforces](https://codeforces.com/problemset/problem/1666/D?adcd1e=caf4fy5tvfa9yh&csrf_token=7f955356994948207dacd978c84a9981)) - **Implementation**

Notice that a word is equal if both have the same amount of characters frequency.

Match character frequency by deleting leftmost occurrence, if at some point $s_i$   frequency is less than $t_i$ frequency then it is not possible 

[Array Cloning Technique]([Problem - 1665B - Codeforces](https://codeforces.com/problemset/problem/1665/B)) - **Implementation**

Notice that for every cloning we are doubling the frequency of each charater.

We only have to keep track the largest frequency, keep doubling until largest frequency is equal to $n$ , at some point after largest frequency is doubled, it will be greater than $n$ therefore we only have to take what's needed $n-largestFreq$  

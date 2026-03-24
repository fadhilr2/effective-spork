[Array Reordering](https://codeforces.com/problemset/problem/1535/B) - **Greedy**

Sort the array by even to odd. And count the amount of good indices, such that $i<j$.

Notice that $gcd(a_i,2a_j)>1$ ,is always true if both are even . Notice for a good pair, $a_j$ can be any number as it will multiplied by $2$ making it even, except $a_i$ must always be even. Therefore we have to maximize the amount of $a_i$ being even, to do that we must sort the array from even to odd.

[Bad Boy](https://codeforces.com/problemset/problem/1537/B) - **Math**

Placing the yoyo at opposite corners will always guarantee the most farther distance.

We can notice that the furthest point in any rectangle are the opposite corners, therefore no matter where anton initial position is, the distance would still be the maximum, that distance being $2(n-1)+2(m-1)$ 

[Forked](https://codeforces.com/problemset/problem/1904/A) - **Constructive**

We only need to consider the square from which the knight can attack the King, and check the $8$ total position.

A knight that attacks both pieces, must attack the king. Therefore, a valid point must also be at the king attack positions, hence we must check all 8 attack position

[Chemistry](https://codeforces.com/problemset/problem/1883/B) - **Constructive**

let $g$ be amount of characters with odd frequency, palindrome can be formed if $g <= 1$ .  we can remove up to $k$ characters with odd frequency, and check g $<= 1$ .

A palindrome reads the same forward and backward, so characters must appears in pair, except for 1 character in the middle. Removing $k$ characters with odd frequency, makes said characters even, thus reducing $g$ . 

[Vasilije in Cacak](https://codeforces.com/problemset/problem/1878/C) - **Math**

Check if $x$ is between the lowest sum and highest sum of $k$ distinct integers between $1$ and $n$ .

Notice that we can get $x$ by sum of $k$  distinct integers if $x$  is between the lowest sum and highest sum of $k$  distinct integers between $1$  and $n$ .

[Jellyfish and Undertale](https://codeforces.com/problemset/problem/1875/A) - **Greedy**

Sum of $min(1+x_i,a)-1$ will maximize the amount of time.

To maximize the time, we must use the tools at second $1$ , assume $c=1$ add $min(1+x_i,a)$ , and subtract by $1$ , because after we add the time, the timer will decrease by $1$  

[Make it Zero](https://codeforces.com/problemset/problem/1869/A?adcd1e=caf4f0fat4iouc&csrf_token=55aea101a2f2d04814abf28aae6c209d) - **Constructive**

If $n$ is even, we can do the operation twice to make all elements $0$ . Otherwise, if $n$ is odd, we must do the operation twice for $1$ to $n-1$ , then do the operation twice again for $n-1$ to $n$ . The result will always be $2$ or $4$ 

Notice that $X \oplus X=0$ . For an even array, when we do the operation twice for the entire array, there won't be a remainder. If it's odd, there will be remainder, to solve this remainder, we first have to make $[a_1,a_{n-1}]$ to zeroes (same as even case). Leaving us with $\{0,0,..,0,n\}$ . Notice that $0 \oplus X=X$ , doing the operation to $n-1$ and $n$ will result to $\{s,s\}$ , doing it again will result to $0$ (again same as even case).   

[Longest Divisors Interval](https://codeforces.com/contest/1855/problem/B) - **Math**

We only have to check from $1$ until $i$ is not a divisor of $n$ .

Suppose you find a valid interval $[l,r]$ . Note that the interval $[l,r]$ contains at least one multiple of $x$ for $1<= x<=r-l+1$ . Therefore, the interval $[1,r-l+1]$ is also valid and also has the same length. 

[Balanced Round](https://codeforces.com/problemset/problem/1850/D) - **Greedy** 

After sorting the array, any balanced round corresponds to a contiguous segment where the difference between adjacent elements is $<=k$ 

A segment that minimizes adjacent elements difference, are sorted segments.

[Comparison String](https://codeforces.com/problemset/problem/1837/B) - **Constructive** 

The minimum possible maximum value in the permutation is determined by the longest consecutive segment of identical characters. If the longest segment has length $k$ , we need at least $k+1$ distinct characters.

Given <<<<, For one $<$ there must be $2$ distinct element, the rest of consecutive characters after it will have $1$ distinct element. Notice that when the character changes, we can do the reverse order of the previous equal consecutive characters, <<>> = $\{1, 2, 3, 2, 1\}$, therefore, let $k$ = maximum length of consecutive equal characters, the minimum possible maximum element is $k+1$ 

[Permutation Swap](https://codeforces.com/problemset/problem/1828/B) - **Math**

We must move $a_i$ to $i$ ,making $k$ equal to $gcd(\{|i-a_i|\})$  . 

We want the largest $k$ such that we can sort the permutation. Notice that indexes are actually the sorted order, we can use this knowledge to move $a_i$ to $i$ , therefore $a_i$ need to jump $|i-a_i|$ length. Now, $|i-a_i|$ need to be divisible by $k$ . To find such $k$ , we must find $gcd(\{|i-a_i|\}$

[Odd Queries](https://codeforces.com/problemset/problem/1807/D) - **Math**

We only need to replace segment $[l,r]$ with $k$ , and check if the entire sum is still odd.

a sum of $l$ to $r$ where $a_i=k$  such that $l<=i<=r$ is equal to $k*(r-l+1)$ . Then we must remove the sum of $[l,r]$ from the sum of entire array, and add the sum of $k$ 's. We are essentially filling the empty gap.

[Not Dividing](https://codeforces.com/problemset/problem/1794/B) - **Constructive**

add 1 to all elements equal to 1. Then, if $a_i$ is a divisor of $a_{i+1}$ , add $1$ to $a_{i+1}$ until $a_i$ is not a divisor of $a_{i+1}$ .  

$1$ is a divisor of every number, hence why we need to make it $2$ .  

[Mainak and Array](https://codeforces.com/problemset/problem/1726/A) - **Greedy**

We can check all the possible combination of $a_n$ and $a_1$  without simulating the cyclic rotation. The following are all possibles combination:

1. $a_n-a_i$ , such that $1<=i<=n-1$

2. $a_i-a_1$ , such that $2<=i<=n$ 

3. $a_i-a_{i+1}$ .

We can only choose one segment, we can choose segment $1$ to $n-1$ , this allows us to get all possible combination of $a_1$ . Segment $2$ to $n$ , allows us to get all possible combination of $a_n$ . Segment $1$ to $n$ , allows us to get the rest of $a_n$ and $a_1$ combination. 

[NIT Destroys the Universe](https://codeforces.com/problemset/problem/1696/B) - **Greedy**

we can do the operation against the entire array, except if there are zero in a non zero segment, we must do the operation twice against the entire array.

Notice that at most the operation is $2$ . If there are no zero in a non zero segment, we can choose said non zero segment, and pick $0$ as the smallest integer that is not in the segment. Otherwise, we must do operation against the entire array first, and make $w$ to arbitrary smallest integer that is not in the segment, leaving us with an array of equal elements greater than $0$ , Therefore, we can do the operation against the entire array again, and pick $0$ .  

[Avtobus](https://codeforces.com/problemset/problem/1679/A) - **Math**

The maximum is equal to $n/4$ . The minimum is equal to $\lceil n/6 \rceil$  

Notice that since a valid solution must be even, therefore the remainder of division by $6$ will always be $\{0, 2, 4\}$ , with remainder $2$ we can borrow $2$ from $6$ and have $4$ wheel, with remainder $4$ we can use it for a bus already.

[Make It Increasing]([Problem - 1675B - Codeforces](https://codeforces.com/problemset/problem/1675/B) - **Implementation**

divide $a_i$ until it's less than $a_{i+1}$ such that $1<=i<=n-1$  . Except, if $a_i$ is $0$ and $a_i==a_{i+1}$ then its not possible.

We must do the loop from $n-1$ to create an increasing array, because for an ascending array, the elements before $n$ must be less than $n$ . if $a_i=0$ and $a_i==a_{i+1}$  then it wont be possible because there are no positive integer less than $0$  

[Deletive Editing](https://codeforces.com/problemset/problem/1666/D?adcd1e=caf4fy5tvfa9yh&csrf_token=7f955356994948207dacd978c84a9981) - **Greedy**

It doesn't matter what order of character we called, we only considered how many times a character is called to get from $s$ to $t$  and its ordering. 

Says $s_a$ and $t_a$ are character occurences for both $s$ and $t$ . If $s_a-t_a<0$ then it wont possible as there are less character from called out character. But this is not enough to verify the answer, we have to check if the order is correct, we can simulate the game, and remove $s_a-t_a$ characters at first occurence.    

[Array Cloning Technique](https://codeforces.com/problemset/problem/1665/B) - **Greedy**

Let character with largest frequency be $g$ . Do cloning and swapping operation until $g$ is equal to $n$. if at some point $g$  is greater than $n$ , then we only need to take $n-g$ .

Notice that for every cloning, we are doubling the characters frequencies. To reach the minimum operation, we must use the character with the larget frequency to the operation against.

[Make AP](https://codeforces.com/problemset/problem/1624/B) - **Math**

Fix one on number and assume the rest forms an AP. We need to fix on three numbers, then replace said number, with a number that forms an AP. Then check if the  new number is positive, and divisible by the old value, the quotient will be $m$ . 

If the new number is divisible by old number, then said number is multiplies of old number, therefore its quotient is $b$.There are three cases:

1. Fixing on $a$ , $a_{new}=b-d=b-(c-b)=2b-c$ . 

2. Fixing on $c$ , $c_{new}=b+d=b+(b-a)=2b-a$ .

3. Fixing on $b$ , $b_{new}$ must hold the following condition $b-a=c-b$ then $2b=a+c$ lastly $b=\frac{a+c}{2}$ . For this case, we also have to check if $a+c$ is divisible by $2$ , otherwise $b_{new}$ will never be divisible by $b$ 

[Odd Grasshopper](https://codeforces.com/contest/1607/problem/B) -  **Math**

We only need to calculate the displacement. For case $x_0=0$ , let $d$ be displacement, and there are 4 displacement:

1. $n \equiv 1 \pmod{4}$ , $d=-n$   

2. $n\equiv2\pmod{4}$ , $d=1$ 

3. $n\equiv3\pmod{4}$ , $d=n+1$ 

4. $n\equiv0\pmod{4}$ , $d=0$ 

For even case $x_n=x_0+d$ , and for odd case $x_nx_0-d$ .

Consider the first four action for $x_0=0$ 

$0$

$-1, n = 1 
$

$1, n = 2 
$

$4, n = 3 
$

$0, n = 4$

Notice that the jump went from left, right, right. Notice that for every jump that's multiple of $4$  , the point gets back to $x_0$ again, if we look closely there are also repeating patterns for the next $4$ jumps. For non zero even case, we can look closely that $d$ will be the same, hence $x_n=x_0+d$ . On the other hand, non zero odd cases, we can look closely that $d$ is the opposite of even, which goes, right, left, left, hence $x_n=x_0-d$ .

[AB Balance](https://codeforces.com/contest/1606/problem/A) - **Greedy**

We only have to match $s_1$ and $s_n$ to create $s$ with $AB=BA$ 

Notice that balance of $AB$ and $BA$ are determined by the first letter and last letter. For every transition from $a$ to $b$ we're increasing $AB$ , to balance this, we must transition back from $b$ to $a$ . Case $s_1=s_n$ , if we start at $a$ , then for every time we transition to $b$,  we have to go back to $a$ again, therefore balancing both $AB$ and $BA$ . 

We can proof this by induction, if the string consist of equal characters, then $AB=BA$ , if the string has more complex structure, but $s_1=s_n$ ,then there will be $s_i$ that matches $s_1$ and $s_n$ that splits the string in half $[1..i]$ and $[i..n]$ . Both these string has $AB=BA$ , so our string $s$ has also $AB=BA$ . 

[Make it Divisible by 25](https://codeforces.com/problemset/problem/1593/B) - **Greedy**

We have to remove digits from the right until it matches the end digit of end digits that is divisible by $25$ , then remove digit after the matched end digit, until it matches first digit of end digits that is divisible by $25$ .

Notice that number that's divisible by $25$ has the following end digits $\{25, 50, 75, 00\}$ , hence why matching the end digits is the optimal solution.

[Luntik and Subsequence](https://codeforces.com/contest/1582/problem/B) - **Math**

We have to calculate how many ways we can remove zeros and ones, which is equal to $2^{c_0}*c_1$ , where $c_0$ is zeroes count, and $c_1$ is ones count.

Notice that $0$ s doesn't effect the sum and we can get nearly full sum by removing exactly one $1$ , hence why we need to calculate how many ways we can remove zeroes AND ones. Removing zeroes is like a binary switch, for each zero, we can either keep it or remove it, therefore for each zero there is $2$ combinations, hence why $2^{c_0}$ . 

[Mocha and Math](https://codeforces.com/problemset/problem/1559/A) - **Greedy**

We can do the bitwse AND operation against the entire array to minimize the maximum value.

Notice that for bitwise AND operation, if we add more values to it, the value will either stay or decrease, in formal ways $\{a_i\&a_{i+1}\&\dots\&a_{r}\}<=max(\{a_i,a_{i+1},\dots,a_{r}\}) $  . To minimize the maximum value as much as possible, we have to add as much elements to the bitwise AND operation, hence why we must do the operation against the entire array. 

[Exciting Bets](https://codeforces.com/problemset/problem/1543/A) - **Math**

let $g$ be $|a-b|$ , the excitement is equal to $g$ , the minimum operation is equal to $min(a \ mod \ g, g-(a \ mod \ g))$ .

Notice that $|a-b|$ never changes, let this be $g$ , assume $a>b$ , then notice that $gcd(a,b)=gcd(g,b)$ , we can arbitrarily change the value of $b$ . To achieve the $gcd$ , we can either change the value of $b$ to the largest multiple of $g$ that is less than or equal to $b$ , or change the value of $b$ to the  smallest multiple of $g$ that is greater than or equal to $b$ . $a \ mod \ g$ is the difference to the nearest multiple of $g$ that is less than or equal to $b$ . While $g - (a \ mod \ g)$ is the difference to the nearest multiple of $g$ that is greater than or equal to $b$ , both in respect to $b$ , but then notice that when we change $b$ we also change $a$ , and still retains $g$ , so it doesnt matter in what respect.

[Odd Divisor](https://codeforces.com/problemset/problem/1475/A) - **Math** 

Divide $n$ by $2$ until its not divisible by $2$ , if $n=1$ then there are no odd divisors.

Recall that we can construct any number $>=1$ by the product of prime numbers. Notice that there is only one even prime number, which is $2$ . If a number is a power of $2$ , then there's no odd divisor, or in other words, if we exhaust $2$ factors , and there are no other factor of prime, then there's no odd divisors.

[Strange Partition](https://codeforces.com/problemset/problem/1471/A) - **Math**

Let the sum of $b$ be $s$ , the minimum beauty we can get is $\lceil \frac{s}{x} \rceil$ , while the maximum beauty we can get is $\lceil \frac{b_i}{x}\rceil +\dots+\lceil \frac{b_n}{x}\rceil$ in other words, we retain the array structure.

Notice that $\lceil \frac{s}{x} \rceil <= \lceil \frac{b_i}{x}\rceil +\dots+\lceil \frac{b_n}{x}\rceil$ . 

[Sum Of Medians](https://codeforces.com/problemset/problem/1440/B) - **Greedy**

We need to sum the medians from the right.

Notice that there are $\lceil \frac{n}{k} \rceil - 1$ numbers that is greater than the median, and there are $\lfloor \frac{n}{k} \rfloor$ numbers that is less than the median, so for everytime we pick a median, we will waste larger number. Therefore, we must waste the larger number as efficient as possible, to do this, we can sum the medians from the right, with $n-(\lceil \frac{n}{2} \rceil-1)$ this skips calculate the numbers after the median (including the median itself).

[Three Indices]([Problem - 1380A - Codeforces](https://codeforces.com/problemset/problem/1380/A) - **Brute Force**

Find an index $j$ such that $a[j-1] < a[j]$ and $a[j]>a[j+1]$ .

Notice that since it's a permutation, there won't be a case of adjacents dupe number. 

[01 Game](https://codeforces.com/problemset/problem/1373/B) - **Greedy**

Let frequency of zero be $c_0$ and frequency of one be $c_1$ , if $min(c_0, c_1)$ is not divisible by $2$ , then alice wins, otherwise bob wins

The maximum move we can make is $min(c_0,c_1)$ .

[Multiply by 2, divide by 6](https://codeforces.com/contest/1374/problem/B) - **Math**

let $cnt_2$ be the frequency of twos factor and $cnt_3$ be the frequency of threes factor, if there are other prime factors than $2$ and $3$ , then it's not possible, and if $cnt_2$ > $cnt_3$ then its not possible. Otherwise, the answer is $(cnt_3-cnt_2)+cnt_3$

Notice that dividing by $6$ simultaneously removes $2$ and $3$ factors, while multiplying by $2$ increases $2$ factor.If $n$  has other prime factors than $2$ and $3$ then its not possible. if $cnt_2>cnt_3$ then we cant make $2$ and $3$ factors equal because we can only increase $2$ . Otherwise, $(cnt_3-cnt_2)$ gives how many operation needed to make $cnt_2$ equal to $cnt_3$ and $+cnt_3$ gives how many operation to exhaust $3$ factors by dividing by $6$ 

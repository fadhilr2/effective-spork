[Array Reordering](https://codeforces.com/problemset/problem/1535/B) - **Math**

if $a_i$ is even then $gcd(a_i, 2a_j)$ will be at least $2$, no matter what the value of $a_j$ is.

therefore, we must order the array by even first then odd as its guaranteed to give a good pair. For the remaining odd values, their order is not important, because $gcd(a_i, 2a_j)$ = $gcd(a_i, a_j)$  for odd $a_i$ and $a_j$ , therefore we keep the remaining odd numbers as it is, and only add it to the answer if their gcd is greater than $1$, which exists, if both number parity stays the same after $a_j$ multiplied by $2$

[Bad Boy](https://codeforces.com/problemset/problem/1537/B)

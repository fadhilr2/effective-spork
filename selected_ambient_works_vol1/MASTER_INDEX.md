| Problem Name                    | Category           | Solution                                                                                                                                   |
|:------------------------------- |:------------------ |:------------------------------------------------------------------------------------------------------------------------------------------ |
| **Halloumi Boxes**              | **Greedy**         | If $k \ge 2$, any adjacent elements can be swapped (Bubble Sort logic), so it's always sortable. If $k=1$, the array must be pre-sorted.   |
| **Line Trip**                   | **Greedy**         | Fuel capacity $V$ must cover all gaps, including $2(x - a_n)$ for the return trip. $V = \max(a_1, a_2-a_1, \dots, a_n-a_{n-1}, 2(x-a_n))$. |
| **Cover in Water**              | **Greedy**         | 3 consecutive empty cells (`...`) create infinite water (answer = 2). Otherwise, answer = count of `.`.                                    |
| **Number Game**                 | **Math**           | Vanya wins if $n \pmod 3 \neq 0$ by making it divisible on turn 1. If $n \pmod 3 = 0$, Vova counters and wins.                             |
| **Jagged Swaps**                | **Greedy**         | $a_1$ is immutable. If $a_1 \neq 1$, it can never be sorted because 1 can't move to the front.                                             |
| **Doremy's Paint 3**            | **Constructive**   | Array must alternate between two values. Possible if at most 2 unique numbers exist and their frequencies differ by $\le 1$.               |
| **Don't try to count**          | **Brute Force**    | String length doubles each time; 5 or 6 operations are sufficient to check if $x$ is a substring.                                          |
| **How much does daytona cost?** | **Greedy**         | If $k$ exists anywhere, a subsegment of length 1 containing $k$ makes $k$ the most frequent.                                               |
| **Goals of Victory**            | **Math**           | Zero-sum system: sum of efficiencies is 0. Missing efficiency is $-\sum a_i$.                                                              |
| **Target Practice**             | **Implementation** | Hardcode values for rings and loop through input to sum values.                                                                            |
| **Ambitious Kid**               | **Math**           | Product is 0 if any element is 0. Minimum operations = $\min(\|a_i\|)$.                                                                    |
| **Sequence Game**               | **Constructive**   | If $a_{i-1} > a_i$, "pad" the sequence by inserting $a_i$ before it.                                                                       |
| **United We Stand**             | **Math**           | To prevent $x$ dividing $y$, move all instances of the max value to $c$ and others to $b$.                                                 |
| **Buttons**                     | **Greedy**         | Exhaust shared buttons $c$ first. If $a=b$, parity of $c$ determines the winner (odd = Anna, even = Katie).                                |
| **Array Coloring**              | **Math**           | Sum of two groups has same parity if total sum is even. Only even count of odd integers satisfies this.                                    |
| **Desorting**                   | **Greedy**         | Find smallest $diff = a_{i+1} - a_i$. Operations needed: $\lfloor diff / 2 \rfloor + 1$.                                                   |
| **Forbidden Integer**           | **Greedy**         | If $x \neq 1$, use $1$s. If $x=1$, use $2$s (if $n$ even) or $2$s and a $3$ (if $n$ odd and $k \ge 3$).                                    |
| **Grasshopper on a Line**       | **Math**           | If $k \nmid x$, 1 step. Otherwise, 2 steps: 1 and $n-1$.                                                                                   |
| **Unit Array**                  | **Math**           | Ensure $\sum a_i \ge 0$ (more $1$s than $-1$s) and even count of $-1$s for product = 1.                                                    |
| **Twin Permutations**           | **Constructive**   | Set $b_i = n + 1 - a_i$ to maintain a constant sum across all $i$.                                                                         |
| **Blank Space**                 | **Implementation** | Maximize counter of consecutive zeros; reset if $1$ is encountered.                                                                        |
| **Coins**                       | **Math**           | Any even amount of $k$ can be replaced by $2$s. Only check for 0 or 1 coin of denomination $k$.                                            |
| **Walking Master**              | **Math**           | $x-y$ is invariant for $(x+1, y+1)$ moves. Reachable if $d \ge b$ and $a-b \ge c-d$.                                                       |
| **Polycarp and coins**          | **Math**           | Initialize $c_1 = c_2 = n/3$, then use remainder to add one $c_1$ or $c_2$ coin.                                                           |
| **Odd Set**                     | **Math**           | For $n$ odd sums, you need exactly $n$ even and $n$ odd numbers.                                                                           |
| **Arithmetic Array**            | **Math**           | If $sum < n$, answer is 1. If $sum > n$, answer is $sum - n$ (add zeros).                                                                  |
| **Digit Sum**                   | **Greedy**         | Only numbers ending in 9 are "interesting." Answer = $(n+1)/10$.                                                                           |
| **We Need The Zero**            | **Bitmask**        | If $n$ is even, $XOR$ sum must be 0. If $n$ is odd, $x$ equals the $XOR$ sum of the array.                                                 |
| **Prepend and Append**          | **Implementation** | Use two pointers; while $a[left] \neq a[right]$, remove them. Final length is $n - 2 \times count$.                                        |
| **Serval and Mocha**            | **Math**           | Possible if there exists any pair with $gcd(x, y) \le 2$.                                                                                  |
| **One and Two**                 | **Math**           | Total count of $2$s must be even. Find index where $2$s are split equally.                                                                 |
| **Make it Beautiful**           | **Constructive**   | Put max and min elements at the front to avoid equal prefix sums.                                                                          |
| **Good Arrays**                 | **Math**           | Answer is $n - k$, where $k$ is the number of segments of consecutive same-parity numbers.                                                 |
| **Extremely Round**             | **Greedy**         | Precompute all extremely round numbers up to $10^6$ and count those $\le n$.                                                               |
| **Two Permutations**            | **Math**           | Possible if $a=b=n$ or $a+b+2 \le n$.                                                                                                      |

# 1. Nature of 800 Problems

At 800 rating, problems usually test:

- One key observation

- One invariant

- One parity trick

- One greedy “smallest move”

- Or one construction pattern

# 2. Patterns

breakdown of common 800 rated problem patterns

# A. Invariant

These problems give you an operation and ask if a state is reachable.

Key idea: **Something never changes.**

### Swap / Movement Invariants

- **Halloumi Boxes** k ≥ 2 = full swap power (bubble sort logic)

- **Jagged Swaps** a₁ never moves

- **Walking Master** x − y invariant

- **We Need The Zero** XOR invariant

---

### Math and Parity Invariants

- **Array Coloring** sum change when if there's an odd numbers

- **Unit Array** product of even amount of negatives equal to positive

- **Odd Set** even * odd = odd

- **One and Two** ones doesnt have an effect on the product

- **Buttons** if c is odd, its katie turn after c is exhausted. Otherwise, if c is even, its anna turns after c is exhausted

- *Serval and Mocha's Array* relies on the fact that the GCD of a prefix can only stay the same or decrease as you add more numbers.

---

### Zero-Sum Systems

- **Goals of Victory** sum of efficiency always 0

- Some XOR problems

---

# B. Greedy - Smallest Possible Move

Many 800-rated problems can be solved by looking for the absolute minimum requirement to satisfy a condition.

Examples:

- **How much does daytona cost?** subsegment length 1

- **Ambitious Kid**  make just one element zero

- **Desorting**  smallest adjacent difference

- **Coins** only need to check 0 or 1 large coin

If answer involves:

- “Exists”

- “At least one”

- “Minimum operation”

Try smallest possible structure.

---

# C. Frequency-Based Logic

Very common in **constructive/math** problems.

- **Doremy's Paint 3** Valid if there are only two numbers

- **Good Arrays**  Count how many $a[i] \neq a[i+1]$

- **Polycarp and Coins** Start with equal frequencies

- **Arithmetic Array** Counting how many zeroes needed for even cases. For negative sum, finding a number k that's equal to = n+1 

800 problems often don’t care about positions only counts.

---

# D. Alternating / Symmetry Construction

These are pure **constructive** thinking.

- **Twin Permutations** → bᵢ = n+1−aᵢ

- **Make it Beautiful** → max + min first

- **Doremy’s Paint 3** → alternate two values

- **Sequence Game** → pad duplicates

Common patterns:

- Reflect around center

- Alternate two values

- Use max/min pairing

---

# E. Gap / Distance Maximum Problems

- **Line Trip** Finding max distance

- **Blank Space** if $a[i]\neq a[i+1]$ then its a gap, or a separator

- **Extremely Round** Extremely Round number is rare, therefore there is a huge gaps between each Extremely Round number

---

# F. Divisibility / Modulo Pattern

Very common trick:

- **Number Game** → mod 3

- **Grasshopper on a Line** 

- **Digit Sum**

- **Coins** two coins of denomination k, can be swapped with k coins of denomination k

If problem mentions:

- Turns

- Repeated operations

- Cycles

→ Try modulo.

### Is it transformation-based?

Ask:

- What stays constant?

- Parity?

- XOR?

- Sum?

- Difference?

### Does it say “exists”?

Try:

- Single element

- Pair

- Length 1 segment

### Is order irrelevant?

Convert to:

- Count odds

- Count frequencies

- Count segments

### Is it distance/coverage?

Sort and check gaps.

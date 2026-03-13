---

## 1. Parity Tricks (Even / Odd)

**When to suspect**

- gcd with `2*x`

- odd frequencies

- parity of sums

**Core ideas**

- Even numbers often simplify gcd conditions.

- Only **count odd occurrences**.

- Replace segments → check **sum parity only**.

**Typical formulas**

```
odd_count ≤ 1 → palindrome possible
new_sum = total_sum - segment_sum + replacement_sum
```

---

# 2. Frequency Counting

Instead of simulating operations, **count occurrences**.

**When to use**

- characters

- zeros / ones

- repeated values

**Examples of logic**

```
moves = min(count0, count1)
ways = 2^(count_zero) * count_one
use most frequent element for greedy operations
```

---

# 3. Sorting Simplifies Constraints

Sorting often turns the problem into **contiguous segments**.

**Common observation**

```
if |a[i] - a[i+1]| ≤ k
→ valid segment
```

**Typical pattern**

```
sort array
scan longest valid segment
```

---

# 4. Extremes Matter (First / Last Elements)

Often only the **edges of the array** affect the answer.

Check combinations like:

```
a[n] - a[i]
a[i] - a[1]
a[i] - a[i+1]
```

Used for:

- cyclic arrays

- maximizing difference

- greedy rotations

---

# 5. Range Feasibility Check

Instead of constructing solutions, **check if target is in range**.

**Typical form**

```
min_possible ≤ target ≤ max_possible
```

Example:

```
sum of k smallest numbers
sum of k largest numbers
```

If inside range → **YES**

---

# 6. GCD / Divisibility Pattern

Operations often preserve **gcd relationships**.

**Common tricks**

```
g = gcd(|i - a[i]|)
g = |a - b|
```

Or check factor counts:

```
count_2
count_3
```

---

# 7. Replace Segment Algebra Trick

For segment modifications:

```
new_sum = total_sum - old_segment + new_segment
```

Used when:

- queries modify subarrays

- checking parity or divisibility.

---

# 8. Constructive Strategy

When the problem asks **to output operations**:

Typical tools:

- XOR properties

- reversing segments

- checking fixed candidate positions

Examples:

```
X ^ X = 0
0 ^ X = X
```

---

# 9. Cycle / Pattern Detection

Simulate first few steps → detect repeating cycle.

Common cycle sizes:

```
mod 2
mod 4
mod k
```

Example displacement pattern:

```
n % 4
```

---

# 10. Prime Factor Reasoning

Factor the number and analyze constraints.

Example logic:

```
remove factors of 2
if remaining = 1 → power of two
```

Or count prime factors for operations.

---

# 11. Segment Counting

Sometimes answer depends on **number of segments**.

Example:

```
count non-zero segments
```

Operations usually ≤ 2.

---

# 12. Arithmetic Progression Formulas

When AP is involved:

```
2b = a + c
a_new = 2b - c
c_new = 2b - a
b_new = (a + c)/2
```

Always check:

```
value > 0
divisible condition
```

---

# Fast Pattern Recognition (Contest Mindset)

If you see → Think:

| Signal              | Likely Pattern |
| ------------------- | -------------- |
| odd/even            | parity trick   |
| characters / 0-1    | frequency      |
| minimize difference | sort + segment |
| cyclic array        | extremes       |
| target sum          | range check    |
| divisibility        | gcd            |
| operations required | constructive   |
| repeating behavior  | modulo cycle   |

---

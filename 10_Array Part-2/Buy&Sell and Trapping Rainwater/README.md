# 📈 Buy and Sell Stock (Single Transaction)

## 🧠 Problem Statement

You are given an array `prices[]` where:

- `prices[i]` represents the stock price on day `i`
- You are allowed to:
  - Buy the stock **once**
  - Sell the stock **once**
- You must **buy before you sell**
- Your goal is to calculate the **maximum profit**
- If no profit is possible, return `0`

---

## 🎯 What the Problem Is Actually Asking

The problem is **not** asking you to try all buy–sell combinations.

It is asking:

> “If I sell the stock today, what is the **best profit** I could have made by buying it on the **cheapest day before today**?”

---

## 🔍 Key Insight (Core Idea)

Profit is always calculated as:

profit = sellingPrice - buyingPrice

To maximize profit:

- Buying price should be as **small as possible**
- Selling price should be as **large as possible**, but **after buying**

So we only need to track:

1. **Minimum price seen so far**
2. **Maximum profit seen so far**

---

## 🧩 Why Brute Force Is Inefficient

Brute force approach:

- For every day, try buying
- For every future day, try selling

Time Complexity:
O(n²)

This is slow and unnecessary.

---

## 🚀 Optimized Strategy (Greedy Approach)

We solve this in **one pass** using greedy logic.

### Maintain Two Variables:

- `minPrice` → minimum stock price seen so far
- `maxProfit` → maximum profit achieved so far

---

## 🪜 Step-by-Step Thought Process

### Step 1: Assume First Day as Buying Day

- Initially, we treat day 0 as the buying day
- Set `minPrice = prices[0]`
- Set `maxProfit = 0` (profit can never be negative)

---

### Step 2: Traverse Prices From Left to Right

For each day:

1. Assume today is the **selling day**
2. Calculate profit:
   profit = todayPrice - minPrice

3. Update `maxProfit` if this profit is better
4. Update `minPrice` if today’s price is smaller

---

## 🧪 Example Dry Run

### Input

prices = [7, 1, 5, 3, 6, 4]

### Initial State

minPrice = 7
maxProfit = 0

### Day-wise Analysis

| Day | Price | minPrice | Profit | maxProfit |
| --- | ----- | -------- | ------ | --------- |
| 0   | 7     | 7        | 0      | 0         |
| 1   | 1     | 1        | 0      | 0         |
| 2   | 5     | 1        | 4      | 4         |
| 3   | 3     | 1        | 2      | 4         |
| 4   | 6     | 1        | 5      | 5         |
| 5   | 4     | 1        | 3      | 5         |

### ✅ Final Answer

Maximum Profit = 5

---

## 🧠 Why This Greedy Approach Works

- At every step, we make the **best local decision**
- Buying at the **lowest price so far**
- Selling when it gives **maximum profit**
- This guarantees the **global maximum profit**

---

## ⏱️ Time and Space Complexity

| Metric           | Complexity |
| ---------------- | ---------- |
| Time Complexity  | `O(n)`     |
| Space Complexity | `O(1)`     |

Single loop, no extra arrays.

---

## 🚫 Edge Cases

### Case 1: Prices Always Decrease

[7, 6, 4, 3, 1]

- No profitable transaction
- Output: `0`

---

### Case 2: Only One Day

[5]

- Cannot sell
- Output: `0`

---

## 🗣️ Interview Explanation (Short & Clear)

> “I iterate through the prices once, keep track of the minimum price so far, and calculate the profit for each day assuming it as a selling day. The maximum of these profits is the answer.”

---

## 🔗 Related Concepts

- Greedy Algorithm
- Prefix Minimum
- Maximum Difference Problem
- Kadane’s Algorithm (conceptual similarity)

---

## ✅ Summary

- Buy once, sell once
- Buy before sell
- Track minimum price
- Track maximum profit
- One pass solution

---

🔥 **This is one of the most important greedy problems for placements.**

# 🌧️ Trapping Rain Water

## 🧠 Problem Statement

You are given an array `height[]` where:

- Each element represents the height of a building/bar
- The width of each building is `1`
- After heavy rainfall, water gets trapped **between the buildings**

Your task is to calculate **how much total rain water** can be trapped.

---

## 🎯 What the Problem Is Actually Asking

The problem is NOT asking:

- How tall each building is
- Or how much water is on the left or right alone

It is asking:

> For every building, **how much water can stay on top of it** after rain?

And then:

> Add the water stored on top of **each building**.

---

## 🔑 Core Condition for Water Trapping

Water can be trapped **only if**:

- There is a **taller building on the left**
- There is a **taller building on the right**

If either side is missing, **water will leak**, so no water is stored.

---

## 🧩 Key Insight (Most Important Line)

For any index `i`:

```
water at i = min(maxHeightOnLeft, maxHeightOnRight) - height[i]
```

Why `min`?

- Water can rise only up to the **shorter wall**

---

## 🚫 Why Brute Force Is Not Good

Brute force idea:

- For every building:
  - Scan left side to find max height
  - Scan right side to find max height

Time Complexity:

```
O(n²)
```

This is slow for large inputs.

---

## 🚀 Optimized Approach: Prefix & Suffix Maximum

We precompute information so we don’t repeat work.

### We create two helper arrays:

1. `leftMax[]` → maximum height **to the left** of each index
2. `rightMax[]` → maximum height **to the right** of each index

---

## 🪜 Step 1: Build `leftMax[]` (Prefix Maximum)

Meaning:

- `leftMax[i]` stores the **tallest building from index `0` to `i`**

Logic:

- First building has no left → it is the max itself
- For every next building:
  - Compare previous leftMax with current height

This answers:

> “What is the tallest wall on the LEFT of me?”

---

## 🪜 Step 2: Build `rightMax[]` (Suffix Maximum)

Meaning:

- `rightMax[i]` stores the **tallest building from index `i` to `n-1`**

Logic:

- Last building has no right → it is the max itself
- Traverse from right to left

This answers:

> “What is the tallest wall on the RIGHT of me?”

---

## 🧪 Example Walkthrough

### Input

```
height = [4, 2, 0, 6, 3, 2, 5]
```

### leftMax[]

```
[4, 4, 4, 6, 6, 6, 6]
```

### rightMax[]

```
[6, 6, 6, 6, 5, 5, 5]
```

---

## 💧 Step 3: Calculate Water at Each Index

For every index `i`:

```
waterAtI = min(leftMax[i], rightMax[i]) - height[i]
```

Only add water if value is **positive**.

| Index | Height | leftMax | rightMax | Water |
| ----- | ------ | ------- | -------- | ----- |
| 0     | 4      | 4       | 6        | 0     |
| 1     | 2      | 4       | 6        | 2     |
| 2     | 0      | 4       | 6        | 4     |
| 3     | 6      | 6       | 6        | 0     |
| 4     | 3      | 6       | 5        | 2     |
| 5     | 2      | 6       | 5        | 3     |
| 6     | 5      | 6       | 5        | 0     |

### ✅ Total Water = `11`

---

## 🧠 Why This Approach Works

- Every building knows its **left boundary**
- Every building knows its **right boundary**
- Water depends only on the **shorter boundary**
- No repeated scanning

---

## ⏱️ Time & Space Complexity

| Metric | Complexity |
| ------ | ---------- |
| Time   | `O(n)`     |
| Space  | `O(n)`     |

---

## 🗣️ Interview Explanation (Short)

> “I precompute left and right maximum heights for each index and calculate trapped water using the minimum of the two boundaries.”

---

## 🔗 Related Concepts

- Prefix Maximum
- Suffix Maximum
- Two Pointer Optimization
- Monotonic Stack

---

## ✅ Summary

- Water needs two walls
- Shorter wall decides water level
- Prefix + suffix makes it efficient
- Linear time solution

🔥 **One of the most asked array problems in interviews.**

---

**👨‍💻 Author**
Maintained by Hardeep Singh for mastering C++ fundamentals.

🚀 Happy Coding!

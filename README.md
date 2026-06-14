# Longest Balanced Subarray Algorithms

## Project Overview

This project presents multiple algorithmic approaches for solving the Longest Balanced Subarray problem using C++.

A balanced subarray is defined as a contiguous sequence containing an equal number of 0s and 1s.

The objective is to determine the maximum length balanced subarray within a given binary array while comparing different algorithmic techniques and their efficiencies.

---

## Problem Statement

Given a binary array consisting of only 0s and 1s:

Example:

Input:

[0, 1, 1, 0, 0, 1]

Output:

6

Explanation:

The entire array contains an equal number of 0s and 1s.

---

## Implemented Solutions

### 1. Iterative Solution

File:

```cpp
balanced_subarray_iterative.cpp
```

Approach:

- Uses prefix sums.
- Converts:
  - 0 → -1
  - 1 → +1
- Stores first occurrence of each prefix sum using a hash map.
- Achieves linear performance.

Complexity:

- Time Complexity: O(n)
- Space Complexity: O(n)

---

### 2. Recursive Divide and Conquer Solution

File:

```cpp
balanced_subarray_recursive_nlogn.cpp
```

Approach:

- Applies Divide and Conquer principles.
- Splits the array recursively.
- Combines results from left and right partitions.

Complexity:

- Time Complexity: O(n log n)
- Space Complexity: O(n)

---

### 3. Recursive Linear Solution

File:

```cpp
balanced_subarray_recursive_linear.cpp
```

Approach:

- Recursive implementation while maintaining prefix information.
- Produces linear performance similar to the iterative approach.

Complexity:

- Time Complexity: O(n)
- Space Complexity: O(n)

---

## Complexity Comparison

| Approach | Time Complexity | Space Complexity |
|-----------|----------------|------------------|
| Iterative | O(n) | O(n) |
| Recursive Divide & Conquer | O(n log n) | O(n) |
| Recursive Linear | O(n) | O(n) |

---

## Technologies Used

- C++
- STL
- Hash Maps
- Recursion
- Divide and Conquer
- Algorithm Analysis

---

## Learning Outcomes

Through this project we gained practical experience in:

- Algorithm design and analysis.
- Time and space complexity evaluation.
- Recursive programming techniques.
- Divide and Conquer strategies.
- Performance comparison between multiple solutions.

---

## Team Members

- Ali Mohamed Abdelsalam
- Shady Abdo Mohamed
- Ziad Amr Gamal
- Ziad Mohamed Mohamed
- Khaled Ahmed Hamdy
- Omar Mohamed Osama
- Kholoud Mohamed Wael

---

## Course

Algorithms and Data Structures

---

## License

This project was developed for educational and academic purposes.

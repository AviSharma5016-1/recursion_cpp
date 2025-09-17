
# Recursive Function Programs in C++

***

### Aim
To implement and understand the concept of recursion in C++ through various problems such as finding the factorial of a number, summing natural numbers, printing numbers in reverse order, and reversing a string.

***

### Theory

Recursion is a **programming technique** where a function calls itself directly or indirectly to solve a larger problem by breaking it down into smaller subproblems.  
Recursive programs generally consist of:

1. **Base Case:** Stops further recursive calls; prevents infinite recursion.  
2. **Recursive Case:** Reduces the problem size step by step by calling the same function.

#### Advantages of Recursion
- Compact, elegant code.  
- Naturally represents problems like factorials, sums, and string reversals.  

#### Disadvantages
- May cause **stack overflow** for very deep recursion.  
- Sometimes slower than iteration because of function call overhead.

***

### Comparative Table of Implemented Programs

| Program Task                          | Recursive Function Used | Base Condition      | Recursive Step                        | Output Example |
|---------------------------------------|-------------------------|---------------------|----------------------------------------|----------------|
| Factorial of a number                 | `fact(n)`               | if n <= 1 → return 1| return n × fact(n - 1)                 | 5 → 120        |
| Sum of first N natural numbers        | `fact_add(n)`           | if n <= 1 → return 1| return n + fact_add(n - 1)             | 10 → 55        |
| Natural numbers in reverse order      | `fact_reverse(n)`       | if n <= 0 → stop    | print(n), then recurse with (n - 1)    | 5 → 5 4 3 2 1  |
| Reversing a string                    | `rev_str(str, n)`       | if n < 0 → stop     | print(str[n]), then recurse with (n-1) | "Avi" → "ivA"  |  

***

### Algorithms

#### 1. Factorial using Recursion
1. Start the program.  
2. Read the number `num` from the user.  
3. Call function `fact(num)`.  
   - If `n <= 1` return 1.  
   - Else return `n * fact(n-1)`.  
4. Print the factorial value returned.  
5. Stop.

#### 2. Sum of First N Natural Numbers
1. Start the program.  
2. Read the number `num`.  
3. Call function `fact_add(num)`.  
   - If `n <= 1` return 1.  
   - Else return `n + fact_add(n-1)`.  
4. Print the sum returned.  
5. Stop.

#### 3. Reverse Order of Natural Numbers
1. Start the program.  
2. Read the number `num`.  
3. Call function `fact_reverse(num)`.  
   - If `n <= 0` stop recursion.  
   - Else print `n` and call `fact_reverse(n-1)`.  
4. Display numbers in reverse sequence.  
5. Stop.  

#### 4. Reverse a String
1. Start the program.  
2. Read the string `str`.  
3. Call function `rev_str(str, str.length()-1)`.  
   - If `n < 0` stop recursion.  
   - Else print character at `str[n]`, then call with `n-1`.  
4. Display the reversed string.  
5. Stop.

***

### Conclusion
The set of recursive programs successfully demonstrates the **power and simplicity of recursion** in C++. Recursion eliminates the need for complex looping logic by breaking problems into smaller cases handled by the function itself. Factorials, summations, number printing, and string reversal are classic examples where recursion provides elegant solutions. However, while elegant, recursion must always include a **base condition** to avoid infinite loops and stack overflow errors.  

These programs build a strong foundation for understanding recursion as an essential concept in both mathematics and computer science.  

***

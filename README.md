# Descion-making-using-loops#
### Aim:
To explore and implement decision-making statements and loops in C++.

### Theory:

#### Nested `for` Loops:
A nested `for` loop is a loop placed inside another loop. This construct is typically used to traverse multiple dimensions of data or to generate patterns.

**How It Works:**

1. **Initialization and Execution:**
   - The outer loop initializes, checks its condition, and updates its iteration variable.
   
2. **Inner Loop Execution:**
   - For each iteration of the outer loop:
     - The inner loop initializes, checks its condition, and updates its iteration variable.
     - The inner loop executes its body until its condition is no longer satisfied.
     - After completing its iterations, control returns to the outer loop.

3. **Continuation:**
   - The outer loop increments and continues its iterations until its condition becomes false.

#### `while` Loop:
A while loop is a control flow statement that repeatedly executes a block of code as long as a specified condition remains true.

Begin.

Define the variables i, j, k, and n.

Read the value for n, which represents the number of rows.

Set the initial value of k to 1.

Outer Loop:

Iterate i from 1 to n:
Inner Loop 1:

For each value of i, iterate j from 1 to n - i:

Print a space.
Inner Loop 2:

For each value of i, iterate j from 1 to i:

Print the current value of k followed by a space.

Increment k by 1.

After completing Inner Loop 2, print a newline.

End.





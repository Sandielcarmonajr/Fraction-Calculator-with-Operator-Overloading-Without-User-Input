-------------------------------------------------------------------------------
# Implementation Explanation Document

## Student Information
- Full Name: Sandiel Carmona jr.
- Course Name: CSCL 373 - Advanced Data structures
- Course Description: This course explores advanced data structures and C++ programming, 
emphasizing object-oriented programming, arrays, pointers, and operator overloading.
- Assignment Title: Fraction Calculator with Operator Overloading (Without User Input)
- Date: 09/14/2025

## 1. Introduction
In this assignment, I created a C++ program that simulates a basic fraction calculator. 
The program uses a Fraction class with operator overloading to perform addition, 
subtraction, multiplication, and division between fractions. 
The main function automates testing by generating random fractions and operations, 
eliminating the need for user input. This exercise helped reinforce my 
understanding of classes, operator overloading, and handling edge cases 
like division by zero.

## 2. Tools and Technologies Used
[List the tools, technologies, or platforms you used to implement the assignment. 
This could include programming languages, development environments, operating 
systems, AI tools, or libraries.]

- Tool 1: C++ using CodeLabZone 

## 3. Implementation Details
### Key Components
- Classes:
   Fraction: Encapsulates a fraction with numerator and denominator, 
   overloads arithmetic operators, provides simplification and printing methods.
   
- Functions:
   - getNumerator() / getDenominator(): Returns the numerator or denominator.
   - setNumerator() / setDenominator(): Updates numerator or denominator.
   - simplify(): Reduces the fraction to its simplest form.
   - Operator overloads +, -, *, /: Perform arithmetic operations between two Fraction objects.
   - print(): Outputs the fraction in numerator/denominator format.

### Design Choices
- Encapsulated all arithmetic logic in the Fraction class to ensure modularity.

- Used a gcd() helper function to simplify fractions automatically after each operation.

- Added checks to prevent division by zero, either when constructing a fraction 
with denominator 0 or when performing division operations.

- In the main function, random fractions are generated and operations selected using rand() % 4.
This automates testing and demonstrates correct operator overloading functionality.

- Operator overloading allows Fraction objects to be manipulated using standard arithmetic operators, 
improving code readability and making the calculator intuitive to use.

## 4. Challenges, Solutions, and Error Report
### Technical Challenges
- Challenge 1: Handling division by zero in division operator.
  - Solution: Added a conditional check in operator/() and in the main function. 
  Returns 0/1 or prints a message when the second fraction’s numerator is 0.

- Challenge 2: Ensuring fractions are always simplified after operations.
  - Solution: Implemented simplify() using a gcd function and called it after every 
  arithmetic operation.
  
- Challenge 3: Randomly generated fractions could lead to invalid operations.
  - Solution: Constrained numerators and denominators to the range 1–15 
  and included checks for denominator = 0.

### Error Report
- Common Errors Encountered:
  - Error 1: Division by zero when denominator of second fraction is 0.
    - Cause: Randomly generated fractions could include 0.
    - Solution: In Fraction constructor, if denominator = 0, set it to 1. 
    In operator/(), return 0/1 if numerator of divisor is 0.
  
  - Error 2: Incorrect subtraction calculation.
    - Cause: Typo in formula for subtraction (originally added numerators instead of subtracting).
    - Solution: Corrected operator-() to: numerator * other.denominator - other.numerator * denominator.
    
  - Error 3: Negative denominators leading to unconventional fraction display.
    - Cause: Fractions with negative denominators display as num/-den.
    - Solution: Updated simplify() to flip signs when denominator < 0.
    
  - Error 4: Fractions not simplified before printing.
    - Cause: Operations returned fractions without calling simplify().
    - Solution: Ensure every arithmetic operator calls simplify() before returning result.
    
  - Error 5: Random number generator producing same results across runs
    - Cause: srand() not seeded properly.
    - Solution: Added srand(static_cast<unsigned int>(time(0))) at the start of main().

## 5. Testing Strategy
### Verification Methods
Test Case 1: Random addition of fractions, verified simplified output.
Test Case 2: Random subtraction of fractions, checked correct numerator and denominator.
Test Case 3: Multiplication of fractions, verified simplification.
Test Case 4: Division of fractions, ensured division by zero is handled and simplification occurs.
Test Case 5: Multiple runs to ensure different random fractions and operations each time.
- Division by zero verification: Confirmed that when the second fraction’s numerator is 0, the program
returns 0/1 or prints a message without crashing.
- Automated testing outputs: Random fractions and operations are generated each run to
demonstrate functionality.

example output from testing loop:
5/8 + 2/3 = 31/24
7/10 - 3/5 = 1/10
3/4 * 2/3 = 1/2
4/5 / 1/2 = 8/5

Using a calculator to double-check the answers also helped ensure correctness.

## 6. Conclusion
This assignment reinforced understanding of C++ classes, operator overloading, and automated testing.
Handling errors like division by zero and ensuring fractions are simplified increased the robustness of the
program. This experience will help me implement future projects that require clean, 
modular, and error-resistant code.

## 7. References
Lesson 9 review (JJay CSCI 373 course materials) "https: www.jjay-csci272.org/course-materials/lesson-9"
-------------------------------------------------------------------------------

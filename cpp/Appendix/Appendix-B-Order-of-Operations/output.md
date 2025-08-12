# Appendix 

## B. Order of Operations

The order of operations is the evaluation order for an expression. When parentheses are not included, the following table describes which order the compiler assumes you meant. Of course, it is always better to be explicit by including parentheses. Operators in rows of the same color have the same precedence.

| Name | Operator | Example |
| :--: | :--: | :--: |
| Array indexing | [] | array[4] |
| Function call | () | function() |
| Postfix increment and decrement | $++$ | count++ count-- |
| Prefix increment and decrement | $++$ | ++count --count |
| Not | ! | !married |
| Negative | - | $-4$ |
| Dereference | * | *pValue |
| Address-of | \& | \&value |
| Allocate with new | new | new int |
| Free with delete | delete | delete pValue |
| Casting | () | (int)4.2 |
| Get size of | sizeof | sizeof(int) |
| Multiplication | * | $3 * 4$ |
| Division | / | $3 / 4$ |
| Modulus | \% | $3 \% 4$ |
| Addition | $+$ | $3+4$ |
| Subtraction | - | $3-4$ |
| Insertion | $<<$ | cout << value |
| Extraction | $>>$ | cin >> value |
| Greater than, etc. | $>=<=><$ | $3>=4$ |
| Equal to, not equal to | $==!=$ | $3!=4$ |
| Logical And | \&\& | passed \&\& juniorStatus |
| Logical OR | || | passed || juniorStatus |
| Assignment, etc. | $=+=$ | value $+=4$ |
| Conditional expression | ? : | passed ? "happy" : "sad" |
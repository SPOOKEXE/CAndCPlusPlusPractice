
## KEYWORDS ##

auto
else
long
switch
break
enum
register
typedef
case
extern
return
union
char
float
short
unsigned
const
for
signed
void
continue
goto
sizeof
volatile
default
if
static
while
do
int
struct
_Packed
double

## INTEGER TYPES ##

char			1 byte			-128 to 127 or 0 to 255
unsigned char	1 byte			0 to 255
signed char		1 byte			-128 to 127
int				2 or 4 bytes	-32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
unsigned int	2 or 4 bytes	0 to 65,535 or 0 to 4,294,967,295
short			2 bytes			-32,768 to 32,767
unsigned short	2 bytes			0 to 65,535
long			8 bytes 		-9223372036854775808 to 9223372036854775807
unsigned long	8 bytes			0 to 18446744073709551615

## Floating-Point Types ##

float			4 byte		1.2E-38 to 3.4E+38			6 decimal places
double			8 byte		2.3E-308 to 1.7E+308		15 decimal places
long double		10 byte		3.4E-4932 to 1.1E+4932		19 decimal places

## Variable Definition ##

-- Declaring Variables --

Base ; " type variable_list; "

```cpp
int i, j, k;
char c, ch;
float f, salary;
double d;
```

-- Initializing Variables --

Base ; " type variable_name = value; "

```cpp
extern int d = 3, f = 5; // declaration of d and f.
int d = 3, f = 5; 		 // definition and initializing d and f.
byte z = 22; 			 // definition and initializes z.
char x = 'x'; 			 // the variable x has the value 'x'.

int i; // declare
i = 5; // initialize

int func(); // function declaration

int func() { return 0; } // function initialization
```

## Lvalues and Rvalues ##

Two kinds of expressions in C;

**lvalue** − Expressions that refer to a memory 
location are called "lvalue" expressions. 
An lvalue may appear as either the left-hand 
or right-hand side of an assignment.

**rvalue** − The term rvalue refers to a data 
value that is stored at some address in memory. An 
rvalue is an expression that cannot have a value 
assigned to it which means an rvalue may appear on 
the right-hand side but not on the left-hand side 
of an assignment.

Variables are lvalues.

```cpp
int g = 20; // valid statement
10 = 20; // invalid statement; would generate compile-time error
```

## Integer Literals ##

Can be a decimal, octal, or hexadecimal constant.
A prefix specifies the base or radix: 0x or 0X for
hexadecimal, 0 for octal, and nothing for decimal.

An integer literal can also have a suffix that is a 
combination of U and L, for unsigned and long, respectively. 
The suffix can be uppercase or lowercase and can be in any 
order.

-- LITERALS EXAMPES --
```cpp
212 /* Legal */
215u /* Legal */
0xFeeL /* Legal */

078 /* Illegal: 8 is not an octal digit */
032UU /* Illegal: cannot repeat a suffix */

85 /* decimal */
0213 /* octal */
0x4b /* hexadecimal */
30 /* int */
30u /* unsigned int */
30l /* long */
30ul /* unsigned long */
```

-- Floating-point Literals --

A floating-point literal has an integer part,
a decimal point, a fractional part, and an 
exponent part.

Can represent either in decimal form or 
exponential form.

While representing decimal form, you must include 
the decimal point, the exponent, or both; and 
while representing exponential form, you must 
include the integer part, the fractional part, or 
both. The signed exponent is introduced by e or E.

-- LITERALS EXAMPES --
```cpp
3.14159 /* Legal */
314159E-5L /* Legal */

510E /* Illegal: incomplete exponent */
210f /* Illegal: no decimal or exponent */
.e55 /* Illegal: missing integer or fraction */
```

-- Character Constants --
Character literals are enclosed in single quotes

A character literal can be;
- plain character(e.g., 'x'),
- escape sequence (e.g., '\t'),
- universal character (e.g., '\u02C0').

-- String Literals --

String literals or constants are enclosed in 
double quotes "".

You can break a long line into multiple lines using string literals 
and separating them using white spaces.

Examples;
```cpp
"hello, dear"

"hello, \

dear"

"hello, " "d" "ear"
```

-- Defining Constants --

Two ways in C to define constants;
- #define preprocessor.
- const keyword.

```cpp
#define identifier value

/* Allowed in the namespace */
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'
```

```cpp
const type variable = value;

/* Within a method only */
const int  LENGTH = 10;
const int  WIDTH = 5;
const char NEWLINE = '\n';
```

## C - Storage Classes ##

A storage class defines the scope (visibility) and life-time of 
variables and/or functions

Four different storage classes;
- auto
- register
- static
- extern

The auto storage class is the default storage class for all local 
variables.

**Auto**
```cpp
{
   int mount;
   auto int month;
}
```

The example above defines two variables with in the same storage 
class. 'auto' can only be used within functions, i.e., local 
variables.

**register**

The register storage class is used to define local variables that 
should be stored in a register instead of RAM.

This means that the variable has a maximum size equal to the 
register size (usually one word) and can't have the unary '&' 
operator applied to it (as it does not have a memory location).

```cpp
{
   register int miles;
}
```

The register should only be used for variables that require quick 
access such as counters.

Also note that defining 'register' does not mean that the variable will be stored in a register. It MIGHT be stored in a register 
depending on hardware and implementation restrictions.

**static**

Instructs the compiler to keep a local variable in existence during 
the life-time of the program instead of creating and destroying it 
each time it comes into and goes out of scope. Therefore, making 
local variables static allows them to maintain their values between 
function calls.

Can also be applied to global variables. When this is done, it 
causes that variable's scope to be restricted to the file in which 
it is declared.

When static is used on a global variable, it causes only one copy 
of that member to be shared by all the objects of its class.

**extern**
The extern storage class is used to give a reference of a global 
variable that is visible to ALL the program files.

When you use 'extern', the variable cannot be initialized however, 
it points the variable name at a storage location that has been 
previously defined.

When you have multiple files and you define a global variable or 
function, which will also be used in other files, then extern will 
be used in another file to provide the reference of defined 
variable or function. Just for understanding, extern is used to 
declare a global variable or function in another file.

The extern modifier is most commonly used when there are two or 
more files sharing the same global variables or functions as 
explained below.

**First File: main.c**
```cpp
#include <stdio.h>
int count ;
extern void write_extern();

main() {
   count = 5;
   write_extern();
}
```

**Second File: support.c**
```cpp
#include <stdio.h>

extern int count;

void write_extern(void) {
   printf("count is %d\n", count);
}
```

Here, extern is being used to declare count in the second file, 
where as it has its definition in the first file

Compile these two files as follows;
``gcc main.c support.c``

## C - Operators ##

Arithmetic Operators
Relational Operators
Logical Operators
Bitwise Operators
Assignment Operators
Misc Operators

-- Arithmetic Operators --

+  | adds two operands
-  | subtract second operand from the first
*  | multiply two operands
/  | divide numerator by de-numerator (denonimator)
%  | Modulus operator and remainder of after an integer division.
++ | Increment integer by one
-- | Decrement integer by one

-- Relational Operators --

==   | Check if the values of two operands are equal 
!=   | Check if the values of two operands are not equal.
\\>  | Check left value is greater than right value.
\\<  | Check left value is less than right value.
\\>= | Check left value is greater or equal to right value.
\\<= | Check if left value is less or equal to right value.

-- Logical Operators --

&& | Called Logical AND operator. True if both operands are not 0.
|| | Called Logical OR Operator. True if either operands are not 0.
!  | Called Logical NOT Operator. Reverse logical state.

-- Bitwise Operators --

Bitwise operator works on bits and perform bit-by-bit operation. 
The truth tables for "&", "|", and "^" is as follows;

|--------------------------------------|
| p	|  q  | p & q |  p | q  |  p ^ q |
|--------------------------------------|
| 0	|  0  |   0	  |    0	   |    0   |
| 0	|  1  |   0	  |    1    |    1   |
| 1	|  1  |   1	  |    1	   |    0   |
| 1	|  0  |   0	  |    1	   |    1   |
|--------------------------------------|

**Operators**

&
Binary AND Operator copies a bit to the result if it exists in 
both operands
(A & B)

|
Binary OR Operator copies a bit if it exists in either operand.
(A | B) 

^
Binary XOR Operator copies the bit if it is set in one operand but 
not both.
(A ^ B)

~
Binary One's Complement Operator is unary and has the effect of 
'flipping' bits.
(~A )

<<
Binary Left Shift Operator. The left operands value is moved left 
by the number of bits specified by the right operand.
(A << 2)

\\>>
Binary Right Shift Operator. The left operands value is moved right 
by the number of bits specified by the right operand.
(A >> 2)

**Assignment Operators**

=
Simple assignment operator. Assigns values from right side operands 
to left side operand

+=
Add AND assignment operator. It adds the right operand to the left 
operand and assign the result to the left operand.

-=
Subtract AND assignment operator. It subtracts the right operand 
from the left operand and assigns the result to the left operand.

*=
Multiply AND assignment operator. It multiplies the right operand 
with the left operand and assigns the result to the left operand.

/=
Divide AND assignment operator. It divides the left operand with 
the right operand and assigns the result to the left operand.

%=
Modulus AND assignment operator. It takes modulus using two 
operands and assigns the result to the left operand.

<<=
Left shift AND assignment operator.

\\>>=
Right shift AND assignment operator.

&=
Bitwise AND assignment operator.

^=
Bitwise exclusive OR and assignment operator.

|=
Bitwise inclusive OR and assignment operator.

**Misc Operators ↦ sizeof & ternary**

sizeof()
Returns the size of a variable.

&
Returns the address of a variable.

*
Pointer to a variable.

(condition) ? (if true) : (if false)
Conditional Expression.

## Operators Precedence ##

Operator precedence determines the grouping of terms in an 
expression and decides how an expression is evaluated. Certain 
operators have higher precedence than others; for example, the 
multiplication operator has a higher precedence than the addition 
operator.

Here, operators with the highest precedence appear at the top of 
the table, those with the lowest appear at the bottom. Within an 
expression, higher precedence operators will be evaluated first.

Postfix
() [] -> . ++ --
Left to right

Unary
+ - ! ~ ++ - - (type)* & sizeof
Right to left

Multiplicative
* / %
Left to right

Additive
+ -
Left to right

Shift
<< >>
Left to right

Relational
< <= > >=
Left to right

Equality
== !=
Left to right

Bitwise
AND &
Left to right

Bitwise XOR
^
Left to right

Bitwise OR
|
Left to right

Logical AND
&&
Left to right

Logical OR
||
Left to right

Conditional
? :
Right to left

Assignment
= += -= *= /= %=>>= <<= &= ^= |=
Right to left

Comma
,
Left to right

## Decision Making ##

C programming language assumes any non-zero and non-null values as 
true, and if it is either zero or null, then it is assumed as false 
value.

if statement
An if statement consists of a boolean expression followed by one or 
more statements.

if...else statement
An if statement can be followed by an optional else statement, 
which executes when the Boolean expression is false.

nested if statements
You can use one if or else if statement inside another if or else 
if statement(s).

switch statement
A switch statement allows a variable to be tested for equality 
against a list of values.

nested switch statements
You can use one switch statement inside another switch statement(s).

## Loops ##
# https://www.tutorialspoint.com/cprogramming/c_loops.htm

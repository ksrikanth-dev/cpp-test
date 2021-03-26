Keywords that are common for C and C++:
***************************************
auto double break else case enum char extern const float continue for default goto do if
int long register return short signed sizeof static
struct switch typedef union unsigned void volatile while

Escape sequence characters/Backslash Characters:
************************************************
\b Backspace
\f Form feed
\n New line
\r Carriage return 
\t Horizontal tab 
\" Double quote 
\' Single quote
\0 Null
\\ Backslash
\v Vertical tab
\a Alert
\? Question mark
\N Octal constant (where N is an octal constant)
\xN Hexadecimal constant (where N is a hexadecimal constant)

Format specifiers:
******************
%	Prints %
%c	Writes a single character
%s	Writes a character string
%d or %i	Converts a signed integer to decimal representation
%o	Converts an unsigned integer to octal representation
%X or %x	Converts an unsigned integer to hexadecimal representation
%u	Converts an unsigned integer to decimal representation
%F or %f	Converts floating-point number to the decimal representation
%E or %e	Converts floating-point number to the decimal exponent notation
%A or %a	Converts floating-point number to the hexadecimal exponent
%G or %g	Converts floating-point number to either decimal or decimal exponent notation
%p	Writes an implementation defined character sequence defining a pointer.

/*
Arithmetic Operators:
********************
+	Addition	Adds together two values	x + y	
-	Subtraction	Subtracts one value from another	x - y	
*	Multiplication	Multiplies two values	x * y	
/	Division	Divides one value by another	x / y	
%	Modulus	Returns the division remainder	x % y	
++	Increment	Increases the value of a variable by 1	++x	
--	Decrement	Decreases the value of a variable by 1	--x

Assignment Operators:
********************
=	x = 5	x = 5	
+=	x += 3	x = x + 3	
-=	x -= 3	x = x - 3	
*=	x *= 3	x = x * 3	
/=	x /= 3	x = x / 3	
%=	x %= 3	x = x % 3	
&=	x &= 3	x = x & 3	
|=	x |= 3	x = x | 3	
^=	x ^= 3	x = x ^ 3	
>>=	x >>= 3	x = x >> 3	
<<=	x <<= 3	x = x << 3

Comparison Operators:
*********************
==	Equal to	x == y	
!=	Not equal	x != y	
>	Greater than	x > y	
<	Less than	x < y	
>=	Greater than or equal to	x >= y	
<=	Less than or equal to	x <= y

Logical Operators:
******************
&& 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10	
|| 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4	
!	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)

Bitwise Operators:
******************
&	Binary AND Operator copies a bit to the result if it exists in both operands.
|	Binary OR Operator copies a bit if it exists in either operand.
^	Binary XOR Operator copies the bit if it is set in one operand but not both.
~	Binary Ones Complement Operator is unary and has the effect of 'flipping' bits.
<<	Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.
>>	Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand.

Examples:
 11000001
 01111111 
&___________
 01000001

 10000000 
 00000011 
¦___________ 
 10000011 

 01111111
 01111000 
^___________ 
 00000111


?:  `Ternary operator` Exp1 ? Exp2 : Exp3;   -  works just like if...else
&   `Addess of` operator, used to declare references as well
*   `pointer` operator, used as indirection operator as well
sizeof Compile-Time size of Operator
.
->
[ ]
( )
*/

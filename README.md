Two approaches as discussed can be used to solve the problem.

Direct float addition can be used for this problem as the number of decimal places supported by c++ double is 15, and we have 8 decimal places. After that floor function can be used to return the answer.

Another approach can be to read the 2 numbers as string. Then split the strings by their decimal point. Now add the decimal part of these two strings separately. Use the carry and add the integer part also. Now examine the decimal result and return the floor value.


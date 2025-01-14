//Task 1: Write C++ expressions that represents the following English expression.Assume that all
//variables have been properly defined and initialized. (Do this task Here in this word file)
//1. x is even and y is odd(x and y are integers)
//For example - if (x % 2 == 0 & amp; &amp; y % 2 == 1)
//3. x is not between - 47.5 and 132.0 (x is double)
//4. w is more than 200, and one or more of the following three conditions is fulfilled :
//• x is less than 98.6
//• y is less than 60.0
//• z is more than 160.0
//5. score is between 50 and 60 inclusive
//6. age is outside the range p to q
//7. at least one of x and y value is odd
//8. the hit is not more than 6.7 units away from target
//9. ch is an uppercase alphabetic character(between ‘A’ and ‘Z’)
//10. year is divisible by 4
//11. w is either equal to 6 or not greater than 3
1.x is even and y is odd(x and y are integers)
if (x % 2 == 0 && y % 2 == 1)
2.x is not between - 47.5 and 132.0 (x is double)
if (x < -47.5 || x > 132.0)
3.w is more than 200, and one or more of the following three conditions is fulfilled
x is less than 98.6
y is less than 60.0
z is more than 160.0
if (w > 200 && (x < 98.6 || y < 60.0 || z > 160.0))
4.score is between 50 and 60 inclusive
if (score >= 50 && score <= 60)
5.age is outside the range p to q
if (age < p || age > q)
6.at least one of x and y value is odd
if (x % 2 == 1 || y % 2 == 1)
7. the hit is not more than 6.7 units away from target 
if (hit > 6.7)
8.ch is an uppercase alphabetic character(between ‘A’ and ‘Z’)
if (ch >= 'A' && ch <= 'Z')
9.year is divisible by 4
if (year % 4 == 0)
10.w is either equal to 6 or not greater than 3
if (w == 6 || w <= 3)

Task 2: Do the following expression and evaluate to true or false ? (Do this task Here in this word file)
(3 < 4) || (3 > 4)

(3 < 4) is True because 3 is indeed less than 4.
	(3 > 4) is False because 3 is not greater than 4.
	True || False evaluates to True.
	Result : True

	(3 != 3) && (4 == 4)

	(3 != 3) is False because 3 is equal to 3.
	(4 == 4) is True because 4 is equal to 4.
	False && True evaluates to False.
	Result: False

	(15 >= 15) && (16 == 16) || (14 < 2)

	(15 >= 15) is True because 15 is greater than or equal to 15.
	(16 == 16) is True because 16 is equal to 16.
	(14 < 2) is False because 14 is not less than 2.
	True && True evaluates to True.
	True || False evaluates to True.
	Result: True

	!(12 > 25) && !(18 < 17)

	!(12 > 25) is True because 12 is not greater than 25.
	!(18 < 17) is True because 18 is not less than 17.
	True && True evaluates to True.
	Result: True

	(5 < 3) && ((6 <= 6) || (5 != 6))

	(5 < 3) is False because 5 is not less than 3.
	(6 <= 6) is True because 6 is less than or equal to 6.
	(5 != 6) is True because 5 is not equal to 6.
	(True || True) evaluates to True.
	False && True evaluates to False.


	//Program that takes 3 integer values, 
	// calculates the sum excluding duplicates
#include <iostream>
	using namespace std;

int main() {
	int a, b, c;

	// Input three integers
	cout << "Enter three integers: ";
	cin >> a >> b >> c;

	int sum = 0;

	// Check for duplicates and add to sum only if unique
	if (a != b && a != c) sum += a;
	if (b != a && b != c) sum += b;
	if (c != a && c != b) sum += c;

	// Output the result
	cout << "The sum is: " << sum << endl;

	return 0;
}

//Program to determine if there is a duplicate among the three input numbers
#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	// Input three integers
	cout << "Enter three integers: ";
	cin >> a >> b >> c;

	// Check for duplicates
	if (a == b || b == c || a == c) {
		cout << "Duplicate exists" << endl;
	}
	else {
		cout << "Duplicate does not exist" << endl;
	}

	return 0;
}

//Program to find the maximum number from four inputs using nested if statements
#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;

	// Input four integers
	cout << "Enter four integers: ";
	cin >> a >> b >> c >> d;

	int max;

	// Nested if to find the maximum
	if (a >= b) {
		if (a >= c) {
			if (a >= d) {
				max = a;
			}
			else {
				max = d;
			}
		}
		else {
			if (c >= d) {
				max = c;
			}
			else {
				max = d;
			}
		}
	}
	else {
		if (b >= c) {
			if (b >= d) {
				max = b;
			}
			else {
				max = d;
			}
		}
		else {
			if (c >= d) {
				max = c;
			}
			else {
				max = d;
			}
		}
	}

	// Output the maximum number
	cout << "The maximum number is: " << max << endl;


	return 0;
}


7: Write a program that simulates a simple calculator.It reads two operands(int type) and an
operator (character type).It performs the following arithmetic operations.
• a + b
• a - b
• a * b
• a / b
• a % b
#include <iostream>
using namespace std;

int main() {
	int a, b;
	char op;

	// Input two operands and an operator
	cout << "Enter first operand: ";
	cin >> a;

	cout << "Enter second operand: ";
	cin >> b;

	cout << "Enter operator (+, -, *, /, %): ";
	cin >> op;

	// Perform the arithmetic operation based on the operator
	switch (op) {
	case '+':
		cout << "Result: " << a + b << endl;
		break;
	case '-':
		cout << "Result: " << a - b << endl;
		break;
	case '*':
		cout << "Result: " << a * b << endl;
		break;
	case '/':
		if (b != 0) {
			cout << "Result: " << a / b << endl;
		}
		else {
			cout << "Error: Division by zero!" << endl;
		}
		break;
	case '%':
		if (b != 0) {
			cout << "Result: " << a % b << endl;
		}
		else {
			cout << "Error: Modulo by zero!" << endl;
		}
		break;
	default:
		cout << "Invalid operator!" << endl;
		break;
	}

	return 0;
}

//This program checks the driver's speed and 
//whether it is their birthday, then assigns a ticket status based on the speed.
//If it’s the user's birthday, their speed limit is increased by 5.
#include <iostream>
using namespace std;

int main() {
	int speed;
	char isBirthday;

	// Input speed and birthday status
	cout << "Enter speed: ";
	cin >> speed;

	cout << "Is it your birthday today? (y/n): ";
	cin >> isBirthday;

	// If it is the user's birthday, increase the speed limit by 5
	if (isBirthday == 'y' || isBirthday == 'Y') {
		speed += 5;
	}

	// Determine the ticket type based on speed
	if (speed <= 60) {
		cout << "Result: 0 (No ticket)" << endl;
	}
	else if (speed >= 61 && speed <= 80) {
		cout << "Result: 1 (Small ticket)" << endl;
	}
	else {
		cout << "Result: 2 (Big ticket)" << endl;
	}

	return 0;
}


//This program checks if the number is positive or negative.
//If positive, it checks if it is even or odd.
//If negative, it checks whether the absolute value is a perfect square.
#include <iostream>
#include <cmath> // For sqrt and abs
using namespace std;

int main() {
	int num;

	// Input number
	cout << "Enter a number: ";
	cin >> num;

	// Check if the number is positive or negative
	if (num >= 0) {
		// If positive, check if it is even or odd
		if (num % 2 == 0) {
			cout << "Positive Even Number" << endl;
		}
		else {
			cout << "Positive Odd Number" << endl;
		}
	}
	else {
		// If negative, check if its absolute value is a perfect square
		int absNum = abs(num);  // Convert negative number to positive for square root calculation
		int sqrtVal = static_cast<int>(sqrt(absNum));  // Calculate square root

		if (sqrtVal * sqrtVal == absNum) {
			cout << "Negative value with perfect square of absolute" << endl;
		}
		else {
			cout << "Neither positive nor perfect square of absolute" << endl;
		}
	}

	return 0;
}

//Here is a simple C++ program that reads an integer between 1 and 12 and
//prints the corresponding month of the year in English :
#include <iostream>
using namespace std;

int main() {
	int month;
	cin >> month;

	switch (month) {
	case 1: cout << "January"; break;
	case 2: cout << "February"; break;
	case 3: cout << "March"; break;
	case 4: cout << "April"; break;
	case 5: cout << "May"; break;
	case 6: cout << "June"; break;
	case 7: cout << "July"; break;
	case 8: cout << "August"; break;
	case 9: cout << "September"; break;
	case 10: cout << "October"; break;
	case 11: cout << "November"; break;
	case 12: cout << "December"; break;
	default: cout << "Invalid month"; break;
	}

	return 0;
}

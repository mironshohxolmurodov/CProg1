#include <iostream>
#include <cmath>
using namespace std;

//Problem1
// int product(int a, int b) {
//     return a * b;
// }
// int main() {
//     cout << product(5, 6) << endl;
//     return 0;
// }

//Problem2
// float linearacc(float v1, float v2, float t) {
//     return (v2-v1)/(t);
// }
// int main() {
//     cout << linearacc(1.0, 2.0, 3.0) << endl;
//     return 0;
// }

//Problem3
// void circandarea(float r) {
//     cout << "Circomference: " << (2*3.14*r) << endl;
//     cout << "Area: " << (3.14 * r * r) << endl;
// }
// int main() {
//     circandarea(3.0);
//     return 0;
// }

//Problem4
// void perandarea(float a, float b) {
//     cout << "Perimeter: " << (2.0*(a+b)) << endl;
//     cout << "Area: " << (a*b) << endl;
// }
// int main() {
//     perandarea(3.0, 5.0);
//     return 0;
// }

//Problem5
// void swap(int a, int b) {
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<a<<" "<<b<<endl;
// }
// int main() {
//     swap(5, 7);
//     return 0;
// }

//Problem6
// int factorial(int n = 1) {
//     if (n == 0 || n == 1)
//         return 1;
//     int result = 1;
//     for (int i = 2; i <= n; ++i)
//         result *= i;
//     return result;
// }
// int main() {
//     cout << "Factorial of 5: " << factorial(5) << endl;
//     cout << "Factorial with no parameter: " << factorial() << endl;
//     return 0;
// }

//Problem7
// int gcd(int num1, int num2) {
//     while (num2 != 0) {
//         int temp = num2;
//         num2 = num1 % num2;
//         num1 = temp;
//     }
//     return num1;
// }
// int main() {
//     cout << gcd(32, 48) << endl;
//     return 0;
// }

//Problem8
// void max(int a, int b, int c) {
//     if (a > b > c) {
//         cout << "Maximum: " << a << endl;
//     }
//     else if (a < b > c) {
//         cout << "Maximum: " << b << endl;
//     }
//     else {
//         cout << "Maximum: " << c << endl;
//     }
// }
// void min(int a, int b, int c) {
//     if (a < b < c) {
//         cout << "Minimum: " << a << endl;
//     }
//     else if (a > b < c) {
//         cout << "Minimum: " << b << endl;
//     }
//     else {
//         cout << "Minimum: " << c << endl;
//     }
// }
// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     max(a, b, c);
//     min(a, b, c);
//     return 0;
// }

//Problem9
// float sum(float a, float b) {
//     return a + b;
// }
// float subtract(float a, float b) {
//     return a - b;
// }
// float multiply(float a, float b) {
//     return a * b;
// }
// float divide(float a, float b) {
//     return a / b;
// }
// int main() {
//     float a, b;
//     cout << "Enter a number: ";
//     cin >> a;
//     cout << "Enter another number: ";
//     cin >> b;
//     cout << "Sum: " << sum(a, b) << endl;
//     cout << "Difference: " << subtract(a, b) << endl;
//     cout << "Product: " << multiply(a, b) << endl;
//     cout << "Division: " << divide(a, b) << endl;
// }

//Problem10
// int getTriangularNumber(int n) {
//     return (n * (n + 1)) / 2;
// }
// int main() {
//     for (int i = 1; i <= 75; ++i) {
//         cout << getTriangularNumber(i) << " ";
//         if (i % 5 == 0) {
//             cout << endl;
//         }
//     }
//     return 0;
// }

//Problem11
// void displayEven(int number) {
//     int digit;
//     while (number!=0) {
//         digit=number%10;
//         if (digit%2==0) {
//             cout<<digit<<" ";
//         }
//         number=number/10;
//     }
// }
// int main() {
//     int number;
//     cin>>number;
//     displayEven(number);
//     return 0;
// }

// Problem12
// int cubeOfDigits(int number) {
//     int sum = 0, m;
//     while (number != 0) {
//         m=number%10;
//         sum += m*m*m;
//         number/=10;
//     }
//     return sum;
// }
// void isArmStrong(int sum, int number) {
//     if (sum==number) {
//         cout<<"Arm Strong"<<endl;
//     }
//     else {
//         cout<<"Not Arm Strong"<<endl;
//     }
// }
// int main() {
//     int number;
//     cin>>number;
//     isArmStrong(cubeOfDigits(number), number);
//     return 0;
// }

//Problem13
// int numofdays(int y) {
//     if (((y%4 == 0)&&(y%100 != 0))||(y%400 == 0))
//         return 29;
//     else
//         return 28;
// }
// int main() {
//     int y;
//     cin >> y;
//     cout << numofdays(y);
//     return 0;
// }

//Problem14
// double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
//     return investmentAmount * pow((1.0 + monthlyInterestRate), (years * 12));
// }
// int main() {
//     double amount, rate;
//     cin >> amount >> rate;
//     for (int i = 1; i <= 30; i++) {
//         cout << "For year " << i << " | Future Value: " << futureInvestmentValue(amount, rate, i) << endl;
//     }
//     return 0;
// }

//Problem15
// void printASCII(char ch1, char ch2, int numberPerLine) {
//     int count = 0;
//     for (char ch = ch1; ch <= ch2; ++ch) {
//         cout << "ASCII of " << ch << " is " << int(ch) << " ";
//         count++;
//         if (count % numberPerLine == 0) {
//             cout << endl;
//         }
//     }
//     if (count % numberPerLine != 0) {
//         cout << endl;
//     }
// }
// int main() {
//     printASCII('a', 'm', 6);
//     return 0;
// }
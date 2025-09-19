#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

//Prob12
// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (a+b+c == 180)
//         cout << "The triangle is valid"<<endl;
//     else
//         cout << "The triangle is not valid"<<endl;
//     return 0;
// }

//Prob13
// int main() {
//     float a, b, c, d, x1, x2;
//     cin >> a >> b >> c;
//     d=(b*b)-(4*a*c);
//     x1=(((-b)+sqrt(d))/(2*a));
//     x2=(((-b)-sqrt(d))/(2*a));
//     if (d>0) {
//         cout << "x1=" << x1 << endl;
//         cout << "x2=" << x2 << endl;
//     }
//     else if (d==0) {
//         cout << "x1=" << x1 << endl;
//     }
//     else
//         cout<< "No real roots"<<endl;
//     return 0;
// }

//Prob14
// int main() {
//     char a;
//     cin>>a;
//     if ('a'<=a&&a<='z') {
//         cout<<"Lowercase letter"<<endl;
//     }
//     else if ('A'<=a&&a<='Z') {
//         cout<<"Uppercase letter"<<endl;
//     }
//     else
//         cout<<"It is not an alphabet"<<endl;
//     return 0;
// }

//Prob15
// int main() {
//     cout<<"Enter weight and price for package 1: ";
//     double w1, p1, w2, p2;
//     cin>>w1>>p1;
//     cout<<"Enter weight and price for package 2: ";
//     cin>>w2>>p2;
//     if ((p1/w1) < (p2/w2))
//         cout<<"Package 1 has better price"<<endl;
//     else if ((p1/w1) > (p2/w2))
//         cout<<"Package 2 has better price"<<endl;
//     else
//         cout<<"Two packages have the same price"<<endl;
//     return 0;
// }

//Prob16
// int main() {
//     cout << "a three digit integer: ";
//     int n;
//     cin >> n;
//     if ((n/100)==(n%10))
//         cout << n << " is a palindrome" << endl;
//     else
//         cout << n << " is not a palindrome" << endl;
//     return 0;
// }

//Prob17
// int main() {
//     char a;
//     cin>>a;
//     if (a=='u')
//         cout<<"Salom"<<endl;
//     else if (a=='e')
//         cout<<"Hello"<<endl;
//     else if (a=='r')
//         cout<<"Privet"<<endl;
//     else if (a=='g')
//         cout<<"Hallo"<<endl;
//     else
//         cout<<"I do not think it is a language"<<endl;
//     return 0;
// }

//ProbNoNumber
// int main() {
//     float x;
//     cin >> x;
//     int c = 0;
//     if (x <= 3.0) c = 0;
//     else if (x > 3.0 && x <= 3.5) c = 1;
//     else if (x > 3.5 && x <= 4.0) c = 2;
//     else if (x > 4.0 && x <= 4.5) c = 3;
//     else c = -1;
//     switch (c) {
//         case 0:
//             cout << "You got 0% scholarship" << endl;
//             break;
//         case 1:
//             cout << "You got 50% scholarship" << endl;
//             break;
//         case 2:
//             cout << "You got 60% scholarship" << endl;
//             break;
//         case 3:
//             cout << "You got 80% scholarship" << endl;
//             break;
//         default:
//             cout << "Invalid GPA" << endl;
//     }
//     return 0;
// }

//Prob18
// int main() {
//     double x, y;
//     cin >> x >> y;
//     double distance = sqrt(x * x + y * y);
//     if (distance <= 10)
//         cout << "The point (" << x << ", " << y << ") is inside the circle." << endl;
//     else
//         cout << "The point (" << x << ", " << y << ") is outside the circle." << endl;
//     return 0;
// }


//Prob19
// int main() {
//     cout << "Enter today's day: ";
//     int day;
//     cin >> day;
//     cout << "Enter the number of days elapsed since today: ";
//     int elapsed;
//     cin >> elapsed;
//     int a=day+elapsed;
//     string arr[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
//     cout<<"Todayt is " << arr[day] <<" and the future day is "<< arr[a]<<endl;
//     return 0;
// }

//Prob20
// int main() {
//     double w;
//     int category;
//     if (w<=0)
//         category = 0;
//     else if ((0<w)&&(w<=1))
//         category=1;
//     else if ((1<w)&&(w<=3))
//         category=2;
//     else if ((3<w)&&(w<=10))
//         category=3;
//     else if ((10<w)&&(w<=20))
//         category=4;
//     else
//         category=5;
//     cout << "Enter the weight of the package: ";
//     cin >> w;
//     switch (category) {
//         case 0:
//             cout << "Invalid input" << endl;
//             break;
//         case 1:
//             cout << "Shipping cost: 3500" << endl;
//             break;
//         case 2:
//             cout << "Shipping cost: 5500" << endl;
//             break;
//         case 3:
//             cout << "Shipping cost: 8500" << endl;
//             break;
//         case 4:
//             cout << "Shipping cost: 10500" << endl;
//             break;
//         case 5:
//             cout << "The package cannot be shipped" << endl;
//             break;
//     }
//
//     return 0;
// }

//Prob21
// int main() {
//     int month;
//     cin >> month;
//     switch (month) {
//         case 1: cout << "In January there is: New Year – 1 January" << endl; break;
//         case 2: case 4: case 6: case 7: case 8: case 11:
//             cout << "In this month there are no fixed holidays. There are Ramadan Hayit and Kurban Hayit but their dates change each year." << endl;
//             break;
//         case 3:
//             cout << "In March there is:\n- International Women’s Day, 8 March\n- Navruz, 21 March" << endl;
//             break;
//         case 5: cout << "In May there is: Day of Memory and Honor – 9 May" << endl; break;
//         case 9: cout << "In September there is: Independence Day – 1 September" << endl; break;
//         case 10: cout << "In October there is: Teachers’ Day – 1 October" << endl; break;
//         case 12: cout << "In December there is: Constitution Day – 8 December" << endl; break;
//         default: cout << "Invalid month number!" << endl;
//     }
//     return 0;
// }

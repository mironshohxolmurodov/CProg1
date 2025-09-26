#include <iostream>
#include <cmath>
#include <iomanip>
#include <unistd.h>
using namespace std;

//Prob11
// int main() {
//     int a, p=0, n=0;
//     cin >> a;
//     float av = a;
//     int t = a;
//     while (a != 0) {
//         if (a>0)
//             p+=1;
//         else if (a<0)
//             n+=1;
//         cin >> a;
//         t+=a;
//         av+=a;
//     }
//     av=static_cast<float>(av)/(static_cast<float>(n)+static_cast<float>(p));
//     cout<<"Number of positives is " <<p<<endl;
//     cout<<"Number of negatives is " <<n<<endl;
//     cout<<"The Total is " <<t<<endl;
//     cout<<"The Average is " <<av<<endl;
//     return 0;
// }

//Prob12
// int main() {
//     int a;
//     cin >> a;
//     for (int i = 1; i <= a; i++) {
//         for (int j = 1; j <= a; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//Prob13
// int main() {
//     int a;
//     cin >> a;
//     for (int i = 1; i <= a; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//Prob14
// int main() {
//     int a;
//     cin >> a;
//     for (int i = 1; i <= a; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//Prob15
// int main() {
//     int a;
//     float sum = 0.0;
//     cin >> a;
//     for (int i = 1; i <= a; i++) {
//         cout << "1/" << i;
//         if (i != a) cout << " + ";
//         sum += 1.0 / i;
//     }
//     cout << endl;
//     cout << "Sum = " << sum << endl;
//     return 0;
// }

//Prob16
// int main() {
//     double rent = 1000;
//     double tyears = 0;
//     for (int year = 1; year <= 5; year++) {
//         cout << "For year number " << year << " rent is " << rent << endl;
//         cout << "The total for year " << year << " is " << rent * 12 << endl;
//         tyears += rent * 12;
//         rent *= 1.03;
//     }
//     cout << "The total for all 5 years rent is " << tyears << endl;
//     return 0;
// }

//Prob17
// int main() {
//     int num, sum = 0;
//     cin >> num;
//     while (num > 0) {
//         sum += num % 10;
//         num /= 10;
//     }
//     cout << "The sum of digits is " << sum << endl;
//     return 0;
// }

//Prob18
// int main() {
//     int a, dec=0, n=0;
//     cin >> a;
//     while (a > 0){
//         dec+=(a % 10)*pow(2, n);
//         n+=1;
//         a=a/10;
//     }
//     cout << dec << endl;
//     return 0;
// }

//Prob19
// int main() {
//     int n, m=2;
//     cin>>n;
//     while (n!=1) {
//         if (n%m==0) {
//             n/=m;
//             cout<<m<<" ";
//         }
//         else
//             m++;
//     }
//     return 0;
// }

//Prob20
// int main() {
//     int n;
//     cin >> n;
//     double pi = 0.0;
//     for (int i = 1; i <= n; i++) {
//         pi += (static_cast<double>(pow(-1, (i + 1)))) / (static_cast<double>(2*i - 1));
//     }
//     cout << 4.0 * pi << endl;
//     return 0;
// }

//Prob21
// int main() {
//     cout << "Enter the number of seconds: ";
//     int sec;
//     cin >> sec;
//     sec-=1;
//     while (sec != 0) {
//         if (sec != 1)
//             cout << sec << " seconds remaining" << endl;
//         else
//             cout << sec << " second remaining" << endl;
//         sleep(1);
//         sec-=1;
//     }
//     cout << "Stopped" << endl;
//     return 0;
// }

//Prob22
// int main() {
//     cout << "| Miles |" << " Kilometres |" << endl;
//     for (int i = 1; i <= 10; i++) {
//         if (i!=10)
//             cout << "|   "<<i<<"   |" << "   "<<setprecision(4)<<(i*1.609)<<"    |" << endl;
//         else
//             cout << "|   "<<i<<"  |" << "   "<<setprecision(4)<<(i*1.609)<<"    |" << endl;
//     }
// }

//Prob23
// int main() {
//     int n=0, m=0;
//     while (m<30000) {
//         m=pow(2, n);
//         n++;
//     }
//     cout<<"The largesr n such that 2^n < 30000 is: "<<n-2<<endl;
//     return 0;
// }
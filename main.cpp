#include <iostream>
#include <cmath>
using namespace std;
//Prob1
// int power(int base, int exp) {
//     int result = 1;
//     if (exp == 0) {
//         return result;
//     }
//     else{
//         return base * power(base, exp - 1);
//     }
// }
// int main() {
//     int a, b;
//     cin >> a >> b;
//     cout << power(a, b) << endl;
//     return 0;
// }

//Prob2
// int reverse(int n,int r=0){
//     if(n==0)
//         return r;
//     return reverse(n/10,r*10+n%10);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<reverse(n);
// }

//Prob3
// int rev(int n,int r=0){
//     if(n==0)
//         return r;
//     return rev(n/10,r*10+n%10);
// }
// bool palindrome(int n){
//     return n==rev(n);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<(palindrome(n)?"true":"false");
// }

//Prob4
// bool prime(int n,int i=2){
//     if(n<=2)
//         return n==2;
//     if(n%i==0)
//         return false;
//     if(i*i>n)
//         return true;
//     return prime(n,i+1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<(prime(n)?"true":"false");
// }

//Prob5
// int count_even(int n){
//     if(n==0)
//         return 0;
//     return ((n%10)%2==0)+count_even(n/10);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<count_even(n);
// }

//Prob6
// int productofdigits(int n) {
//     if (n == 0)
//         return 1;
//     return (n%10) * productofdigits(n/10);
// }
// int main() {
//     int n;
//     cin>>n;
//     cout<<productofdigits(n)<<endl;
//     return 0;
// }

//Prob7
// bool ispoweroftwo(int n,int temp=1){
//     if(n==0)return false;
//     if(temp==n)return true;
//     if(temp>n)return false;
//     return ispoweroftwo(n,temp*2);
// }
// int main(){
//     int n;
//     cin>>n;
//     if (ispoweroftwo(n)==1)
//         cout<<"True"<<endl;
//     else
//         cout<<"False"<<endl;
//     return 0;
// }

//Prob8
// bool isincreasing(int n){
//     if(n<10)
//         return true;
//     int b1=n%10;
//     n/=10;
//     int a1=n%10;
//     if(a1>=b1)
//         return false;
//     return isincreasing(n);
// }
// int main(){
//     int n;
//     cin>>n;
//     if(isincreasing(n))cout<<"YES";
//     else cout<<"NO";
// }

//Prob9
// int numberofzeros(int n){
//     if(n==0)return 1;
//     if(n<10)return 0;
//     int a=n%10;
//     return (a==0)+numberofzeros(n/10);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<numberofzeros(n);
// }

//Prob10
// int fastpow(int x,int y){
//     if(y==0)return 1;
//     if(y%2==0){
//         int t=fastpow(x,y/2);
//         return t*t;
//     }
//     return x*fastpow(x,y-1);
// }
// int main(){
//     int x,y;
//     cin>>x>>y;
//     cout<<fastpow(x,y);
// }
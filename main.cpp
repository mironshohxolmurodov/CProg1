#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Prob9
// int main() {
//     int a, b, c;
//     cin>>a>>b>>c;
//     int* ptrs[3]={&a, &b, &c};
//     cout << *ptrs[0] << " " << *ptrs[1] << " " << *ptrs[2] << endl;
//     return 0;
// }

//Prob10
// int main() {
//     int n, max, *ptr;
//     cin>>n;
//     int arr[n];
//     for (int i=0; i<n; i++) {
//         cin>>arr[i];
//     }
//     ptr=arr;
//     for (int i = 0; i < n-1; i++) {
//         for (int j = 0; j < n-i-1; j++) {
//             if (*(ptr+j) > *(ptr+j+1)) {
//                 int temp = *(ptr+j);
//                 *(ptr+j) = *(ptr+j+1);
//                 *(ptr+j+1) = temp;
//             }
//         }
//     }
//     ptr=arr;
//     for (int i=0; i<n; i++) {
//         cout<<*(ptr+i)<<" ";
//     }
//     return 0;
// }

//Prob11
// int main() {
//     const char* suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
//     for (int i = 0; i < 4; i++) {
//         cout << suit[i] << " ";
//     }
//     return 0;
// }

//Prob12
// int main(){
//     const char* day[3] = {"Monday", "Tuesday", "Wednesday"};
//     for (int i = 0; i < 3; i++){
//         cout<<*(day[i]+1)<<" ";
//     }
//     return 0;
// }

//Prob13
// int main(){
//     int deck[4][13]={};
//     deck[0][0]=1;
//     deck[3][1]=1;
//     const char* suits[4]={"Hearts", "Diamonds", "Clubs", "Spades"};
//     const char* ranks[13]={"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
//     for (int s=0; s<4; s++) {
//         for (int r=0; r<13; r++) {
//             if (deck[s][r]==1) {
//                 cout<<ranks[r]<<" of "<<suits[s]<<endl;
//             }
//         }
//     }
//     return 0;
// }

//Prob14
// int main() {
//     srand(time(0));
//     int deck[4][13];
//     const char* suits[4]={"Hearts", "Diamonds", "Clubs", "Spades"};
//     const char* faces[13]={"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
//     int card=1;
//     for (int s=0; s<4; s++){
//         for (int f=0; f<13; f++){
//             deck[s][f]=card++;
//         }
//     }
//     for (int i=0; i<1000; i++){
//         int s1=rand()%4;
//         int f1=rand()%13;
//         int s2=rand()%4;
//         int f2=rand()%13;
//         int temp=deck[s1][f1];
//         deck[s1][f1]=deck[s2][f2];
//         deck[s2][f2]=temp;
//     }
//     cout << "Shuffled cards:\n\n";
//     for (int s=0; s<4; s++){
//         for (int f=0; f<13; f++) {
//             int rank=(deck[s][f]-1)%13;
//             cout << faces[rank] << " of " << suits[s] << "\n";
//         }
//     }
//     return 0;
// }

//Prob15
// void greet(){
//     cout<<"Hello from greet()"<<endl;
// }
// void bye(){
//     cout<<"Goodbye from bye()"<<endl;
// }
// int main(){
//     void (*fptr)();
//     fptr=greet;
//     fptr();
//     fptr=bye;
//     fptr();
//     return 0;
// }

//Prob16
// int add(int a, int b){
//     return a+b;
// }
// int multiply(int a, int b){
//     return a*b;
// }
// int main(){
//     int (*fptr)(int, int);
//     int x=5, y=3;
//     fptr=add;
//     cout<<"Add: "<<fptr(x, y)<<endl;
//     fptr=multiply;
//     cout<<"Multiply: "<<fptr(x, y)<<endl;
//     return 0;
// }

//Prob17
// int add(int a, int b){
//     return a+b;
// }
// int multiply(int a, int b){
//     return a*b;
// }
// void calculate(int (*op)(int, int), int x, int y){
//     cout<<"Result: "<<op(x,y)<<endl;
// }
// int main(){
//     int x=4, y=5;
//     calculate(add,x,y);
//     calculate(multiply,x,y);
//     return 0;
// }

//Prob18
// int add(int a,int b){
//     return a+b;
// }
// int multiply(int a,int b){
//     return a*b;
// }
// int main(){
//     int (*ops[])(int, int) ={add, multiply};
//     int choice, x=5, y=3;
//     cout<<"Select operation: 1 for Add, 2 for Multiply: ";
//     cin>>choice;
//     if((choice==1)||(choice==2)){
//         int result=ops[choice-1](x,y);
//         cout <<"Output: "<<result<<endl;
//     } else {
//         cout<<"Invalid choice"<<endl;
//     }
//     return 0;
// }

#include <iostream>
#include <ctime>
using namespace std;

//Prob1
// int findmax(int *arr, int size) {
//     int *ptr = arr, max;
//     max = *ptr;
//     for (int i = 1; i < size; i++) {
//         if (*(ptr+i) > max) {
//             max = *(ptr+i);
//         }
//     }
//     return max;
// }
// int main() {
//     int heights[] = {150,165,172,160,180};
//     int size = sizeof(heights) / sizeof(heights[0]);
//     cout<< "Maximum height : " <<findmax(heights, size)<<endl;
//     return 0;
// }

//Prob2
// int main() {
//     int a, b, *ptra, *ptrb;
//     cin >> a >> b;
//     ptra = &a;
//     ptrb = &b;
//     cout << ptra << endl;
//     cout << ptrb << endl;
//     return 0;
// }

//Prob3
// int main() {
//     int n, arr[100], *maxptr;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     maxptr = &arr[0];
//     for (int i = 0; i < n; i++) {
//         if (arr[i]>*maxptr)
//             maxptr = &arr[i];
//     }
//     cout << maxptr;
// }

//Prob4
// #define val 33.3
// #define number 50
// int a;
// int& fun(){
//     return a;
// }
// int foo(){
//     return a;
// }
// int main() {
//     int n1=9, n2=11, *ptr_1=nullptr, *ptr_2=nullptr, k=0;
//     double t;
//     ptr_1=&n2;
//     ptr_2=&n1;
//     t=val-1;
//     k=val/4.16;
//     fun()=number;
//     cout<<a<<" "<<*ptr_1+*ptr_2-8<<" "<<t<<" "<<k<<endl;
// }

//Prob5
// int main() {
//     int arr[10], *ptrA;
//     srand(time(NULL));
//     for (int i = 0; i < 10; i++) {
//         arr[i] = rand() % 100;
//     }
//     ptrA = arr;
//     for (int i = 0; i < 10; i++) {
//         cout << "Element: "<< *(ptrA+i) << "; Address: " << (ptrA+i) << endl;
//     }
// }

//Prob6
// int main() {
//     int message=42, *ptr;
//     ptr = &message;
//     cout << *ptr;
//     return 0;
// }

//Prob7
// float calculateAverage(int *arr,int size) {
//     int *ptr;
//     ptr = arr;
//     float sum = 0.0, avg = 0.0;
//     for (int i = 0; i < size; i++) {
//         sum += float(*(ptr+i));
//     }
//     avg = sum / float(size);
//     return avg
// }
// int main() {
//     int scores[]= {88,76,90,85,92};
//     cout << calculateAverage(scores,5) << endl;
//     return 0;
// }

//Prob8
// int main() {
//     int treasures[]={10,20,30,40,50};
//     int *ptr;
//     ptr=treasures;
//     int size=sizeof(treasures)/sizeof(int);
//     cout<<*(ptr+size-1)<<endl;
//     return 0;
// }

//Prob9
// int main() {
//     int score=75, *ptr;
//     ptr = &score;
//     cout << score << endl;
//     *ptr += 10;
//     cout << *ptr << endl;
//     return 0;
// }

//Prob10
// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10}, size=sizeof(arr)/sizeof(arr[0]);
//     int *sptr = arr;
//     int *eptr = arr + (size - 1);
//     while(sptr < eptr) {
//         int temp = *sptr;
//         *sptr = *eptr;
//         *eptr = temp;
//         sptr++;
//         eptr--;
//     }
//     for(int i = 0; (i < size); i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Prob6
// int main() {
//     char ch;
//     int freq[26];
//     int i;
//     for (i=0; i<26; i++) {
//         freq[i]=0;
//     }
//     cout<<"Enter characters : ";
//     while (true){
//         cin>>ch;
//         if (ch=='0') {
//             break;
//         }
//         if ((ch>='a')&&(ch<='z')) {
//             freq[ch-'a'] = freq[ch-'a']+1;
//         }
//     }
//     cout<<"Output: "<<endl;
//     for (i=0; i<26; i++){
//         if (freq[i]>0){
//             cout<<char('a'+i)<<": "<<freq[i]<<endl;
//         }
//     }
//     return 0;
// }

//Prob7
// int main() {
//     int n;
//     cin >> n;
//     int arr[100];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int t = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = t;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     return 0;
// }

//Prob8
// int main() {
//     int freq[6], i, roll;
//     for (i = 0; i < 6; i++)
//         freq[i] = 0;
//     srand(time(0));  // makes it more random
//     for (i = 0; i < 10000; i++) {
//         roll = rand() % 6 + 1;
//         freq[roll - 1]++;
//     }
//     for (i = 0; i < 6; i++)
//         cout << "Face " << i + 1 << ": " << freq[i] << endl;
//     return 0;
// }

//Prob9
// void reverseArray(int arr[], int start, int end) {
//     while (start<end){
//         int temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start++;
//         end--;
//     }
// }
// int main() {
//     int arr[] = {1, 2, 3};
//     int n = 3;
//     reverseArray(arr, 0, n-1);
//     cout << "Reversed array: ";
//     for (int i=0; i<n; i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//Prob10
// int main() {
//     int n;
//     cout<<"Enter number of elements: ";
//     cin>>n;
//     int arr[100];
//     cout << "Enter elements: ";
//     for (int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
//     bool sorted = true;
//     for (int i=1; i<n; i++) {
//         if (arr[i]<arr[i-1]){
//             sorted=false;
//             break;
//         }
//     }
//     if (sorted)
//         cout<<"YES";
//     else
//         cout<<"NO";
//     return 0;
// }
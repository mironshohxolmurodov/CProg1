#include <iostream>
#include <vector>
using namespace std;

//Prob5
// int main() {
//     int r, c;
//     cin >> r >> c;
//     int a[r][c];
//     for(int i=0;i<r;i++)
//         for(int j=0;j<c;j++)
//             cin >> a[i][j];
//     for(int j=0;j<c;j++){
//         int sum=0;
//         for(int i=0;i<r;i++)
//             sum += a[i][j];
//         cout << sum << " ";
//     }
//     return 0;
// }

//Prob6
// int main() {
//     int n;
//     cin >> n;
//     int a[n][n];
//     for(int i=0;i<n;i++)
//         for(int j=0;j<n;j++)
//             cin >> a[i][j];
//     int sum=0;
//     for(int i=0;i<n;i++)
//         sum += a[i][i];
//     cout << sum;
//     return 0;
// }

//Prob7
// int main() {
//     int r, c;
//     cin >> r >> c;
//     int m[100][100];
//
//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             cin >> m[i][j];
//
//     for (int j = 0; j < c; j++) {
//         for (int i = 0; i < r; i++)
//             cout << m[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }

//Prob8
// int main() {
//     int r, c;
//     cin >> r >> c;
//     int a[100][100], b[100][100], s[100][100];
//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             cin >> a[i][j];
//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             cin >> b[i][j];
//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             s[i][j] = a[i][j] + b[i][j];
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++)
//             cout << s[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }

//Prob9
// int main() {
//     int n1, m1, n2, m2;
//     cin >> n1 >> m1;
//     int A[100][100];
//     for (int i = 0; i < n1; i++)
//         for (int j = 0; j < m1; j++)
//             cin >> A[i][j];
//     cin >> n2 >> m2;
//     int B[100][100];
//     for (int i = 0; i < n2; i++)
//         for (int j = 0; j < m2; j++)
//             cin >> B[i][j];
//     if (m1 != n2) {
//         cout << "Not possible";
//         return 0;
//     }
//     int C[100][100] = {0};
//     for (int i = 0; i < n1; i++)
//         for (int j = 0; j < m2; j++)
//             for (int k = 0; k < m1; k++)
//                 C[i][j] += A[i][k] * B[k][j];
//     for (int i = 0; i < n1; i++) {
//         for (int j = 0; j < m2; j++)
//             cout << C[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }

//Prob10
// int main() {
//     int n;
//     cin >> n;
//     int m[100][100];
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//             cin >> m[i][j];
//     for (int i = 0; i < n; i++)
//         for (int j = i + 1; j < n; j++)
//             swap(m[i][j], m[j][i]);
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n / 2; j++)
//             swap(m[i][j], m[i][n - j - 1]);
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++)
//             cout << m[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }

//Prob15
// int main() {
//     int n, x;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];
//     cin >> x;
//     vector<int> r;
//     for (int a : v)
//         if (a != x) r.push_back(a);
//     for (int a : r) cout << a << " ";
//     return 0;
// }

//Prob16
// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];
//     for (int i = n - 1; i >= 0; i--)
//         cout << v[i] << " ";
//     return 0;
// }

//Prob17
// int main() {
//     int n, x, k;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];
//     cin >> x >> k;
//     v.insert(v.begin() + k, x);
//     for (int a : v) cout << a << " ";
//     return 0;
// }

//Prob18
// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];
//     if (n > 0) {
//         cout << v[0] << " ";
//         for (int i = 1; i < n; i++)
//             if (v[i] != v[i - 1])
//                 cout << v[i] << " ";
//     }
//     return 0;
// }

//Prob19
// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];
//     for (int i = 0; i < n - 1; i++)
//         for (int j = 0; j < n - i - 1; j++)
//             if (v[j] > v[j + 1])
//                 swap(v[j], v[j + 1]);
//     for (int a : v) cout << a << " ";
//     return 0;
// }

//Prob20
// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];
//
//     int mx = v[0], sec = v[0];
//     for (int i = 1; i < n; i++)
//         if (v[i] > mx) mx = v[i];
//
//     for (int i = 0; i < n; i++)
//         if (v[i] != mx && v[i] > sec) sec = v[i];
//
//     cout << "Second largest: " << sec;
//     return 0;
// }
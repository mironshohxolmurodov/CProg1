#include <iostream>
using namespace std;

// Prob5
//  float balance=500;
//  void deposit(float amount) {
//      balance += amount;
//      cout << "Successful deposit " << amount << endl;
//      cout << "balance is " << balance << endl;
//  }
//  void withdraw(float amount) {
//      if (amount > balance) {
//          cout << "Insufficient funds" << endl;
//      }
//      else {
//          balance -= amount;
//          cout << "Successfully withdrawn " << amount << endl;
//          cout << "New balance is " << balance << endl;
//      }
//  }
//  void checkbalance() {
//      cout << "Balance is " << balance << endl;
//  }
//  int main() {
//      int choice;
//      cout<<" 1 - Deposit "<<endl<<" 2 - Withdraw "<<endl<<" 3 - Check balance"<<endl<<"Choose your option: ";
//      cin>>choice;
//      switch (choice) {
//          case 1:
//              float amount;
//              cout<<"Enter amount to deposit: ";
//              cin>>amount;
//              deposit(amount);
//              break;
//          case 2:
//              int amnt;
//              cout <<"Enter amount to withdraw: ";
//              cin>>amnt;
//              withdraw(amnt);
//              break;
//          case 3:
//              checkbalance();
//          default:
//              cout<<"Invalid Choice"<<endl;
//              return;
//      }
//      return 0;
//  }

//Prob6
// int price=0;
// int calculatetotal(int ticketprice,int numtickets){
//     return ticketprice*numtickets;
// }
// void option(){
//     int choice,tickets,movieprice=0;
//     cout<<"1 - Interstellar ($8)\n2 - Forrest Gump ($10)\n3 - Kingdom of Heaven ($12)\nEnter option: ";
//     cin>>choice;
//     switch(choice){
//         case 1:
//             cout<<"You chose Interstellar\n";
//             movieprice=8;
//             break;
//         case 2:
//             cout<<"You chose Forrest Gump\n";
//             movieprice=10;
//             break;
//         case 3:
//             cout<<"You chose Kingdom of Heaven\n";
//             movieprice=12;
//             break;
//         default:
//             cout<<"Invalid option\n";
//             return;
//     }
//     cout<<"Enter number of tickets: ";
//     cin>>tickets;
//     int total=calculatetotal(movieprice,tickets);
//     price+=total;
//     cout<<"Total cost for this movie: $"<<total<<"\nTotal cost so far: $"<<price<<endl;
// }
// int main(){
//     char opt;
//     do{
//         option();
//         cout<<"Do you want to choose another one? (y/n): ";
//         cin>>opt;
//     }
//     while(opt=='y');
//     cout<<"Final total: $"<<price<<endl;
//     return 0;
// }

//Prob7
// void calculatefee(int h) {
//     int fee;
//     if (h<=2)
//         fee=0;
//     else
//         if (h<=5)
//             fee=(h-2)*2;
//     else
//         fee=6+(h-5)*5;
//     cout << "The total fee is "<< fee << endl;
// }
// int main() {
//     int hour;
//     char opt;
//     cout<<"Enter Number of hours: ";
//     cin>>hour;
//     calculatefee(hour);
//     cout<<"Do you want to continue? (y/n)"<<endl;
//     cin>>opt;
//     while(opt=='y') {
//         cout<<"Enter Number of hours: ";
//         cin>>hour;
//         calculatefee(hour);
//         cout<<"Do you want to continue? (y/n)"<<endl;
//         cin>>opt;
//     }
//     return 0;
// }

//Prob8
// int total=0;
// int calculatetotal(int foodprice,int num){
//     return foodprice*num;
// }
// void option(){
//     int choice,number,price=0;
//     cout<<"1 - Pizza ($10)\n2 - Burger ($8)\n3 - Salad ($5)\nEnter option: ";
//     cin>>choice;
//     switch(choice){
//         case 1:
//             cout<<"You chose Pizza\n";
//             price=10;
//             break;
//         case 2:
//             cout<<"You chose Burger\n";
//             price=8;
//             break;
//         case 3:
//             cout<<"You chose Salad\n";
//             price=5;
//             break;
//         default:
//             cout<<"Invalid option\n";
//             return;
//     }
//     cout<<"Enter number of food item: ";
//     cin>>number;
//     int add=calculatetotal(price,number);
//     total=total+add;
//     cout<<"Total cost so far: $"<<total<<endl;
// }
// int main(){
//     char opt;
//     do{
//         option();
//         cout<<"Do you want to choose another one? (y/n): ";
//         cin>>opt;
//     }
//     while(opt=='y');
//     cout<<"Final total: $"<<total<<endl;
//     return 0;
// }
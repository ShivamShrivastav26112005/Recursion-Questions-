// Ques.1-> Stair path - either one step or two and their combination ? 
// we have to climb our ground flore to last flore.


// #include<iostream>
// using namespace std;
// int stair(int n)
// {
//     if(n==1) return 1; // base case 
//     if(n==2) return 2; // base case 
//     return stair(n-1)+stair(n-2);
// }
// int main()
// {
//     // cout<<stair(6); // 13
//     // cout<<stair(5); // 8
//     // cout<<stair(4); // 5
//        cout<<stair(3); // 3
// }



// Ques.2-> Stair path - either one step or two or three steps and their combination ?
// we have to climb our ground flore to last flore.



#include<iostream>
using namespace std;
int stair(int n)
{
    if(n==1) return 1; // base case 
    if(n==2) return 2;
    if(n==3) return 4;// base case
    return stair(n-1) + stair(n-2) + stair(n-3);

}
 int main()
 {
    // cout<<stair(5); // 13
    // cout<<stair(3); // 4
       cout<<stair(4); // 7
  }

//***** Pre In Post ******

// Ques.1->
// kaam (Pre - dono call se pahle kaam)
// call 
// kaam (In - dono call ke bich me call)
// call 
// kaam (Post- dono call ke bad kaam)


// #include<iostream>
// using namespace std;
// void pip(int n)
// {
//     if(n==0) return;  // base case

//     cout<<"Pre"<<n<<endl; // kaam
//     pip(n-1); // call
//     cout<<"In"<<n<<endl; // kaam
//     pip(n-1); // call
//     cout<<"Post"<<n<<endl; // kaam
// }
// int main()
// {
//     pip(3); // calling 
// }

// output
// Pre3
// Pre2
// Pre1
// In1
// Post1
// In2
// Pre1
// In1
// Post1
// Post2
// In3
// Pre2
// Pre1
// In1
// Post1
// In2
// Pre1
// In1
// Post1
// Post2
// Post3



// Ques.2-> Print zig-zag
// i/p      o/p 
// 1        111
// 2        211121112
// 3        321112111232111211123



#include<iostream>
using namespace std;
void zigzag(int n)
{
    if(n==0) return ;

    cout<<n;
    zigzag(n-1);
    cout<<n;
    zigzag(n-1);
    cout<<n;
}
int main()
{
    zigzag(2);
}
//211121112

















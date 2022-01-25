#include <iostream>
using namespace std;

int factorial(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact *= i;
    }
    return fact;
}

int main()
{
    int n, r;
    cin>>n>>r;
    
    int ans = (factorial(n))/((factorial(n-r))*(factorial(r)));
    
    cout<<"The binomial coefficient for "<<n<<" and "<<r<<" is: "<<ans<<endl;
   
   return 0;
}

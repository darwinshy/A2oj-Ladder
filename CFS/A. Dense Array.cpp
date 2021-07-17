#include <iostream>

using namespace std;


 bool isPrime(int n){
    if (n == 0 || n == 1) {
         return false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                return false;
                break;
            }
        }
    }
     return true;

}

int main() {
    int i, n, count=0, number, sum,m, num;

    n=1979;
    while(n--){
        cin >> num;
        sum=0;
        while(num>0)    
        {    
        m=n%10;    
        sum=sum+m;    
        num=num/10;    
        } 
        if(isPrime(sum)) count++;
        
    }
    cout<<count;
}
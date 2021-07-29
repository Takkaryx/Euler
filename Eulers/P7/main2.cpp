#include<iostream>
#include<tuple>
using std::cout, std::tuple;

inline bool isprime(int n){
    for(int i = 3; i*i <= n; i += 2)
        if(n % i == 0) return false;
    return true;
}

int main(){
    int prime = 0;
    for(auto [n, count, inc] = tuple{3, 1, 0}; count < 10001; n += 2, inc = isprime(n), count += inc )
        prime = inc ? n : prime;
    cout << prime;
}

#include <iostream>

int fib(int);

int main(){

    int num;
    std::cout << "Enter number: " << '\n';
    std::cin >> num;

    int n = 0;
    while(n <= num){
        if(n > num-1)
        std::cout << fib(n) << '\n';
        else
        std::cout << fib(n) << ", ";
        ++n;
    }
}


int fib(int x){
   if(x == 0)
   return 0;

   if(x == 1)
   return 1;

   return fib(x-1) + fib(x-2);
   
}
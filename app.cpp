#include <iostream>
#include <time.h>

unsigned long long int  fibonacci(unsigned int n);
int last = 0;
static int first = 0;
int main()
{
    int number;
    std::cout<<"Enter integer: ";
    std::cin>>number;
    first = time(NULL);
    std::cout<<fibonacci(number)<<std::endl;
    last = time(NULL);
    std::cout<<"computed in "<<last - first<<" seconds."<<std::endl;
}

unsigned long long int fibonacci(unsigned int n)
{
    
    //base case
    if( 0 == n || 1 == n){
        return n;
    }else{
        return fibonacci( n - 1) + fibonacci( n - 2);
    };
    
}
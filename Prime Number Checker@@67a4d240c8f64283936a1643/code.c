#include<stdio.h>
int isPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
          return 0;
        }
    }return 1;
}
// #include <unistd.h> // For sleep function
// int isPrime(int n) {
//     if (n <= 1) {
//         return 0; // Not prime
//     }
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             return 0; // Not prime
//         }
//         sleep(1); // Add 1-second delay for each iteration
//     }
//     return 1; // Prime
// }

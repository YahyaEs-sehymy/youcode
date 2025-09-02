// #include <stdio.h>
// int main (){

//     int n , inverse = 0;

//     printf("ecrire la nomber n :");
//     scanf("%i",&n);

//     int t = n;
//     while (t !=0){
//         int r = t % 10;
//         inverse  = inverse * 10 + r;
//         t = t / 10; 
//     }

//     printf("L'inverse de %d est %d\n", n, inverse);
//     return 0;
// }

#include <stdio.h>
int main (){

    int n;
    int r,t , inverse = 0;

    printf("ecrire la nomber n :");
    scanf("%i",&n);

     t = n;
    while (t !=0){
         r = t % 10;
        inverse  = inverse * 10 + r;
        t = t / 10; 
    }

    printf("L'inverse de %d est %d\n", n, inverse);
    return 0;
}
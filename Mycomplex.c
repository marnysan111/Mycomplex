#include <stdio.h>
#include "Mycomplex.h"



int main(void){

    printf("実部の値を入力してください\n");
    scanf("%lf",&kadai1.real);

    printf("虚部の値を入力してください\n");
    scanf("%lf",&kadai1.imaginary);
    
    //入力された値の表示
    printf("%lf + %lfi\n",kadai1.real ,kadai1.imaginary);

    printf("実部の値を入力してください\n");
    scanf("%lf",&kadai2.real);

    printf("虚部の値を入力してください\n");
    scanf("%lf",&kadai2.imaginary);

    //入力された値の表示
    printf("%lf + %lfi\n\n",kadai2.real ,kadai2.imaginary);

    printf("複素数の足し算をします。\n");
    ans1.real = kadai1.real + kadai2.real;
    ans1.imaginary = kadai1.imaginary + kadai2.imaginary;
    printf("%lf + %lf i\n\n",ans1.real,ans1.imaginary);


    printf("複素数の引き算をします。\n");
    ans1.real = kadai1.real - kadai2.real;
    ans1.imaginary = kadai1.imaginary - kadai2.imaginary;
    printf("%lf + %lf i\n\n",ans1.real,ans1.imaginary);

    printf("複素数の掛け算をします。\n");
    ans1.real = kadai1.real * kadai2.real;
    ans1.imaginary = kadai1.imaginary * kadai2.imaginary;
    printf("%lf + %lf i\n\n",ans1.real,ans1.imaginary);

    printf("複素数の割り算をします。\n");
    ans1.num1 = (kadai1.real * kadai2.real) + (kadai1.imaginary * kadai2.imaginary);
    ans1.num2 = (kadai1.real * kadai2.imaginary) - (kadai1.imaginary * kadai2.real);
    ans1.num3 = (kadai1.real * kadai1.real) + (kadai1.imaginary * kadai1.imaginary);
    printf("(%lf + %lfi) / %lf\n",ans1.num1,ans1.num2,ans1.num3);



    return 0;
}











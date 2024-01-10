#include<stdio.h>
#include<time.h>
//Function to generate and return random numbers.

int *getRandom(){
    static int r[10];
    int i;
    //set the seed
    srand((unsigned)time(NULL));

    for(i=0;i<10;i++){
        r[i] = rand() % 50;
        printf("%d\n",r[i]);
    }
    return r;

}
//main function to call above defined function

int main(){
    int *p;
    int i;

    p = getRandom();

    for(i = 0; i < 10; i++){
        printf("*(p + [%d]) : %d\n",i, *(p+i));
    }

     return 0;
}

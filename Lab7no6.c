#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random100to200();

int main() {
    int M,N,i,j,k,rnum,numok;
    scanf("%d %d",&M,&N);
    if (M<2) {
        M=2;
    }
    if (N<20) {
        N = 20;
    }
    int A[M][N];
    srand(time(NULL));  // Initialization, should only be called once.
                        // To seed the pseudo-random number generator 
                        // so that it produces a different sequence of 
                        // "random" numbers each time the program runs 
    for (i=0;i<M;i++) {
        for (j=0;j<N;j++) {
        numok=1;
        while (numok==1)  {
            rnum=random100to200();
            numok = 0;
            //ตรวจสอบว่าค่าที่สุ่มได้ซ้ำกับค่าที่เก็บในอาร์เรย์ไปแล้วหรือไม่ สุ่มใหม่หากยังซ้ำอยู่
            for (k=0;k<j;k++)
                if (A[i][j]==rnum) {
                    numok = 1;
                }
        }
        A[i][j]=rnum; //ถ้าผ่านมาจุดนี้ได้แสดงว่าค่านั้นไม่ซ้ำกับค่าอื่นในอาร์เรย์
    }
    }
    // display all Finish members
    printf("\n");
    for (i=0;i<M;i++) {
        for(j=0;j<N;j++) {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    } 
    return 0;
}

int random100to200() {
    int random_num = (rand() % 100) + 101;
    printf("%d", random_num);
    return random_num;
}

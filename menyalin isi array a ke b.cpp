#include <stdio.h>
#include <conio.h>
int main (void)

{
    int c[5]={5,10,6,0,4};
    int d[5];
    int i=0,j=0;
    printf("nilai array yang akan ditampilkan\n");
    for (i=4; i>=0; i--){
        d[i]=c[j] ;
        printf ("%d",c[j]);
        j++;
    }
    printf("\nposisi terbalik dari array A ke array B sebagai berikut \n");
    for(i=0; i<5; i++){
        printf ("%d",d[i]);
    }
    printf ("\n");
    printf ("pause");
    return 0;
    }

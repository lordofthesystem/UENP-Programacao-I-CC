#include <stdio.h>

int mostraMult3(int x, int y){
    int primeiro=1;
    for (x;x<=y;x++){
        if(x % 3 == 0){
        if (primeiro==0){
         printf(" | ");
            
        }
         primeiro=0;
         printf("%i", x);
        }
    }
}

int main()
{
    mostraMult3(2,31);
    
    return 0;
}

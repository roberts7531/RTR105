#include <stdio.h>
#include <stdlib.h>

int* sadalitCiparos(int skaitlis,int ciparuSkaits);
int noteiktCiparuSkaitu(int skaitlis);
int main(){
    int skaitlis1;
    scanf("%d",&skaitlis1);   
    int ciparuSkaits1 = noteiktCiparuSkaitu(skaitlis1);
    int *skaitlis1Ciparos = sadalitCiparos(skaitlis1,ciparuSkaits1);
     int skaitlis2;
    scanf("%d",&skaitlis2);   
    int ciparuSkaits2 = noteiktCiparuSkaitu(skaitlis2);
    int *skaitlis2Ciparos = sadalitCiparos(skaitlis2,ciparuSkaits2);

    int *atb = (int*) malloc((ciparuSkaits1+ciparuSkaits2)*sizeof(int));

    for(int i=0;i<ciparuSkaits1;i++){
        int carry=0;
        for(int j=0;j<ciparuSkaits2;j++){
            atb[i+j] += carry + skaitlis1Ciparos[i]* skaitlis2Ciparos[j];
            carry = atb[i+j] / 10;

        }
        atb[i+ciparuSkaits1] = carry;
    }

    
    
    for(int i= 0;i<ciparuSkaits1+ciparuSkaits2-1;i++){
        printf("%d",atb[i]);
    }
    printf("\n");
    
}


int* sadalitCiparos(int skaitlis,int ciparuSkaits){
    int *p = (int*) malloc(ciparuSkaits*sizeof(int));
    ciparuSkaits--;
    while(skaitlis != 0){
        int cipars = skaitlis % 10;
        skaitlis = skaitlis / 10;
        p[ciparuSkaits] = cipars;
        ciparuSkaits--;
    }
   return p;
}

int noteiktCiparuSkaitu(int skaitlis){
    int count = 0;
   do{
    skaitlis /= 10;
    ++count;
   }while (skaitlis != 0 );
    return count;
}
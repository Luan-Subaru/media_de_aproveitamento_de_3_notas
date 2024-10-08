#include <stdio.h>

int main(){
    
    int n1, n2, n3;
    float media, ma;
    
    printf("Digite sua nota 1: ");
    scanf("%d", &n1);
    
    printf("\nDigite sua nota 2: ");
    scanf("%d", &n2);
    
    printf("\nDigite sua nota 3: ");
    scanf("%d", &n3);
    
    media = (n1 + n2 + n3) / 3;
    
    ma = (n1 + n2*2 + n3*3 + media)/7;
    
    if(ma >= 9) {
        printf("Sua média de aproveitamento foi %.2f e sua nota final foi A", ma);
    }
    
     if(ma >= 7.5 ) {
        printf("Sua média de aproveitamento foi %.2f e sua nota final foi B", ma);
    }
    
     if(ma >= 6 ) {
        printf("Sua média de aproveitamento foi %.2f e sua nota final foi C", ma);
    }
    
     if(ma >= 4 ) {
        printf("Sua média de aproveitamento foi %.2f e sua nota final foi D", ma);
    }
    
     if(ma < 4) {
        printf("Sua média de aproveitamento foi %.2f e sua nota final foi E", ma);
    }
    return 0;
}
#include <stdio.h>

int main(){
    char on[15], ep[15]; //gurw stous 15 xarakthres kala einai 
    int y_b, y_w;
    
    printf("Dwse onoma: ");
    scanf("%s", &on);
    printf("Dwse epi8eto: ");
    scanf("%s", &ep);
    printf("Dwse etos gennhshs: ");
    scanf("%d", &y_b);
    printf("Dwse etos enar3hs ergasias: ");
    scanf("%d", &y_w);

    printf("\nKurie/a: %s %s\n\t8a 8elame na sas enhmerwsoume ta e3hs:\n", on, ep);
    
    int min_years = 65 - (2024 - y_b);
    int worked_years = (2024 - y_w) + min_years;

    printf("Ta elaxista eth pou apaitountai gia th synta3iodothsh sas einai: %d\n", min_years);
    printf("Ta xronia pou 8a exete ergastei einai: %d", worked_years);

    return 0;
}

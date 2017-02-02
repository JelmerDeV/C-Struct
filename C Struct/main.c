#include <stdio.h>
#include <string.h>


struct PersoonsGegevens
{
    char name[32];
    char country[64];
    char city[64];
    char age[10];
    char motto[128];
};


int main()
{
    char name[32];
    char country[64];
    char city[64];
    char age[10];
    char motto[128];
    
    struct PersoonsGegevens p_g;
    
    printf("Enter your name: ");
    gets(name);
    strcpy(p_g.name, name);
    
    printf("Enter your country: ");
    gets(country);
    strcpy(p_g.country, country);
    
    printf("Enter your city: ");
    gets(city);
    strcpy(p_g.city, city);
    
    printf("Enter your age: ");
    gets(age);
    strcpy(p_g.age, age);
    
    printf("Enter your motto: ");
    gets(motto);
    strcpy(p_g.motto,motto);
    
    FILE *pgegevens;
    pgegevens= fopen("SaveFile.txt","w");
    fprintf(pgegevens,"Name: %s\n",p_g.name);
    fprintf(pgegevens,"Country: %s\n",p_g.country);
    fprintf(pgegevens,"City: %s\n",p_g.city);
    fprintf(pgegevens,"Age: %s\n",p_g.age);
    fprintf(pgegevens,"Motto: %s\n",p_g.motto);
    fclose(pgegevens);
}



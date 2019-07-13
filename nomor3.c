
#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
char kalimat[100];
char cari[10];
int ketemu=0 ;

printf("Masukkan kalimat : ");
gets(kalimat);
printf("kalimat yang dicari: ");
gets(cari);

int l = strlen(kalimat);
int i;

for(i=0; i<=l; i++){
    if(cari == kalimat[i]){
        ketemu += 1;
    }
}

if(ketemu >= 1){
    printf("ditemukan %d kali", ketemu);
}
else if(ketemu == 0){
    printf("karakter tidak ditemukan dalam kalimat");
}

/*
if(strstr(kalimat,cari))
{
    ketemu += 1;
}
else
    printf("karakter tidak ditemukan dalam kalimat");

printf("ditemukan %d kali", ketemu);
*/

getch();
}

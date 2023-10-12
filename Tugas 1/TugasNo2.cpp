#include <stdio.h>
#include <stdlib.h>

float persegipanjang(float panjang,float lebar)
{
    float hasil;
  printf("masukan panjang \n");  scanf("%i",&panjang);
  printf("Masukan lebar \n");scanf("%i",&lebar);
    return hasil = panjang*lebar;
}
int main()
{
    float hasil,panjang,lebar;
    hasil=persegipanjang(panjang,lebar);
    printf("hasil = %i",hasil);
}
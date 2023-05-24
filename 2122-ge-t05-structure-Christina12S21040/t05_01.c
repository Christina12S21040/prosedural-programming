// 12S21040 - Christina Putri Hutahaean
// 12S21040 - Samuel Christy Angie Sihotang

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc)
{
  char masuk[1000];
  int unlimited = 1;
  int panjang, belakang;
  int pria=0;
  int wanita=0;

  while (1==1)
  {
    fgets(masuk, sizeof masuk, stdin);
    if (masuk[0]=='-' && masuk[1]=='-' && masuk[2]=='-')
    {
      break;
    }else
    {
      panjang=strlen(masuk)-3;
      belakang = (int)(strrchr(masuk, '|') - masuk);
      if (panjang-belakang==4)
      {
        pria++;
      }
      else if(panjang-belakang==6)
      {
        wanita++;
      }
    }
  }

  printf("%i|%i",pria,wanita);
  
  return 0;
  
}
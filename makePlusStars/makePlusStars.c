/*
Burak Önce  20120205052
Bu program girilen tek sayı kadar satırı olan bir desen oluşturur.
Bu desen elmasa ve baklavaya benzetilebilir.
*/

#include <stdio.h>
int main()
{
  int n,y,x; 
  //n değişkeni kullanıcı girdisi ile alınır
  //y değişkeni iç kısımdaki for'larda desen için gerekli sembollerin nekadar yazılacağına karar verir.
  //x değişkeni dış kısımdaki forlarda satır sayısını vs. kısıtlar.  

  printf("N sayısını giriniz");
  scanf("%d", &n);
  printf("\n"); //ilk sembollerin printf le aynı satırda olmamasını sağlar.

  for (x=1; x<=n/2; x++) //satır sayısını kullanıcının girdiği sayısının yarısı olarak belirler.
  {
    for (y=1; y<=n/(x+1); y++) //sembollerden birinin yazım kuralını belirler.
      printf("*");

      for (y=1; y<=2*x-1; y++) //sembollerden birinin yazım kuralını belirler.
        printf("+");

        for (y=1; y<=n/(x+1); y++) //sembollerden birinin yazım kuralını belirler.
          printf("*");

          printf("\n"); //for her döndüğünde satır atlamak için kullanılır.
  }
  
  for (x=1; x<=n; x++) //desenin en orta kısmındaki şekli belirler.
  printf("+");
  printf("\n");

  for (x=1; x<=n/2; x++)  //kodun ikinci kısmı denilebilir.Desen için gerekli azalım ve arttırım yapılır.
  {
    for (y=1; y<=x; y++) //sembollerden birinin yazım kuralını belirler.
      printf("*");

      for (y=1 ; y<=n-2*x; y++) //sembollerden birinin yazım kuralını belirler.
        printf("+");

        for (y=1; y<=x; y++) //sembollerden birinin yazım kuralını belirler.
           printf("*");

           printf("\n"); //for her döndüğünde satır atlamak için kullanılır.
  }

  return 0;
}

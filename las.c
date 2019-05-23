#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int losowe[10][10];

int main(void)
{

   srand(time(NULL));
   for (int i = 0; i < 10; ++i) {
      for (int j = 0; j < 10; ++j) {
         losowe[i][j] = rand() % 10;
            
         printf("%d ", losowe[i][j]);
      }
      printf("\n");
   }
   return 0;
}

//void plansza()
//void ustawienia()
	


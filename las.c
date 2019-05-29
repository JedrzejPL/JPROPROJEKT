#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct target{
	int x;
	int y;
}list;

void display();


int main(){
	int size;
	printf("Podaj wielkosc lasu \n");
	scanf("%d",&size);
	char forest[size][size];
	display(size,forest);
	return 0;
}

void display(int size,char tab[size][size]){
    int i,j;
    for(int i=0;i<size;i++)
	{
    	for(int j=0;j<size;j++)
	{
            tab[i][j]='^';
        }
    }

     for(int i=0;i<size;i++)
	{
        for(int j=0;j<size;j++)
		{
        	printf("%c ",tab[i][j]);
        }
        puts("");
    }
}

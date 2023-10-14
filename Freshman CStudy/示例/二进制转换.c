#include<stdio.h>
void decToBin(int n);
int main ()
{
	int s;
	scanf("%d", &s);
 	decToBin(s);
}


void decToBin (int n){
 	int result = 0,k = 1,i,temp;
		 temp = n;
    while (temp){
 		i = temp%2;
 		result+= k * i ;
 		k = k * 10;
 		temp = temp / 2;
	}
 	printf("%032d\n",result); 
} 

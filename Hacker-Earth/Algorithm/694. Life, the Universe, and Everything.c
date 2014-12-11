// Problem: 694. Life, the Universe, and Everything (http://www.hackerearth.com/problem/algorithm/life-the-universe-and-everything/)

#include <stdio.h>

int main()
{
    for(;;){
    	int entrada = 0;
    	scanf("%d", &entrada);
    	if(entrada == 42){
    		break;
    	}
    	
    	printf("%d\n", entrada);
    }
    
    return 0;
}

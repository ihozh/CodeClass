/*************************************************************************
    > File Name: rand.cpp
    > Author: Jimmy Lau
    > Mail: nanfangxiaozhi@qq.com 
    > Created Time: Mon Jun 15 22:02:32 2015
 ************************************************************************/
#include <stdlib.h>
#include <stdio.h>

#include "rand.h"
void createString()
{
	int d[20];
	int t = 1;
	for(int i = 0;i<1000;i++){
		for(int j=0;j<20;j++){
			scanf("%d ", &d[j]);
		}
		
		t = 1;

		for(int j=0;j<2000;j++){
			for(int k=0;k<20;k++){
				printf("%c",d[(k+t)%20]);
				t*=2;
				t%=1000000007;
			}
			puts("");
		}
	}
}





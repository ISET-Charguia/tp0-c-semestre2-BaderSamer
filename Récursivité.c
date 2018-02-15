#include <stdio.h>
#include <stdlib.h>
int FacRecursive(int x);
int FacIterative(int x,int i);
int main(void) {
	int n,R1,R2;
	puts("Donner un nombre N: ");
	scanf("%d",&n);
	R1 = FacRecursive(n);
	R2 = FacIterative(n);
	prtinf("Resultat 1= %d/n",R1);
	prtinf("Resultat 1= %d/n",R2);

	return 0;
}

int FacRecursive(int x){
if(x > 1){
	return x*FacRecursive(x-1);
}else{
	return 1;
}
}


int FacIterative(int x){
	int s=1,i;
	for(i=1;i<x;i++){
		s=s*i;
	}
		return s;
}

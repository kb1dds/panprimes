#include <stdio.h>
#include <math.h>

int main(){
	unsigned int i, j, k, prm, len, mtch;
	char strng[15];
	for(i=2;i<10000000;i++){
		prm=1;
		for(j=2;j<sqrt(i)+1;j++)
			if(i%j==0){
				prm=0;
				break;
			}
		if(prm){
		       	sprintf(strng,"%d",i);
			for(len=0;strng[len]!=0;len++);
			prm=1;
			for(j=1;j<len+1;j++){
				mtch=0;
				for(k=0;k<len;k++){
					if(strng[k]==j+'0'){
						mtch=1;
						break;
					}
				}
				if(!mtch){
					prm=0;
					break;
				}
			}
			if(prm) printf("%d\n",i);

		}
	}
}

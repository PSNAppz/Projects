#include<stdio.h>
#include<unistd.h>

//Author:PSN
//Date:6th Aug 2016

void complexitySelector(int,int[],int);
void toXOR(int[],int[],int,int);
//This module will select the complexity and run the Xor module with the selected complexity.
//@args compMeter - Range of complexity.
//@args pat[] - Pattern.
//@args len - Length of pattern.
//Using compound literal operator ( ){ } - (C99 feature ).
void complexitySelector(int compMeter,int pat[],int len){
	int *BarkerCode;
	int i;
	 switch(compMeter){
		 case 1:BarkerCode=(int [2]){1,1};toXOR(BarkerCode,pat,len,2);break;
		 case 2:BarkerCode=(int [3]){1,1,0};toXOR(BarkerCode,pat,len,3);break;
		 case 3:BarkerCode=(int [4]){1,1,1,0};toXOR(BarkerCode,pat,len,4);break;
		 case 4:BarkerCode=(int [5]){1,1,1,0,1};toXOR(BarkerCode,pat,len,5);break;
		 case 5:BarkerCode=(int [7]){1,1,1,0,0,1,0};toXOR(BarkerCode,pat,len,7);break;
		 case 6:BarkerCode=(int [11]){1,0,1,1,0,1,1,1,0,0,0};toXOR(BarkerCode,pat,len,11);break;
		 case 7:BarkerCode=(int [13]){1,1,1,1,1,0,0,1,1,0,1,0,1};toXOR(BarkerCode,pat,len,13);break;
	 }
}
//Main algorithm {converting the data bits to BarkerCode Mixed value}
void toXOR(int BarkerCode[],int pat[],int len,int BarkerLen){
	int i,y=0,val,j;
	int convertedVal[100];
	for(i=0;i<len;i++){
		for(j=0;j<BarkerLen;j++){
			if(pat[i]==BarkerCode[j]){
				convertedVal[y]=0;
			}
			else{
				convertedVal[y]=1;
			}
			y++;
		}
	}
	val=y;
	for(y=0;y<val;y++){
		printf("%d",convertedVal[y]);
		fflush(stdout);
		usleep(200000);
	}
	printf("\n");
}
int main(){
	int i,length,com;
	int a[50];
	printf("......................BarkerCode Chipping Sequence Creator.....................\n");
	printf("Enter your bit Pattern length and Pattern\n");
	scanf("%d",&length);
	//Inputting each bit as an array element
	for(i=0;i<length;i++)
		scanf("%d",&a[i]);

	printf("Enter your complexity (1-7)\n");
	scanf("%d",&com);
	printf("Checking your input...\n");
	sleep(2);

	if(com>0 && com<8){
	printf("Selecting complex algorithms...\n");
	sleep(2);
	printf("X0Ring your values...\n");
	sleep(1);
	printf("Getting Results...\n");
		complexitySelector(com,a,length);
	}
	else{
		printf("Bad Complexity Range. Please enter range from (1-7)\n");
	}
	return 0;
}

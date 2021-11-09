#include<stdio.h>
int main(){
//输入 
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int n;
	scanf("%d",&n);
	int i,j,k;
	int pig[3000][8]={0};//建一个有8列的二维数组，最后三列分别放置三批次的成本，若在运营，则成本为0，后续可排除 
	for(i=0;i<n;i++){
		for(j=0;j<5;j++){
		scanf("%d",&pig[i][j]);			
		}
		pig[i][5]=0;
		pig[i][6]=0;
		pig[i][7]=0;
	}
//排除已在运营的养殖场 
	for(i=0;i<n;i++){
		if(pig[i][1]!=1){
		//选出可以放a的计算第一批次成本 
		 	if(pig[i][2]>=a){
			 	pig[i][5]=pig[i][3]+a*pig[i][4];
			}
		//选出可以放b的计算第二批次成本 
			if(pig[i][2]>=b){
				pig[i][6]=pig[i][3]+b*pig[i][4];
			}
		//选出可以放c的计算第三批次成本 
			if(pig[i][2]>=c){
				pig[i][7]=pig[i][3]+c*pig[i][4];
			}
		}
	}
//找出最佳方案
	int check=0;//判断是否存在方案 
	int temp=100000000;
	int solve[4]={0};
	for(i=0;i<n;i++){
		if(pig[i][5]!=0){
			for(j=0;j<n;j++){
	    		if(pig[j][6]!=0&&j!=i){
	    			for(k=0;k<n;k++){
	    				if(pig[k][7]!=0&&k!=i&&k!=j){
	    					solve[0]=pig[i][5]+pig[j][6]+pig[k][7]; 
		    				if(solve[0]<temp){ 
						   		solve[1]=pig[i][0];
								solve[2]=pig[j][0];
							   	solve[3]=pig[k][0];
							   	temp=solve[0];
							   	check=1;
						   }
						   //如果成本相同，找出猪场编号最小的 
						   if(solve[0]==temp){
						   		if(pig[i][0]<solve[1]){
									solve[1]=pig[i][0];
									solve[2]=pig[j][0];
									solve[3]=pig[k][0];	   	
								   }
								else if(pig[i][0]==solve[1]){
									if(pig[j][0]<solve[2]){
										solve[2]=pig[j][0];
										solve[3]=pig[k][0];
									}
									else if(pig[j][0]==solve[2]){
										if(pig[k][0]<solve[3]){
											solve[3]=pig[k][0];
										}
									}
								}
							}
	    				}
	    			}
				}
			} 
		}
	}
//输出 
	if(check==0){
		printf("NO");
	}
	else{
		printf("%d\n",temp);
		printf("%d %d %d",solve[1],solve[2],solve[3]);
	}
	return 0;	
	
}

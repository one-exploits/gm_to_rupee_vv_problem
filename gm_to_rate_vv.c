#include<stdio.h>
#include <math.h>
#include <stdlib.h>
static void own_info();
float gm_to_rupay(float,float);
float rupay_to_gm(float,float);
int main(){
own_info();
while(1){
int option;
printf("\n\n\nCustmers Choice :");
printf("\n[1]For in gm\n");
printf("[2]For in rupay\n");
scanf("%d",&option);
	if(option==1){
		float c_gm,rupee,per_kg_r;
		printf("\n______________________________________________________");
		printf("\n\nOkay...done\n");
		printf("How much gm(grams) custmer want :\n");
	    scanf("%f",&c_gm);
	    printf("\nGoods rate per kg :\n");
	    scanf("%f",&per_kg_r);
	    rupee=gm_to_rupay(per_kg_r,c_gm);
	    printf("\n*****************************************");
	    printf("\n\n*         ₹ %f  \t\t\t*\n",rupee);
	    printf("\n*****************************************");
	    printf("\n\t\t\t\tThank You!");
	}else if (option==2){
		float c_rup,gm,per_kg_r;
		printf("\n______________________________________________________");
		printf("\n\nOkay...done\n");
		printf("How many rupees custmer want to buy goods:\n");
	    scanf("%f",&c_rup);
	    printf("\nGoods rate per kg :\n");
	    scanf("%f",&per_kg_r);
	    gm=rupay_to_gm(per_kg_r,c_rup);
	    printf("\n*****************************************");
	    printf("\n\n*         gm=%f  \t\t*\n",gm);
	    printf("\n*****************************************");
        printf("\n\t\t\t\tThank You!");

		
	
	}else{
		printf("erro %p: not integer input....",&option);
		exit(EXIT_FAILURE);
		}
}	
}

float gm_to_rupay(float rate_per_kg ,float req_gm_custmer){
		float net_ru;
		net_ru=((rate_per_kg/1000)*(req_gm_custmer));	
		//****(rate/gmm)*gmm
		return net_ru; 	
		 }
		 
float rupay_to_gm(float rate_per_kg,float in_rupay_order_by_cust){
	    float net_ru;
	    net_ru=((1000/rate_per_kg)*(in_rupay_order_by_cust));
	    return net_ru; 	
}
static void own_info(){
printf("\n\n\nAuthor : One-Exploits @GNU/Projects"
"\n©Mohammad Arquam(C.E.O)"
"\n+______________________________________________+"
"\n| Programmer,H@cker,Web developer,Web designer,|\n| Data Scientist,Software developer,YouTuber,  |\n| Blogger and more.\t\t\t       |\n|\t\t\t\t\t       |"
"\n| Gmail: oneexploits@gmail.com\t\t       |"
"\n| GitHub: https://github.com/one-exploits      |"
"\n| Insta: https://www.instagram.com/one_exploits\|"
"\n| Website: https://one-exploits.business.site/ |"
"\n|\t\t\t\t\t       |"
"\n| \t\t\tVersion:1.00.00\t       |\n"
"|\t\t\tDate:07/01/2022,Fri    |"
"\n+______________________________________________+");

}

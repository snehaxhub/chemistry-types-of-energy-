#include<stdio.h>
#include<conio.h>
#define R 8.314
int main(){
int en;
float H,S,T,G,K,m,C,E,Q,W,dU;
clrscr();
printf("                             TOPIC:TYPES OF ENERGY \n");
printf("In Chemistry, energy can be understood in various context. \n Select the Energy type: \n");
printf("1.Gibbs Free Energy \n 2 Average Kinetic Energy of gas molecule \n 3.Calorimetry Energy \n 4.Internal Energy \n ");
scanf("your choice: %d",&en);
switch(en){
case 1: printf("Enter value for difference of enthalpy(in KJ/mol):"); scanf("%f",&H);
printf("Enter the value for the Temperature (in K):"); scanf("%f",&T);
printf("Enter for difference in entropy(J/Kmol):"); scanf("%f",&S);
G= H-(T*S);
printf("The Gibbs free energy is %f KJ/mol:",G) ;
break;
case 2: printf("Enter value Temperature(in K): "); scanf("%f",&T);
K= 1.5*R*T;
printf("The avg kinetic energy of gas molecule is %f J",K);
break;
case 3: printf("Enter mass(g)"); scanf("%f",&m);
printf("Enter specific heat capacity (J/o^C.g):");scanf("%f",&C);
printf("Enter change in temperature in kelvin:"); scanf("%f",&T);
E=m*C*T;
printf("The calorimetry enery is %f J",E);
break;
case 4:printf("Enter Heat added to the system (in J):");scanf("%f",&Q);
printf("Enter Work done by system(in J):");scanf("%f",&W);
dU=Q+W;
printf("The change in internal energy is %f J",dU);
break;
default : printf("Enter the mentioned type of energy!!");
break;
}
getch();
return 0;
}
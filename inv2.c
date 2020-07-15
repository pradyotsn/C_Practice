#include<stdio.h>
#include <string.h>

struct inventory{
char Item_name[3];
int Item_number;
char Warehouse_location[20];
char Branch_name[3];
char City[10];
};
int main()
{
int i;
struct inventory in[5];

//printf("Enter Records of 5 Inventory Items");

// Details of 1st iteem
strcpy(in[0].Item_name,"abc");


in[0].Item_number=12345;

strcpy(in[0].Warehouse_location,"Jayanagar");


strcpy(in[0].Branch_name,"XYZ");

strcpy(in[0].City,"Blorefak");




printf("\nInventory Information List:\n");
printf("Item_name \t Item_number \t Warehouse_location \t Branch_name \t City\n");

for(i=0;i<1;i++){
printf("%s \t\t %d \t\t %s \t\t %s kk \t\t %s \n",in[i].Item_name,in[i].Item_number,in[i].Warehouse_location,in[i].Branch_name,in[i].City);
}
   return 0;
}

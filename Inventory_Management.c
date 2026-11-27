#include <stdio.h>
int main(){

    int ids[5];
    char names[5][20];
    float prices[5];
    int quantity[5];
    int c;           //choice
    int i;           //loop counter
    int id;          //id of product
    int pos;         //index of found id
    int newQty;//new quantity from user
    int count=0;
    do{
        printf("\n=======================================\n");
        printf("        PRODUCT INVENTORY SYSTEM\n");
        printf("=======================================\n");
        printf("  1. Add Product\n");
        printf("  2. Search Product\n");
        printf("  3. Display All Products\n");
        printf("  4. Update Quantity\n");
        printf("  5. Exit\n");
        printf("---------------------------------------\n");
        printf("Enter Your Choice (1-5): ");
        scanf("%d", &c);
        
        switch(c){

            case 1:
                if (count >= 5) 
                { 
                    printf("\nInventory is full!\n");
                                }
                else{
                printf("Enter The Product Id: ");
                scanf("%d", &ids[count]);
                printf("Enter Product Name: ");
                scanf(" %19[^\n]", names[count]);
                printf("Enter Product Price: ");
                scanf("%f", &prices[count]);
                printf("Enter Product Quantity: ");
                scanf("%d", &quantity[count]);
                count ++;
                printf("\nProduct added successfully!\n");
                }
                break;

            

            case 2:
                if(count==0){
                printf("\nInventory is empty!\n");
                }
                else{
                printf("Enter product ID to search: ");
                scanf("%d" ,&id);

                pos = -1;
                for(i=0;i<count;i++){
                    if(ids[i]==id){
                        pos=i;
                    }
                }
                if(pos==-1){
                printf("Product not found!\n");
                }
                else{
                printf("\nProduct Found!\n");
                printf("---------------------------------------\n");
                printf("ID          : %d\n", ids[pos]);
                printf("Name        : %s\n", names[pos]);
                printf("Price       : %.2f\n", prices[pos]);
                printf("Quantity    : %d\n", quantity[pos]);
                printf("---------------------------------------\n");
                }
                }
                break;

            case 3:
                if(count ==0){
                    printf("\nInventory is empty!\n");
                }
                else{
                    printf("\n%-8s%-25s%-12s%-10s\n","ID","Name","Price","Quantity");
                    
                    printf("-----------------------------------------------\n");
                    for(i=0;i<count;i++){
                   printf("%-8d%-25s%-12.2f%-10d\n", ids[i], names[i], prices[i], quantity[i]);
                }
                }
                break;

            case 4:
                if(count == 0){
                    printf("\nInventory is empty!\n");
                }
                else{
                    printf("Enter product ID to update: ");
                    scanf("%d", &id);

                    pos =-1;
                    for(i=0;i<count;i++){
                        if(ids[i]==id){
                            pos=i;
                        }
                    }
                    if(pos==-1){
                        printf("\nProduct not found\n");
                    }
                    else{
                        printf("Current Quantity : %d\n", quantity[pos]);
                        printf("Enter New Quantity: ");
                        scanf("%d", &newQty);
                        quantity[pos]= newQty;
                        printf("\nQuantity updated successfully\n");
                    }
                }
                    break;
                

            case 5:
                    printf("\nExiting program. Goodbye!");  
                    break;
            default:
                    printf("Invalid choice please enter a choice 1-5\n");
                    break;
                           }
        }
    
    while(c!=5);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main ()
{

    int choice;
    char username[50];
    char password[50];

    while(1)
    {
        printf("\t<== Intelligent Inventory store and Sales Management ==>\n");
        printf("\n1.Admin Login\n");
        printf("2.User Login\n");
        printf("3.Exit\n");
        printf("Enter choice = ");
        scanf("%d",&choice);
        if(choice==1){
            printf("Enter User Name :");
     scanf("%s",&username);
            printf("\nEnter User Passward:");
                    scanf("%s",&password);

                    if(strcmp(username,"admin")==0 && strcmp(password,"1234")==0){

                printf("\n\t<==Admin_login_Successfully==>\n");

                    }

        }

        if(choice==2)
        {
            printf("User_Login_Successfully\n");


        }
        else if(choice==3)
        {

            printf("Exiting...\n");
            printf("thank you for using our console");
            break;

        }
        else{
                       printf("\nInvalid Input\n");}


    }


    return 0;
}

void adminMenu()
{

    int choice;

    while(1)
    {

        printf("\t\n   <=== Admin Menu ===>\n\t");
        printf("1.Add Product\n\t");
        printf("2.View Product\n\t");
        printf("3.Update Stock\n\t");
        printf("4.Delete Product\n\t");
        printf("5.Low Stock\n\t");
        printf("6.Total Sales\n\t");
        printf("7.Expiry Warning\n\t");
        printf("8.Logout\n");


        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {

        case 1:
            addProduct();
            break;

        case 2:
            viewProduct();
            break;

        case 3:
            updateStock();
            break;

        case 4:
            deleteProduct();
            break;

        case 5:
            lowStock();
            break;

        case 6:
            salesReport();
            break;

            case 7: expiryWarning(); break;

        case 8:
            return;

        default:
            printf("Invalid Choice\n");
        }

    }

}

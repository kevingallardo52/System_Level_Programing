#include <stdio.h>

int main()
{
  int itemNumber, quantity;
  double unitPrice;
  char purchaseDate[12];

  printf("Enter item number:");
  scanf("%d", &itemNumber);

  printf("Enter unit price:");
  scanf("%lf", &unitPrice);

  printf("Enter quantity:");
  scanf("%d", &quantity);

  printf("Enter purchase date:");
  scanf("%s", purchaseDate);

  printf("Item\tUnit Price\tQTY\tPurchase Date\tTotal Amount\n");
  printf("%d\t", itemNumber);
  printf("$%9.2lf\t",unitPrice);
  printf("%d\t",quantity);
  printf("%s\t",purchaseDate);
  printf("$%9.2lf\n\n",unitPrice * quantity);

 return 0;
}

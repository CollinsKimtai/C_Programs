#include <stdio.h>
int main() {
    int bookID;
    int dueDay, dueMonth, dueYear;
    int returnDay, returnMonth, returnYear;
    int daysOverdue;
    float fineRate, fineAmount;

   
    printf("Enter book ID: ");
    scanf("%d", &bookID);
    printf("Enter due date (dd mm yyyy): ");
    scanf("%d %d %d", &dueDay, &dueMonth, &dueYear);
    printf("Enter return date (dd mm yyyy): ");
    scanf("%d %d %d", &returnDay, &returnMonth, &returnYear);

    int dueDateInDays = dueDay + dueMonth * 30 + dueYear * 365;
    int returnDateInDays = returnDay + returnMonth * 30 + returnYear * 365;
    daysOverdue = returnDateInDays - dueDateInDays;

      if (daysOverdue <= 7) {
        fineRate = 20.0;
    } else if (daysOverdue <= 14) {
        fineRate = 50.0;
    } else {
        fineRate = 100.0;
    }

       fineAmount = daysOverdue * fineRate;
    
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d-%d-%d\n", dueDay, dueMonth, dueYear);
    printf("Return Date: %d-%d-%d\n", returnDay, returnMonth, returnYear);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh.%.2f\n", fineRate);
    printf("Fine Amount: Ksh.%.2f\n", fineAmount);

    return 0;
}
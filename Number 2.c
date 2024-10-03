#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineRate, fineAmount;

    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (in days): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (in days): ");
    scanf("%d", &returnDate);

    daysOverdue = returnDate - dueDate;


    if (daysOverdue <= 0) {
        fineRate = 0; // No fine if the book is returned on time or earlier
    } else if (daysOverdue <= 7) {
        fineRate = 20; // Ksh. 20 for up to 7 days overdue
    } else if (daysOverdue <= 14) {
        fineRate = 50; // Ksh. 50 for 8 to 14 days overdue
    } else {
        fineRate = 100; // Ksh. 100 for 15 days or more
    }

     fineAmount = daysOverdue * fineRate;

    printf("\nLibrary Fine Calculation:\n");
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate per Day: Ksh. %.2f\n", fineRate);
    printf("Total Fine Amount: Ksh. %.2f\n", fineAmount);

    return 0;
}

//46. Write a function which takes hours, minutes and seconds as parameters and an integer s and increments the time by s seconds. Accept time and seconds in main and Display the new time in main using the above function.

#include <stdio.h>

// Function to increment time by seconds
void incrementTime(int *hours, int *minutes, int *seconds, int s) {
    *seconds += s;
    *minutes += *seconds / 60;
    *seconds %= 60;
    *hours += *minutes / 60;
    *minutes %= 60;
    *hours %= 24;
}

int main() {
    int hours, minutes, seconds, incrementSeconds;

    // Accept initial time
    printf("Enter the initial time (hh:mm:ss): ");
    scanf("%d:%d:%d", &hours, &minutes, &seconds);

    // Accept the number of seconds to increment
    printf("Enter the number of seconds to increment: ");
    scanf("%d", &incrementSeconds);

    // Increment time using the function
    incrementTime(&hours, &minutes, &seconds, incrementSeconds);

    // Display the new time
    printf("New time after increment: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
// a student has passed or failed a test
#include <stdio.h>

int main() {
    float score;
    float passing_threshold = 60; // passing threshold is set to 60
    printf("Enter the student's score: ");
    scanf("%f", &score);
    if (score >= passing_threshold) {
        printf("The student has passed the test.\n");
    } else {
        printf("The student has failed the test.\n");
    }
    return 0;
}

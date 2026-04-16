 // Determine the overall attendance percentage (using scanf input).

 #include <stdio.h>

int main() {

    int attendance[100];
    int i, n;
    int present = 0;
    float percentage;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter attendance (1 = present, 0 = absent):\n");

    // input loop
    for(i = 0; i < n; i++) {
        scanf("%d", &attendance[i]);
    }

    // count present
    for(i = 0; i < n; i++) {
        if(attendance[i] == 1) {
            present++;
        }
    }

    // calculate percentage
    percentage = ((float)present / n) * 100;

    // output
    printf("Attendance Percentage = %.2f%%\n", percentage);

    return 0;
}
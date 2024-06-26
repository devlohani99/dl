#include <stdio.h>
#include <stdlib.h>

struct student {
    char usn[10];
    char name[10];
    float m1, m2, m3;
    float avg, total;
};

int main() {
    struct student s[20];
    int n, i;
    float tavg, sum = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter the details of student %d\n", i + 1);
        printf("Enter USN: ");
        scanf("%s", s[i].usn);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter the three subject scores: ");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg = s[i].total / 3;
        sum += s[i].avg;
    }

    tavg = sum / n;
    printf("\nThe total average marks of all students is: %.2f\n", tavg);

    for(i = 0; i < n; i++) {
        if(s[i].avg >= tavg) {
            printf("\n%s has scored above or equal to the total average marks", s[i].name);
        } else {
            printf("\n%s has scored below the total average marks", s[i].name);
        }
    }

    return 0;
}

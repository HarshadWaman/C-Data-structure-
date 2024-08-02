// insertion sort useing structure..
#include<stdio.h>
#include<stdlib.h>


struct employee {
    int emp_no;
    char name[30];
    int age;
};

void insertion_sort(struct employee a[], int n) {
    int j, i, count;
    struct employee key;
    for (j = 1; j < n; j++) {
        count = 0;
        key = a[j];
        for (i = j - 1; i >= 0; i--) {
            count++;
            if (a[i].emp_no > key.emp_no) {
                a[i + 1] = a[i];
            }
             else 

            {
                break;
            }

        }

        a[i + 1] = key;
        printf("count is: %d\n", count);
    }

}

int main()
 {

    struct employee a[20];
    int i, n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    printf("\nEnter employee details (emp_no, name, age):\n");
    for (i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &a[i].emp_no);
        printf("Name: ");
        scanf("%s", a[i].name);
        printf("Age: ");
        scanf("%d", &a[i].age);

    }
    
    printf("Unsorted employee list:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%d\n", a[i].emp_no, a[i].name, a[i].age);

    }
    
    insertion_sort(a, n);

    
    printf("Sorted employee list by employee number:\n");

    for (i = 0; i < n; i++) 
    {
        printf("%d\t%s\t%d\n", a[i].emp_no, a[i].name, a[i].age);
    }
    
    
    return 0;
}

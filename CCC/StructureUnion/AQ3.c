#include <stdio.h>

// defining structure
struct Marks
{
    int roll_no;
    char name[30];
    float chem_marks, maths_marks, phy_marks;
};
int main()
{

    struct Marks marks[5];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i].roll_no);
        scanf("%s", marks[i].name);
        scanf("%f", &marks[i].chem_marks);
        scanf("%f", &marks[i].maths_marks);
        scanf("%f", &marks[i].phy_marks);
    }
    for (int i = 0; i < n; i++)
    {
        float percentage = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks) / 300.0 * 100;
        printf("%0.2f ", percentage);
    }
    return 0;
}
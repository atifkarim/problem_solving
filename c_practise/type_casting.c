/**
 * Link: DO_TODO: https://medium.com/@EclecticCoder/manage-todo-list-in-vscode-beb53774d776
 */

#include <stdio.h>


int main()
{
    unsigned int radius;
    float area;
    // TODO - Try with double
    printf("Enter radius: ");
    scanf("%d", &radius);
    printf("Value of radius: %d\n", radius);
    area = (float)(radius * radius) * 3.1416;
    printf("Area: %f\n", area);

    return 0;
}
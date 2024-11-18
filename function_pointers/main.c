#include <stdio.h>
#include "main.h"

int main(void)
{
    /* El primer parametro indica la cantidad de elementos el resto son los elementos*/
    printf("Average: %.2f\n", average(3, 2, 4, 6));/*Output: Average: 4.00 */
    printf("Average: %.2f\n", average(5, 10, 20, 30, 40, 50)); /* Output: Average: 30.00 */
    printf("Average: %.2f\n", average(0)); /* Output: Average: 0.00 */
    return 0;
}

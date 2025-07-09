// Counter.c
#include <Rte_Counter.h>
uint8 count - 0;
void Counter_GenerateNextNumber() {
    count++;
    Rte_Write_GenerateNextNumber_Number_value(count);
}

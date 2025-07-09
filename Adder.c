// Adder.c

#include <Rte_Adder.h>

void Adder_Compute() {
  /*uint8 Value = Rte_IRead_[RunnableName]_[PortName]_[DataElementName]();*/


    uint8 a = Rte_IRead_Compute_InputA_Value();
    uint8 b = Rte_IRead_Compute_InputB_Value();
    uint8 sum = a + b;
/*Rte_IWrite_[RunnableName]_[PortName]_[DataElementName]([Value to write]);*/


    Rte_Write_Compute_OutputValue_Value(sum);
}

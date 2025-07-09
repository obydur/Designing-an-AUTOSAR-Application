// DataLogger.c
#include <Rte_DataLogger.h>
#include <Sab.h>
void datalogger_Log() {
 uint8 value = Rte_IRead_Log_DisplayValue_Value();
 Sab_|SubmitInfo("bcd: %d",Value);
}

#ifndef COM
#define COM
#include <Drivers/IO/IO.hpp>

void InitializeSerialDevice();
char AwaitSerialResponse();
void kputchar(char a);
void kprintf(const char* str);

#endif
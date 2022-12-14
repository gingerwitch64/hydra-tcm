//========= Copyright N11 Software, All rights reserved. ============//
//
// File: COM.hpp
// Purpose:
// Maintainer: FiReLScar
//
//===================================================================//

#pragma once
#include <IO.hpp>

void InitializeSerialDevice();
char AwaitSerialResponse();
void kputchar(char a);
int kprintf(const char* fmt, ...);
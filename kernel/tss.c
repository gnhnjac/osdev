#include "tss.h"
#include "gdt.h"

// void flush_tss (uint16_t sel) {

// 	_asm ltr [sel]
// }

// void install_tss (uint32_t idx, uint16_t kernelSS, uint16_t kernelESP) {

// 	//! install TSS descriptor
// 	uint32_t base = (uint32_t) &TSS;
// 	gdt_set_descriptor (idx, base, base + sizeof (tss_entry),
// 		I86_GDT_DESC_ACCESS|I86_GDT_DESC_EXEC_CODE|I86_GDT_DESC_DPL|I86_GDT_DESC_MEMORY,
// 		0);

// 	//! initialize TSS
// 	memset ((void*) &TSS, 0, sizeof (tss_entry));

// 	TSS.ss0 = kernelSS;
// 	TSS.esp0 = kernelESP;

// 	TSS.cs=0x0b;
// 	TSS.ss = 0x13;
// 	TSS.es = 0x13;
// 	TSS.ds = 0x13;
// 	TSS.fs = 0x13;
// 	TSS.gs = 0x13;

// 	//! flush tss
// 	flush_tss (idx * sizeof (gdt_descriptor));
// }
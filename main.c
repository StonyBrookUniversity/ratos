
#include "screen.h"
#include "idt.h"
#include "iheap.h"
#include "vm.h"
#include "gdt.h"
#include "pci.h"
#include "debug.h"
#include "pcibiosservice.h"
int main()//struct multiboot *mboot_ptr)
{
    clr ();
    clr ();
    asm volatile("cli");
    initializegdt();
    initializeidt();
    asm volatile("sti");
//    InitializePaging();
    DetectBios32Service();
    DetectPciBiosService();
    StrobePciDevices();

/*    unsigned char IP[4] = {10,0,2,21};
    unsigned char *MAC = imalloc(6);
	GetMacAddressForIP(IP,MAC);
    printf("Mac in main = \n");
    for(i=0; i<6; i++) {
        printf("%x ",MAC[i]);
    }
    printf("\n");
    unsigned char mac[6];
    GetMacAddressForIP(IP,mac);
    printf("Mac in main = \n");
    for(i=0; i<6; i++) {
        printf("%x ",mac[i]);
    }
    printf("\n");
*/    // StrobePciDevices();
// 	SendPacketOut(test);
//	asm volatile ("int $0xb");
    ShowShell();
    while(1);
//	putch('\n');
//	asm volatile ("int $0x0");
//	asm volatile ("int $0x2");
//	asm volatile("sti");
//        while(1)
    {
        //    int  *pointer = (uint32 *)kmalloc(12000000);
        //      }
//        int *pointer = (uint32 *) 0x10000000;
        //      if( pointer )
        //				*pointer = 201;
        //		  else
        //			   puts("Failed to allocate");
        //         putint(*pointer);
//			 puts("unknown\n");
//          kfree(pointer);
    }
//        while(1);
//	clr();
//	test();
//	puts("rajnesh\n");
//	putint(12323);
    return 0;//0xDEADBABA;
}

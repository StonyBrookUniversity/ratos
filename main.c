#include "screen.h"
#include "idt.h"
#include "iheap.h"
#include "vm.h"
//#include "gdt.h"

int main(struct multiboot *mboot_ptr)
{
	int i, j;
	char ch = 'a';
//	initializegdt();
	putch('\n');
	initializeidt();
        //InitializePaging();
//	asm volatile ("int $0x10");
//	asm volatile ("int $0x0");
//	asm volatile ("int $0x2");
	asm volatile("sti");
      //  while(1)
        {
           //int  *pointer = (int *)imalloc(12);
  //      }
 //       int *pointer = (uint32 *) 0xABCDDD000;
         //  *pointer = 201;
        //   putint(*pointer);
        }
//        while(1);
//	clr();
//	test();
//	puts("rajnesh\n");
//	putint(12323);
	return 0xDEADBABA;
}

#ifndef __ARP__
#define __ARP__
#include "common.h"
#include "screen.h"

struct ArpMapTable {
    unsigned char key[4];
    unsigned char value[6];
};
typedef struct ArpMapTable ArpMapTable_t;

void HandleArpPacket(unsigned char *data);
void GetMacAddressForIP(unsigned char *IP, unsigned char *mac);
#endif

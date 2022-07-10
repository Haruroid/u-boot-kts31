#define MDM_BASE     0xd804bf00
//#define MDM_BASE     0xd8043000

#define MDM_MEMINIT_BADDR      *((volatile*) (MDM_BASE+0x54))
#define MDM_MEMDUMP_STBADDR    *((volatile*) (MDM_BASE+0x58))
#define MDM_MEMDUMP_ENDBADDR   *((volatile*) (MDM_BASE+0x5c))


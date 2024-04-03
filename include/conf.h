/* conf.h (GENERATED FILE; DO NOT EDIT) */

#ifndef _CONF_H_
#define _CONF_H_

#include <stddef.h>

/* Device table declarations */

/* Device table entry */
typedef struct dentry
{
	int     num;
	int     minor;
	char    *name;
	devcall (*init)(struct dentry *);
	devcall (*open)(struct dentry *, ...);
	devcall (*close)(struct dentry *);
	devcall (*read)(struct dentry *, void *, uint);
	devcall (*write)(struct dentry *, const void *, uint);
	devcall (*seek)(struct dentry *, long);
	devcall (*getc)(struct dentry *);
	devcall (*putc)(struct dentry *, char);
	devcall (*control)(struct dentry *, int, long, long);
	void    *csr;
	void    (*intr)(void);
	uchar   irq;
} device;

extern const device devtab[]; /* one entry per device */

/* Device name definitions */

#define SERIAL0     0       /* type uart     */
#define USBKBD0     1       /* type usbkbd   */
#define KBDMON0     2       /* type kbdmon   */
#define FRAMEBUF    3       /* type framebuffer */
#define DEVNULL     4       /* type null     */
#define LOOP0       5       /* type loopback */
#define CONSOLE     6       /* type tty      */
#define TTY1        7       /* type tty      */
#define ETH0        8       /* type ether    */
#define ELOOP       9       /* type ethloop  */
#define RAW0        10       /* type raw      */
#define RAW1        11       /* type raw      */
#define UDP0        12       /* type udp      */
#define UDP1        13       /* type udp      */
#define UDP2        14       /* type udp      */
#define UDP3        15       /* type udp      */
#define TCP0        16       /* type tcp      */
#define TCP1        17       /* type tcp      */
#define TCP2        18       /* type tcp      */
#define TCP3        19       /* type tcp      */
#define TCP4        20       /* type tcp      */
#define TCP5        21       /* type tcp      */
#define TCP6        22       /* type tcp      */
#define TELNET0     23       /* type telnet   */
#define TELNET1     24       /* type telnet   */
#define TELNET2     25       /* type telnet   */

/* Control block sizes */

#define NLOOPBACK 1
#define NNULL 1
#define NUART 1
#define NFRAMEBUFFER 1
#define NTTY 2
#define NETHER 1
#define NETHLOOP 1
#define NRAW 2
#define NUDP 4
#define NTCP 7
#define NTELNET 3
#define NUSBKBD 1
#define NKBDMON 1

#define DEVMAXNAME 20
#define NDEVS 26


/* Configuration and Size Constants */

#define LITTLE_ENDIAN 0x1234
#define BIG_ENDIAN    0x4321

#define BYTE_ORDER    LITTLE_ENDIAN

#define NTHREAD   100           /* number of user threads           */
#define NSEM      100           /* number of semaphores             */
#define NMAILBOX  15            /* number of mailboxes              */
#define RTCLOCK   TRUE          /* timer support                    */
#define NETEMU    FALSE         /* Network Emulator support         */
#define NVRAM     FALSE         /* nvram support                    */
#define SB_BUS    FALSE         /* Silicon Backplane support        */
#define USE_TLB   FALSE         /* make use of TLB                  */
#define USE_TAR   FALSE         /* enable data archives             */
#define NPOOL     8             /* number of buffer pools available */
#define POOL_MAX_BUFSIZE 2048   /* max size of a buffer in a pool   */
#define POOL_MIN_BUFSIZE 8      /* min size of a buffer in a pool   */
#define POOL_MAX_NBUFS   8192   /* max number of buffers in a pool  */
#define WITH_USB                /* USB support                      */
#define WITH_DHCPC              /* DHCP client support              */
#define NCORES	4		/* number of cpu cores		    */

#endif /* _CONF_H_ */

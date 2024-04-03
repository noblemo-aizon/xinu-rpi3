/* conf.c (GENERATED FILE; DO NOT EDIT) */

#include <conf.h>
#include <device.h>

#include <loopback.h>
#include <null.h>
#include <uart.h>
#include <framebuffer.h>
#include <tty.h>
#include <ether.h>
#include <ethloop.h>
#include <raw.h>
#include <udp.h>
#include <tcp.h>
#include <telnet.h>
#include <usbkbd.h>
#include <kbdmon.h>

extern devcall ioerr(void);
extern devcall ionull(void);

/* device independent I/O switch */

const device devtab[NDEVS] =
{
/**
 * Format of entries is:
 * dev-number, minor-number, dev-name,
 * init, open, close,
 * read, write, seek,
 * getc, putc, control,
 * dev-csr-address, intr-handler, irq
 */

/* SERIAL0 is uart */
	{ 0, 0, "SERIAL0",
	  (void *)uartInit, (void *)ionull, (void *)ionull,
	  (void *)uartRead, (void *)uartWrite, (void *)ioerr,
	  (void *)uartGetc, (void *)uartPutc, (void *)uartControl,
	  (void *)0x3f201000, (void *)uartInterrupt, 57 },

/* USBKBD0 is usbkbd */
	{ 1, 0, "USBKBD0",
	  (void *)usbKbdInit, (void *)ionull, (void *)ionull,
	  (void *)usbKbdRead, (void *)ioerr, (void *)ioerr,
	  (void *)usbKbdGetc, (void *)ioerr, (void *)usbKbdControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* KBDMON0 is kbdmon */
	{ 2, 0, "KBDMON0",
	  (void *)ionull, (void *)ionull, (void *)ionull,
	  (void *)usbKbdRead, (void *)fbWrite, (void *)ioerr,
	  (void *)usbKbdGetc, (void *)fbPutc, (void *)ioerr,
	  (void *)0x0, (void *)ioerr, 0 },

/* FRAMEBUF is framebuffer */
	{ 3, 0, "FRAMEBUF",
	  (void *)ionull, (void *)ionull, (void *)ionull,
	  (void *)ioerr, (void *)fbWrite, (void *)ioerr,
	  (void *)ioerr, (void *)fbPutc, (void *)ioerr,
	  (void *)0x0, (void *)ioerr, 0 },

/* DEVNULL is null */
	{ 4, 0, "DEVNULL",
	  (void *)ionull, (void *)ionull, (void *)ionull,
	  (void *)ionull, (void *)ionull, (void *)ioerr,
	  (void *)ionull, (void *)ionull, (void *)ioerr,
	  (void *)0x0, (void *)ioerr, 0 },

/* LOOP0 is loopback */
	{ 5, 0, "LOOP0",
	  (void *)loopbackInit, (void *)loopbackOpen, (void *)loopbackClose,
	  (void *)loopbackRead, (void *)loopbackWrite, (void *)ioerr,
	  (void *)loopbackGetc, (void *)loopbackPutc, (void *)loopbackControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* CONSOLE is tty */
	{ 6, 0, "CONSOLE",
	  (void *)ttyInit, (void *)ttyOpen, (void *)ttyClose,
	  (void *)ttyRead, (void *)ttyWrite, (void *)ioerr,
	  (void *)ttyGetc, (void *)ttyPutc, (void *)ttyControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* TTY1 is tty */
	{ 7, 1, "TTY1",
	  (void *)ttyInit, (void *)ttyOpen, (void *)ttyClose,
	  (void *)ttyRead, (void *)ttyWrite, (void *)ioerr,
	  (void *)ttyGetc, (void *)ttyPutc, (void *)ttyControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* ETH0 is ether */
	{ 8, 0, "ETH0",
	  (void *)etherInit, (void *)etherOpen, (void *)etherClose,
	  (void *)etherRead, (void *)etherWrite, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)etherControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* ELOOP is ethloop */
	{ 9, 0, "ELOOP",
	  (void *)ethloopInit, (void *)ethloopOpen, (void *)ethloopClose,
	  (void *)ethloopRead, (void *)ethloopWrite, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)ethloopControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* RAW0 is raw */
	{ 10, 0, "RAW0",
	  (void *)rawInit, (void *)rawOpen, (void *)rawClose,
	  (void *)rawRead, (void *)rawWrite, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)rawControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* RAW1 is raw */
	{ 11, 1, "RAW1",
	  (void *)rawInit, (void *)rawOpen, (void *)rawClose,
	  (void *)rawRead, (void *)rawWrite, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)rawControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* UDP0 is udp */
	{ 12, 0, "UDP0",
	  (void *)udpInit, (void *)udpOpen, (void *)udpClose,
	  (void *)udpRead, (void *)udpWrite, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)udpControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* UDP1 is udp */
	{ 13, 1, "UDP1",
	  (void *)udpInit, (void *)udpOpen, (void *)udpClose,
	  (void *)udpRead, (void *)udpWrite, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)udpControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* UDP2 is udp */
	{ 14, 2, "UDP2",
	  (void *)udpInit, (void *)udpOpen, (void *)udpClose,
	  (void *)udpRead, (void *)udpWrite, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)udpControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* UDP3 is udp */
	{ 15, 3, "UDP3",
	  (void *)udpInit, (void *)udpOpen, (void *)udpClose,
	  (void *)udpRead, (void *)udpWrite, (void *)ioerr,
	  (void *)ioerr, (void *)ioerr, (void *)udpControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* TCP0 is tcp */
	{ 16, 0, "TCP0",
	  (void *)tcpInit, (void *)tcpOpen, (void *)tcpClose,
	  (void *)tcpRead, (void *)tcpWrite, (void *)ioerr,
	  (void *)tcpGetc, (void *)tcpPutc, (void *)tcpControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* TCP1 is tcp */
	{ 17, 1, "TCP1",
	  (void *)tcpInit, (void *)tcpOpen, (void *)tcpClose,
	  (void *)tcpRead, (void *)tcpWrite, (void *)ioerr,
	  (void *)tcpGetc, (void *)tcpPutc, (void *)tcpControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* TCP2 is tcp */
	{ 18, 2, "TCP2",
	  (void *)tcpInit, (void *)tcpOpen, (void *)tcpClose,
	  (void *)tcpRead, (void *)tcpWrite, (void *)ioerr,
	  (void *)tcpGetc, (void *)tcpPutc, (void *)tcpControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* TCP3 is tcp */
	{ 19, 3, "TCP3",
	  (void *)tcpInit, (void *)tcpOpen, (void *)tcpClose,
	  (void *)tcpRead, (void *)tcpWrite, (void *)ioerr,
	  (void *)tcpGetc, (void *)tcpPutc, (void *)tcpControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* TCP4 is tcp */
	{ 20, 4, "TCP4",
	  (void *)tcpInit, (void *)tcpOpen, (void *)tcpClose,
	  (void *)tcpRead, (void *)tcpWrite, (void *)ioerr,
	  (void *)tcpGetc, (void *)tcpPutc, (void *)tcpControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* TCP5 is tcp */
	{ 21, 5, "TCP5",
	  (void *)tcpInit, (void *)tcpOpen, (void *)tcpClose,
	  (void *)tcpRead, (void *)tcpWrite, (void *)ioerr,
	  (void *)tcpGetc, (void *)tcpPutc, (void *)tcpControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* TCP6 is tcp */
	{ 22, 6, "TCP6",
	  (void *)tcpInit, (void *)tcpOpen, (void *)tcpClose,
	  (void *)tcpRead, (void *)tcpWrite, (void *)ioerr,
	  (void *)tcpGetc, (void *)tcpPutc, (void *)tcpControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* TELNET0 is telnet */
	{ 23, 0, "TELNET0",
	  (void *)telnetInit, (void *)telnetOpen, (void *)telnetClose,
	  (void *)telnetRead, (void *)telnetWrite, (void *)ioerr,
	  (void *)telnetGetc, (void *)telnetPutc, (void *)telnetControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* TELNET1 is telnet */
	{ 24, 1, "TELNET1",
	  (void *)telnetInit, (void *)telnetOpen, (void *)telnetClose,
	  (void *)telnetRead, (void *)telnetWrite, (void *)ioerr,
	  (void *)telnetGetc, (void *)telnetPutc, (void *)telnetControl,
	  (void *)0x0, (void *)ioerr, 0 },

/* TELNET2 is telnet */
	{ 25, 2, "TELNET2",
	  (void *)telnetInit, (void *)telnetOpen, (void *)telnetClose,
	  (void *)telnetRead, (void *)telnetWrite, (void *)ioerr,
	  (void *)telnetGetc, (void *)telnetPutc, (void *)telnetControl,
	  (void *)0x0, (void *)ioerr, 0 }
};

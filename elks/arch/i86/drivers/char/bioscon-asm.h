/* bioscon-asm.S function definitions */

int  bios_kbd_poll (void);
void bios_setpage (byte_t page);
void bios_setcursor (byte_t x, byte_t y, byte_t page);
void bios_getcursor (byte_t * x, byte_t * y);
void bios_writecharattr (byte_t c, byte_t attr, byte_t page);
void bios_scroll (byte_t attr, byte_t n, byte_t x, byte_t y, byte_t xx, byte_t yy);

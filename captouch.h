#ifndef __CAPTOUCH_H__
#define __CAPTOUCH_H__

#include "device.h"

void cap_debug(void);
int cap_setkeydown(void (*new_keydown)(char key));
int cap_setkeyup(void (*new_keyup)(char key));
int cap_should_poll(void);
void cap_poll(void);

extern struct device captouch;

#endif /* __CAPTOUCH_H__ */

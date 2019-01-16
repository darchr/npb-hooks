#include <stdio.h>

void roi_begin_(){
	printf(" -------------------- ROI BEGIN -------------------- \n");
	m5_dump_reset_stats(0,0);
	}

void roi_end_(){
       	printf(" -------------------- ROI END -------------------- \n");
	m5_dump_reset_stats(0,0);
	}

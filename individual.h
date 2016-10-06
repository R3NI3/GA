#ifndef INDIVIDUAL_H

#define INDIVIDUAL_H

#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <const.h>



class  individual {
private:
	unsigned char SNR_L_min, SNR_M_min, SNR_H_min, SNR_L_max, SNR_M_max, SNR_H_max;
	unsigned char Q_L_min, Q_M_min, Q_H_min, Q_L_max, Q_M_max, Q_H_max;
	unsigned char CR_L_min, CR_M_min, CR_H_min, CR_L_max, CR_M_max, CR_H_max;
	unsigned char CW_L_min, CW_M_min, CW_H_min, CW_L_max, CW_M_max, CW_H_max;
	
	unsigned short int throughput;
	unsigned short int PSR;
	unsigned float delay;

	unsigned short int fitness;
public:
	individual();
	bool is_valid();
	unsigned short int calc_fitness(); 
	float param_scale(unsigned char, int);
};

#endif

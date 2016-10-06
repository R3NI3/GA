#include <individual.h>
#include <math.h>

/*
* Randomly initiate inidividual 
* Doesn't care if it's valid or not
*/
individual :: individual(){
	/* SNR */
	do{
		SNR_L_min = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
		SNR_L_max = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
	}while(SNR_L_max < SNR_L_min);
	do{
		SNR_M_min = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
		SNR_M_max = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
	}while(SNR_M_max < SNR_M_min);
	do{
		SNR_H_min = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
		SNR_H_max = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
	}while(SNR_H_max < SNR_H_min);
	
	/* QUEUE parameter */
	do{
		Q_L_min = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
		Q_L_max = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
	}while(Q_L_max < Q_L_min);
	do{
		Q_M_min = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
		Q_M_max = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
	}while(Q_M_max < Q_M_min);
	do{
		Q_H_min = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
		Q_H_max = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
	}while(Q_H_max < Q_H_min);
	
	/* Collision rate parameter */
	
	do{
		CR_L_min = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
		CR_L_max = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
	}while(CR_L_max < CR_L_min);
	do{
		CR_M_min = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
		CR_M_max = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
	}while(CR_M_max < CR_M_min);
	do{
		CR_H_min = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
		CR_H_max = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
	}while(CR_H_max < CR_H_min);
	
	/* Congetion windown parameter */
	
	do{
		CW_L_min = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
		CW_L_max = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
	}while(SNR_L_max < SNR_L_min);
	do{
		CW_M_min = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
		CW_M_max = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
	}while(SNR_M_max < SNR_M_min);
	do{
		CW_H_min = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
		CW_H_max = (char) ((unsigned int) (rand()/RAND_MAX)*RESOLUTION);
	}while(SNR_H_max < SNR_H_min);	
	
	calc_fitness();
	
}
/*
* left rotation of char
*/
unsigned char rotl(unsigned char c)
{
	return (c << 1) | (c >> 7);
}
/*
* Check if values of parameters are valids
*/
bool individual :: is_valid(){

	return true;

}
/*
* Calculate fitness of individual
*/
unsigned short int individual :: calc_fitness(){
	throughput = 0;
	PSR = 0;
	delay = 0;

	fitness = 0;
	
	return fitness;
}
/*
* Converts char to float
*/
int individual :: param_scale(unsigned char param, int flag){
	float ret;
	switch(flarg) {
		case SNR : ret = (((1.0*param)/RESOLUTION)*(MAX_SNR-MIN_SNR))+MIN_SNR; 
		case QUEUE : ret = (((1.0*param)/RESOLUTION)*(MAX_Q-MIN_Q))+MIN_Q;
		case CR : ret = (((1.0*param)/RESOLUTION)*(MAX_CR-MIN_CR))+MIN_CR;
		case CW : ret = (((1.0*param)/RESOLUTION)*(MAX_CW-MIN_CW))+MIN_CW;
		default : ret = -1;
	}
	return ret;
}


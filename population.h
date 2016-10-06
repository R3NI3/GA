#ifndef POPULATION_H

#define POPULATION_H

#include <individual.h>

class population {
private:
	std::list <individual *> list_ind;
	unsigned int pop_size;
	
	void mutation();
	void cross_over();
	void selection
public:
	population(unsigned int);
	~population();
	void evolve();
	individual *get_best();
	
};

#endif

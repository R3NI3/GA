#include <population.h>

int main(){
	population *my_pop();
	my_pop = new population(SIZE_POPULATION);
	for(int i = 0; i < NUM_GENERATIONS; i++){
		my_pop()->evolve();
		my_pop()->get_best();		
	}
	
	delete my_pop;
	return 0;
}

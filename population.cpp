#include <population.h>

population :: population(unsigned int num_ind){
	pop_size = num_ind;
	individual *temp_ind;
	
	for(int i = 0; i < num_ind; i++){
		do{
			temp_ind = new individual();
		}while(!temp_ind->is_valid());
		list_ind.push_back(temp_ind);		
	}
	
}
population :: ~population(){
	while(!list_ind.empty()){
		delete list_ind.pop_back();
	}
}

void population :: cross_over(){

}

void population :: mutation(){

}

void population :: selection(){

}

void population :: evolve(){

	//select for cross-over
	cross_over();
	
	//select for mutation
	mutation();
	
	//selection
	selection();

}

individual *population :: get_best(){

	return list_ind[0];
}
 

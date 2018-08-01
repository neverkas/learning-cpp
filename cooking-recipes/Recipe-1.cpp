/*
 * Our first recipe today is Homemade Bread
 *
 * -Warning: if your compilator shows an error about convert 'const *char' to '*char'.
 * I solved it writting this command line:  g++ Recipe-1.cpp -Wno-write-strings
*/

#include <iostream>
#include <stdio.h>

using namespace std;

//
// # STRUCTS
//
struct Instruction{
	int number;
	char *description;
};
	
struct Ingredient{
	char *name;
	int weight;
	char *measurement;
};

struct Recipe{
	char *name;
	struct Ingredient *ingredients;
	struct Instruction *instructions;
	int quantity_ingredients;
	int quantity_instructions;
};

//
// # PROTOTYPES
//
Recipe new_recipe(Recipe *);
Recipe print_recipe(Recipe *);

Ingredient add_ingredient(Recipe *, Ingredient [], int &, char *, int, char *);
Ingredient add_ingredients(Recipe *);
Ingredient print_ingredients(Ingredient [], int);

Instruction add_step(Recipe *, int, char *);
Instruction print_steps(Recipe *);

//void search_ingredient();

//
// # MAIN
//
int main(){
	Recipe *recipe;
	Ingredient ingredients[30];
	Instruction instructions[30];

	recipe = new Recipe;
	recipe->ingredients = ingredients;
	recipe->quantity_ingredients = 0;
	// make a new recipe, in this case will be a homemade bread
	new_recipe(recipe);
	
	//print_recipe(recipe);
	
	delete recipe;
	/*
	recipe = new Recipe;
	recipe->ingredients = ingredients;
	recipe->instructions = instructions;
	recipe->quantity_ingredients = 0;
	recipe->quantity_instructions = 0;
	
	// make a new recipe, in this case will be a homemade bread
	new_recipe(recipe, "bread");
	
	// add each ingredient we need to prepare it
	add_ingredient(recipe, recipe->ingredients, recipe->quantity_ingredients, "flour", 1000, "grams");
	add_ingredient(recipe, recipe->ingredients, recipe->quantity_ingredients, "water", 600, "cc");	
	add_ingredient(recipe, recipe->ingredients, recipe->quantity_ingredients, "salt", 25, "grams");
	add_ingredient(recipe, recipe->ingredients, recipe->quantity_ingredients, "yeast", 50, "grams");

	// add each step
	add_step(recipe, 1, "Mix all the ingredients");
	add_step(recipe, 2, "Cook in the oven");

	// print all (including ingredients and instructions)
	print_recipe(recipe);
	
	delete recipe;
	*/
	return 0;
}

//
// # FUNCTIONS
//

Recipe new_recipe(Recipe *recipe){
	char *name;
	cout<<"Name: ";
	cin>>name;
	
	recipe->name = name;

	add_ingredients(recipe);
}

Recipe print_recipe(Recipe *recipe){
	printf("Name: %s\n", recipe->name);

	print_ingredients(recipe->ingredients, recipe->quantity_ingredients);
	print_steps(recipe);
}

Instruction add_step(Recipe *recipe, int number, char *description){
	Instruction item;
	/*
	cout<<"Number of step: ";
	cin>>number;

	cout<<"Description: ";
	cin>>description;
	*/
	item.number = number;
	item.description = description;
	
	recipe->instructions[number] = item;
	
	recipe->quantity_instructions++;
}

Instruction print_steps(Recipe *recipe){
	cout<<"Instructions: "<<endl;
	
	for(int i=1; i <= recipe->quantity_instructions; i++)
		printf("%i) %s\n", recipe->instructions[i].number, recipe->instructions[i].description);
}

Ingredient print_ingredients(Ingredient mylist[], int quantity){
	cout<<"Ingredients:"<<endl;
	
	for(int i=0; i < quantity; i++)
		printf(" %i. %s %i %s \n", i+1, mylist[i].name, mylist[i].weight, mylist[i].measurement);	
}

Ingredient add_ingredients(Recipe *recipe){
	int quantity, weight;
	//char *name, *measurement;
	
	cout<<"How many ingredients? ";
	cin>>quantity;
	/*
	for(int i=0; i < quantity; i++){
		cout<<"Name: ";
		cin>>name;

		cout<<"Weight: ";
		cin>>weight;

		cout<<"Measurement: ";
		cin>>measurement;
		
		//add_ingredient(recipe, recipe->ingredients, recipe->quantity_ingredients, "flour", 1000, "grams");
		//add_ingredient(recipe, recipe->ingredients, recipe->quantity_ingredients, name, weight, measurement);
	} // end for
	*/
}

Ingredient add_ingredient(Recipe *recipe, Ingredient ingredients[], int &quantity, char *name, int weight, char *measurement){
	Ingredient item;
	
	item.name = name;
	item.weight = weight;
	item.measurement = measurement;
	
	recipe->ingredients[recipe->quantity_ingredients] = item;
	recipe->quantity_ingredients++;
}

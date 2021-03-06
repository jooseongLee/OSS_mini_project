#include <stdio.h>
#include <string.h>
#include "base.h"
#include "extras.h"
#include "record.h"

#define MAX_RECORDS 1000

// function prototypes
void input_handler(char[], Record[]);
void display_menu();

// main function
int main(){

	Record records[MAX_RECORDS] = {0,};
	char user_input[64] = "";
	while(strcmp(user_input, "99") != 0){
		display_menu();
		printf("\nSelect a menu> ");
		//fgets(user_input, 64, stdin);
		//user_input[strlen(user_input)-1] = '\0';
    scanf("%s", user_input);
		input_handler(user_input, records);
	}

	return 0;
}


// Function: input_handler()
// Input: record - array of Records; this may contain empty elements in the middle
// Output: none
// - Handles the user input and invokes functions that correspond to the user input
void input_handler(char input[], Record records[]){

	// TODO: Modify this function as you need
	if(!strcmp(input, "1"))
		add_a_record(records);
	else if(!strcmp(input, "2"))
		print_all_records(records);	
	else if(!strcmp(input, "3"))
		load_datafile(records);
	else if(!strcmp(input, "4"))
		search_student(records);
  else if(!strcmp(input, "5"))
    append_data_from_file(records);
  else if(!strcmp(input, "6"))
    export_data_file(records);
  else if(!strcmp(input, "7"))
    export_report_file(records);
  else if(!strcmp(input, "8"))
    update_detail(records);
  else if(!strcmp(input, "9"))
    delete_student(records);
  else if(!strcmp(input, "10"))
    defragment(records);
  else if(!strcmp(input, "11"))
    display_stats(records);
  else if(!strcmp(input, "12"))
    sort_record(records);
	else if(!strcmp(input, "99"))
		printf("Terminating... bye!\n"); // Quit - no operation (an empty statement with a semi-colon)
	else
		printf("Unknown menu: %s \n\n", input);
}



// Function: display_menu()
// Input: none
// Output: none
// - Leave a brief information about the function
void display_menu(){

	// TODO: Modify this function as you need

	printf("******************************\n");
	printf(" Corona 19 managemnt program \n");
	printf("******************************\n");
	printf(" 1. Add a new member\n");
	printf(" 2. Print all members\n");
	printf(" 3. Load a new data file(overwrite)\n");
	printf(" 4. Filtering students\n");
  printf(" 5. Load a new data file(append)\n");
  printf(" 6. Export data file\n");
  printf(" 7. Export report file\n");
  printf(" 8. Update student\n");
  printf(" 9. Delete student\n");
  printf(" 10. Optimize data\n");
  printf(" 11. Statistics\n");
  printf(" 12. Sorting\n");
	printf(" 99. Quit\n");
}

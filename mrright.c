#include<stdio.h>
#include<string.h>

//Looking for mr. right
//an array of strings that I want to filter down displaying some strings and not displaying others.
int main(){
	int NUM_ADS = 7;
	char *ADS[] = {
	"William: SBM GSOH  likes sports, TV, dining",
	"Matt: SWM NS likes, art, movies, theater",
	"Luis: SLM ND likes books, theater, art",
	"Mike: DWM DS likes trucks sports and bieber",
	"Peter: SAM likes chess, working out and art", 
	"Josh: SJM likes sports, movies and theater",
	"Jed: DBM likes theater, books and dining"
	};

	//find() function 
	void find() {
		int i;
		puts("Search results:");
		puts("------------------------");

		for(i = 0; i < NUM_ADS; i++) {
			if (strstr(ADS[i], "sports") && ! strstr(ADS[i], "bieber")) {
 			printf("%s\n", ADS[i]);	

		}

	}
	puts("----------------------");

}

find(ADS, NUM_ADS);

return 0;
}

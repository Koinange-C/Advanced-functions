//Pass code to function
#include<stdio.h>
#include<string.h>

int sports_no_beiber(char *s);
int sport_or_workouts(char *s);
int ns_theater(char *s);
int arts_theater_or_dining(char *s);

void find(int(*match)(char*), char *ADS[], int NUM_ADS);

int main(){
	int NUM_ADS = 7;
	char *ADS[] = {
	"William: SBM GSOH  likes sports, TV, dining",
	"Matt: SWM NS likes, arts, movies, theater",
	"Luis: SLM ND likes books, theater, arts",
	"Mike: DWM DS likes trucks, sports and beiber",
	"Peter: SAM likes chess, working out and arts", 
	"Josh: SJM likes sports, movies and theater",
	"Jed: DBM likes theater, books and dining"
	};
        
        //program to call find() with each function in turn
	find(sports_no_beiber, ADS, NUM_ADS);
	find(sport_or_workouts, ADS, NUM_ADS);
	find(ns_theater, ADS, NUM_ADS);
	find(arts_theater_or_dining, ADS, NUM_ADS);

	return 0;
}


//specify the name of the function containing the test
void find(int(*match)(char*), char *ADS[], int NUM_ADS)
{
	int i;

	puts("Search results:");
	puts("---------------------");

	for (i = 0; i < NUM_ADS; i++) {
		//if- calls the function whose name was given by the match parameter
		if (match(ADS[i])){
			printf("%s\n", ADS[i]);
		}
	}
	puts("---------------------");
}

//creating a function for each type of search
int sports_no_beiber(char *s){
	return strstr(s, "sports") && !strstr(s, "beiber");
}

int sport_or_workouts(char *s){
	return strstr(s, "sports") || strstr(s, "working out");
}

int ns_theater(char *s){
	return strstr(s, "NS") && strstr(s, "theater");
}

int arts_theater_or_dining(char *s){
	return strstr(s, "arts") || strstr(s, "theater") || strstr(s, "dining");
}

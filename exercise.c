/*                                                     ███╗   ███╗
 *   author:  marcellus <msimon_fr@hotmail.com>        ████╗ ████║
 *                                                     ██╔████╔██║
 *   created: Thu, 20 Jul 2023 22:30:36 +0200          ██║╚██╔╝██║
 *   updated: Thu, 20 Jul 2023 23:42:27 +0200             =## .   :#%*=:.
 *                                                     ╚═╝     ╚═╝
 */
#include <stdio.h>
#include <time.h>
#include "exercise.h"
void abdos(clock_t start, int n);
void tractions();

int main(){
	clock_t time = clock();
	printf("Tractions : %d\n", tractions);
	printf("Pompes : %d\n", tractions);
	printf("Abdos-Planche : %ds\n", abds);
	printf("Abdos-Droite : %ds\n", abds);
	printf("Abdos-Gauche : %ds\n", abds);
	abdos(time, abds);
	return 0;
}

/*void
tractions(){
	while(getchar() != '\n'){
		printf(*/
void
abdos(clock_t start, int n){
	double sec, prev;
	prev = 0;
	while((sec = n - (clock() - start) / CLOCKS_PER_SEC) > 0)
		if (sec != prev){
			printf("Seconds remaining: %.0f\n", sec);
			prev = sec;
		}
}

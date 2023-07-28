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
void core_strengthening(clock_t start, int n);
void pull_ups();

int main(){
	clock_t time = clock();
	printf("Pull-ups: %d\n", n_pull_ups);
	printf("Push-ups: %d\n", n_pull_ups);
	printf("Core strengthening - plank: %ds\n", t_core);
	printf("Core strengthening - right side: %ds\n", t_core);
	printf("Core strengthening - left side: %ds\n", t_core);
	core_strengthening(time, t_core);
	return 0;
}

/*void
tractions(){
	while(getchar() != '\n'){
		printf(*/
void
core_strengthening(clock_t start, int n){
	double sec, prev;
	prev = 0;
	while((sec = n - (clock() - start) / CLOCKS_PER_SEC) > 0)
		if (sec != prev){
			printf("Seconds remaining: %.0f\r", sec);
			fflush(stdout);
			prev = sec;
		}
}

/*                                                     ███╗   ███╗
 *   author:  marcellus <msimon_fr@hotmail.com>        ████╗ ████║
 *                                                     ██╔████╔██║
 *   created: Thu, 20 Jul 2023 22:30:36 +0200          ██║╚██╔╝██║
 *   updated: Thu, 20 Jul 2023 23:42:27 +0200             =## .   :#%*=:.
 *                                                     ╚═╝     ╚═╝
 */
#include <stdio.h>
#include <time.h>

int main(){
	clock_t start = clock();
	while (1)
		printf("%f\n", (double)clock() / CLOCKS_PER_SEC);
	return 0;
}

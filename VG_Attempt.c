#include <stdio.h>

void s_ascend(const double* data, const int size){

	double stored, iplusone;

	for (int i = 0;i < size;i++) {
		
		for (iplusone = i + 1;iplusone<size;iplusone++) {

			if (data[i]>data[iplusone]) {

				stored = data[i];
				data[i] = data[iplusone];
				data[iplusone] = stored;

			}
		}
	}
	printf("\n");
	return;
}

void s_descend(const double* data, const int size){


}

int main() {

	double data[] = { 7, 0.5, 2, 0.3, 0.1, 0.0, -10, 528.2, 8.0, 7.2, 2.3, 1100, 222 };
	s_ascend(data,13);
	//s_descend(data,13);

	return 0;
}
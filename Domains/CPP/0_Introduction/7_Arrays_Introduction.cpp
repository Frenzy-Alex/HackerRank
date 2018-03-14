#include <stdio.h>
#include <stdlib.h>

int main() {
	int count, *arr;
	scanf("%d", &count);
	arr = (int*)malloc(count*sizeof(int));
	for (int i = 0; i < count; i++){
		scanf("%d", &arr[i]);
	}
	for (int i = count - 1; i >= 0; i--){
		printf("%d ", arr[i]);
	}
	return 0;
}


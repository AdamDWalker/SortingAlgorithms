CFLAGS=-Wall	-g

All:	BubbleSort	QuickSort

BubbleSort:	BubbleSort.c

quickSort:	QuickSort.c

clean:
		rm	-f	BubbleSort
		rm	-r	BubbleSort.dSYM/
		rm	-f	QuickSort
		rm	-r	QuickSort.dSYM/

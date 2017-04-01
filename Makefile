CFLAGS=-Wall	-g

All:	BubbleSort	QuickSort

BubbleSort:	BubbleSort.c

quickSort:	QuickSort.c

clean:
		rm	-f	BubbleSort
		rm	-rf	BubbleSort.dSYM/
		rm	-f	QuickSort
		rm	-rf	QuickSort.dSYM/

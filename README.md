Bubble sort is a simple sorting algorithm. This sorting algorithm is comparison-based algorithm in which each pair of adjacent elements is compared and the elements are swapped if they are not in order. This algorithm is not suitable for large data sets as its average and worst case complexity are of Ο(n2) where n is the number of items.

How Bubble Sort Works?
We take an unsorted array for our example. Bubble sort takes Ο(n2) time so we're keeping it short and precise.

Bubble Sort
Bubble sort starts with very first two elements, comparing them to check which one is greater.

Bubble Sort
In this case, value 33 is greater than 14, so it is already in sorted locations. Next, we compare 33 with 27.

Bubble Sort
We find that 27 is smaller than 33 and these two values must be swapped.

Bubble Sort
The new array should look like this −

Bubble Sort
Next we compare 33 and 35. We find that both are in already sorted positions.

Bubble Sort
Then we move to the next two values, 35 and 10.

Bubble Sort
We know then that 10 is smaller 35. Hence they are not sorted.

Bubble Sort
We swap these values. We find that we have reached the end of the array. After one iteration, the array should look like this −

Bubble Sort
To be precise, we are now showing how an array should look like after each iteration. After the second iteration, it should look like this −

Bubble Sort
Notice that after each iteration, at least one value moves at the end.

Bubble Sort
And when there's no swap required, bubble sorts learns that an array is completely sorted.

Bubble Sort
Now we should look into some practical aspects of bubble sort.
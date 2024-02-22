# Sorting Array of Integers in Ascending Order

This C program sorts an array of integers in ascending order using the bubble sort algorithm.

## Usage

1. Compile the program using a C compiler such as GCC:
```
gcc -o sort_integers sort_integers.c
```

2. Run the compiled executable:
```
./sort_integers
```

## Description

The program initializes an array of integers with some values. It then sorts the array in ascending order using the bubble sort algorithm. Finally, it prints the sorted array to the console.

## Algorithm

1. Start with an unsorted array of integers.
2. Iterate through the array and compare each pair of adjacent elements.
3. If the elements are in the wrong order, swap them.
4. Repeat steps 2-3 until the entire array is sorted.
5. Print the sorted array.

## Example

Given the array: `{978, 654, 2645, 5687, 2453, 9678}`

After sorting, the array becomes: `{654, 2453, 2645, 5687, 9678, 978}`

## License

This program is licensed under the [MIT License](https://opensource.org/licenses/MIT).


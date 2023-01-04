## 0x1E-search_algorithms

In computer science, a search algorithm is an algorithm designed to solve a search problem. Search algorithms work to retrieve information stored within particular data structure, or calculated in the search space of a problem domain, with either discrete or continuous values. algorithms are 
Although search engines use search algorithms, they belong to the study of information retrieval, not algorithmics. (Adopted from Wikipedia)

* [search_algos.h](https://github.com/j88moja-code/alx-low_level_programming/blob/main/0x1E-search_algorithms/search_algos.h) - header file with prototype functions and standard libraries.

`mandatory_tasks`

* [0-linear.c](https://github.com/j88moja-code/alx-low_level_programming/blob/main/0x1E-search_algorithms/0-linear.c) - a function that searches for a value in an array of integers using the Linear search algorithm

    * Prototype : ``int linear_search(int *array, size_t size, int value);``
    * Where ``array`` is a pointer to the first element of the array to search in
    * ``size`` is the number of elements in ``array``
    * And ``value`` is the value to search for
    * Your function must return the first index where ``value`` is located
    * If ``value`` is not present in ``array`` or if ``array`` is ``NULL``, your function must return ``-1``
    * Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

* [1-binary.c](https://github.com/j88moja-code/alx-low_level_programming/blob/main/0x1E-search_algorithms/1-binary.c) - a function that searches for a value in a sorted array of integers using the Binary search algorithm

    * Prototype : ``int binary_search(int *array, size_t size, int value)``;
    * Where ``array`` is a pointer to the first element of the array to search in
    * ``size`` is the number of elements in ``array``
    * And ``value`` is the value to search for
    * Your function must return the index where ``value`` is located
    * You can assume that ``array`` will be sorted in ascending order
    * You can assume that ``value`` won’t appear more than once in ``array``
    * If ``value`` is not present in array or if array is NULL, your function must return ``-1``

* [2-O](https://github.com/j88moja-code/alx-low_level_programming/blob/main/0x1E-search_algorithms/2-O) - the ``time complexity`` (worst case) of a linear search in an array of size ``n``?

* [3-O](https://github.com/j88moja-code/alx-low_level_programming/blob/main/0x1E-search_algorithms/3-O) - the ``space complexity`` (worst case) of an iterative linear search algorithm in an array of size ``n``?

* [4-O](https://github.com/j88moja-code/alx-low_level_programming/blob/main/0x1E-search_algorithms/4-O) - the ``time complexity`` (worst case) of a binary search in an array of size ``n``?

* [5-O](https://github.com/j88moja-code/alx-low_level_programming/blob/main/0x1E-search_algorithms/5-O) - the ``space complexity`` (worst case) of a binary search in an array of size ``n``?

* [6-O](https://github.com/j88moja-code/alx-low_level_programming/blob/main/0x1E-search_algorithms/6-O) - the space complexity of a given function / algorithm

``advanced_tasks``

* [100-jump.c]() - a function that searches for a value in a sorted array of integers using the Jump search algorithm

    * Prototype : ``int jump_search(int *array, size_t size, int value)``;
    * Where ``array`` is a pointer to the first element of the array to search in
    * ``size`` is the number of elements in array
    * And ``value`` is the value to search for
    * Your function must return the first index where ``value`` is located
    * You can assume that ``array`` will be sorted in ascending order
    * If ``value`` is not present in ``array`` or if ``array`` is ``NULL``, your function must return ``-1``
    * You have to use the square root of the size of the array as the jump step.
    * You can use the ``sqrt()`` function included in ``<math.h>`` (don’t forget to compile with -lm)

* [101-O]() - the `time complexity` (average case) of a jump searcg in an array of size `n`, using `step = sqrt(n)`

* [102-interpolation.c]() - a function that searches for a value in a sorted array of integers using the Interpolation search algorithm

    * Prototype : ``int interpolation_search(int *array, size_t size, int value);``
    * Where ``array`` is a pointer to the first element of the array to search in
    * ``size``  is the number of elements in array
    * And ``value`` is the value to search for
    * Your function must return the first index where ``value`` is located
    * You can assume that ``array`` will be sorted in ascending order
    * If ``value`` is not present in ``array`` or if ``array`` is ``NULL``, your function must return ``-1``
    * To determine the probe position, you can use : ``size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))``

* [103-exponential.c]() -  a function that searches for a value in a sorted array of integers using the Exponential search algorithm

    * Prototype : ``int exponential_search(int *array, size_t size, int value);``
    * Where ``array`` is a pointer to the first element of the array to search in
    * ``size`` is the number of elements in ``array``
    * And ``value`` is the value to search for
    * Your function must return the first index where ``value`` is located
    * You can assume that ``array`` will be sorted in ascending order
    * If ``value`` is not present in ``array`` or if ``array`` is ``NULL``, your function must return ``-1``
    * You have to use powers of 2 as exponential ranges to search in your array

* [104-advanced_binary.c]() - a function that searches for a value in a sorted array of integers.

    * Prototype : ``int advanced_binary(int *array, size_t size, int value);``
    * Where ``array`` is a pointer to the first element of the array to search in
    * ``size`` is the number of elements in ``array``
    * And ``value`` is the value to search for
    * Your function must return the index where ``value`` is located
    * You can assume that ``array`` will be sorted in ascending order
    * If ``value`` is not present in ``array`` or if ``array`` is ``NULL``, your function must return ``-1``

* [105-jump_list.c]() - a function that searches for a value in a sorted list of integers using the Jump search algorithm.

    * Prototype : ``listint_t *jump_list(listint_t *list, size_t size, int value);``
    * Where ``list`` is a pointer to the head of the list to search in
    * ``size`` is the number of nodes in list
    * And ``value`` is the value to search for
    * Your function must return a pointer to the first node where ``value`` is located
    * You can assume that ``list`` will be sorted in ascending order
    * If ``value`` is not present in ``head`` or if ``head`` is ``NULL``, your function must return ``NULL``
    * You have to use the square root of the size of the list as the jump step.
    * You can use the ``sqrt()`` function included in ``<math.h>`` (don’t forget to compile with -lm)

* [106-linear_skip.c]() -  a function that searches for a value in a sorted skip list of integers.

    * Prototype : ``skiplist_t *linear_skip(skiplist_t *list, int value);``
    * Where ``list`` is a pointer to the head of the skip list to search in
    * A node of the express lane is placed every index which is a multiple of the square root of the size of the list (see example below)
    * And ``value`` is the value to search for
    * You can assume that ``list`` will be sorted in ascending order
    * Your function must return a pointer on the first node where ``value`` is located
    * If ``value`` is not present in ``list`` or if ``head`` is ``NULL``, your function must return ``NULL``

* [107-O]() - the ``time complexity`` (average case) of a jump search in a singly linked list of size ``n``, using ``step = sqrt(n)``

* [108-O]() - the ``time complexity`` (average case) of a jump search in a skip list of size ``n``, with an express lane using ``step = sqrt(n)``

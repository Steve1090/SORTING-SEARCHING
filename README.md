
# SORTING-SEARCHING
This repositroy contains C programming codes for searching and sorting. 

EXPERIMENT-1 {BASIC SEARCHING} 

1. Start the program.
2. Declare an integer array arr of size 5 and insert values. 
3. Declare an integer variable sv to store the search value entered by the user.
4. Display a message asking the user to enter the search value.
5. Read value entered by the user and store it in the variable sv using scanf() function.
6. Use a for loop to iterate through the array arr.
7. In the for loop, check if the current element of the array is equal to the search value entered.
8. If the current element of the array is equal to the search value, display a message "Number found" and return 0 to exit the program.
9. Else display a message "Number not found".
10. End the program.

![SSALGO SS](https://user-images.githubusercontent.com/108262513/234058763-850b9eac-53fe-45de-b76e-cc73b2a172b0.jpg)


EXPERIMENT-2 {BUBBLE SORT}

1. Start the program
2. Declare an integer array arr of size 5 and insert values. 
3. Declare integer variables for passes, comp, i, j, and temp.
4. Define a function called Bubble that takes an integer array. 
5. In the function Bubble, set passes to n-1 and comp to n-1.
6. Nested for loops to iterate through the array and compare adjacent elements.
7. If an adjacent element is greater than the current element, swap their positions.
8. Define another function called disp to display the sorted array.
9. In the function disp, use a for loop to iterate through the sorted array and display each element.
10. In the main function, call the Bubble function and pass the array and its size as input.
11. Then call the disp function to display the sorted array.
12. End the program.

![BUBBLE SORT](https://user-images.githubusercontent.com/108262513/234008990-a501d667-8096-4340-8732-5a1f294bd58a.jpg)

EXPERIMENT-3 {DELETION}

1. Start
2. Initiate the function del(arr, n, k), n is the number of elements in the array, and k is the element to be deleted.
3. Traverse through the array from the first element to the last element.
3. If the element at the current index is equal to k, then start another loop to shift all the elements from the current index to the last index to the left by one position.
4. Assign the value of the next element to the current index.
5. Continue step 4 until the last element of the array is reached.
6. Print the array after the deletion of the element k.
7. Stop 

![DELETION ](https://user-images.githubusercontent.com/108262513/234051060-42daa384-820c-4007-84b1-3a2ee25d8c63.jpg)

EXPERIMENT-4 {SELECTION_SORT}
1. Start
2. Initialize an array of integers to be sorted.
3. For each element in the array, find the smallest element in the remaining unsorted portion of the array.
4. Swap the current element with the smallest element found in step 2.
5. Repeat steps 2-3 until the entire array is sorted.
6. End 


![SELECTION_SORT SS](https://user-images.githubusercontent.com/108262513/234055526-dd9592c9-9e43-432a-9283-fd106a332a4c.jpg)

EXPERIMENT-5 {INDEX FIND} 

1. Define a function named binarySearch that takes four arguments: an integer array array, two integers start_index and end_index, and an integer element to search.
2. While the start_index is less than or equal to end_index, repeat the following steps:
a. Calculate the middle index of the array as middle = start_index + (end_index - start_index) / 2.
b. If the middle element of the array array[middle] is equal to element, return middle.
c. If the middle element of the array array[middle] is less than element, update start_index = middle + 1.
d. Otherwise, update end_index = middle - 1.
3. If the element is not found in the array, return -1.
4. Define the main function that initializes an array array and its size n, and the element to search for.
5. Call the binarySearch function with the array, start index 0, end index n-1, and element as arguments.
6. If the binarySearch function returns -1, print "Element not found in the array".
7. Otherwise, print "Element found at index: " followed by the index returned by binarySearch function.
8. End. 


![INDEXING](https://user-images.githubusercontent.com/108262513/234067705-fae7867f-3e36-491b-a3bc-434a500244a0.jpg)

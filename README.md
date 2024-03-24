# Task2_Qtec
## How I approached the problem?
- As i solved a lots of problem in the topic binary search its certain to me that its a problem of binary searching.The problem also states that the elements should be sorted before further actions which is clearly the property of binary searching.


##which algorithm did i use?
- As i mentioned before i used the build in sort() algorithm to sort the elements first. This sort() functionn is a build in stl function in c++ which uses the algorithm called introsort. Introsort being a hybrid sorting algorithm uses three sorting algorithm to minimize the running time, Quicksort, Heapsort and Insertion Sort.
- Then i used the binary search algorithm to implement the final problem which is getting the lower bound. The binary search algorithm is a very effient algorithm that works on complexity (logn).
- 
  ## How i solved the problem?
  -first i took the the size of the arry as "cin>>n".
  -Then i took the elements of the array by the loop.
  -After that i used sort() function to sort the array.
  -Then i sent the array and target value to a function called binary_search() which will give me the lower bound of the array.
  -as we know binary search cuts off the half of the array and works on the potential half. so we check for the exact target, when we get the target we return it instantly. but if we dont get it then if the value is still bigger than the current mid value so the index is mid+1. and if its not we simply return the mid as it is the index.
  
  ## The test case 2 is wrong in my opinion.
  - The test case 2 gives us the array{5,6,13} and we have to search 2. as all other test cases are in 0-indexed the ans should be 0 because 2 will be the first value. but the test case gives us 1.

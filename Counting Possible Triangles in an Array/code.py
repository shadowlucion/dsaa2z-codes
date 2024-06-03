def findNumberOfTriangles(arr, n):
    # Sort the array
    arr.sort()
    
    count = 0
    
    # Iterate through each element as the longest side of the triangle
    for k in range(n - 1, 1, -1):
        i = 0
        j = k - 1
        
        while i < j:
            # Check if the current elements can form a triangle
            if arr[i] + arr[j] > arr[k]:
                # All elements between i and j can form a triangle with arr[k]
                count += (j - i)
                j -= 1
            else:
                i += 1
                
    return count

# Example Usage
n1 = 4
arr1 = [10, 21, 22, 100]
print(findNumberOfTriangles(arr1, n1))  # Output: 1

n2 = 6
arr2 = [4, 6, 3, 7, 8, 10]
print(findNumberOfTriangles(arr2, n2))  # Output: 20

function findNumberOfTriangles(arr, n) {
  arr.sort((a, b) => a - b);

  let count = 0;

  for (let k = n - 1; k >= 2; k--) {
    let i = 0,
      j = k - 1;

    while (i < j) {
      if (arr[i] + arr[j] > arr[k]) {
        count += j - i;
        j--;
      } else {
        i++;
      }
    }
  }

  return count;
}

// Example Usage
let arr1 = [10, 21, 22, 100];
let n1 = arr1.length;
console.log(findNumberOfTriangles(arr1, n1)); // Output: 1

let arr2 = [4, 6, 3, 7, 8, 10];
let n2 = arr2.length;
console.log(findNumberOfTriangles(arr2, n2)); // Output: 20

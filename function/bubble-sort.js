function bubbleSortAscending(arr) {
  for (let i = 0; i < arr.length; i++) {
    let swap;
    for (let j = 0; j < arr.length - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) { // Ascending
        swap = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = swap;
      }
    }
    if (!swap) { // bool compare
      break;
    }
  }
  return arr;
}

function bubbleSortDescending(arr) {
  for (let i = 0; i < arr.length; i++) {
    let swap;
    for (let j = 0; j < arr.length - 1 - i; j++) {
      if (arr[j] < arr[j + 1]) { // Descending
        swap = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = swap;
      }
    }
    if (!swap) { // bool compare
      break;
    }
  }
  return arr;
}

console.log(bubbleSortAscending([2, 4, 1, 5, 3])); // 1, 2, 3, 4, 5
console.log(bubbleSortDescending([2, 4, 1, 5, 3])); // 5, 4, 3, 2, 1
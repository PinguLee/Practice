function stringLength(str) {
  let length = 0;
  for (let i = 0; i < str.length; i++) {
    length++;
  }
  return length;
}

function arrayLength(arr) {
  let length = 0;
  for (let i = 0; i < arr.length; i++) {
    length++;
  }
  return length;
}

const myArray = [1, 2, 3, 4, 5];

console.log(`The length of the string is: ${customStringLength("PinguLee")}`); // 8
console.log(`The length of the array is: ${customArrayLength(test)}`); // 5
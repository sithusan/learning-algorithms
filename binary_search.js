function binarySearch(searchData, searchValue) {
  let min = 0;
  let max = searchData.length - 1;
  let guess;

  while (min <= max) {
    guess = Math.floor((max + min) / 2);

    if (searchData[guess] === searchValue) return "Found in position " + guess;
    else if (searchData[guess] < searchValue) min = guess++;
    else max = guess - 1;
  }
  return "Does not found";
}
let data = [1, 2, 3, 4, 5, 6, 7, 8, 9];

console.log(binarySearch(data, 8));
console.log(binarySearch(data, -1));

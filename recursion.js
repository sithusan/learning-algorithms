function sum(data) {
  if (data.length === 0) return 0;
  else return data[0] + sum(data.slice(1));
}

console.log(sum([1, 2, 3, 4, 5, 6, 7, 8, 9]));

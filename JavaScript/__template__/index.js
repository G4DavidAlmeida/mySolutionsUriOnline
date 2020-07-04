const input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf-8')
const lines = input.split('\n')

console.log(lines.shift())
const input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf-8')
const lines = input.split('\n')

const a = parseInt(lines.shift())
const b = parseInt(lines.shift())

console.log(`X = ${a + b}`)
const input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf-8')
const lines = input.split('\n')

while (lines.length !== 0) {
    const n = parseInt(lines.shift())
    const matrix = new Array(n)

    for (let i = 0; i < n; i++) {
        matrix[i] = lines
            .shift().split('')
            .map(val => parseInt(val))
    }

    console.log(calc(matrix))
}

/** @param {number[][]} matrix */
function calc (matrix) {
    let count = 0
    let step = 1
    console.table(matrix)
    for (let i = 0; i < matrix.length; i++)
        for (let j = 0; j < matrix[i].length; j++) {
            if (typeof matrix[i][j] === 'undefined') continue
            
            while (i + step < matrix.length && matrix[i + step][j] === matrix[i][j]) {
                matrix[i + step][j] = undefined
                count++; step++
            }
            step = 1
        }
    console.table(matrix)
    
    return count
}
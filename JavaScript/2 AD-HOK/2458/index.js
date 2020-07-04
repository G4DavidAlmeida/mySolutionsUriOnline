const input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf-8')
const lines = input.split('\n')

const dimension = parseInt(lines.shift())
const matriz = new Array(dimension)
let safeCells = dimension * dimension

for (let i = 0; i < dimension; i++)
    matriz[i] = lines.shift().split('')

checkBorders()

console.log(safeCells)

function checkBorders () {
    checkTips()
    const max = dimension - 1

    for (let i = 0; i < dimension; i ++) {
        if (matriz[0][i] === 'A') findDangerCells(0, i)
        if (matriz[i][max] === '>') findDangerCells(i, max)
        if (matriz[max][i] === 'V') findDangerCells(max, i)
        if (matriz[i][0] === '<') findDangerCells(i, 0)
    }
}
function checkTips () {
    const max = dimension - 1

    if (matriz[0][0] === 'A' || matriz[0][0] === '<') findDangerCells(0,0)

    if (matriz[0][max] === 'A' || matriz[0][max] === '>') findDangerCells(0, max)

    if (matriz[max][max] === '>' || matriz[max][max] === 'V') findDangerCells(max, max)

    if (matriz[max][0] === '>' || matriz[max][0] === 'V') findDangerCells(max, 0)
}
function findDangerCells (i, j) {
    matriz[i][j] = 'o'
    safeCells--

    if (j - 1 >= 0 && matriz[i][j - 1] === '>') findDangerCells(i, j - 1)
    if (i - 1 >= 0 && matriz[i - 1][j] === 'V') findDangerCells(i - 1, j)
    if (j + 1 < dimension && matriz[i][j + 1] === '<') findDangerCells(i, j + 1)
    if (i + 1 < dimension && matriz[i + 1][j] === 'A') findDangerCells(i + 1, j)
}
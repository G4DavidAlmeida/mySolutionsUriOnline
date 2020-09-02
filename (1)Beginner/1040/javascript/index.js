const input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf-8')
const lines = input.split('\n')

const a = lines.shift().split(' ')
    .map(val => parseFloat(val))

// peso 2 3 4 1
let media = a[0] * 2 + a[1] * 3 + a[2] * 4 + a[3] * 1
media /= 2 + 3 + 4 + 1

console.log(`Media: ${media.toFixed(1)}`)

if (media >= 7.0) console.log('Aluno aprovado.')
else if (media < 5.0) console.log('Aluno reprovado.')
else {
  console.log('Aluno em exame.')

  const exame = parseFloat(lines.shift())
  console.log(`Nota do exame: ${exame.toFixed(1)}`)

  media = (media + exame) / 2 

  if (media >= 5.0) console.log('Aluno aprovado.')
  else console.log('Aluno reprovado.')

  console.log(`Media final: ${media.toFixed(1)}`)
}
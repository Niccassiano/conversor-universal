const form = document.querySelector("#form-conversor")
const valor = document.querySelector("#valor")
const origem = document.querySelector("#origem")
const destino = document.querySelector("#destino")
const resultado = document.querySelector(".resultado-texto")

console.log(form)
console.log(valor)
console.log(origem)
console.log(destino)
console.log(resultado)

form.addEventListener("submit", function (event) {
    event.preventDefault()

    console.log("Formulário enviado!")
})
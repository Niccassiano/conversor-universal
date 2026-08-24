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

let categoriaAtual = "distancia"

const btnDistancia = document.querySelector("#btn-distancia")
const btnTemperatura = document.querySelector("#btn-temperatura")
const btnMoedas = document.querySelector("#btn-moedas")

const opcoesPorCategoria = {
    distancia: [
        { value: "km", texto: "Km" },
        { value: "milhas", texto: "Milhas" }
    ],
    temperatura: [
        { value: "celsius", texto: "Celsius" },
        { value: "fahrenheit", texto: "Fahrenheit" }
    ],
    moedas: [
        { value: "real", texto: "Real" },
        { value: "dolar", texto: "Dólar" }
    ]
}

function atualizarSelects(categoria) {
    const opcoes = opcoesPorCategoria[categoria]

    origem.innerHTML = ""
    destino.innerHTML = ""

    opcoes.forEach(function (opcao) {
        origem.innerHTML += `<option value="${opcao.value}">${opcao.texto}</option>`
        destino.innerHTML += `<option value="${opcao.value}">${opcao.texto}</option>`
    })
}

function selecionarCategoria(categoria) {
    categoriaAtual = categoria
    atualizarSelects(categoria)
    resultado.textContent = "Aguardando conversão..." 
}

btnDistancia.addEventListener("click", function () {
    selecionarCategoria("distancia")
})

btnTemperatura.addEventListener("click", function () {
    selecionarCategoria("temperatura")
})

btnMoedas.addEventListener("click", function () {
    selecionarCategoria("moedas")
})
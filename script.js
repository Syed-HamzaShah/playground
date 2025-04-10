// script.js
let cart = [];

function updateCart() {
  document.querySelector(
    '.nav-item a[href="#cart"]'
  ).textContent = `Cart (${cart.length})`;
}

function addToCart(product) {
  cart.push(product);
  updateCart();
}

document.querySelectorAll(".btn-primary").forEach((button) => {
  button.addEventListener("click", function () {
    const productName =
      this.closest(".card").querySelector(".card-title").textContent;
    const productPrice = parseFloat(
      this.closest(".card")
        .querySelector(".card-text")
        .textContent.replace("$", "")
    );

    const product = {
      name: productName,
      price: productPrice,
    };

    addToCart(product);
  });
});

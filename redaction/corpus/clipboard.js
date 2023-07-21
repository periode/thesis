// fall back to little execCommand hack with a temporary textarea
const input = document.createElement("textarea");
input.value = value;
document.body.append(input);
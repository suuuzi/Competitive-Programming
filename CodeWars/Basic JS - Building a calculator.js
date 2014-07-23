// Problem: Basic JS - Building a calculator (http://www.codewars.com/kata/529f2d1c403a58f660000656)

var Calculator = new Object();

Object.prototype.add = function (n1, n2) {
    return n1 + n2;
}

Object.prototype.subtract = function (n1, n2) {
    return n1 - n2;
}

Object.prototype.multiply = function (n1, n2) {
    return n1 * n2;
}

Object.prototype.divide = function (n1, n2) {
    return n2 == 0 ? false : n1 / n2;
}

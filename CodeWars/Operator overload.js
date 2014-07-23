// Problem: Operator overload ? (http://www.codewars.com/kata/52a0849a852a854d050005f4)

var Foo = function(value) {
  this.val = value;
}

Foo.prototype.valueOf = function () { return this.val; };

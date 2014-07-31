// Problem: Breaking search bad (http://www.codewars.com/kata/52cd53948d673a6e66000576)

function search(searchTerm) {
  return TITLES.filter(function(title) {
    return title.toString().match(new RegExp(searchTerm, 'gi'));
  });
}

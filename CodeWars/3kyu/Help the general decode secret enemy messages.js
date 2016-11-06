// Help the general decode secret enemy messages (https://www.codewars.com/kata/help-the-general-decode-secret-enemy-messages/javascript)

let alphabet = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz,.? -';
device.decode = function (w) {
  let newStr = '';
  let decoded = {};

  for(let i = 0; i < alphabet.length; i++) {
    let str = '';
    for(let j = 0; j < w.length; j++)
      str += alphabet[i];
    
    decoded[device.encode(str)] = alphabet[i];
  }
  
  for(let i = 0; i < w.length; i++) {
   // for(let m = 0; m < decoded.length; m++) {
    for(let dec in decoded) {
      if(dec[i] == w[i]) {
        newStr += decoded[dec];
      }
 
    }

  }
  
  return newStr; 
}

// Problem: Regex Password Validation (http://www.codewars.com/kata/regex-password-validation/javascript)
function validate(password) {
  return /^((?!.*?[\W])(?=.*?[A-Z])(?=.*?[a-z])(?=.*?[0-9])).{6,}$/.test(password);
}

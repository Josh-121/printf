long int _tobinary(int n) {
long int bin = 0;
long int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }
  return bin;
}

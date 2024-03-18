#include<cstdio>
#include<cstdlib>
#include <array>

int main ()
{
  printf ("int = %ld\n", sizeof (int));
  printf ("bool = %ld\n", sizeof (bool));
  printf ("char = %ld\n", sizeof (char));
  printf ("char8_t = %ld\n", sizeof (char8_t));
  printf ("wchar_t = %ld\n", sizeof (wchar_t));
  printf ("char16_t = %ld\n", sizeof (char16_t));
  printf ("char32_t = %ld\n", sizeof (char32_t));
  printf ("short = %ld\n", sizeof (short));
  printf ("long = %ld\n", sizeof (long));
  printf ("long long = %ld\n", sizeof (long long));
  printf ("float = %ld\n", sizeof (float));
  printf ("double) = %ld\n", sizeof (double));
  printf ("long double = %ld\n", sizeof (long double));
  printf ("size_t = %ld\n", sizeof (size_t));
  printf ("nullptr = %ld\n", sizeof (nullptr));
  printf ("std::array<int,5> = %ld\n", sizeof (std::array < int, 5 >));
  std::system ("pause");
  return 0;
}

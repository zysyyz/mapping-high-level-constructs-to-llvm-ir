extern int integer_parse();

int foo(int a, int b)
{
  int c = integer_parse();
  auto function = [a, b, c](int x) { return (a + b - c) * x; };
  return function(10);
}

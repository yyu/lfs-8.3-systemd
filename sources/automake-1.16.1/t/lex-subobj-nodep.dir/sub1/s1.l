%{
#define YY_NO_UNISTD_H 1
%}
%%
"END"   return EOF;
.
%%
int main (void)
{
  while (yylex () != EOF)
    ;
  return 0;
}

int yywrap(void)
{
  return 1;
}

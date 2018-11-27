# The conditional here is important: Automake only appears to warn
# when one of the all-local rules is inside a conditional and the
# other is not.
if FOO
all-local: bar
bar: ; @echo bar
endif
all-local: baz
baz: ; @echo baz

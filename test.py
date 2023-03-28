def count():
    yield 4
    yield 5
    yield 6

g = count()
print(next(next(g)))
print(next(next(g)))
print(next(next(g)))
next(g)

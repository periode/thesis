@lru_cache(3)
def fib(n):
    return n if n < 2 else fib(n - 1) + fib(n - 2)
def recursive_generator(n):
      if n == 0:
           return
      yield n
      yield from recursive_generator(n - 1)
for num in recursive_generator(8):
    print(num)

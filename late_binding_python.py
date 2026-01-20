def ExampleFunction():
    y = 50      # variable y is bound to an integer object
    print(y)

    y = "Hello" # variable y is essentially a reference; it is re-bound to a string object at runtime
    print(y)

ExampleFunction()
Count = 10          # The type is inferred by the interpreter as int at runtime
print(f"The Count is {type(Count)}")

Count = "Ten"       # There is no error here. The variable is dynamically re-bound to a string type
print(f"Count is now {type(Count)}")
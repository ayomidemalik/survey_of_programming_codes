scope = "Global"

def OuterFunction():
    scope = "Enclosing"

    def InnerFunction():
        scope = "Local"
        print(scope)  # Finds 'scope' in Local scope first (L in LEGB)

    InnerFunction()
    print(scope)    # Finds 'scope' in Enclosing scope

OuterFunction()
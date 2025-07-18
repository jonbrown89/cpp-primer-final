//Exercise 2.19: Explain the key differences between pointers and references.
/*
    Definition:
            pointer: the pointer "points to" any other type.
            reference: the reference is "another name" of an object.

    Key difference:
            1. A reference is another name of an already existing object. a pointer is an object in its own right.
            2. Once initialized, a reference remains bound to its initial object. There is no way to rebind a reference
               to refer to a different object. A pointer can be assigned and copied.
            3. A reference always get the object to which the reference was initially bound. A single pointer can point
               several different objeccts over its lifetime.
            4. A reference must be initialized. a pointer needs not be initialized at the time it is defined.

 */
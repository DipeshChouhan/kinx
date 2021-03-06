# Command Line Arguments

## Overview

Command line arguments will be used with `$$` as array.

*   `$$[0]` is a script name.
*   `$$[n]` is an nth argument if n >= 1.

## Examples

### Example 1. `$$` used with `each` method

#### Code [args -> 1 2 3 4 5 6 7 8 end]

```javascript
//
// Command Line Example:
//  $ ./kinx test.kx 1 2 3 4 5 6 7 8 end
//
$$.each(&(e, i) => System.println("Argument[%d] = " % i, e));
```

#### Result

```
Argument[0] = test.kx
Argument[1] = 1
Argument[2] = 2
Argument[3] = 3
Argument[4] = 4
Argument[5] = 5
Argument[6] = 6
Argument[7] = 7
Argument[8] = 8
Argument[9] = end
```

### Example 2. Accessing `$$` by index

#### Code [args -> 1 2 3 4 5 6 7 8 end]

```javascript
//
// Command Line Example:
//  $ ./kinx test.kx 1 2 3 4 5 6 7 8 end
//
System.println("Argument length = ", $$.length());
for (var i = 0, len = $$.length(); i < len; ++i) {
    System.println("Argument[%{i}] = ", $$[i]);
}
```

#### Result

```
Argument length = 10
Argument[0] = test.kx
Argument[1] = 1
Argument[2] = 2
Argument[3] = 3
Argument[4] = 4
Argument[5] = 5
Argument[6] = 6
Argument[7] = 7
Argument[8] = 8
Argument[9] = end
```

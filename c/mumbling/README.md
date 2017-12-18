Kata: https://www.codewars.com/kata/mumbling

Language: C

Level: 7 kyu

This time no story, no theory. The examples below show you how to write function `accum`:

*Examples:*

```c
accum("abcd")    # "A-Bb-Ccc-Dddd"
accum("RqaEzty") # "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt")    # "C-Ww-Aaa-Tttt"
```

The parameter of accum is a string which includes only letters from `a..z` and `A..Z`.

Perform testing by executing `gcc mumblingtest.c mumbling.c -o mumblingtest -lcriterion && ./mumblingtest --verbose`

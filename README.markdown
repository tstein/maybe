Has this ever happened to you?

>Alice:  "Darn it! This code does the same thing *every single time*!"
>
>Bob:    "Clearly, we need a more stochastic solution."

Fret no more. _maybe.h_ extends C with a new flow control mechanism that fixes
this irksome limitation.

When you know under what conditions a block should run, use _if_.
    if (onBack(turtle)) {
        flip(turtle);
    }

When you don't, use _maybe_.
    maybe {
        order(LUNCH, PIZZA);
    } else {
        order(LUNCH, CHINESE);
    }

New in v0.2: _maybe.h_ now defines _surely_, for those situations when you are
entirely certain a block should run.


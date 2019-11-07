We use a functional programming approach, by striving to keep input and output restricted to their own functions with modifying functions interweaved inbetween.
Here is a map of how our program operates.
(Input) getIt->validate->qsolve->format->printIt (Output)
With a logToFile function helping to log output along the way.

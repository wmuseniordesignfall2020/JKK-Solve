# JKK-Solve Quadratic Solver
## TEAM: Ibrahim Itani, Ryan Cwynar, Spencer Hunt, Noah Wochaski

We use a functional programming approach, by striving to keep input and output restricted to their own functions with modifying functions interweaved inbetween.
Here is a map of how our program operates.
```BASH
(Input) getIt->validate->qsolve->format->printIt (Output)
```
With a logToFile function helping to log output along the way.

Each function is named to be self-explanatory.

| Function |  Description                                             |
|----------|:--------------------------------------------------------:|
| getIt    | Gets input a,b,c.                                        |
| validate | Ensures we are working with the proper input parameters. |
| qsolve   | Solves our quadratic equations roots.                    |
| format   | Formats the output to prepare for printing.              |
| printIt  | Prints out the roots of the quadratic equation.          |
| logToFile| Logs all output.                                         |

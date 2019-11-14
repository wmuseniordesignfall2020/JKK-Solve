#!/bin/bash
./qsolve_roots 1 2 1 > test/out
diff --normal test/real test/out

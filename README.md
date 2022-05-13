# panprimes
Benchmarking computer performance by computing pandigital primes

Run the benchmark using

    gcc panprimes.c -lm -o panprimes ; time ./panprimes

You can also add options to `gcc` for optimization, etc. like so,

    gcc panprimes.c -lm -O2 -o panprimes ; time ./panprimes

Some sample runtime results are included in the `pantimes.csv`.
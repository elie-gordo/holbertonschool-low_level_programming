# Green Efficiency Analysis

## Measurement Methodology

All measurements were taken from the provided benchmark programs compiled with strict flags:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`.
To keep the experiment controlled, the runs were executed on the same machine and in the same environment, without changing source logic, dataset size, or timing formulas. The baseline program (`baseline_loop`) was executed three consecutive times and its output was recorded in `baseline_loop-metrics.md`. The measured execution times were 0.229574 s, 0.230196 s, and 0.235748 s.

The comparison program (`comparison_algorithms`) was also executed three times, with both algorithm timings recorded for each run in `comparison_algorithms-metrics.md`. For the naive implementation, times were 2.761241 s, 2.809177 s, and 2.798274 s. For the single-pass implementation, times were 0.000106 s, 0.000112 s, and 0.000115 s.

To summarize repeated runs, averages were computed directly from those recorded outputs. The naive average was 2.789564 s and the single-pass average was 0.000111 s, leading to a relative difference of about 25131.21x. This approach is simple but sufficient for a first-order engineering conclusion: when one implementation consistently takes orders of magnitude more CPU time, that signal is strong even with small run counts.

## Observed Performance Differences

The baseline loop showed low but visible variability: from 0.229574 s to 0.235748 s. The spread is small (about 0.006 s), which indicates reasonably stable timing under the same conditions.

The major performance gap appears in the algorithm comparison task. Across all three runs, the naive timing remained around 2.8 seconds, while the single-pass timing stayed near 0.00011 seconds. This is not a small optimization gain; it is an orders-of-magnitude difference. The computed ratio (~25131.21x) quantifies that gap clearly.

These numbers are consistent with the structure of each implementation. The naive function uses nested loops and therefore performs far more operations as input size grows. The single-pass version scans the data once, so the operation count scales linearly with dataset size. The measurements match this structural expectation: the algorithm with heavier growth behavior dominates runtime cost.

## Relation Between Runtime and Energy Consumption

This project does not directly measure watts, but runtime is a practical proxy for CPU activity duration. In this context, the measured data supports a clear efficiency interpretation: code that keeps the CPU busy for 2.789564 seconds will generally consume more energy than code that finishes in 0.000111 seconds, all else being equal.

The baseline measurements reinforce the same idea at smaller scale: even a deterministic loop has a measurable time cost that accumulates with repeated execution. In real systems, these costs multiply across users, requests, and background jobs. Therefore, reducing runtime is not only a speed goal but also part of responsible resource usage.

## Limitations of the Experiment

First, `clock()` reports CPU time, not direct electrical power. So this experiment supports an efficiency inference, not a hardware-level energy measurement. Second, only three runs were used for each benchmark, which captures basic variability but not full statistical characterization. Third, measurements were taken in a general-purpose environment where scheduler noise and system background activity can affect micro- and millisecond scales. Fourth, dataset size and workload are fixed by the exercise, so conclusions apply directly to this setup and conceptually (not numerically) to larger systems.

## Practical Engineering Takeaway

The practical lesson is to measure before claiming efficiency, and to prioritize algorithmic structure early. The recorded outputs show that changing complexity class can matter far more than micro-level tuning. A disciplined workflow should therefore include: controlled repeated runs, explicit averages, and a clear statement of limitations. Even without advanced power tools, this method provides actionable evidence for greener and faster engineering decisions.

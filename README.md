A milling machine has a circular tool changer that holds **n tools**, and some tools may appear more than once. The operator can move through the tools **one position at a time**, either **left or right**. Because the tool changer is circular, moving past one end wraps around to the other end.

You are given:

* The list of tools
* The `startIndex` (the tool currently in use)
* The target tool name

Your task is to determine the **minimum number of moves needed—left or right—to reach the target tool from the starting position**.

**Example 1**

Suppose:

```text
tools = ["ballendmill", "keywaycutter", "slotdrill", "facemill"]
startIndex = 1
target = "ballendmill"
```

**Output:**

```text
1
```

The current tool is `"keywaycutter"` at index 1. The target `"ballendmill"` is at index 0. It can be reached by moving **left 1 step** or right 3 steps.

**Example 2**

```text
tools = ["ballendmill", "facemill", "keywaycutter", "slotdrill"]
startIndex = 1
target = "slotdrill"
```

**Output:**

```text
2
```

The current tool is `"facemill"` at index 1. The target `"slotdrill"` is at index 3. Moving either left or right **2 times** reaches the target.

**Constraints:**

* `1 ≤ n ≤ 100`
* `0 ≤ startIndex ≤ n - 1`
* `1 ≤ length of tools[i] and target ≤ 100`
* `target` is in `tools`

**Input format:**

* The first line contains the integer `n`.
* The next `n` lines contain a string element of `tools[i]`.
* The next line contains the integer `startIndex`.
* The last line contains the string `target`.

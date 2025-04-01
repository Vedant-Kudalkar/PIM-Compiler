# PIMCompilerProject

## Project Description

The **PIMCompilerProject** is a compiler designed to translate matrix multiplication operations into machine instructions for Processing-In-Memory (PIM) architecture. This project exploits loop parallelism by distributing independent iterations across multiple processing elements (PEs), thereby accelerating matrix computations.

## Features

- Parallel matrix multiplication using PIM architecture.
- ISA conversion for efficient execution on PIM-based systems.
- Optimized memory access and loop unrolling techniques.
- Generates 24-bit machine instructions for efficient execution.

## Algorithm Overview

1. **Initialization**: Reads input matrices A and B, initializes result matrix C.
2. **Parallel Execution Strategy**: Each row computation of A is assigned to a separate PE.
3. **Three-Address Code (TAC) Conversion**: Converts operations into intermediate representation.
4. **ISA Generation**: Translates TAC into PIM-specific machine instructions.
5. **Execution**: Executes machine instructions in parallel across multiple PEs.
6. **Result Storage**: Stores computed matrix C in memory.

## Project Structure

```
PIMCompilerProject/
├── include/
│   ├── PIMInstructionGenerator.h
│   ├── MatrixMultiplicationTranslator.h
├── src/
│   ├── PIMInstructionGenerator.cpp
│   ├── MatrixMultiplicationTranslator.cpp
│   ├── main.cpp   # Entry point
├── build/         # Compiled output
├── Makefile       # Build automation
```

## Sample Input

Matrix A:

```
1 2
3 4
```

Matrix B:

```
5 6
7 8
```

## Expected Output

Matrix C:

```
19 22
43 50
```

## Installation & Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/PIMCompilerProject.git
   ```
2. Navigate to the project directory:
   ```bash
   cd PIMCompilerProject
   ```
3. Build the project:
   ```bash
   make
   ```
4. Run the executable:
   ```bash
   ./build/PIMCompilerProject
   ```

## Future Enhancements

- Implement dynamic load balancing for better PE utilization.
- Optimize memory access patterns for reduced latency.
- Explore vectorization techniques for further acceleration.

## Contributors

- **Vedant Kudalkar** (22BAI1321)
- **Sahil Rizvi** (22BAI1292)
- **Vardaan Thapa** (22BAI1329)

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.


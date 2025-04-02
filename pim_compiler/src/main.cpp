/* main.cpp */
#include "MatrixMultiplicationTranslator.h"
#include "PIMInstructionGenerator.h"
#include <iostream>
#include <vector>

int main() {
    MatrixMultiplicationTranslator translator;
    PIMInstructionGenerator generator;

    std::vector<std::vector<int>> matrix_a = {
        {1, 2},
        {3, 4}
    };
    std::vector<std::vector<int>> matrix_b = {
        {5, 6},
        {7, 8}
    };

    auto instructions = translator.translateMatrixMultiplication(matrix_a, matrix_b);

    std::cout << "Compilation complete. Instructions in 24-bit format:\n";
    for (size_t i = 0; i < instructions.size(); ++i) {
        std::cout << "Instruction " << i << ": "
                  << "0x" << std::hex << instructions[i] << " [bin: "
                  << generator.formatBinary(instructions[i]) << "]\n";
    }

    return 0;
}


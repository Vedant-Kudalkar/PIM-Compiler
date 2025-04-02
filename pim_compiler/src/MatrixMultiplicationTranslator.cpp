/* MatrixMultiplicationTranslator.cpp */
#include "MatrixMultiplicationTranslator.h"
#include <stdexcept>

std::vector<PIMInstructionGenerator::Instruction>
MatrixMultiplicationTranslator::translateMatrixMultiplication(
    const std::vector<std::vector<int>>& matrix_a,
    const std::vector<std::vector<int>>& matrix_b) {

    if (matrix_a[0].size() != matrix_b.size()) {
        throw std::invalid_argument("Matrix dimensions are incompatible for multiplication.");
    }

    PIMInstructionGenerator generator;
    std::vector<PIMInstructionGenerator::Instruction> instructions;

    // Parallel loading of matrix A
    for (size_t i = 0; i < matrix_a.size(); ++i) {
        for (size_t j = 0; j < matrix_a[0].size(); ++j) {
            uint16_t addr = i * 16 + j;
            instructions.push_back(generator.createPROG(0x01, addr));
        }
    }

    // Parallel loading of matrix B
    for (size_t i = 0; i < matrix_b.size(); ++i) {
        for (size_t j = 0; j < matrix_b[0].size(); ++j) {
            uint16_t addr = 0x100 + i * 16 + j;
            instructions.push_back(generator.createPROG(0x02, addr));
        }
    }

    // Parallel execution per row
    for (size_t row = 0; row < matrix_a.size(); ++row) {
        instructions.push_back(generator.createEXE(row));
    }

    instructions.push_back(generator.createEND());
    return instructions;
}


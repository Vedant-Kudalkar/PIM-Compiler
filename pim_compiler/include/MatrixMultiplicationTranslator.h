/* MatrixMultiplicationTranslator.h */
#ifndef MATRIX_MULTIPLICATION_TRANSLATOR_H
#define MATRIX_MULTIPLICATION_TRANSLATOR_H

#include "PIMInstructionGenerator.h"
#include <vector>

class MatrixMultiplicationTranslator {
public:
    std::vector<PIMInstructionGenerator::Instruction> translateMatrixMultiplication(
        const std::vector<std::vector<int>>& matrix_a,
        const std::vector<std::vector<int>>& matrix_b
    );
};

#endif // MATRIX_MULTIPLICATION_TRANSLATOR_H


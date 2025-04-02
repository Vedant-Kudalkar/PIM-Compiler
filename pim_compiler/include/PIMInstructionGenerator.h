/* PIMInstructionGenerator.h */
#ifndef PIM_INSTRUCTION_GENERATOR_H
#define PIM_INSTRUCTION_GENERATOR_H

#include <cstdint>
#include <vector>
#include <string>

class PIMInstructionGenerator {
public:
    using Instruction = uint32_t;

    Instruction createNO_OP();
    Instruction createPROG(uint8_t op_code, uint16_t address);
    Instruction createEXE(uint8_t row_id);
    Instruction createEND();

    std::string formatBinary(Instruction instr);
};

#endif // PIM_INSTRUCTION_GENERATOR_H


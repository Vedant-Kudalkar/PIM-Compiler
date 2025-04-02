/* PIMInstructionGenerator.cpp */
#include "PIMInstructionGenerator.h"
#include <bitset>

PIMInstructionGenerator::Instruction PIMInstructionGenerator::createNO_OP() {
    return 0b00 << 22;
}

PIMInstructionGenerator::Instruction PIMInstructionGenerator::createPROG(uint8_t op_code, uint16_t address) {
    return (0b01 << 22) | ((op_code & 0xFF) << 14) | (address & 0x3FFF);
}

PIMInstructionGenerator::Instruction PIMInstructionGenerator::createEXE(uint8_t row_id) {
    return (0b10 << 22) | (row_id & 0xFF);
}

PIMInstructionGenerator::Instruction PIMInstructionGenerator::createEND() {
    return 0b11 << 22;
}

std::string PIMInstructionGenerator::formatBinary(Instruction instr) {
    return std::bitset<24>(instr).to_string();
}


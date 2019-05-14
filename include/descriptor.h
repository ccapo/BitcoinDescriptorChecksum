#ifndef DESCRIPTOR_H
#define DESCRIPTOR_H

#include <iostream>
#include <inttypes.h>

uint64_t PolyMod(uint64_t c, int val);
std::string DescriptorChecksum(const std::string &str);
std::string AddChecksum(const std::string& str);

#endif
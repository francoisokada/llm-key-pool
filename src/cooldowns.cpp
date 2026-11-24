// cooldowns.cpp — part of llm-key-pool.

#include "llmkeypool/cooldowns.h"

#include <cstdio>

namespace llmkeypool {

Cooldowns::Cooldowns(const std::string& config_path)
    : config_path_(config_path) {}

void Cooldowns::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Cooldowns::run() {
    if (verbose_) std::fprintf(stderr, "[llm-key-pool] cooldowns: run\n");
    // core logic lives here
    return true;
}

}  // namespace llmkeypool

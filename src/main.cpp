// main.cpp — entry point. Wires config and subsystems together.

#include "llmkeypool/settings.h"
#include "llmkeypool/pool.h"
#include "llmkeypool/proxy.h"
#include "llmkeypool/cooldowns.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    llmkeypool::Settings settings = llmkeypool::Settings::load_default();
    llmkeypool::Pool pool(settings.store_path);
    llmkeypool::Proxy proxy(settings.store_path);
    llmkeypool::Cooldowns cooldowns(settings.store_path);
    std::fprintf(stderr, "[llm-key-pool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}

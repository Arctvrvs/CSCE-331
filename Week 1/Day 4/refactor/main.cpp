#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cerrno>
#include <cstring>

constexpr auto kInfoFilePath = "info.json";

// Reads entire file; returns empty string on error.
std::string LoadFileContents(const std::string& file_path) {
    std::ifstream file(file_path);
    if (!file) {
        std::cerr << "Error: Could not open " << file_path << ": "
                  << std::strerror(errno) << '\n';
        return {};
    }
    std::ostringstream buf;
    buf << file.rdbuf();
    return buf.str();
}

int main() {
    const std::string profile_json = LoadFileContents(kInfoFilePath);
    if (profile_json.empty()) return 1;

    std::cout << profile_json << '\n';
    return 0;
}

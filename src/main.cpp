#include <fmt/chrono.h>
#include <CLI11.hpp>
int main(int argc, char** argv) {
  CLI::App app{"Display information about a folder."};
  CLI11_PARSE(app, argc, argv);
  return 0;
}
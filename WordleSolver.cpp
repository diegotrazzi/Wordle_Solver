#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

class WordleSolver
{

private:
    std::vector<std::string> ignoreWords;
    std::vector<std::string> board;

public:
    void display(const std::vector<std::string> currentBoard)
    {
        std::cout << "[";
        for (size_t i = 0; i < currentBoard.size(); ++i)
        {
            std::cout << currentBoard[i];
            if (i < currentBoard.size() - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << "]";
    }

    void resetBoard()
    {
        board.clear();
        for (int i = 0; i < 5; ++i)
        {
            board.push_back("_");
        }
    }

    std::string getInput(std::string prompt) {
        std::cout << prompt << " ";
        std::string input;
        std::getline(std::cin, input);
        return input;
    }

    void play() {
        std::cout << getInput("Enter some text: ") << std::endl;
    }

};

int main() {
    WordleSolver solver;
    solver.play();

    return 0;
}

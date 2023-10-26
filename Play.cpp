#include "Play.h"

void Play::initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight)
{
    boardWidth = matrixWidth;

    for (int i = 0; i < numPersonas; i++)
    {
        std::tuple<int, int> rand = Assists::createRandomLoc(matrixWidth, matrixHeight);
        Persona* newPersona = new Persona(std::get<0>(rand), std::get<1>(rand));
        matrix.push_back(newPersona);
    }

    for (int i = 0; i < numSnares; i++)
    {
        std::tuple<int, int> rand = Assists::createRandomLoc(matrixWidth, matrixHeight);
        Snare* newSnare = new Snare(std::get<0>(rand), std::get<1>(rand));
        matrix.push_back(newSnare);
    }
}

void Play::playCycle(int maxCycles, double snareTriggerDistance)
{
    for (int i = 0; i < maxCycles; i++)
    {
        for (auto& s : matrix)
        {
            if(s->getCategory() == 'P')
            {
                Persona* persona = dynamic_cast<Persona*>(s);
                persona->shift(1, 0);
                for (auto& sn : matrix)
                {
                    if (sn->getCategory() == 'S' && sn->isOperative())
                    {
                        Snare* snare = dynamic_cast<Snare*>(sn);
                        if (Assists::evaluateDistance(snare->getLoc(), persona->getLoc()) <= snareTriggerDistance)
                        {
                            snare->implement(*persona);
                            break;
                        }
                    }
                }

                if (std::get<0>(persona->getLoc()) >= boardWidth && persona->getCategory() == 'P')
                {
                    std::cout << "Persona has won the game!" << std::endl;
                    return;
                }
            }
        }
    }

    std::cout << "Maximum number of cycles reached. Game over." << std::endl;
}

std::vector<Spot*> &Play::getMatrix()
{
    return matrix;
}

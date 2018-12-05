#pragma once

#include <WPILib.h>

#include "DataTypes.hpp"
#include "BlitzLogger.hpp"
#include "DriveReferences.hpp"

using namespace std;

namespace Blitz
{
    class Tank
    {
        public:
            Tank(Blitz::Models::DriveMotors *Motors,  Blitz::BlitzLogger *Logger)
            {
                this->Logger = Logger;
                this->Motors = Motors;
            }

            void SetMotorDirection(int Motor, int dir);
            void Initialize(Blitz::Models::TankInput *Input);
            void Run();
            void Close();

        private:
            Blitz::BlitzLogger *Logger;
            Blitz::Models::TankInput *InputData;
            Blitz::Models::DriveMotors *Motors;
            int MotorDirs[4] = {1, 1, 1, 1};
    };
}
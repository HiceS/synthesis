/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <WPILib.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <unistd.h>
#include "ctre/Phoenix.h"

class Robot : public frc::IterativeRobot {
    frc::Spark m_leftMotor{0};
    frc::Spark m_rightMotor{1};
    frc::DifferentialDrive m_robotDrive{m_leftMotor, m_rightMotor};
    frc::Joystick m_stick{0};
    frc::DigitalOutput dio{11};
    frc::Relay r{0};
    frc::AnalogOutput ao{1};
    frc::AnalogInput ai{0};
    ctre::phoenix::motorcontrol::can::WPI_TalonSRX talon{1};

    bool current_state = false;

public:
    void TeleopInit() {
        std::srand(std::time(nullptr));
    }

    void TeleopPeriodic() {
        double left = (std::rand() % 2000 - 1000) / 1000.0;
        double right = (std::rand()% 2000 - 1000) / 1000.0;

        m_robotDrive.TankDrive(left, right, false);

        std::cout<<"Setting left to "<<left<<" - Set to "<< m_leftMotor.GetSpeed()<<"\nSetting right to "<<right<<" - Set to "<<m_rightMotor.GetSpeed()<<"\n\n";

        dio.Set(current_state);
        r.Set(frc::Relay::Value::kForward);
        double d = (std::rand() % 5001) / 1000.0;
        ao.SetVoltage(d);
        current_state = !current_state;

        talon.Set(0.3);

        std::cout<<"AnalogInput:"<<ai.GetVoltage()<<"\n";

        usleep(45000);
    }
};

START_ROBOT_CLASS(Robot)

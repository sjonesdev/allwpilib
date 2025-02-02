// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "frc/PS4Controller.h"

#include <hal/FRCUsageReporting.h>

#include "frc/event/BooleanEvent.h"

using namespace frc;

PS4Controller::PS4Controller(int port) : GenericHID(port) {
  // re-enable when PS4Controller is added to Usage Reporting
  // HAL_Report(HALUsageReporting::kResourceType_PS4Controller, port + 1);
}

double PS4Controller::GetLeftX() const {
  return GetRawAxis(Axis::kLeftX);
}

double PS4Controller::GetRightX() const {
  return GetRawAxis(Axis::kRightX);
}

double PS4Controller::GetLeftY() const {
  return GetRawAxis(Axis::kLeftY);
}

double PS4Controller::GetRightY() const {
  return GetRawAxis(Axis::kRightY);
}

double PS4Controller::GetL2Axis() const {
  return GetRawAxis(Axis::kL2);
}

double PS4Controller::GetR2Axis() const {
  return GetRawAxis(Axis::kR2);
}

bool PS4Controller::GetSquareButton() const {
  return GetRawButton(Button::kSquare);
}

bool PS4Controller::GetSquareButtonPressed() {
  return GetRawButtonPressed(Button::kSquare);
}

bool PS4Controller::GetSquareButtonReleased() {
  return GetRawButtonReleased(Button::kSquare);
}

BooleanEvent PS4Controller::Square(EventLoop* loop) const {
  return BooleanEvent(loop, [this]() { return this->GetSquareButton(); });
}

bool PS4Controller::GetCrossButton() const {
  return GetRawButton(Button::kCross);
}

bool PS4Controller::GetCrossButtonPressed() {
  return GetRawButtonPressed(Button::kCross);
}

bool PS4Controller::GetCrossButtonReleased() {
  return GetRawButtonReleased(Button::kCross);
}

BooleanEvent PS4Controller::Cross(EventLoop* loop) const {
  return BooleanEvent(loop, [this]() { return this->GetCrossButton(); });
}

bool PS4Controller::GetCircleButton() const {
  return GetRawButton(Button::kCircle);
}

bool PS4Controller::GetCircleButtonPressed() {
  return GetRawButtonPressed(Button::kCircle);
}

bool PS4Controller::GetCircleButtonReleased() {
  return GetRawButtonReleased(Button::kCircle);
}

BooleanEvent PS4Controller::Circle(EventLoop* loop) const {
  return BooleanEvent(loop, [this]() { return this->GetCircleButton(); });
}

bool PS4Controller::GetTriangleButton() const {
  return GetRawButton(Button::kTriangle);
}

bool PS4Controller::GetTriangleButtonPressed() {
  return GetRawButtonPressed(Button::kTriangle);
}

bool PS4Controller::GetTriangleButtonReleased() {
  return GetRawButtonReleased(Button::kTriangle);
}

BooleanEvent PS4Controller::Triangle(EventLoop* loop) const {
  return BooleanEvent(loop, [this]() { return this->GetTriangleButton(); });
}

bool PS4Controller::GetL1Button() const {
  return GetRawButton(Button::kL1);
}

bool PS4Controller::GetL1ButtonPressed() {
  return GetRawButtonPressed(Button::kL1);
}

bool PS4Controller::GetL1ButtonReleased() {
  return GetRawButtonReleased(Button::kL1);
}

BooleanEvent PS4Controller::L1(EventLoop* loop) const {
  return BooleanEvent(loop, [this]() { return this->GetL1Button(); });
}

bool PS4Controller::GetR1Button() const {
  return GetRawButton(Button::kR1);
}

bool PS4Controller::GetR1ButtonPressed() {
  return GetRawButtonPressed(Button::kR1);
}

bool PS4Controller::GetR1ButtonReleased() {
  return GetRawButtonReleased(Button::kR1);
}

BooleanEvent PS4Controller::R1(EventLoop* loop) const {
  return BooleanEvent(loop, [this]() { return this->GetR1Button(); });
}

bool PS4Controller::GetL2Button() const {
  return GetRawButton(Button::kL2);
}

bool PS4Controller::GetL2ButtonPressed() {
  return GetRawButtonPressed(Button::kL2);
}

bool PS4Controller::GetL2ButtonReleased() {
  return GetRawButtonReleased(Button::kL2);
}

BooleanEvent PS4Controller::L2(EventLoop* loop) const {
  return BooleanEvent(loop, [this]() { return this->GetL2Button(); });
}

bool PS4Controller::GetR2Button() const {
  return GetRawButton(Button::kR2);
}

bool PS4Controller::GetR2ButtonPressed() {
  return GetRawButtonPressed(Button::kR2);
}

bool PS4Controller::GetR2ButtonReleased() {
  return GetRawButtonReleased(Button::kR2);
}

BooleanEvent PS4Controller::R2(EventLoop* loop) const {
  return BooleanEvent(loop, [this]() { return this->GetR2Button(); });
}

bool PS4Controller::GetShareButton() const {
  return GetRawButton(Button::kShare);
}

bool PS4Controller::GetShareButtonPressed() {
  return GetRawButtonPressed(Button::kShare);
}

bool PS4Controller::GetShareButtonReleased() {
  return GetRawButtonReleased(Button::kShare);
}

BooleanEvent PS4Controller::Share(EventLoop* loop) const {
  return BooleanEvent(loop, [this]() { return this->GetShareButton(); });
}

bool PS4Controller::GetOptionsButton() const {
  return GetRawButton(Button::kOptions);
}

bool PS4Controller::GetOptionsButtonPressed() {
  return GetRawButtonPressed(Button::kOptions);
}

bool PS4Controller::GetOptionsButtonReleased() {
  return GetRawButtonReleased(Button::kOptions);
}

BooleanEvent PS4Controller::Options(EventLoop* loop) const {
  return BooleanEvent(loop, [this]() { return this->GetOptionsButton(); });
}

bool PS4Controller::GetL3Button() const {
  return GetRawButton(Button::kL3);
}

bool PS4Controller::GetL3ButtonPressed() {
  return GetRawButtonPressed(Button::kL3);
}

bool PS4Controller::GetL3ButtonReleased() {
  return GetRawButtonReleased(Button::kL3);
}

BooleanEvent PS4Controller::L3(EventLoop* loop) const {
  return BooleanEvent(loop, [this]() { return this->GetL3Button(); });
}

bool PS4Controller::GetR3Button() const {
  return GetRawButton(Button::kR3);
}

bool PS4Controller::GetR3ButtonPressed() {
  return GetRawButtonPressed(Button::kR3);
}

bool PS4Controller::GetR3ButtonReleased() {
  return GetRawButtonReleased(Button::kR3);
}

BooleanEvent PS4Controller::R3(EventLoop* loop) const {
  return BooleanEvent(loop, [this]() { return this->GetR3Button(); });
}

bool PS4Controller::GetPSButton() const {
  return GetRawButton(Button::kPS);
}

bool PS4Controller::GetPSButtonPressed() {
  return GetRawButtonPressed(Button::kPS);
}

bool PS4Controller::GetPSButtonReleased() {
  return GetRawButtonReleased(Button::kPS);
}

BooleanEvent PS4Controller::PS(EventLoop* loop) const {
  return BooleanEvent(loop, [this]() { return this->GetPSButton(); });
}

bool PS4Controller::GetTouchpad() const {
  return GetRawButton(Button::kTouchpad);
}

bool PS4Controller::GetTouchpadPressed() {
  return GetRawButtonPressed(Button::kTouchpad);
}

bool PS4Controller::GetTouchpadReleased() {
  return GetRawButtonReleased(Button::kTouchpad);
}

BooleanEvent PS4Controller::Touchpad(EventLoop* loop) const {
  return BooleanEvent(loop, [this]() { return this->GetTouchpad(); });
}

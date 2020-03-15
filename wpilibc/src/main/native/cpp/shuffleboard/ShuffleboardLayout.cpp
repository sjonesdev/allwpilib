/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018-2019 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "frc/shuffleboard/ShuffleboardLayout.h"

using namespace frc;

ShuffleboardLayout::ShuffleboardLayout(ShuffleboardContainer& parent,
                                       const wpi::Twine& title,
                                       const wpi::Twine& type)
    : ShuffleboardValue(title),
      ShuffleboardComponent(parent, title, type),
      ShuffleboardContainer(title) {
  m_isLayout = true;
}

void ShuffleboardLayout::BuildInto(
    std::shared_ptr<nt::NetworkTable> parentTable,
    std::shared_ptr<nt::NetworkTable> metaTable) {
  BuildMetadata(metaTable);
  auto table = parentTable->GetSubTable(GetTitle());
  table->GetEntry(".type").SetString("ShuffleboardLayout");
  for (auto& component : GetComponents()) {
    component->BuildInto(table, metaTable->GetSubTable(component->GetTitle()));
  }
}

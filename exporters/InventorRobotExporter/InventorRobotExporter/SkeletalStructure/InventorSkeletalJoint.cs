﻿
namespace InventorRobotExporter.SkeletalStructure
{
    public interface InventorSkeletalJoint
    {
        SkeletalJoint GetWrapped();

        void DetermineLimits();
        void ReloadInventorJoint();
    }
}

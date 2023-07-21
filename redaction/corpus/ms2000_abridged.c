{
    ULONG i;

    RtlInitUnicodeString(&CmRegistryRootName,
                         CmpRegistryRootString);

    RtlInitUnicodeString(&CmRegistryMachineName,
                         CmpRegistryMachineString);

    RtlInitUnicodeString(&CmRegistryMachineHardwareName,
                         CmpRegistryMachineHardwareString);

    RtlInitUnicodeString(&CmRegistryMachineHardwareDescriptionName,
                         CmpRegistryMachineHardwareDescriptionString);

    RtlInitUnicodeString(&CmRegistryMachineHardwareDescriptionSystemName,
                         CmpRegistryMachineHardwareDescriptionSystemString);

    RtlInitUnicodeString(&CmRegistryMachineHardwareDeviceMapName,
                         CmpRegistryMachineHardwareDeviceMapString);

    RtlInitUnicodeString(&CmRegistryMachineHardwareResourceMapName,
                         CmpRegistryMachineHardwareResourceMapString);

// ...

    //
    // Initialize the type names for the hardware tree.
    //

    for (i = 0; i <= MaximumType; i++)
    {

        RtlInitUnicodeString(&(CmTypeName[i]),
                             CmTypeString[i]);
    }

 // ...

    return;
}
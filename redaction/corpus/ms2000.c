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

    RtlInitUnicodeString(&CmRegistryMachineHardwareOwnerMapName,
                         CmpRegistryMachineHardwareOwnerMapString);

    RtlInitUnicodeString(&CmRegistryMachineSystemName,
                         CmpRegistryMachineSystemString);

    RtlInitUnicodeString(&CmRegistryMachineSystemCurrentControlSet,
                         CmpRegistryMachineSystemCurrentControlSetString);

    RtlInitUnicodeString(&CmRegistryUserName,
                         CmpRegistryUserString);

    RtlInitUnicodeString(&CmRegistrySystemCloneName,
                         CmpRegistrySystemCloneString);

    RtlInitUnicodeString(&CmpSystemFileName,
                         CmpRegistrySystemFileNameString);

    RtlInitUnicodeString(&CmRegistryMachineSystemCurrentControlSetEnumName,
                         CmpRegistryMachineSystemCurrentControlSetEnumString);

    RtlInitUnicodeString(&CmRegistryMachineSystemCurrentControlSetEnumRootName,
                         CmpRegistryMachineSystemCurrentControlSetEnumRootString);

    RtlInitUnicodeString(&CmRegistryMachineSystemCurrentControlSetServices,
                         CmpRegistryMachineSystemCurrentControlSetServicesString);

    RtlInitUnicodeString(&CmRegistryMachineSystemCurrentControlSetHardwareProfilesCurrent,
                         CmpRegistryMachineSystemCurrentControlSetHardwareProfilesCurrentString);

    RtlInitUnicodeString(&CmRegistryMachineSystemCurrentControlSetControlClass,
                         CmpRegistryMachineSystemCurrentControlSetControlClassString);

    RtlInitUnicodeString(&CmRegistryMachineSystemCurrentControlSetControlSafeBoot,
                         CmpRegistryMachineSystemCurrentControlSetControlSafeBootString);

    RtlInitUnicodeString(&CmRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagement,
                         CmpRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagementString);

    RtlInitUnicodeString(&CmRegistryMachineSystemCurrentControlSetControlBootLog,
                         CmpRegistryMachineSystemCurrentControlSetControlBootLogString);

    RtlInitUnicodeString(&CmRegistryMachineSystemCurrentControlSetServicesEventLog,
                         CmpRegistryMachineSystemCurrentControlSetServicesEventLogString);

    RtlInitUnicodeString(&CmSymbolicLinkValueName,
                         CmpSymbolicLinkValueName);

#ifdef _WANT_MACHINE_IDENTIFICATION
    RtlInitUnicodeString(&CmRegistryMachineSystemCurrentControlSetControlBiosInfo,
                         CmpRegistryMachineSystemCurrentControlSetControlBiosInfoString);
#endif

    //
    // Initialize the type names for the hardware tree.
    //

    for (i = 0; i <= MaximumType; i++)
    {

        RtlInitUnicodeString(&(CmTypeName[i]),
                             CmTypeString[i]);
    }

    //
    // Initialize the class names for the hardware tree.
    //

    for (i = 0; i <= MaximumClass; i++)
    {

        RtlInitUnicodeString(&(CmClassName[i]),
                             CmClassString[i]);
    }

    return;
}
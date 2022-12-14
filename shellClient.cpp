bool ShellClient::RunCommand(PCWSTR command) {
    WSMAN_SHELL_STARTUP_INFO  startupInfo;
    ZeroMemory(&startupInfo, sizeof(startupInfo));
    startupInfo.idleTimeoutMs = 1000;
    startupInfo.workingDirectory = L"C:\\";
    //other parameters of startupInfo set here

    WSManCreateShell(session, 0, shellUri, &startupInfo, NULL, NULL, &createShellAsync, &shellHandle);

    return true;
}
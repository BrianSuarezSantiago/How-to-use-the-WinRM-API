int main() {
    ShellClient *shellClient = new ShellClient();

    // Set up the shell client here and connect to the localhost.
    // This seems to be working fine because I am handling every
    // possible error code, and none of them are being triggered.
    
    PCWSTR commandLine = L"\"MyExampleExecutable.exe\"";
    isOk = shellClient->RunCommand(commandLine);
    
    if(!isOk) {
        return 1;
    }
    return 0;   
}
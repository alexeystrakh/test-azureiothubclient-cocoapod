# test-azureiothubclient-cocoapod

Unable to build a project when pod AzureIoTHubClient added

```bash
testIoTHubFramework/Pods/AzureIoTUtility/src/azure_base32.c:7:10: 'azure_c_shared_utility/buffer_.h' file not found
testIoTHubFramework/Pods/AzureIoTUtility/src/buffer.c:7:10: 'azure_c_shared_utility/gballoc.h' file not found
testIoTHubFramework/Pods/AzureIoTUtility/src/connection_string_parser.c:5:10: 'azure_c_shared_utility/connection_string_parser.h' file not found
testIoTHubFramework/Pods/AzureIoTUtility/src/azure_base64.c:6:10: 'azure_c_shared_utility/gballoc.h' file not found
testIoTHubFramework/Pods/AzureIoTUtility/pal/agenttime.c:4:10: 'azure_c_shared_utility/gballoc.h' file not found
```

![Build Issues](/SolutionItems/build.issues.png "Unable to build")

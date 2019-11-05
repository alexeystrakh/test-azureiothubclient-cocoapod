# test-azureiothubclient-cocoapod

## Summary

I'm trying to create a fremwork which depends on the [AzureIoTHubClient](https://cocoapods.org/pods/AzureIoTHubClient) pod. This repository contains an empty ObjectiveC fremwork with initialized pod workspace. Once the `AzureIoTHubClient` is added, the Xcode project is no longer compilible:

```bash
testIoTHubFramework/Pods/AzureIoTUtility/src/azure_base32.c:7:10: 'azure_c_shared_utility/buffer_.h' file not found
testIoTHubFramework/Pods/AzureIoTUtility/src/buffer.c:7:10: 'azure_c_shared_utility/gballoc.h' file not found
testIoTHubFramework/Pods/AzureIoTUtility/src/connection_string_parser.c:5:10: 'azure_c_shared_utility/connection_string_parser.h' file not found
testIoTHubFramework/Pods/AzureIoTUtility/src/azure_base64.c:6:10: 'azure_c_shared_utility/gballoc.h' file not found
testIoTHubFramework/Pods/AzureIoTUtility/pal/agenttime.c:4:10: 'azure_c_shared_utility/gballoc.h' file not found
```

## Xcode screenshots

![Build Issues](/SolutionItems/build.issues.png "Unable to build")

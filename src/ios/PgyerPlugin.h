#import <Cordova/CDV.h>

@interface PgyerPlugin : CDVPlugin
-(void)checkUpdate:(CDVInvokedUrlCommand *)command;
-(void)showFeedback:(CDVInvokedUrlCommand *)command;
-(void)crashRegister:(CDVInvokedUrlCommand *)command;
@end


//
//  PreferencePaneWindowController.h
//  HHKBAssistant
//
//  Created by 周 涵 on 2014/05/05.
//  Copyright (c) 2014年 hanks. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#define XIBNAME @"prefpane"

// define data source operation deleaget
@protocol DataSourceDelegate <NSObject>

- (void) addDevice:(NSString *)deviceName;
- (void) removeDevice:(NSString *)deviceName;

- (NSMutableArray*) getDeviceArr;

- (BOOL) isAutoDisable;
- (void) setAutoDisable:(BOOL)flag;

- (BOOL) isEnableVoice;
- (void) setEnableVoice:(BOOL)flag;

- (BOOL) isInMsgEnable;
- (void) setInMsgEnable:(BOOL)flag;

- (BOOL) isOutMsgEnable;
- (void) setOutMsgEnable:(BOOL)flag;

- (NSString *) getInMsg;
- (void) setInMsg:(NSString *)msg;

- (NSString *) getOutMsg;
- (void) setOutMsg:(NSString *)msg;

@end

@interface PreferencePaneWindowController : NSWindowController

@property (strong) IBOutlet NSWindow *myWindow;

// delegate for plist data source
@property (nonatomic, assign) id<DataSourceDelegate>  delegate;

@property (weak) IBOutlet NSButton *autoDisableCheckbox;
@property (weak) IBOutlet NSButton *enableVoiceCheckbox;
@property (weak) IBOutlet NSButton *inMsgCheckbox;
@property (weak) IBOutlet NSButton *outMsgCheckbox;
@property (weak) IBOutlet NSTextField *inMsgTextField;
@property (weak) IBOutlet NSTextField *outMsgTextField;

@end

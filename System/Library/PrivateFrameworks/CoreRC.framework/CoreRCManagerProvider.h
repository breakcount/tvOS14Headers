/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreRCManager.h>
#import <CoreRC/CoreRCInterfaceControllerDelegate.h>

@class CoreCECOverride, NSArray, CoreRCInterfaceController, NSString;

@interface CoreRCManagerProvider : CoreRCManager <CoreRCInterfaceControllerDelegate> {

	CoreCECOverride* _standardOverride;
	NSArray* _pluginOverrides;
	CoreRCInterfaceController* _interfaceController;

}

@property (nonatomic,retain) CoreCECOverride * standardOverride;                             //@synthesize standardOverride=_standardOverride - In the implementation block
@property (nonatomic,retain) NSArray * pluginOverrides;                                      //@synthesize pluginOverrides=_pluginOverrides - In the implementation block
@property (nonatomic,readonly) CoreRCInterfaceController * interfaceController;              //@synthesize interfaceController=_interfaceController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithSerialQueue:(id)arg1 ;
-(id)addDeviceWithBus:(id)arg1 logicalAddress:(unsigned char)arg2 physicalAddress:(unsigned long long)arg3 attributes:(id)arg4 message:(id)arg5 reason:(unsigned long long)arg6 ;
-(void)setStandardOverride:(CoreCECOverride *)arg1 ;
-(NSArray *)pluginOverrides;
-(CoreCECOverride *)standardOverride;
-(void)initCECOverrides;
-(id)initWithSerialQueue:(id)arg1 withoutPlugins:(BOOL)arg2 ;
-(void)initOverrides;
-(id)createRCOverrideFromPaths:(id)arg1 ;
-(void)setPluginOverrides:(NSArray *)arg1 ;
-(id)addDeviceWithBus:(id)arg1 transportProperties:(id)arg2 error:(id*)arg3 ;
-(void)interfaceController:(id)arg1 didAddInterface:(id)arg2 ;
-(void)interfaceController:(id)arg1 didRemoveInterface:(id)arg2 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 error:(id*)arg4 ;
-(id)propertyForKey:(id)arg1 ofBus:(id)arg2 error:(id*)arg3 ;
-(BOOL)setExtendedProperty:(id)arg1 forKey:(id)arg2 ofDevice:(id)arg3 error:(id*)arg4 ;
-(id)extendedPropertyForKey:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3 ;
-(CoreRCInterfaceController *)interfaceController;
@end


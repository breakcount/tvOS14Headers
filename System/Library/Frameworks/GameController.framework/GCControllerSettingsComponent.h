/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GCControllerSettings;


@protocol GCControllerSettingsComponent <GCControllerComponent>
@property (nonatomic,copy) id changedHandler; 
@property (nonatomic,readonly) GCControllerSettings * settingsForBundleID; 
@property (nonatomic,readonly) GCControllerSettings * settingsDefault; 
@required
-(id)changedHandler;
-(void)setChangedHandler:(/*^block*/id)arg1;
-(GCControllerSettings *)settingsForBundleID;
-(GCControllerSettings *)settingsDefault;

@end


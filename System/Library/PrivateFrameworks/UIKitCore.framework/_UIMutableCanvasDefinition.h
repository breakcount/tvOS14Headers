/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICanvasDefinition.h>

@class UISceneSession;

@interface _UIMutableCanvasDefinition : _UICanvasDefinition {

	UISceneSession* _sceneSession;

}

@property (nonatomic,retain) Class canvasSubclass; 
@property (nonatomic,retain) Class delegateClass; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)userInfo;
-(id)configuration;
-(void)setUserInfo:(id)arg1 ;
-(id)persistentIdentifier;
-(id)scene;
-(id)role;
-(long long)systemType;
-(id)initWithRepresentation:(id)arg1 ;
-(Class)delegateClass;
-(void)setDelegateClass:(Class)arg1 ;
-(id)stateRestorationActivity;
-(id)representedCanvas;
-(Class)canvasSubclass;
-(void)setCanvasSubclass:(Class)arg1 ;
@end

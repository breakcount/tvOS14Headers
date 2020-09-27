/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSBasicSceneAgent.h>
#import <libobjc.A.dylib/FBSSceneClientAgent.h>

@class NSString;

@interface FBSBasicSceneClientAgent : FBSBasicSceneAgent <FBSSceneClientAgent>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scene:(id)arg1 didInitializeWithEvent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)scene:(id)arg1 willInvalidateWithEvent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)scene:(id)arg1 handleEvent:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

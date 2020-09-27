/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class FBSSceneMessage, NSString;

@interface FBSWorkspaceResponse : NSObject <BSXPCCoding> {

	FBSSceneMessage* _message;

}

@property (nonatomic,copy) FBSSceneMessage * message;               //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(FBSSceneMessage *)message;
-(void)setMessage:(FBSSceneMessage *)arg1 ;
@end


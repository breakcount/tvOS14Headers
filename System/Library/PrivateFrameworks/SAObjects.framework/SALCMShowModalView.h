/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAAceView;

@interface SALCMShowModalView : SABaseClientBoundCommand

@property (nonatomic,retain) SAAceView * view; 
+(id)showModalView;
+(id)showModalViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAAceView *)view;
-(void)setView:(SAAceView *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrivateFederatedLearning/GPBMessage.h>

@class NSString, GPBStruct, GPBListValue;

@interface GPBValue : GPBMessage

@property (nonatomic,readonly) int kindOneOfCase; 
@property (assign,nonatomic) int nullValue; 
@property (assign,nonatomic) double numberValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (assign,nonatomic) BOOL boolValue; 
@property (nonatomic,retain) GPBStruct * structValue; 
@property (nonatomic,retain) GPBListValue * listValue; 
+(id)descriptor;
@end


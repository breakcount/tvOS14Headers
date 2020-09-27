/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATException.h>

@class NSNumber, NSString;

@interface EDAMUserException : FATException {

	NSNumber* _errorCode;
	NSString* _parameter;

}

@property (nonatomic,retain) NSNumber * errorCode;              //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,retain) NSString * parameter;              //@synthesize parameter=_parameter - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(NSNumber *)errorCode;
-(NSString *)parameter;
-(void)setParameter:(NSString *)arg1 ;
@end


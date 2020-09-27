/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SALocation, NSString;

@interface SARecordLocationActivity : SABaseClientBoundCommand

@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * sourceType; 
-(id)groupIdentifier;
-(NSString *)sourceType;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(void)setSourceType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end


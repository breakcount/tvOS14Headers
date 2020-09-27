/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAUIColor : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * alpha; 
@property (assign,nonatomic) long long blueValue; 
@property (assign,nonatomic) long long greenValue; 
@property (assign,nonatomic) long long redValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)color;
+(id)colorWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)alpha;
-(void)setAlpha:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(long long)blueValue;
-(void)setBlueValue:(long long)arg1 ;
-(long long)greenValue;
-(void)setGreenValue:(long long)arg1 ;
-(long long)redValue;
-(void)setRedValue:(long long)arg1 ;
@end


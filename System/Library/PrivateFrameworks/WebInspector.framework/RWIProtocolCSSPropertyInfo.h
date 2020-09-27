/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolCSSPropertyInfo : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * aliases; 
@property (nonatomic,copy) NSArray * longhands; 
@property (nonatomic,copy) NSArray * values; 
@property (assign,nonatomic) BOOL inherited; 
-(NSString *)name;
-(NSArray *)values;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)aliases;
-(void)setAliases:(NSArray *)arg1 ;
-(BOOL)inherited;
-(void)setInherited:(BOOL)arg1 ;
-(void)setLonghands:(NSArray *)arg1 ;
-(NSArray *)longhands;
@end


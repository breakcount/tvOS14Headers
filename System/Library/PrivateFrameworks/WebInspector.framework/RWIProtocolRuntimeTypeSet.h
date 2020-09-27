/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolRuntimeTypeSet : RWIProtocolJSONObject

@property (assign,nonatomic) BOOL isFunction; 
@property (assign,nonatomic) BOOL isUndefined; 
@property (assign,nonatomic) BOOL isNull; 
@property (assign,nonatomic) BOOL isBoolean; 
@property (assign,nonatomic) BOOL isInteger; 
@property (assign,nonatomic) BOOL isNumber; 
@property (assign,nonatomic) BOOL isString; 
@property (assign,nonatomic) BOOL isObject; 
@property (assign,nonatomic) BOOL isSymbol; 
@property (assign,nonatomic) BOOL isBigInt; 
-(BOOL)isNumber;
-(BOOL)isObject;
-(BOOL)isBoolean;
-(BOOL)isUndefined;
-(BOOL)isNull;
-(BOOL)isString;
-(BOOL)isSymbol;
-(BOOL)isInteger;
-(void)setIsFunction:(BOOL)arg1 ;
-(void)setIsUndefined:(BOOL)arg1 ;
-(void)setIsNull:(BOOL)arg1 ;
-(void)setIsBoolean:(BOOL)arg1 ;
-(void)setIsInteger:(BOOL)arg1 ;
-(void)setIsNumber:(BOOL)arg1 ;
-(void)setIsString:(BOOL)arg1 ;
-(void)setIsObject:(BOOL)arg1 ;
-(void)setIsSymbol:(BOOL)arg1 ;
-(void)setIsBigInt:(BOOL)arg1 ;
-(id)initWithIsFunction:(BOOL)arg1 isUndefined:(BOOL)arg2 isNull:(BOOL)arg3 isBoolean:(BOOL)arg4 isInteger:(BOOL)arg5 isNumber:(BOOL)arg6 isString:(BOOL)arg7 isObject:(BOOL)arg8 isSymbol:(BOOL)arg9 isBigInt:(BOOL)arg10 ;
-(BOOL)isFunction;
-(BOOL)isBigInt;
@end


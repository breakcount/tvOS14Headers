/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeTypeSet, NSArray;

@interface RWIProtocolRuntimeTypeDescription : RWIProtocolJSONObject

@property (assign,nonatomic) BOOL isValid; 
@property (nonatomic,copy) NSString * leastCommonAncestor; 
@property (nonatomic,retain) RWIProtocolRuntimeTypeSet * typeSet; 
@property (nonatomic,copy) NSArray * structures; 
@property (assign,nonatomic) BOOL isTruncated; 
-(BOOL)isValid;
-(BOOL)isTruncated;
-(void)setIsValid:(BOOL)arg1 ;
-(id)initWithIsValid:(BOOL)arg1 ;
-(void)setLeastCommonAncestor:(NSString *)arg1 ;
-(NSString *)leastCommonAncestor;
-(void)setTypeSet:(RWIProtocolRuntimeTypeSet *)arg1 ;
-(RWIProtocolRuntimeTypeSet *)typeSet;
-(void)setStructures:(NSArray *)arg1 ;
-(NSArray *)structures;
-(void)setIsTruncated:(BOOL)arg1 ;
@end


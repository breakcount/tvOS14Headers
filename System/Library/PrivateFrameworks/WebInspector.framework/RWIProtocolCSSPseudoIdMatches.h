/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray;

@interface RWIProtocolCSSPseudoIdMatches : RWIProtocolJSONObject

@property (assign,nonatomic) long long pseudoId; 
@property (nonatomic,copy) NSArray * matches; 
-(NSArray *)matches;
-(void)setMatches:(NSArray *)arg1 ;
-(void)setPseudoId:(long long)arg1 ;
-(id)initWithPseudoId:(long long)arg1 matches:(id)arg2 ;
-(long long)pseudoId;
@end

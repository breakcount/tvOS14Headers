/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NLP/NLParsecNamedEntity.h>

@class NSString, NLPOIEntryImpl;

@interface NLPOIEntry : NSObject <NLParsecNamedEntity> {

	NLPOIEntryImpl* m_impl;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned char category; 
@property (nonatomic,readonly) float score; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(void)dealloc;
-(unsigned char)category;
-(float)score;
-(id)initWithProtoBuf:(id)arg1 ;
@end

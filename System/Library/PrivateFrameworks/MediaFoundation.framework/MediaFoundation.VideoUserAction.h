/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFUserAction.h>

@class NSString, NSDictionary;

@interface MediaFoundation.VideoUserAction : _UKNOWN_SUPERCLASS_ <MFUserAction> {

	 identifier;
	 type;
	 timeStamp;
	 options;
	 source;
	 sourceID;

}

@property (copy,nonatomic) NSString * identifier; 
@property (assign,nonatomic) long long type; 
@property (retain,nonatomic) id<MFTimeStamp> timeStamp; 
@property (copy,nonatomic) NSDictionary * options; 
@property (assign,nonatomic) long long source; 
@property (copy,nonatomic) NSString * sourceID; 
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)identifier;
-(long long)source;
-(void)setSource:(long long)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id<MFTimeStamp>)timeStamp;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(void)setTimeStamp:(id<MFTimeStamp>)arg1 ;
@end


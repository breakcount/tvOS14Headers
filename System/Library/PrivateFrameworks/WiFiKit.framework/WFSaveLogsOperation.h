/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WFOperation.h>

@class NSString;

@interface WFSaveLogsOperation : WFOperation {

	NSString* _comments;

}

@property (nonatomic,copy) NSString * comments;              //@synthesize comments=_comments - In the implementation block
-(void)start;
-(NSString *)comments;
-(void)setComments:(NSString *)arg1 ;
-(id)initWithComments:(id)arg1 ;
@end


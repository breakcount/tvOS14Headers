/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class NSOrderedSet, NSString;

@interface PKDashboardPassMessages : NSObject <PKDashboardItem> {

	NSOrderedSet* _messages;

}

@property (nonatomic,retain) NSOrderedSet * messages;               //@synthesize messages=_messages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(NSOrderedSet *)messages;
-(void)setMessages:(NSOrderedSet *)arg1 ;
@end


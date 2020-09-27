/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol SAClientBoundCommand <SAAceCommand,SAAceReferable>
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@required
-(NSArray *)callbacks;
-(void)setAppId:(id)arg1;
-(NSString *)appId;
-(BOOL)requiresResponse;
-(void)setCallbacks:(id)arg1;

@end


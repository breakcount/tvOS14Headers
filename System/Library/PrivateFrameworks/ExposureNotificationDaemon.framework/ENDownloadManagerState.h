/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:44:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface ENDownloadManagerState : NSObject <NSSecureCoding> {

	NSDictionary* _statesByURL;

}

@property (nonatomic,copy,readonly) NSArray * endpoints; 
@property (nonatomic,copy,readonly) NSArray * endpointStates; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)endpoints;
-(void)setEndpoints:(NSArray *)arg1 ;
-(NSArray *)endpointStates;
-(id)stateForServerBaseURL:(id)arg1 ;
@end


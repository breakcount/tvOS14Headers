/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAMovieResolution, NSURL, NSString;

@interface SAMovieImage : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAMovieResolution * resolution; 
@property (nonatomic,copy) NSURL * uri; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)image;
+(id)imageWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAMovieResolution *)resolution;
-(void)setResolution:(SAMovieResolution *)arg1 ;
-(NSURL *)uri;
-(void)setUri:(NSURL *)arg1 ;
-(id)encodedClassName;
@end


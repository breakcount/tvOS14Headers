/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SALocalSearchMapViewport : SADomainObject

@property (assign,nonatomic) double eastLongitude; 
@property (assign,nonatomic) double northLatitude; 
@property (assign,nonatomic) double southLatitude; 
@property (assign,nonatomic) double timeInSecondsSinceViewportChanged; 
@property (assign,nonatomic) double timeInSecondsSinceViewportEnteredForeground; 
@property (nonatomic,copy) NSArray * vertices; 
@property (assign,nonatomic) double westLongitude; 
+(id)mapViewport;
+(id)mapViewportWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)vertices;
-(id)encodedClassName;
-(double)eastLongitude;
-(void)setEastLongitude:(double)arg1 ;
-(double)northLatitude;
-(void)setNorthLatitude:(double)arg1 ;
-(double)southLatitude;
-(void)setSouthLatitude:(double)arg1 ;
-(double)timeInSecondsSinceViewportChanged;
-(void)setTimeInSecondsSinceViewportChanged:(double)arg1 ;
-(double)timeInSecondsSinceViewportEnteredForeground;
-(void)setTimeInSecondsSinceViewportEnteredForeground:(double)arg1 ;
-(void)setVertices:(NSArray *)arg1 ;
-(double)westLongitude;
-(void)setWestLongitude:(double)arg1 ;
@end


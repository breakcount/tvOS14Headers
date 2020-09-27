/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKTableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UIStackView, UIImageView, NSString;

@interface MKIncidentExtendedDetailCell : MKTableViewCell <UITextViewDelegate> {

	UIStackView* _stackView;
	UIImageView* _imageView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_setConstraints;
-(id)aggregatedDetailsFor:(id)arg1 ;
-(id)customBodyTextView;
-(void)configureWithIncident:(id)arg1 ;
-(void)configureWithNotice:(id)arg1 ;
@end


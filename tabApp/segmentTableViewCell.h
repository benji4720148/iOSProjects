//
//  segmentTableViewCell.h
//  tabApp
//
//  Created by Benjamine Mutebi on 2/26/15.
//  Copyright (c) 2015 Benjamine Mutebi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface segmentTableViewCell : UITableViewCell {
    
    IBOutlet UISegmentedControl *mysegment;
    IBOutlet UILabel * mylabel;
}

-(IBAction)changeSegment;




@end

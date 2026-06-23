/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * };
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        if (intervals.empty()) return true;

        // Step 1: Sort meetings chronologically by their start times
        sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
            return a.start < b.start;
        });

        // Step 2: Check if any meeting starts before the previous one ends
        int preEnd = intervals[0].end;
        for (int i = 1; i < intervals.size(); i++) {
            int s = intervals[i].start;
            int e = intervals[i].end;
            
            if (s < preEnd) {
                return false; // Found an overlap
            }
            preEnd = e; // Update the end time anchor
        }
        return true;
    }
};

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rect1, vector<int>& rect2) {
        int fx1=rect1[0];
        int fx2=rect1[2];
        int fy1=rect1[1];
        int fy2=rect1[3];

        int sx1=rect2[0];
        int sx2=rect2[2];
        int sy1=rect2[1];
        int sy2=rect2[3];

        return !((sy1>=fy2) ||
               (fy1>=sy2) ||
               (fx1>=sx2) ||
               (fx2<=sx1));
    }
};


//Line 1-11: Ye code ek class Solution ko define karta hai, jisme ek function isRectangleOverlap hai.

/*Line 3-10: isRectangleOverlap ek vector rect1 aur rect2 lekar ye check karta hai ki do rectangles ek dusre se overlap kar rahe hain ya nahi.

Line 3-6: rect1 ke coordinates ko fx1, fx2, fy1, fy2 me store kiya gaya hai.

Line 8-11: rect2 ke coordinates ko sx1, sx2, sy1, sy2 me store kiya gaya hai.

Line 13-15: Ye ek boolean value return karta hai. ! operator se true ko false me aur false ko true me convert kiya gaya hai.
 Matlab, agar rectangles overlap kar rahe hain toh ye true return karega, warna false.

Line 16-21: Overlap check karne ke liye, rectangles ke coordinates ko compare kiya gaya hai. Agar koi ek rectangle 
doosre se overlap kar raha hai toh condition true hogi, aur overall return statement true hoga.*/
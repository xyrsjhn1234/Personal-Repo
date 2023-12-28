// circle - object
// If object has multiple method, it's called behavior
// 3 members - radius, location, draw
// Members is called properties
const circle = 
{
    radius: 1,
    location:
    {
        x: 1,
        y: 1
    },
    // Draw is a "Method"
    draw: function()
    {
        console.log("draw");
    }
};

circle.draw();
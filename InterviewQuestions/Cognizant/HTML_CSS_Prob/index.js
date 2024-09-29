var followBtn = document.getElementById("follow-btn");
var followStatus = document.getElementById("follow-status");

followBtn.addEventListener("click", function () {
  if (followBtn.innerHTML === "Follow") {
    followBtn.innerHTML = "Unfollow";
    followStatus.classList.remove("hidden");
    followStatus.classList.add("show");
    followBtn.classList.add("unfollow");
  } else {
    followBtn.innerHTML = "Follow";
    followStatus.classList.remove("show");
    followStatus.classList.add("hidden");
    followBtn.classList.remove("unfollow");
  }
});

import Link from "next/link";

const Header = () => {
  return (
    <div className="flex flex-col w-screen text-6xl text-white font-caveat bg-green-900 text-center tracking-wider">
      <Link href="/" target="_blank">
        ColorForKids
      </Link>
    </div>
  );
};

export default Header;

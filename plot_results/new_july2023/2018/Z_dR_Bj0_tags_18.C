void Z_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_18/Z_dR_Bj0_tags_18
//=========  (Fri Jul 14 13:38:02 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_18 = new TCanvas("Z_dR_Bj0_tags_18", "Z_dR_Bj0_tags_18",0,0,600,600);
   Z_dR_Bj0_tags_18->SetHighLightColor(2);
   Z_dR_Bj0_tags_18->Range(0,0,1,1);
   Z_dR_Bj0_tags_18->SetFillColor(0);
   Z_dR_Bj0_tags_18->SetFillStyle(4000);
   Z_dR_Bj0_tags_18->SetBorderMode(0);
   Z_dR_Bj0_tags_18->SetBorderSize(2);
   Z_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1268.61,6.314516,1267351);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(1086180);
   
   TH1F *st_stack_51 = new TH1F("st_stack_51","",30,0,6);
   st_stack_51->SetMinimum(0.01);
   st_stack_51->SetMaximum(1140489);
   st_stack_51->SetDirectory(0);
   st_stack_51->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_51->SetLineColor(ci);
   st_stack_51->GetXaxis()->SetRange(1,30);
   st_stack_51->GetXaxis()->SetLabelFont(42);
   st_stack_51->GetXaxis()->SetLabelSize(0.035);
   st_stack_51->GetXaxis()->SetTitleSize(0.035);
   st_stack_51->GetXaxis()->SetTitleFont(42);
   st_stack_51->GetYaxis()->SetTitle("Events/0.2");
   st_stack_51->GetYaxis()->SetLabelFont(42);
   st_stack_51->GetYaxis()->SetLabelSize(0.05);
   st_stack_51->GetYaxis()->SetTitleSize(0.057);
   st_stack_51->GetYaxis()->SetTitleOffset(1.2);
   st_stack_51->GetYaxis()->SetTitleFont(42);
   st_stack_51->GetZaxis()->SetLabelFont(42);
   st_stack_51->GetZaxis()->SetLabelSize(0.035);
   st_stack_51->GetZaxis()->SetTitleSize(0.035);
   st_stack_51->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_51);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,90272.55);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,320824.1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,253340.7);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,179436.7);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,135033.5);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,101115.7);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,84115.33);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,66282.76);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,54543.25);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,46320.15);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,41305.39);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,40230.82);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,38758.63);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,32865.42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,29939.19);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,30443.45);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,19865.3);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,17179.01);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,15148.94);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,10580.23);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,12226.43);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,9142.532);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,7859.558);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,7073.279);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,5724.422);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,4902.477);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,2662.367);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(28,4259.468);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,1126.708);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(30,684.0353);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(31,833.1455);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,2340.313);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,6552.046);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,6005.693);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,5392.932);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,4676.081);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,4401.914);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,4602.328);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,3731.551);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,2672.711);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,2396.485);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,2756.186);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,2303.309);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,2809.014);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,2094.214);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,1946.098);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,2239.727);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,2154.277);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,1406.651);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,1357.123);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,922.4466);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,1246.283);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,974.8301);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,961.9492);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,949.2104);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,809.3049);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,1709.11);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,392.3044);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(28,1802.413);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,361.0716);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(30,119.2631);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(31,356.333);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(155876);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,364.8723);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,1967.703);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,2504.779);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,2344.665);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,1943.528);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,1608.221);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,1343.96);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,1162.513);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,978.0524);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,855.9285);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,774.7516);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,705.0093);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,630.605);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,552.2713);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,492.2411);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,409.8932);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,338.1533);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,292.29);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,235.5093);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,186.2564);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,161.7808);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,124.0463);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,96.64401);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,71.16946);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,55.0762);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,41.17418);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,28.38255);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,19.94469);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,13.55243);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(30,10.40356);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(31,15.37526);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,8.003164);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,18.05375);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,20.30352);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,19.78481);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,17.86881);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,16.30559);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,14.93768);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,13.92922);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,12.72128);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,11.83283);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,11.26105);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,10.78516);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,10.14014);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,9.522407);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,9.054729);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,8.257915);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,7.503033);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,6.994076);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,6.299451);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,5.578316);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,5.350733);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,4.657758);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,4.077509);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,3.553516);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,3.05877);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,2.749706);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,2.25108);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,1.973007);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,1.530028);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(30,1.43078);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(31,1.744294);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(222347);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(1,3777.853);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(2,26648.78);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(3,41858.25);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(4,42371.76);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(5,36411.3);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(6,29251.88);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(7,23840.26);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(8,19897.73);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(9,17419.77);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(10,15716.24);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(11,14485.06);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(12,13341.31);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(13,11915.24);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(14,10330.45);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(15,8766.504);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(16,7342.917);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(17,5995.305);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(18,4796.055);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(19,3830.984);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(20,3006.121);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(21,2327.963);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(22,1733.863);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(23,1294.537);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(24,948.2756);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(25,667.0738);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(26,459.4223);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(27,307.7998);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(28,191.6248);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(29,128.0022);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(30,81.73581);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(31,135.5679);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(1,15.3288);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(2,40.72629);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(3,51.15762);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(4,51.52922);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(5,47.78611);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(6,42.8147);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(7,38.65007);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(8,35.3092);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(9,33.05009);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(10,31.39481);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(11,30.16114);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(12,28.95861);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(13,27.36432);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(14,25.47757);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(15,23.46515);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(16,21.46777);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(17,19.39719);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(18,17.33519);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(19,15.48979);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(20,13.71393);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(21,12.06073);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(22,10.4063);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(23,8.987367);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(24,7.680781);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(25,6.438906);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(26,5.338401);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(27,4.371326);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(28,3.448901);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(29,2.813244);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(30,2.248446);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(31,2.895982);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetEntries(5745643);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(1,767.0107);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(2,2584.05);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(3,2493.504);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(4,1674.714);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(5,1021.42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(6,755.9589);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(7,564.0168);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(8,470.7556);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(9,397.7545);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(10,370.8261);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(11,324.0571);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(12,275.4362);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(13,261.5574);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(14,233.1908);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(15,216.2294);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(16,194.461);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(17,169.9653);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(18,152.468);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(19,138.5679);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(20,124.2065);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(21,86.48885);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(22,74.53322);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(23,66.48986);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(24,56.5018);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(25,46.35823);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(26,32.52666);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(27,20.63241);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(28,15.14135);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(29,7.236178);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(30,4.577258);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(31,5.424967);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(1,10.83405);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(2,31.22835);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(3,32.26161);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(4,28.81992);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(5,24.20044);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(6,21.27219);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(7,16.14605);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(8,13.78557);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(9,12.96631);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(10,13.29239);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(11,10.1493);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(12,11.38648);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(13,9.388136);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(14,10.94092);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(15,10.07393);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(16,9.048594);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(17,8.603669);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(18,9.271972);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(19,9.893279);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(20,8.82365);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(21,4.689894);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(22,4.334848);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(23,3.962085);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(24,5.405664);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(25,3.328511);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(26,2.610211);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(27,1.915457);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(28,1.859395);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(29,1.141431);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(30,0.9196321);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(31,1.073266);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetEntries(86588);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(1,515.6159);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(2,1341.964);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(3,1110.595);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(4,729.1337);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(5,551.7164);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(6,423.0525);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(7,330.6421);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(8,280.0419);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(9,223.0431);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(10,187.576);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(11,214.3135);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(12,189.1715);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(13,123.7478);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(14,122.9126);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(15,138.0248);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(16,127.916);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(17,86.48546);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(18,71.06963);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(19,76.83934);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(20,54.79123);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(21,66.97543);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(22,47.02115);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(23,31.56006);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(24,34.74689);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(25,22.598);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(26,16.3468);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(27,17.22873);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(28,12.74896);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(29,3.064967);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(30,1.446422);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(31,2.659172);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(1,25.50459);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(2,37.5243);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(3,37.83309);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(4,32.00053);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(5,29.65065);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(6,24.39301);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(7,23.63122);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(8,21.04099);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(9,19.57887);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(10,12.18704);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(11,17.85964);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(12,19.10181);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(13,8.697153);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(14,10.32411);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(15,14.89985);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(16,17.68464);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(17,8.31701);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(18,7.055089);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(19,12.91835);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(20,5.844192);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(21,7.855055);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(22,6.678344);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(23,3.755373);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(24,5.166977);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(25,4.447671);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(26,3.288529);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(27,3.885925);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(28,3.772644);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(29,0.7071944);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(30,0.461334);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(31,0.7061845);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetEntries(38399);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(1,1.445242);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(2,7.804305);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(3,5.491919);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(4,3.179532);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(5,2.023338);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(6,2.890483);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(7,2.312387);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(8,3.179532);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(9,1.445242);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(10,2.023338);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(11,1.73429);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(12,1.156193);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(13,1.156193);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(14,1.156193);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(15,1.445242);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(16,0.2890483);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(17,0.2890483);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(18,1.156193);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(19,0.2890483);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(22,0.5780967);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(23,0.5780967);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(1,0.6463317);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(2,1.501939);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(3,1.259933);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(4,0.9586649);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(5,0.76475);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(6,0.9140511);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(7,0.8175522);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(8,0.9586649);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(9,0.6463317);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(10,0.76475);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(11,0.708021);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(12,0.5780967);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(13,0.5780967);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(14,0.5780967);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(15,0.6463317);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(16,0.2890483);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(17,0.2890483);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(18,0.5780967);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(19,0.2890483);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(22,0.4087761);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(23,0.4087761);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetEntries(144);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(1,9.537206);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(2,29.44094);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(3,21.14772);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(4,13.68382);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(5,5.183264);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(6,1.451314);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(7,3.317289);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(8,2.280636);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(9,2.487967);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(10,3.317289);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(11,2.487967);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(12,1.451314);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(13,1.451314);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(14,0.6219917);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(15,1.243983);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(16,0.6219917);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(17,0.8293223);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(18,0.6219917);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(19,0.8293223);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(20,0.6219917);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(21,0.8293223);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(22,0.4146611);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(24,1.243983);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(25,0.2073306);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(26,0.6219917);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(27,0.2073306);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(1,1.406184);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(2,2.470629);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(3,2.093936);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(4,1.684361);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(5,1.036653);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(6,0.5485451);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(7,0.8293223);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(8,0.6876377);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(9,0.7182142);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(10,0.8293223);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(11,0.7182142);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(12,0.5485451);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(13,0.5485451);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(14,0.3591071);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(15,0.5078541);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(16,0.3591071);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(17,0.4146611);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(18,0.3591071);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(19,0.4146611);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(20,0.3591071);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(21,0.4146611);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(22,0.2932097);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(24,0.5078541);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(25,0.2073306);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(26,0.3591071);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(27,0.2073306);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetEntries(512);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(1,6.800945);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(2,20.81501);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(3,21.0211);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(4,14.42625);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(5,7.625302);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(6,5.770499);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(7,4.327874);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(8,3.297428);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(9,3.297428);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(10,3.091339);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(11,2.266982);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(12,1.854803);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(13,1.236536);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(14,0.824357);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(15,0.6182678);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(16,0.824357);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(17,1.648714);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(18,1.030446);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(19,1.236536);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(20,0.2060893);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(21,0.6182678);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(22,1.236536);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(23,0.4121785);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(24,0.2060893);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(25,0.2060893);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(1,1.183893);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(2,2.071171);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(3,2.081399);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(4,1.724266);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(5,1.253592);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(6,1.090522);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(7,0.9444196);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(8,0.824357);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(9,0.824357);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(10,0.7981802);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(11,0.6835207);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(12,0.6182678);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(13,0.5048135);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(14,0.4121785);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(15,0.3569571);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(16,0.4121785);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(17,0.5829084);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(18,0.4608296);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(19,0.5048135);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(20,0.2060893);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(21,0.3569571);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(22,0.5048135);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(23,0.2914542);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(24,0.2060893);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(25,0.2060893);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetEntries(509);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(1,2.630931);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(2,12.24263);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(3,13.86096);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(4,10.96945);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(5,7.19106);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(6,4.729276);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(7,3.366952);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(8,2.505213);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(9,2.354352);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(10,2.112059);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(11,1.986342);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(12,1.79205);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(13,1.595473);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(14,1.282322);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(15,1.122317);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(16,0.9485981);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(17,0.7154487);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(18,0.6948767);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(19,0.5554442);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(20,0.3862966);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(21,0.361153);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(22,0.3497241);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(23,0.3040086);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(24,0.2491499);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(25,0.1805765);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(26,0.1165747);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(27,0.08000225);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(28,0.02971512);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(29,0.01600045);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(31,0.006857336);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(1,0.07754822);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(2,0.167284);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(3,0.1779974);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(4,0.1583469);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(5,0.1282075);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(6,0.1039715);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(7,0.08772746);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(8,0.07567274);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(9,0.0733589);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(10,0.06948166);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(11,0.06738203);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(12,0.0640018);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(13,0.06038956);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(14,0.05413967);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(15,0.05064947);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(16,0.04656485);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(17,0.04043955);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(18,0.03985391);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(19,0.03563176);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(20,0.02971512);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(21,0.02873179);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(22,0.02827352);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(23,0.02636089);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(24,0.02386423);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(25,0.02031644);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(26,0.01632372);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(27,0.01352285);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(28,0.008241492);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(29,0.006047602);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(31,0.003959085);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetEntries(32696);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(1,2.792938);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(2,11.81916);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(3,14.29674);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(4,11.51334);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(5,7.730804);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(6,4.931905);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(7,3.215604);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(8,2.480558);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(9,2.084122);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(10,1.761607);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(11,1.663244);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(12,1.467708);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(13,1.293038);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(14,1.219712);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(15,0.9967538);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(16,0.8644097);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(17,0.7451808);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(18,0.6539707);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(19,0.5627605);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(20,0.4828772);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(21,0.4465123);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(22,0.3570906);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(23,0.3427832);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(24,0.239054);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(25,0.189574);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(26,0.1377094);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(27,0.07928724);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(28,0.04113398);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(29,0.02146121);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(30,0.01251904);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(31,0.005961446);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(1,0.04080435);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(2,0.08394004);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(3,0.09231969);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(4,0.08284695);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(5,0.06788724);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(6,0.05422295);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(7,0.04378316);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(8,0.0384548);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(9,0.03524823);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(10,0.03240637);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(11,0.03148863);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(12,0.02957983);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(13,0.02776396);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(14,0.02696525);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(15,0.02437641);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(16,0.02270051);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(17,0.0210769);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(18,0.0197449);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(19,0.0183163);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(20,0.01696657);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(21,0.01631521);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(22,0.01459033);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(23,0.01429505);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(24,0.01193779);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(25,0.01063078);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(26,0.009060614);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(27,0.006875075);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(28,0.004951949);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(29,0.003576868);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(30,0.002731878);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(31,0.001885175);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(1,0.1319942);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(2,0.5894223);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(3,0.4119129);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(4,0.2025428);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(5,0.1365457);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(6,0.07965167);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(7,0.04551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(8,0.047791);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(9,0.047791);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(10,0.05916981);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(11,0.04551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(12,0.05006676);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(13,0.02503338);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(14,0.03186067);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(15,0.03641219);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(16,0.03641219);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(18,0.009103048);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(19,0.009103048);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(20,0.009103048);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(21,0.01137881);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(22,0.01365457);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(23,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(24,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(25,0.006827286);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(26,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(1,0.01733169);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(2,0.03662492);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(3,0.03061724);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(4,0.02146949);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(5,0.01762798);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(6,0.01346359);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(7,0.01017752);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(8,0.01042885);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(9,0.01042885);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(10,0.01160415);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(11,0.01017752);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(12,0.01067427);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(13,0.007547848);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(14,0.008515121);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(15,0.009103048);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(16,0.009103048);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(17,0.003218413);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(18,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(19,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(20,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(21,0.005088758);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(22,0.005574455);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(23,0.003218413);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(24,0.003218413);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(25,0.003941735);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(26,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(28,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetEntries(903);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(1,0.05333891);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(2,0.2589035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(3,0.2355302);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(4,0.1288524);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(5,0.05873273);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(6,0.03565916);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(7,0.02996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(8,0.02607014);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(9,0.01857872);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(10,0.01797941);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(11,0.01408387);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(12,0.01438353);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(13,0.01648112);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(14,0.01138696);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(15,0.01288524);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(16,0.01018833);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(17,0.008989704);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(18,0.008989704);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(19,0.003895538);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(20,0.004195195);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(21,0.004195195);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(22,0.00659245);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(23,0.005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(24,0.003595882);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(25,0.004494852);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(26,0.002397254);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(27,0.001198627);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(28,0.001198627);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(29,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(1,0.00399792);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(2,0.008808075);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(3,0.008401086);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(4,0.006213816);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(5,0.004195195);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(6,0.00326887);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(7,0.002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(8,0.002795013);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(9,0.0023595);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(10,0.002321132);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(11,0.002054343);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(12,0.002076083);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(13,0.002222314);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(14,0.001847209);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(15,0.001964981);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(16,0.001747284);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(17,0.001641288);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(18,0.001641288);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(19,0.001080428);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(20,0.001121213);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(21,0.001121213);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(22,0.001405515);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(23,0.001340106);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(24,0.001038042);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(25,0.001160566);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(26,0.0008475574);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(27,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(28,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(29,0.0004237787);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetEntries(3336);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__101 = new TH1D("VbbHcc_tags_Z_dR_Bj0__101","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(1,117570);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(2,488781);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(3,440576);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(4,326620);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(5,250939);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(6,196606);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(7,159070);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(8,132291);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(9,112585);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(10,99216);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(11,89311);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(12,80860);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(13,73111);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(14,65725);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(15,57883);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(16,51207);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(17,42627);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(18,35559);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(19,30272);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(20,26106);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(21,21622);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(22,18178);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(23,15095);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(24,12051);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(25,9233);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(26,6775);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(27,4507);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(28,2938);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(29,1821);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(30,1130);
   VbbHcc_tags_Z_dR_Bj0__101->SetBinContent(31,1841);
   VbbHcc_tags_Z_dR_Bj0__101->SetEntries(2972106);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0__101->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0__101->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0__101->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0__101->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0__101->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0__101->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__101->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__101->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__101->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__101->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__101->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__101->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__101->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0__101->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__101->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__101->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__101->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__101->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__101->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1101[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1101[30] = {
   95721.3,
   353449.6,
   301384.3,
   226611.1,
   174991.4,
   133174.7,
   110210.8,
   88107.62,
   73573.61,
   63463.1,
   57113.78,
   54749.54,
   51696.55,
   44109.39,
   39557.67,
   38522.23,
   26459.45,
   22495.07,
   19434.33,
   13953.32,
   14871.91,
   11124.95,
   9350.437,
   8185.919,
   6516.323,
   5452.828,
   3036.779,
   4499.003,
   1278.602,
   782.2112};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1101[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1101[30] = {
   2340.542,
   6552.38,
   6006.152,
   5393.387,
   4676.517,
   4402.271,
   4602.604,
   3731.829,
   2673.049,
   2396.788,
   2756.451,
   2303.624,
   2809.195,
   2094.445,
   1946.343,
   2239.933,
   2154.411,
   1406.824,
   1357.324,
   922.6262,
   1246.387,
   974.9295,
   962.0154,
   949.2777,
   809.3555,
   1709.126,
   392.3592,
   1802.423,
   361.0883,
   119.2973};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1101,Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1101,Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1101,Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1101);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetMinimum(596.6225);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetMaximum(395935.8);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj0","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_tags_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__102 = new TH1D("data_mc_ratio__102","",30,0,6);
   data_mc_ratio__102->SetBinContent(1,1.228253);
   data_mc_ratio__102->SetBinContent(2,1.382888);
   data_mc_ratio__102->SetBinContent(3,1.461841);
   data_mc_ratio__102->SetBinContent(4,1.441324);
   data_mc_ratio__102->SetBinContent(5,1.434008);
   data_mc_ratio__102->SetBinContent(6,1.476302);
   data_mc_ratio__102->SetBinContent(7,1.443325);
   data_mc_ratio__102->SetBinContent(8,1.501471);
   data_mc_ratio__102->SetBinContent(9,1.530236);
   data_mc_ratio__102->SetBinContent(10,1.563365);
   data_mc_ratio__102->SetBinContent(11,1.563738);
   data_mc_ratio__102->SetBinContent(12,1.476907);
   data_mc_ratio__102->SetBinContent(13,1.414234);
   data_mc_ratio__102->SetBinContent(14,1.490046);
   data_mc_ratio__102->SetBinContent(15,1.463256);
   data_mc_ratio__102->SetBinContent(16,1.329284);
   data_mc_ratio__102->SetBinContent(17,1.611031);
   data_mc_ratio__102->SetBinContent(18,1.580746);
   data_mc_ratio__102->SetBinContent(19,1.557656);
   data_mc_ratio__102->SetBinContent(20,1.870953);
   data_mc_ratio__102->SetBinContent(21,1.453882);
   data_mc_ratio__102->SetBinContent(22,1.633985);
   data_mc_ratio__102->SetBinContent(23,1.614363);
   data_mc_ratio__102->SetBinContent(24,1.472162);
   data_mc_ratio__102->SetBinContent(25,1.416903);
   data_mc_ratio__102->SetBinContent(26,1.242474);
   data_mc_ratio__102->SetBinContent(27,1.484139);
   data_mc_ratio__102->SetBinContent(28,0.6530336);
   data_mc_ratio__102->SetBinContent(29,1.424212);
   data_mc_ratio__102->SetBinContent(30,1.444623);
   data_mc_ratio__102->SetBinContent(31,1.8555);
   data_mc_ratio__102->SetBinError(1,0.003582116);
   data_mc_ratio__102->SetBinError(2,0.001978016);
   data_mc_ratio__102->SetBinError(3,0.002202368);
   data_mc_ratio__102->SetBinError(4,0.002521971);
   data_mc_ratio__102->SetBinError(5,0.002862644);
   data_mc_ratio__102->SetBinError(6,0.003329482);
   data_mc_ratio__102->SetBinError(7,0.003618844);
   data_mc_ratio__102->SetBinError(8,0.004128114);
   data_mc_ratio__102->SetBinError(9,0.004560561);
   data_mc_ratio__102->SetBinError(10,0.004963289);
   data_mc_ratio__102->SetBinError(11,0.005232529);
   data_mc_ratio__102->SetBinError(12,0.005193814);
   data_mc_ratio__102->SetBinError(13,0.005230338);
   data_mc_ratio__102->SetBinError(14,0.005812116);
   data_mc_ratio__102->SetBinError(15,0.006081978);
   data_mc_ratio__102->SetBinError(16,0.005874261);
   data_mc_ratio__102->SetBinError(17,0.007803);
   data_mc_ratio__102->SetBinError(18,0.008382768);
   data_mc_ratio__102->SetBinError(19,0.008952639);
   data_mc_ratio__102->SetBinError(20,0.01157958);
   data_mc_ratio__102->SetBinError(21,0.009887377);
   data_mc_ratio__102->SetBinError(22,0.01211923);
   data_mc_ratio__102->SetBinError(23,0.01313968);
   data_mc_ratio__102->SetBinError(24,0.01341047);
   data_mc_ratio__102->SetBinError(25,0.01474582);
   data_mc_ratio__102->SetBinError(26,0.01509499);
   data_mc_ratio__102->SetBinError(27,0.02210704);
   data_mc_ratio__102->SetBinError(28,0.01204785);
   data_mc_ratio__102->SetBinError(29,0.03337488);
   data_mc_ratio__102->SetBinError(30,0.04297493);
   data_mc_ratio__102->SetBinError(31,0.6678191);
   data_mc_ratio__102->SetMinimum(0.4);
   data_mc_ratio__102->SetMaximum(1.6);
   data_mc_ratio__102->SetEntries(2711.687);
   data_mc_ratio__102->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__102->SetLineColor(ci);
   data_mc_ratio__102->SetLineWidth(2);
   data_mc_ratio__102->SetMarkerStyle(20);
   data_mc_ratio__102->SetMarkerSize(1.2);
   data_mc_ratio__102->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__102->GetXaxis()->SetRange(1,30);
   data_mc_ratio__102->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__102->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__102->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__102->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__102->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__102->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__102->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__102->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__102->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__102->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__102->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__102->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__102->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__102->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__102->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__102->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__102->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1102[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1102[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1102[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1102[30] = {
   0.02445163,
   0.01853837,
   0.01992855,
   0.02380019,
   0.02672427,
   0.03305637,
   0.04176182,
   0.04235535,
   0.03633163,
   0.03776664,
   0.04826245,
   0.04207567,
   0.05434009,
   0.04748297,
   0.04920268,
   0.05814652,
   0.08142313,
   0.06253922,
   0.06984156,
   0.06612236,
   0.08380811,
   0.08763449,
   0.1028845,
   0.1159647,
   0.1242043,
   0.3134384,
   0.1292024,
   0.4006272,
   0.2824088,
   0.1525129};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1102,Graph_from_mc_statistical_error_fy1102,Graph_from_mc_statistical_error_fex1102,Graph_from_mc_statistical_error_fey1102);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1102 = new TH1F("Graph_Graph_from_mc_statistical_error1102","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1102->SetMinimum(0.5192474);
   Graph_Graph_from_mc_statistical_error1102->SetMaximum(1.480753);
   Graph_Graph_from_mc_statistical_error1102->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1102->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1102->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1102);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_18->cd();
   Z_dR_Bj0_tags_18->Modified();
   Z_dR_Bj0_tags_18->cd();
   Z_dR_Bj0_tags_18->SetSelected(Z_dR_Bj0_tags_18);
}

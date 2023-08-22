void H_mass_tags_18()
{
//=========Macro generated from canvas: H_mass_tags_18/H_mass_tags_18
//=========  (Tue Aug 22 09:20:05 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_18 = new TCanvas("H_mass_tags_18", "H_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_18->SetHighLightColor(2);
   H_mass_tags_18->Range(0,0,1,1);
   H_mass_tags_18->SetFillColor(0);
   H_mass_tags_18->SetFillStyle(4000);
   H_mass_tags_18->SetBorderMode(0);
   H_mass_tags_18->SetBorderSize(2);
   H_mass_tags_18->SetFrameFillStyle(1000);
   H_mass_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-20.97552,315.7258,20964.54);
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
   st->SetMaximum(17967.61);
   
   TH1F *st_stack_7 = new TH1F("st_stack_7","",40,0,400);
   st_stack_7->SetMinimum(0.01);
   st_stack_7->SetMaximum(18865.99);
   st_stack_7->SetDirectory(0);
   st_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_7->SetLineColor(ci);
   st_stack_7->GetXaxis()->SetRange(1,30);
   st_stack_7->GetXaxis()->SetLabelFont(42);
   st_stack_7->GetXaxis()->SetLabelSize(0.035);
   st_stack_7->GetXaxis()->SetTitleSize(0.035);
   st_stack_7->GetXaxis()->SetTitleFont(42);
   st_stack_7->GetYaxis()->SetTitle("Events/10.0");
   st_stack_7->GetYaxis()->SetLabelFont(42);
   st_stack_7->GetYaxis()->SetLabelSize(0.05);
   st_stack_7->GetYaxis()->SetTitleSize(0.057);
   st_stack_7->GetYaxis()->SetTitleOffset(1.2);
   st_stack_7->GetYaxis()->SetTitleFont(42);
   st_stack_7->GetZaxis()->SetLabelFont(42);
   st_stack_7->GetZaxis()->SetLabelSize(0.035);
   st_stack_7->GetZaxis()->SetTitleSize(0.035);
   st_stack_7->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_7);
   
   
   TH1D *VbbHcc_tags_H_mass_stack_1 = new TH1D("VbbHcc_tags_H_mass_stack_1","",40,0,400);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(3,90.30816);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(4,2318.499);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(5,4833.757);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(6,7308.582);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(7,7461.05);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(8,6181.908);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(9,3996.472);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(10,4938.404);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(11,4758.484);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(12,4665.956);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(13,3075.165);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(14,5687.195);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(15,4361.912);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(16,4464.424);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(17,5630.508);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(18,3911.683);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(19,1903.594);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(20,3325.037);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(21,5064.666);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(22,2338.618);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(23,3845.706);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(24,3641.865);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(25,3542.61);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(26,2469.261);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(27,2584.754);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(28,3209.489);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(29,2633.544);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(30,1710.659);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(31,3796.42);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(32,2758.793);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(33,2054.938);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(34,1465.954);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(35,3064.149);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(36,1179.395);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(37,3627.254);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(38,1862.898);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(39,1844.343);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(40,3380.543);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(41,82346.73);
   VbbHcc_tags_H_mass_stack_1->SetBinError(3,54.22601);
   VbbHcc_tags_H_mass_stack_1->SetBinError(4,988.9958);
   VbbHcc_tags_H_mass_stack_1->SetBinError(5,1171.335);
   VbbHcc_tags_H_mass_stack_1->SetBinError(6,1571.558);
   VbbHcc_tags_H_mass_stack_1->SetBinError(7,1436.471);
   VbbHcc_tags_H_mass_stack_1->SetBinError(8,1047.375);
   VbbHcc_tags_H_mass_stack_1->SetBinError(9,822.7389);
   VbbHcc_tags_H_mass_stack_1->SetBinError(10,1116.181);
   VbbHcc_tags_H_mass_stack_1->SetBinError(11,1023.221);
   VbbHcc_tags_H_mass_stack_1->SetBinError(12,1090.433);
   VbbHcc_tags_H_mass_stack_1->SetBinError(13,569.1942);
   VbbHcc_tags_H_mass_stack_1->SetBinError(14,1469.242);
   VbbHcc_tags_H_mass_stack_1->SetBinError(15,1120.326);
   VbbHcc_tags_H_mass_stack_1->SetBinError(16,1110.626);
   VbbHcc_tags_H_mass_stack_1->SetBinError(17,1171.039);
   VbbHcc_tags_H_mass_stack_1->SetBinError(18,1043.548);
   VbbHcc_tags_H_mass_stack_1->SetBinError(19,441.6166);
   VbbHcc_tags_H_mass_stack_1->SetBinError(20,809.2686);
   VbbHcc_tags_H_mass_stack_1->SetBinError(21,1245.214);
   VbbHcc_tags_H_mass_stack_1->SetBinError(22,636.6897);
   VbbHcc_tags_H_mass_stack_1->SetBinError(23,940.8485);
   VbbHcc_tags_H_mass_stack_1->SetBinError(24,794.7036);
   VbbHcc_tags_H_mass_stack_1->SetBinError(25,1033.467);
   VbbHcc_tags_H_mass_stack_1->SetBinError(26,710.727);
   VbbHcc_tags_H_mass_stack_1->SetBinError(27,853.5465);
   VbbHcc_tags_H_mass_stack_1->SetBinError(28,934.6547);
   VbbHcc_tags_H_mass_stack_1->SetBinError(29,859.811);
   VbbHcc_tags_H_mass_stack_1->SetBinError(30,393.3813);
   VbbHcc_tags_H_mass_stack_1->SetBinError(31,1009.983);
   VbbHcc_tags_H_mass_stack_1->SetBinError(32,779.3685);
   VbbHcc_tags_H_mass_stack_1->SetBinError(33,617.7669);
   VbbHcc_tags_H_mass_stack_1->SetBinError(34,500.3748);
   VbbHcc_tags_H_mass_stack_1->SetBinError(35,887.4422);
   VbbHcc_tags_H_mass_stack_1->SetBinError(36,267.5586);
   VbbHcc_tags_H_mass_stack_1->SetBinError(37,940.8434);
   VbbHcc_tags_H_mass_stack_1->SetBinError(38,546.8731);
   VbbHcc_tags_H_mass_stack_1->SetBinError(39,642.5506);
   VbbHcc_tags_H_mass_stack_1->SetBinError(40,1435.759);
   VbbHcc_tags_H_mass_stack_1->SetBinError(41,4729.31);
   VbbHcc_tags_H_mass_stack_1->SetEntries(9459);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_1,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_2 = new TH1D("VbbHcc_tags_H_mass_stack_2","",40,0,400);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(3,0.6015001);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(4,4.808452);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(5,16.72496);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(6,19.82107);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(7,22.06339);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(8,35.45804);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(9,34.47127);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(10,30.99951);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(11,31.47781);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(12,25.4597);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(13,31.64065);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(14,27.80458);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(15,25.4299);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(16,26.47972);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(17,25.95809);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(18,19.71694);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(19,21.92753);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(20,22.91734);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(21,20.21257);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(22,18.33429);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(23,17.55581);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(24,18.13388);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(25,18.05263);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(26,16.76186);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(27,19.3175);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(28,16.41125);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(29,15.28682);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(30,14.72741);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(31,15.10026);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(32,12.45942);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(33,11.36969);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(34,13.11418);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(35,11.31482);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(36,14.01309);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(37,12.76994);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(38,11.35432);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(39,12.48103);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(40,10.52747);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(41,498.5451);
   VbbHcc_tags_H_mass_stack_2->SetBinError(3,0.3740292);
   VbbHcc_tags_H_mass_stack_2->SetBinError(4,0.8680355);
   VbbHcc_tags_H_mass_stack_2->SetBinError(5,1.816217);
   VbbHcc_tags_H_mass_stack_2->SetBinError(6,1.967585);
   VbbHcc_tags_H_mass_stack_2->SetBinError(7,1.926478);
   VbbHcc_tags_H_mass_stack_2->SetBinError(8,2.745648);
   VbbHcc_tags_H_mass_stack_2->SetBinError(9,2.630228);
   VbbHcc_tags_H_mass_stack_2->SetBinError(10,2.520329);
   VbbHcc_tags_H_mass_stack_2->SetBinError(11,2.384353);
   VbbHcc_tags_H_mass_stack_2->SetBinError(12,2.079283);
   VbbHcc_tags_H_mass_stack_2->SetBinError(13,2.487216);
   VbbHcc_tags_H_mass_stack_2->SetBinError(14,2.410281);
   VbbHcc_tags_H_mass_stack_2->SetBinError(15,2.179773);
   VbbHcc_tags_H_mass_stack_2->SetBinError(16,2.365815);
   VbbHcc_tags_H_mass_stack_2->SetBinError(17,2.192662);
   VbbHcc_tags_H_mass_stack_2->SetBinError(18,1.84945);
   VbbHcc_tags_H_mass_stack_2->SetBinError(19,2.051907);
   VbbHcc_tags_H_mass_stack_2->SetBinError(20,2.310613);
   VbbHcc_tags_H_mass_stack_2->SetBinError(21,1.936507);
   VbbHcc_tags_H_mass_stack_2->SetBinError(22,1.843237);
   VbbHcc_tags_H_mass_stack_2->SetBinError(23,1.872629);
   VbbHcc_tags_H_mass_stack_2->SetBinError(24,1.836953);
   VbbHcc_tags_H_mass_stack_2->SetBinError(25,1.875528);
   VbbHcc_tags_H_mass_stack_2->SetBinError(26,1.854944);
   VbbHcc_tags_H_mass_stack_2->SetBinError(27,1.993983);
   VbbHcc_tags_H_mass_stack_2->SetBinError(28,1.782582);
   VbbHcc_tags_H_mass_stack_2->SetBinError(29,1.740865);
   VbbHcc_tags_H_mass_stack_2->SetBinError(30,1.623276);
   VbbHcc_tags_H_mass_stack_2->SetBinError(31,1.770558);
   VbbHcc_tags_H_mass_stack_2->SetBinError(32,1.556631);
   VbbHcc_tags_H_mass_stack_2->SetBinError(33,1.421563);
   VbbHcc_tags_H_mass_stack_2->SetBinError(34,1.603731);
   VbbHcc_tags_H_mass_stack_2->SetBinError(35,1.408727);
   VbbHcc_tags_H_mass_stack_2->SetBinError(36,1.774563);
   VbbHcc_tags_H_mass_stack_2->SetBinError(37,1.621985);
   VbbHcc_tags_H_mass_stack_2->SetBinError(38,1.482893);
   VbbHcc_tags_H_mass_stack_2->SetBinError(39,1.548803);
   VbbHcc_tags_H_mass_stack_2->SetBinError(40,1.426624);
   VbbHcc_tags_H_mass_stack_2->SetBinError(41,10.02468);
   VbbHcc_tags_H_mass_stack_2->SetEntries(14001);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_2,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_3 = new TH1D("VbbHcc_tags_H_mass_stack_3","",40,0,400);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(2,0.2141604);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(3,11.30142);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(4,113.4324);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(5,262.1897);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(6,385.38);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(7,511.7974);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(8,672.5761);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(9,771.2639);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(10,741.1769);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(11,719.583);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(12,728.1727);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(13,708.7692);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(14,688.0005);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(15,646.0252);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(16,605.8282);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(17,557.9376);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(18,539.4017);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(19,488.9976);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(20,466.2641);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(21,443.1073);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(22,421.4343);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(23,402.9559);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(24,389.4756);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(25,376.2704);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(26,363.9204);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(27,358.4176);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(28,344.3879);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(29,339.4683);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(30,330.559);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(31,315.7914);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(32,307.4216);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(33,306.4555);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(34,303.6591);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(35,282.5533);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(36,283.8726);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(37,279.693);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(38,266.086);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(39,262.4847);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(40,251.2941);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(41,9721.838);
   VbbHcc_tags_H_mass_stack_3->SetBinError(2,0.1089629);
   VbbHcc_tags_H_mass_stack_3->SetBinError(3,0.9379907);
   VbbHcc_tags_H_mass_stack_3->SetBinError(4,3.285075);
   VbbHcc_tags_H_mass_stack_3->SetBinError(5,4.714964);
   VbbHcc_tags_H_mass_stack_3->SetBinError(6,5.463961);
   VbbHcc_tags_H_mass_stack_3->SetBinError(7,6.485509);
   VbbHcc_tags_H_mass_stack_3->SetBinError(8,7.495526);
   VbbHcc_tags_H_mass_stack_3->SetBinError(9,8.486616);
   VbbHcc_tags_H_mass_stack_3->SetBinError(10,7.686017);
   VbbHcc_tags_H_mass_stack_3->SetBinError(11,7.524633);
   VbbHcc_tags_H_mass_stack_3->SetBinError(12,7.568281);
   VbbHcc_tags_H_mass_stack_3->SetBinError(13,7.917075);
   VbbHcc_tags_H_mass_stack_3->SetBinError(14,7.502057);
   VbbHcc_tags_H_mass_stack_3->SetBinError(15,7.099763);
   VbbHcc_tags_H_mass_stack_3->SetBinError(16,6.956798);
   VbbHcc_tags_H_mass_stack_3->SetBinError(17,6.987377);
   VbbHcc_tags_H_mass_stack_3->SetBinError(18,6.636886);
   VbbHcc_tags_H_mass_stack_3->SetBinError(19,6.129247);
   VbbHcc_tags_H_mass_stack_3->SetBinError(20,5.952569);
   VbbHcc_tags_H_mass_stack_3->SetBinError(21,6.199368);
   VbbHcc_tags_H_mass_stack_3->SetBinError(22,6.184696);
   VbbHcc_tags_H_mass_stack_3->SetBinError(23,6.113028);
   VbbHcc_tags_H_mass_stack_3->SetBinError(24,5.675926);
   VbbHcc_tags_H_mass_stack_3->SetBinError(25,5.871253);
   VbbHcc_tags_H_mass_stack_3->SetBinError(26,6.182244);
   VbbHcc_tags_H_mass_stack_3->SetBinError(27,5.273076);
   VbbHcc_tags_H_mass_stack_3->SetBinError(28,5.155643);
   VbbHcc_tags_H_mass_stack_3->SetBinError(29,5.350883);
   VbbHcc_tags_H_mass_stack_3->SetBinError(30,5.326111);
   VbbHcc_tags_H_mass_stack_3->SetBinError(31,4.925087);
   VbbHcc_tags_H_mass_stack_3->SetBinError(32,5.019592);
   VbbHcc_tags_H_mass_stack_3->SetBinError(33,5.076121);
   VbbHcc_tags_H_mass_stack_3->SetBinError(34,5.43875);
   VbbHcc_tags_H_mass_stack_3->SetBinError(35,4.779687);
   VbbHcc_tags_H_mass_stack_3->SetBinError(36,4.985056);
   VbbHcc_tags_H_mass_stack_3->SetBinError(37,4.739859);
   VbbHcc_tags_H_mass_stack_3->SetBinError(38,4.60336);
   VbbHcc_tags_H_mass_stack_3->SetBinError(39,5.037547);
   VbbHcc_tags_H_mass_stack_3->SetBinError(40,4.394424);
   VbbHcc_tags_H_mass_stack_3->SetBinError(41,29.52602);
   VbbHcc_tags_H_mass_stack_3->SetEntries(383722);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_3,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_4 = new TH1D("VbbHcc_tags_H_mass_stack_4","",40,0,400);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(3,1.163814);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(4,21.65313);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(5,39.54564);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(6,50.38249);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(7,73.58866);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(8,106.315);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(9,165.1791);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(10,143.7313);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(11,92.70421);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(12,70.49877);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(13,65.25282);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(14,61.9928);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(15,57.42368);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(16,50.06714);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(17,49.45487);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(18,66.19537);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(19,53.06279);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(20,40.28588);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(21,51.95558);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(22,47.23431);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(23,43.6154);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(24,49.45814);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(25,44.90592);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(26,41.5645);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(27,39.1954);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(28,41.29046);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(29,46.20243);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(30,45.53237);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(31,36.5113);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(32,41.83363);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(33,37.00988);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(34,38.71995);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(35,36.20533);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(36,44.7904);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(37,44.04946);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(38,34.83104);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(39,42.14626);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(40,28.51338);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(41,1453.663);
   VbbHcc_tags_H_mass_stack_4->SetBinError(3,0.6832962);
   VbbHcc_tags_H_mass_stack_4->SetBinError(4,7.1176);
   VbbHcc_tags_H_mass_stack_4->SetBinError(5,5.738544);
   VbbHcc_tags_H_mass_stack_4->SetBinError(6,6.402455);
   VbbHcc_tags_H_mass_stack_4->SetBinError(7,5.654733);
   VbbHcc_tags_H_mass_stack_4->SetBinError(8,6.006596);
   VbbHcc_tags_H_mass_stack_4->SetBinError(9,11.01724);
   VbbHcc_tags_H_mass_stack_4->SetBinError(10,9.078028);
   VbbHcc_tags_H_mass_stack_4->SetBinError(11,5.582836);
   VbbHcc_tags_H_mass_stack_4->SetBinError(12,4.823673);
   VbbHcc_tags_H_mass_stack_4->SetBinError(13,5.895927);
   VbbHcc_tags_H_mass_stack_4->SetBinError(14,6.631327);
   VbbHcc_tags_H_mass_stack_4->SetBinError(15,5.513009);
   VbbHcc_tags_H_mass_stack_4->SetBinError(16,5.743457);
   VbbHcc_tags_H_mass_stack_4->SetBinError(17,6.618497);
   VbbHcc_tags_H_mass_stack_4->SetBinError(18,9.654921);
   VbbHcc_tags_H_mass_stack_4->SetBinError(19,5.972756);
   VbbHcc_tags_H_mass_stack_4->SetBinError(20,3.659813);
   VbbHcc_tags_H_mass_stack_4->SetBinError(21,5.065966);
   VbbHcc_tags_H_mass_stack_4->SetBinError(22,4.518958);
   VbbHcc_tags_H_mass_stack_4->SetBinError(23,4.013665);
   VbbHcc_tags_H_mass_stack_4->SetBinError(24,8.359899);
   VbbHcc_tags_H_mass_stack_4->SetBinError(25,4.133452);
   VbbHcc_tags_H_mass_stack_4->SetBinError(26,5.361501);
   VbbHcc_tags_H_mass_stack_4->SetBinError(27,3.719805);
   VbbHcc_tags_H_mass_stack_4->SetBinError(28,3.766471);
   VbbHcc_tags_H_mass_stack_4->SetBinError(29,4.159583);
   VbbHcc_tags_H_mass_stack_4->SetBinError(30,5.896719);
   VbbHcc_tags_H_mass_stack_4->SetBinError(31,5.387923);
   VbbHcc_tags_H_mass_stack_4->SetBinError(32,3.932888);
   VbbHcc_tags_H_mass_stack_4->SetBinError(33,6.790605);
   VbbHcc_tags_H_mass_stack_4->SetBinError(34,5.81534);
   VbbHcc_tags_H_mass_stack_4->SetBinError(35,5.635681);
   VbbHcc_tags_H_mass_stack_4->SetBinError(36,9.008393);
   VbbHcc_tags_H_mass_stack_4->SetBinError(37,5.345305);
   VbbHcc_tags_H_mass_stack_4->SetBinError(38,8.948643);
   VbbHcc_tags_H_mass_stack_4->SetBinError(39,7.755743);
   VbbHcc_tags_H_mass_stack_4->SetBinError(40,3.078014);
   VbbHcc_tags_H_mass_stack_4->SetBinError(41,30.48436);
   VbbHcc_tags_H_mass_stack_4->SetEntries(17726);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_4,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_5 = new TH1D("VbbHcc_tags_H_mass_stack_5","",40,0,400);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(3,0.2907269);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(4,1.233847);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(5,1.747127);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(6,4.717557);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(7,12.71283);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(8,10.72597);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(9,11.42217);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(10,5.14491);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(11,3.098811);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(12,5.739339);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(13,3.027517);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(14,7.800009);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(15,6.753202);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(16,4.422102);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(17,6.450991);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(18,6.745767);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(19,4.877985);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(20,10.90962);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(21,2.494545);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(22,2.557402);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(23,6.940756);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(24,3.449394);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(25,7.512304);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(26,6.471483);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(27,5.829514);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(28,2.48482);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(29,1.164557);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(30,6.356102);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(31,5.709751);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(32,2.228883);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(33,4.46662);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(34,2.916673);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(35,2.760949);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(36,4.149756);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(37,4.407473);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(38,2.752604);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(39,3.299686);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(40,0.5542434);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(41,141.0453);
   VbbHcc_tags_H_mass_stack_5->SetBinError(3,0.2907269);
   VbbHcc_tags_H_mass_stack_5->SetBinError(4,0.5742862);
   VbbHcc_tags_H_mass_stack_5->SetBinError(5,0.6289391);
   VbbHcc_tags_H_mass_stack_5->SetBinError(6,1.212577);
   VbbHcc_tags_H_mass_stack_5->SetBinError(7,8.847954);
   VbbHcc_tags_H_mass_stack_5->SetBinError(8,4.086388);
   VbbHcc_tags_H_mass_stack_5->SetBinError(9,3.776812);
   VbbHcc_tags_H_mass_stack_5->SetBinError(10,1.025561);
   VbbHcc_tags_H_mass_stack_5->SetBinError(11,0.8581773);
   VbbHcc_tags_H_mass_stack_5->SetBinError(12,2.224397);
   VbbHcc_tags_H_mass_stack_5->SetBinError(13,0.6437626);
   VbbHcc_tags_H_mass_stack_5->SetBinError(14,3.262647);
   VbbHcc_tags_H_mass_stack_5->SetBinError(15,2.483731);
   VbbHcc_tags_H_mass_stack_5->SetBinError(16,1.032951);
   VbbHcc_tags_H_mass_stack_5->SetBinError(17,2.430536);
   VbbHcc_tags_H_mass_stack_5->SetBinError(18,2.392037);
   VbbHcc_tags_H_mass_stack_5->SetBinError(19,1.161777);
   VbbHcc_tags_H_mass_stack_5->SetBinError(20,3.754031);
   VbbHcc_tags_H_mass_stack_5->SetBinError(21,0.7261831);
   VbbHcc_tags_H_mass_stack_5->SetBinError(22,0.6870605);
   VbbHcc_tags_H_mass_stack_5->SetBinError(23,2.089607);
   VbbHcc_tags_H_mass_stack_5->SetBinError(24,0.8866928);
   VbbHcc_tags_H_mass_stack_5->SetBinError(25,3.422487);
   VbbHcc_tags_H_mass_stack_5->SetBinError(26,2.52255);
   VbbHcc_tags_H_mass_stack_5->SetBinError(27,2.809578);
   VbbHcc_tags_H_mass_stack_5->SetBinError(28,0.6551787);
   VbbHcc_tags_H_mass_stack_5->SetBinError(29,0.6185484);
   VbbHcc_tags_H_mass_stack_5->SetBinError(30,2.37737);
   VbbHcc_tags_H_mass_stack_5->SetBinError(31,2.610922);
   VbbHcc_tags_H_mass_stack_5->SetBinError(32,0.5527862);
   VbbHcc_tags_H_mass_stack_5->SetBinError(33,2.254976);
   VbbHcc_tags_H_mass_stack_5->SetBinError(34,0.8126016);
   VbbHcc_tags_H_mass_stack_5->SetBinError(35,0.8226695);
   VbbHcc_tags_H_mass_stack_5->SetBinError(36,2.309225);
   VbbHcc_tags_H_mass_stack_5->SetBinError(37,1.877169);
   VbbHcc_tags_H_mass_stack_5->SetBinError(38,0.8264851);
   VbbHcc_tags_H_mass_stack_5->SetBinError(39,2.562949);
   VbbHcc_tags_H_mass_stack_5->SetBinError(40,0.2475609);
   VbbHcc_tags_H_mass_stack_5->SetBinError(41,9.86448);
   VbbHcc_tags_H_mass_stack_5->SetEntries(2023);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_5,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_6 = new TH1D("VbbHcc_tags_H_mass_stack_6","",40,0,400);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(7,0.6225638);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(41,0.4278565);
   VbbHcc_tags_H_mass_stack_6->SetBinError(7,0.6225638);
   VbbHcc_tags_H_mass_stack_6->SetBinError(41,0.4278565);
   VbbHcc_tags_H_mass_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_6,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_7 = new TH1D("VbbHcc_tags_H_mass_stack_7","",40,0,400);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(7,0.4722652);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(8,0.3759891);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(9,2.356057);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(10,0.4346562);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(11,0.8602055);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(12,0.4671207);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(13,0.7940986);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(16,0.9636619);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(23,0.4702074);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(27,0.6921444);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(28,0.4536609);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(36,0.4675795);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(41,4.481106);
   VbbHcc_tags_H_mass_stack_7->SetBinError(7,0.4722652);
   VbbHcc_tags_H_mass_stack_7->SetBinError(8,0.3759891);
   VbbHcc_tags_H_mass_stack_7->SetBinError(9,0.9695753);
   VbbHcc_tags_H_mass_stack_7->SetBinError(10,0.4346562);
   VbbHcc_tags_H_mass_stack_7->SetBinError(11,0.6083478);
   VbbHcc_tags_H_mass_stack_7->SetBinError(12,0.4671207);
   VbbHcc_tags_H_mass_stack_7->SetBinError(13,0.6014273);
   VbbHcc_tags_H_mass_stack_7->SetBinError(16,0.9636619);
   VbbHcc_tags_H_mass_stack_7->SetBinError(23,0.4702074);
   VbbHcc_tags_H_mass_stack_7->SetBinError(27,0.4894264);
   VbbHcc_tags_H_mass_stack_7->SetBinError(28,0.4536609);
   VbbHcc_tags_H_mass_stack_7->SetBinError(36,0.4675795);
   VbbHcc_tags_H_mass_stack_7->SetBinError(41,1.361823);
   VbbHcc_tags_H_mass_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_7,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_8 = new TH1D("VbbHcc_tags_H_mass_stack_8","",40,0,400);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(5,0.7520658);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(6,0.3006984);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(7,1.59218);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(8,2.447132);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(9,5.324938);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(10,3.346994);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(11,2.119518);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(12,0.6771351);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(13,0.59677);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(15,0.3700729);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(16,0.1757953);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(17,0.9582719);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(18,1.173962);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(19,0.2776858);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(20,0.3672764);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(21,1.044175);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(22,0.2479338);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(24,1.191145);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(25,0.2773954);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(27,1.382437);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(29,0.9148526);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(30,1.926218);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(31,0.5366135);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(33,0.5595143);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(35,1.619916);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(36,0.6108823);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(37,0.4389589);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(38,1.084627);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(39,1.734532);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(40,1.188355);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(41,32.66292);
   VbbHcc_tags_H_mass_stack_8->SetBinError(5,0.532674);
   VbbHcc_tags_H_mass_stack_8->SetBinError(6,0.3006984);
   VbbHcc_tags_H_mass_stack_8->SetBinError(7,0.7187243);
   VbbHcc_tags_H_mass_stack_8->SetBinError(8,0.8710118);
   VbbHcc_tags_H_mass_stack_8->SetBinError(9,1.345491);
   VbbHcc_tags_H_mass_stack_8->SetBinError(10,0.9847278);
   VbbHcc_tags_H_mass_stack_8->SetBinError(11,0.7875983);
   VbbHcc_tags_H_mass_stack_8->SetBinError(12,0.4447983);
   VbbHcc_tags_H_mass_stack_8->SetBinError(13,0.4220574);
   VbbHcc_tags_H_mass_stack_8->SetBinError(15,0.3700729);
   VbbHcc_tags_H_mass_stack_8->SetBinError(16,0.1757953);
   VbbHcc_tags_H_mass_stack_8->SetBinError(17,0.5195925);
   VbbHcc_tags_H_mass_stack_8->SetBinError(18,0.5955293);
   VbbHcc_tags_H_mass_stack_8->SetBinError(19,0.2776858);
   VbbHcc_tags_H_mass_stack_8->SetBinError(20,0.3672764);
   VbbHcc_tags_H_mass_stack_8->SetBinError(21,0.6097329);
   VbbHcc_tags_H_mass_stack_8->SetBinError(22,0.2479338);
   VbbHcc_tags_H_mass_stack_8->SetBinError(24,0.624941);
   VbbHcc_tags_H_mass_stack_8->SetBinError(25,0.2773954);
   VbbHcc_tags_H_mass_stack_8->SetBinError(27,0.7045518);
   VbbHcc_tags_H_mass_stack_8->SetBinError(29,0.5386258);
   VbbHcc_tags_H_mass_stack_8->SetBinError(30,0.7921756);
   VbbHcc_tags_H_mass_stack_8->SetBinError(31,0.3798313);
   VbbHcc_tags_H_mass_stack_8->SetBinError(33,0.3980582);
   VbbHcc_tags_H_mass_stack_8->SetBinError(35,0.6665029);
   VbbHcc_tags_H_mass_stack_8->SetBinError(36,0.4377279);
   VbbHcc_tags_H_mass_stack_8->SetBinError(37,0.4389589);
   VbbHcc_tags_H_mass_stack_8->SetBinError(38,0.5548502);
   VbbHcc_tags_H_mass_stack_8->SetBinError(39,0.718528);
   VbbHcc_tags_H_mass_stack_8->SetBinError(40,0.5996863);
   VbbHcc_tags_H_mass_stack_8->SetBinError(41,3.172885);
   VbbHcc_tags_H_mass_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_8,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_9 = new TH1D("VbbHcc_tags_H_mass_stack_9","",40,0,400);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(3,0.009298041);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(4,0.1111999);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(5,0.1532303);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(6,0.457792);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(7,1.133869);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(8,2.290991);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(9,3.567488);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(10,3.362779);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(11,2.548565);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(12,2.498339);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(13,2.153381);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(14,1.365789);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(15,0.9278338);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(16,0.6411437);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(17,0.5955709);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(18,0.5305726);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(19,0.5321082);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(20,0.6742796);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(21,0.5017832);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(22,0.5826767);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(23,0.6383145);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(24,0.5381173);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(25,0.6573592);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(26,0.6802902);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(27,0.7293147);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(28,0.6689458);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(29,0.618462);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(30,0.6540414);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(31,0.6583073);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(32,0.7415424);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(33,0.6111125);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(34,0.6568343);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(35,0.7258978);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(36,0.6805056);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(37,0.7301863);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(38,0.7126861);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(39,0.6845754);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(40,0.7218397);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(41,28.10957);
   VbbHcc_tags_H_mass_stack_9->SetBinError(3,0.005512802);
   VbbHcc_tags_H_mass_stack_9->SetBinError(4,0.01970401);
   VbbHcc_tags_H_mass_stack_9->SetBinError(5,0.02258829);
   VbbHcc_tags_H_mass_stack_9->SetBinError(6,0.03779794);
   VbbHcc_tags_H_mass_stack_9->SetBinError(7,0.0613283);
   VbbHcc_tags_H_mass_stack_9->SetBinError(8,0.08774808);
   VbbHcc_tags_H_mass_stack_9->SetBinError(9,0.1093827);
   VbbHcc_tags_H_mass_stack_9->SetBinError(10,0.1083506);
   VbbHcc_tags_H_mass_stack_9->SetBinError(11,0.09094414);
   VbbHcc_tags_H_mass_stack_9->SetBinError(12,0.1054079);
   VbbHcc_tags_H_mass_stack_9->SetBinError(13,0.09818688);
   VbbHcc_tags_H_mass_stack_9->SetBinError(14,0.07041011);
   VbbHcc_tags_H_mass_stack_9->SetBinError(15,0.05591073);
   VbbHcc_tags_H_mass_stack_9->SetBinError(16,0.04587246);
   VbbHcc_tags_H_mass_stack_9->SetBinError(17,0.04312426);
   VbbHcc_tags_H_mass_stack_9->SetBinError(18,0.0411467);
   VbbHcc_tags_H_mass_stack_9->SetBinError(19,0.04129932);
   VbbHcc_tags_H_mass_stack_9->SetBinError(20,0.04790388);
   VbbHcc_tags_H_mass_stack_9->SetBinError(21,0.04025396);
   VbbHcc_tags_H_mass_stack_9->SetBinError(22,0.04339075);
   VbbHcc_tags_H_mass_stack_9->SetBinError(23,0.04691662);
   VbbHcc_tags_H_mass_stack_9->SetBinError(24,0.04257952);
   VbbHcc_tags_H_mass_stack_9->SetBinError(25,0.04971252);
   VbbHcc_tags_H_mass_stack_9->SetBinError(26,0.04820076);
   VbbHcc_tags_H_mass_stack_9->SetBinError(27,0.0490082);
   VbbHcc_tags_H_mass_stack_9->SetBinError(28,0.04713449);
   VbbHcc_tags_H_mass_stack_9->SetBinError(29,0.04570829);
   VbbHcc_tags_H_mass_stack_9->SetBinError(30,0.05228983);
   VbbHcc_tags_H_mass_stack_9->SetBinError(31,0.05019064);
   VbbHcc_tags_H_mass_stack_9->SetBinError(32,0.04984493);
   VbbHcc_tags_H_mass_stack_9->SetBinError(33,0.04455129);
   VbbHcc_tags_H_mass_stack_9->SetBinError(34,0.04631913);
   VbbHcc_tags_H_mass_stack_9->SetBinError(35,0.05990468);
   VbbHcc_tags_H_mass_stack_9->SetBinError(36,0.05193429);
   VbbHcc_tags_H_mass_stack_9->SetBinError(37,0.04993055);
   VbbHcc_tags_H_mass_stack_9->SetBinError(38,0.05722552);
   VbbHcc_tags_H_mass_stack_9->SetBinError(39,0.04735703);
   VbbHcc_tags_H_mass_stack_9->SetBinError(40,0.04939352);
   VbbHcc_tags_H_mass_stack_9->SetBinError(41,0.3390804);
   VbbHcc_tags_H_mass_stack_9->SetEntries(21953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_9,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_10 = new TH1D("VbbHcc_tags_H_mass_stack_10","",40,0,400);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(3,0.002875615);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(4,0.02395291);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(5,0.08341868);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(6,0.1569297);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(7,0.3852943);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(8,0.8018886);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(9,1.243113);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(10,1.129686);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(11,0.9205059);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(12,0.8205383);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(13,0.7325632);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(14,0.5607687);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(15,0.4056466);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(16,0.3132825);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(17,0.2958249);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(18,0.2818635);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(19,0.2822661);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(20,0.2905598);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(21,0.2615984);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(22,0.2992936);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(23,0.3051403);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(24,0.2895244);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(25,0.2810787);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(26,0.2744888);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(27,0.2799929);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(28,0.2761863);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(29,0.258243);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(30,0.2721972);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(31,0.2637974);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(32,0.2379896);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(33,0.2780158);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(34,0.2636091);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(35,0.2348268);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(36,0.2437494);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(37,0.2523838);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(38,0.2534173);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(39,0.2482557);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(40,0.2466064);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(41,8.376458);
   VbbHcc_tags_H_mass_stack_10->SetBinError(3,0.001291605);
   VbbHcc_tags_H_mass_stack_10->SetBinError(4,0.003653534);
   VbbHcc_tags_H_mass_stack_10->SetBinError(5,0.006807081);
   VbbHcc_tags_H_mass_stack_10->SetBinError(6,0.009355255);
   VbbHcc_tags_H_mass_stack_10->SetBinError(7,0.01457947);
   VbbHcc_tags_H_mass_stack_10->SetBinError(8,0.02112413);
   VbbHcc_tags_H_mass_stack_10->SetBinError(9,0.0263328);
   VbbHcc_tags_H_mass_stack_10->SetBinError(10,0.02508578);
   VbbHcc_tags_H_mass_stack_10->SetBinError(11,0.02261633);
   VbbHcc_tags_H_mass_stack_10->SetBinError(12,0.02143351);
   VbbHcc_tags_H_mass_stack_10->SetBinError(13,0.02025999);
   VbbHcc_tags_H_mass_stack_10->SetBinError(14,0.01773818);
   VbbHcc_tags_H_mass_stack_10->SetBinError(15,0.01499117);
   VbbHcc_tags_H_mass_stack_10->SetBinError(16,0.01318313);
   VbbHcc_tags_H_mass_stack_10->SetBinError(17,0.01281461);
   VbbHcc_tags_H_mass_stack_10->SetBinError(18,0.01249643);
   VbbHcc_tags_H_mass_stack_10->SetBinError(19,0.01249669);
   VbbHcc_tags_H_mass_stack_10->SetBinError(20,0.0127232);
   VbbHcc_tags_H_mass_stack_10->SetBinError(21,0.01204627);
   VbbHcc_tags_H_mass_stack_10->SetBinError(22,0.0128825);
   VbbHcc_tags_H_mass_stack_10->SetBinError(23,0.01297534);
   VbbHcc_tags_H_mass_stack_10->SetBinError(24,0.01267033);
   VbbHcc_tags_H_mass_stack_10->SetBinError(25,0.01244502);
   VbbHcc_tags_H_mass_stack_10->SetBinError(26,0.01233026);
   VbbHcc_tags_H_mass_stack_10->SetBinError(27,0.01238517);
   VbbHcc_tags_H_mass_stack_10->SetBinError(28,0.01227006);
   VbbHcc_tags_H_mass_stack_10->SetBinError(29,0.01189982);
   VbbHcc_tags_H_mass_stack_10->SetBinError(30,0.01222628);
   VbbHcc_tags_H_mass_stack_10->SetBinError(31,0.01204797);
   VbbHcc_tags_H_mass_stack_10->SetBinError(32,0.01134481);
   VbbHcc_tags_H_mass_stack_10->SetBinError(33,0.01241331);
   VbbHcc_tags_H_mass_stack_10->SetBinError(34,0.01208757);
   VbbHcc_tags_H_mass_stack_10->SetBinError(35,0.01131464);
   VbbHcc_tags_H_mass_stack_10->SetBinError(36,0.01156925);
   VbbHcc_tags_H_mass_stack_10->SetBinError(37,0.01180917);
   VbbHcc_tags_H_mass_stack_10->SetBinError(38,0.01176389);
   VbbHcc_tags_H_mass_stack_10->SetBinError(39,0.01165713);
   VbbHcc_tags_H_mass_stack_10->SetBinError(40,0.01164273);
   VbbHcc_tags_H_mass_stack_10->SetBinError(41,0.06880463);
   VbbHcc_tags_H_mass_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_10,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_11 = new TH1D("VbbHcc_tags_H_mass_stack_11","",40,0,400);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(3,0.00221053);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(5,0.002026054);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(7,0.003700991);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(8,0.004634412);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(9,0.002398405);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(10,0.003312494);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(11,0.007908606);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(12,0.01255336);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(13,0.0144282);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(14,0.01643024);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(15,0.008842812);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(16,0.003218807);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(17,0.002227489);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(19,0.002640973);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(20,0.004610055);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(21,0.002294171);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(22,0.006394171);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(23,0.00483052);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(24,0.00225108);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(25,0.00210716);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(26,0.00292757);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(27,0.002203227);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(36,0.002284175);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(37,0.00221053);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(41,0.05740106);
   VbbHcc_tags_H_mass_stack_11->SetBinError(3,0.00221053);
   VbbHcc_tags_H_mass_stack_11->SetBinError(5,0.002026054);
   VbbHcc_tags_H_mass_stack_11->SetBinError(7,0.002683144);
   VbbHcc_tags_H_mass_stack_11->SetBinError(8,0.003279104);
   VbbHcc_tags_H_mass_stack_11->SetBinError(9,0.002398405);
   VbbHcc_tags_H_mass_stack_11->SetBinError(10,0.003312494);
   VbbHcc_tags_H_mass_stack_11->SetBinError(11,0.004629449);
   VbbHcc_tags_H_mass_stack_11->SetBinError(12,0.005703386);
   VbbHcc_tags_H_mass_stack_11->SetBinError(13,0.006149704);
   VbbHcc_tags_H_mass_stack_11->SetBinError(14,0.006219162);
   VbbHcc_tags_H_mass_stack_11->SetBinError(15,0.004511655);
   VbbHcc_tags_H_mass_stack_11->SetBinError(16,0.003218807);
   VbbHcc_tags_H_mass_stack_11->SetBinError(17,0.002227489);
   VbbHcc_tags_H_mass_stack_11->SetBinError(19,0.002640973);
   VbbHcc_tags_H_mass_stack_11->SetBinError(20,0.00326206);
   VbbHcc_tags_H_mass_stack_11->SetBinError(21,0.002294171);
   VbbHcc_tags_H_mass_stack_11->SetBinError(22,0.003765867);
   VbbHcc_tags_H_mass_stack_11->SetBinError(23,0.003461277);
   VbbHcc_tags_H_mass_stack_11->SetBinError(24,0.00225108);
   VbbHcc_tags_H_mass_stack_11->SetBinError(25,0.00210716);
   VbbHcc_tags_H_mass_stack_11->SetBinError(26,0.00292757);
   VbbHcc_tags_H_mass_stack_11->SetBinError(27,0.002203227);
   VbbHcc_tags_H_mass_stack_11->SetBinError(36,0.002284175);
   VbbHcc_tags_H_mass_stack_11->SetBinError(37,0.00221053);
   VbbHcc_tags_H_mass_stack_11->SetBinError(41,0.01133952);
   VbbHcc_tags_H_mass_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_11,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_12 = new TH1D("VbbHcc_tags_H_mass_stack_12","",40,0,400);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(3,0.0003978012);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(5,0.0003148112);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(6,0.0002942409);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(7,0.002397546);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(8,0.001228162);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(9,0.001878576);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(10,0.003211023);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(11,0.002919969);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(12,0.009373258);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(13,0.007360096);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(14,0.008757057);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(15,0.003508243);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(16,0.002190228);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(17,0.002068926);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(18,0.0002922094);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(19,0.001867625);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(20,0.002482364);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(21,0.001288489);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(22,0.001645929);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(23,0.0008743025);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(24,0.0006177896);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(25,0.001247686);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(26,0.0003787132);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(27,0.0008906137);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(28,0.001102254);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(29,0.0007783634);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(30,0.0006115155);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(31,0.00155729);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(32,0.0006131872);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(33,0.0007658186);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(34,0.0008397258);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(35,0.001177759);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(36,0.0002994952);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(37,0.0003525261);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(38,0.0007614975);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(39,0.0005846386);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(40,0.0002910676);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(41,0.02527445);
   VbbHcc_tags_H_mass_stack_12->SetBinError(3,0.0003978012);
   VbbHcc_tags_H_mass_stack_12->SetBinError(5,0.0003148112);
   VbbHcc_tags_H_mass_stack_12->SetBinError(6,0.0002942409);
   VbbHcc_tags_H_mass_stack_12->SetBinError(7,0.0009369563);
   VbbHcc_tags_H_mass_stack_12->SetBinError(8,0.0006256021);
   VbbHcc_tags_H_mass_stack_12->SetBinError(9,0.0007160682);
   VbbHcc_tags_H_mass_stack_12->SetBinError(10,0.0009913238);
   VbbHcc_tags_H_mass_stack_12->SetBinError(11,0.001019021);
   VbbHcc_tags_H_mass_stack_12->SetBinError(12,0.001804556);
   VbbHcc_tags_H_mass_stack_12->SetBinError(13,0.001559954);
   VbbHcc_tags_H_mass_stack_12->SetBinError(14,0.001742746);
   VbbHcc_tags_H_mass_stack_12->SetBinError(15,0.001076193);
   VbbHcc_tags_H_mass_stack_12->SetBinError(16,0.0008429598);
   VbbHcc_tags_H_mass_stack_12->SetBinError(17,0.0008594279);
   VbbHcc_tags_H_mass_stack_12->SetBinError(18,0.0002922094);
   VbbHcc_tags_H_mass_stack_12->SetBinError(19,0.0007965606);
   VbbHcc_tags_H_mass_stack_12->SetBinError(20,0.0008824796);
   VbbHcc_tags_H_mass_stack_12->SetBinError(21,0.000649385);
   VbbHcc_tags_H_mass_stack_12->SetBinError(22,0.000740361);
   VbbHcc_tags_H_mass_stack_12->SetBinError(23,0.0005082511);
   VbbHcc_tags_H_mass_stack_12->SetBinError(24,0.0004378017);
   VbbHcc_tags_H_mass_stack_12->SetBinError(25,0.0006365131);
   VbbHcc_tags_H_mass_stack_12->SetBinError(26,0.0002691401);
   VbbHcc_tags_H_mass_stack_12->SetBinError(27,0.0005142868);
   VbbHcc_tags_H_mass_stack_12->SetBinError(28,0.0005539032);
   VbbHcc_tags_H_mass_stack_12->SetBinError(29,0.000478328);
   VbbHcc_tags_H_mass_stack_12->SetBinError(30,0.0004326486);
   VbbHcc_tags_H_mass_stack_12->SetBinError(31,0.0007080688);
   VbbHcc_tags_H_mass_stack_12->SetBinError(32,0.0004339406);
   VbbHcc_tags_H_mass_stack_12->SetBinError(33,0.0004542715);
   VbbHcc_tags_H_mass_stack_12->SetBinError(34,0.0004873368);
   VbbHcc_tags_H_mass_stack_12->SetBinError(35,0.0006043762);
   VbbHcc_tags_H_mass_stack_12->SetBinError(36,0.0002994952);
   VbbHcc_tags_H_mass_stack_12->SetBinError(37,0.0003525261);
   VbbHcc_tags_H_mass_stack_12->SetBinError(38,0.0004519489);
   VbbHcc_tags_H_mass_stack_12->SetBinError(39,0.0004134387);
   VbbHcc_tags_H_mass_stack_12->SetBinError(40,0.0002910676);
   VbbHcc_tags_H_mass_stack_12->SetBinError(41,0.002856794);
   VbbHcc_tags_H_mass_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_mass__18 = new TH1D("VbbHcc_tags_H_mass__18","",40,0,400);
   VbbHcc_tags_H_mass__18->SetBinContent(3,124);
   VbbHcc_tags_H_mass__18->SetBinContent(4,1785);
   VbbHcc_tags_H_mass__18->SetBinContent(5,4645);
   VbbHcc_tags_H_mass__18->SetBinContent(6,7017);
   VbbHcc_tags_H_mass__18->SetBinContent(7,7942);
   VbbHcc_tags_H_mass__18->SetBinContent(15,6129);
   VbbHcc_tags_H_mass__18->SetBinContent(16,6098);
   VbbHcc_tags_H_mass__18->SetBinContent(17,5677);
   VbbHcc_tags_H_mass__18->SetBinContent(18,5674);
   VbbHcc_tags_H_mass__18->SetBinContent(19,5345);
   VbbHcc_tags_H_mass__18->SetBinContent(20,5009);
   VbbHcc_tags_H_mass__18->SetBinContent(21,4924);
   VbbHcc_tags_H_mass__18->SetBinContent(22,4704);
   VbbHcc_tags_H_mass__18->SetBinContent(23,4687);
   VbbHcc_tags_H_mass__18->SetBinContent(24,4392);
   VbbHcc_tags_H_mass__18->SetBinContent(25,4210);
   VbbHcc_tags_H_mass__18->SetBinContent(26,4274);
   VbbHcc_tags_H_mass__18->SetBinContent(27,4006);
   VbbHcc_tags_H_mass__18->SetBinContent(28,3968);
   VbbHcc_tags_H_mass__18->SetBinContent(29,3935);
   VbbHcc_tags_H_mass__18->SetBinContent(30,3766);
   VbbHcc_tags_H_mass__18->SetBinContent(31,3665);
   VbbHcc_tags_H_mass__18->SetBinContent(32,3684);
   VbbHcc_tags_H_mass__18->SetBinContent(33,3593);
   VbbHcc_tags_H_mass__18->SetBinContent(34,3564);
   VbbHcc_tags_H_mass__18->SetBinContent(35,3489);
   VbbHcc_tags_H_mass__18->SetBinContent(36,3379);
   VbbHcc_tags_H_mass__18->SetBinContent(37,3262);
   VbbHcc_tags_H_mass__18->SetBinContent(38,3224);
   VbbHcc_tags_H_mass__18->SetBinContent(39,3278);
   VbbHcc_tags_H_mass__18->SetBinContent(40,3080);
   VbbHcc_tags_H_mass__18->SetBinContent(41,124959);
   VbbHcc_tags_H_mass__18->SetEntries(307613);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass__18->SetLineColor(ci);
   VbbHcc_tags_H_mass__18->SetLineWidth(2);
   VbbHcc_tags_H_mass__18->SetMarkerStyle(20);
   VbbHcc_tags_H_mass__18->SetMarkerSize(1.2);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__18->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__18->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__18->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__18->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass__18->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__18->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__18->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__18->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__18->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__18->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_mass_fx1013[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_VbbHcc_tags_H_mass_fy1013[40] = {
   0,
   0.2141604,
   103.6804,
   2459.762,
   5154.955,
   7769.798,
   8085.425,
   7012.905,
   4991.304,
   5867.737,
   5611.808,
   5500.312,
   3888.154,
   6474.745,
   5099.26,
   5153.321,
   6272.164,
   4545.729,
   2473.556,
   3866.753,
   5584.247,
   2829.316,
   4318.194,
   4104.404,
   3990.57,
   2898.937,
   3010.601,
   3615.463,
   3037.458,
   2110.687,
   4170.993,
   3123.717,
   2415.689,
   1825.285,
   3399.565,
   1528.226,
   3969.598,
   2179.973,
   2167.423,
   3673.589};
   Double_t Graph_from_VbbHcc_tags_H_mass_fex1013[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_tags_H_mass_fey1013[40] = {
   0,
   0.1089629,
   54.24049,
   989.0274,
   1171.36,
   1571.582,
   1436.525,
   1047.431,
   822.871,
   1116.248,
   1023.267,
   1090.475,
   569.2861,
   1469.282,
   1120.367,
   1110.666,
   1171.083,
   1043.618,
   441.7059,
   809.3108,
   1245.241,
   636.7389,
   940.8812,
   794.7707,
   1033.499,
   710.781,
   853.5783,
   934.6785,
   859.8399,
   393.4729,
   1010.015,
   779.3963,
   617.831,
   500.4414,
   887.4747,
   267.7733,
   940.8739,
   546.9686,
   642.6246,
   1435.77};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_H_mass_fx1013,Graph_from_VbbHcc_tags_H_mass_fy1013,Graph_from_VbbHcc_tags_H_mass_fex1013,Graph_from_VbbHcc_tags_H_mass_fey1013);
   gre->SetName("Graph_from_VbbHcc_tags_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_mass1013 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_mass1013","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->SetMaximum(10474.14);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_mass1013->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_mass1013);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_mass","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tags_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__19 = new TH1D("data_mc_ratio__19","",40,0,400);
   data_mc_ratio__19->SetBinContent(3,1.195983);
   data_mc_ratio__19->SetBinContent(4,0.7256801);
   data_mc_ratio__19->SetBinContent(5,0.9010747);
   data_mc_ratio__19->SetBinContent(6,0.9031122);
   data_mc_ratio__19->SetBinContent(7,0.9822613);
   data_mc_ratio__19->SetBinContent(8,1.137332);
   data_mc_ratio__19->SetBinContent(9,1.570932);
   data_mc_ratio__19->SetBinContent(10,1.244773);
   data_mc_ratio__19->SetBinContent(11,1.277307);
   data_mc_ratio__19->SetBinContent(12,1.250111);
   data_mc_ratio__19->SetBinContent(13,1.687176);
   data_mc_ratio__19->SetBinContent(14,0.9824325);
   data_mc_ratio__19->SetBinContent(15,1.201939);
   data_mc_ratio__19->SetBinContent(16,1.183315);
   data_mc_ratio__19->SetBinContent(17,0.9051103);
   data_mc_ratio__19->SetBinContent(18,1.248205);
   data_mc_ratio__19->SetBinContent(19,2.160856);
   data_mc_ratio__19->SetBinContent(20,1.295402);
   data_mc_ratio__19->SetBinContent(21,0.8817662);
   data_mc_ratio__19->SetBinContent(22,1.662592);
   data_mc_ratio__19->SetBinContent(23,1.085408);
   data_mc_ratio__19->SetBinContent(24,1.07007);
   data_mc_ratio__19->SetBinContent(25,1.054987);
   data_mc_ratio__19->SetBinContent(26,1.474334);
   data_mc_ratio__19->SetBinContent(27,1.330631);
   data_mc_ratio__19->SetBinContent(28,1.097508);
   data_mc_ratio__19->SetBinContent(29,1.295491);
   data_mc_ratio__19->SetBinContent(30,1.784253);
   data_mc_ratio__19->SetBinContent(31,0.8786876);
   data_mc_ratio__19->SetBinContent(32,1.179364);
   data_mc_ratio__19->SetBinContent(33,1.48736);
   data_mc_ratio__19->SetBinContent(34,1.952571);
   data_mc_ratio__19->SetBinContent(35,1.026308);
   data_mc_ratio__19->SetBinContent(36,2.21106);
   data_mc_ratio__19->SetBinContent(37,0.8217457);
   data_mc_ratio__19->SetBinContent(38,1.478917);
   data_mc_ratio__19->SetBinContent(39,1.512395);
   data_mc_ratio__19->SetBinContent(40,0.8384172);
   data_mc_ratio__19->SetBinContent(41,1.326022);
   data_mc_ratio__19->SetBinError(3,0.1074024);
   data_mc_ratio__19->SetBinError(4,0.01717616);
   data_mc_ratio__19->SetBinError(5,0.01322111);
   data_mc_ratio__19->SetBinError(6,0.01078117);
   data_mc_ratio__19->SetBinError(7,0.01102204);
   data_mc_ratio__19->SetBinError(8,0.01273487);
   data_mc_ratio__19->SetBinError(9,0.01774074);
   data_mc_ratio__19->SetBinError(10,0.01456498);
   data_mc_ratio__19->SetBinError(11,0.01508677);
   data_mc_ratio__19->SetBinError(12,0.01507581);
   data_mc_ratio__19->SetBinError(13,0.02083092);
   data_mc_ratio__19->SetBinError(14,0.01231799);
   data_mc_ratio__19->SetBinError(15,0.0153528);
   data_mc_ratio__19->SetBinError(16,0.01515328);
   data_mc_ratio__19->SetBinError(17,0.01201274);
   data_mc_ratio__19->SetBinError(18,0.01657071);
   data_mc_ratio__19->SetBinError(19,0.02955643);
   data_mc_ratio__19->SetBinError(20,0.01830329);
   data_mc_ratio__19->SetBinError(21,0.01256592);
   data_mc_ratio__19->SetBinError(22,0.02424109);
   data_mc_ratio__19->SetBinError(23,0.01585424);
   data_mc_ratio__19->SetBinError(24,0.0161466);
   data_mc_ratio__19->SetBinError(25,0.01625946);
   data_mc_ratio__19->SetBinError(26,0.02255166);
   data_mc_ratio__19->SetBinError(27,0.02102336);
   data_mc_ratio__19->SetBinError(28,0.01742296);
   data_mc_ratio__19->SetBinError(29,0.020652);
   data_mc_ratio__19->SetBinError(30,0.02907477);
   data_mc_ratio__19->SetBinError(31,0.01451435);
   data_mc_ratio__19->SetBinError(32,0.01943069);
   data_mc_ratio__19->SetBinError(33,0.02481347);
   data_mc_ratio__19->SetBinError(34,0.0327068);
   data_mc_ratio__19->SetBinError(35,0.01737509);
   data_mc_ratio__19->SetBinError(36,0.03803701);
   data_mc_ratio__19->SetBinError(37,0.01438783);
   data_mc_ratio__19->SetBinError(38,0.02604632);
   data_mc_ratio__19->SetBinError(39,0.02641562);
   data_mc_ratio__19->SetBinError(40,0.01510723);
   data_mc_ratio__19->SetBinError(41,0.06665617);
   data_mc_ratio__19->SetMinimum(0.4);
   data_mc_ratio__19->SetMaximum(1.6);
   data_mc_ratio__19->SetEntries(626.421);
   data_mc_ratio__19->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__19->SetLineColor(ci);
   data_mc_ratio__19->SetLineWidth(2);
   data_mc_ratio__19->SetMarkerStyle(20);
   data_mc_ratio__19->SetMarkerSize(1.2);
   data_mc_ratio__19->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__19->GetXaxis()->SetRange(1,30);
   data_mc_ratio__19->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__19->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__19->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__19->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__19->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__19->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__19->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__19->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__19->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__19->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__19->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__19->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__19->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__19->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__19->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__19->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__19->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1014[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_mc_statistical_error_fy1014[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1014[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1014[40] = {
   0,
   0.508791,
   0.5231509,
   0.4020826,
   0.2272299,
   0.2022681,
   0.1776685,
   0.1493577,
   0.1648609,
   0.1902349,
   0.1823418,
   0.1982569,
   0.1464155,
   0.226925,
   0.2197117,
   0.2155243,
   0.1867112,
   0.2295822,
   0.1785712,
   0.2092998,
   0.2229918,
   0.2250504,
   0.2178877,
   0.1936385,
   0.2589854,
   0.2451868,
   0.2835242,
   0.2585225,
   0.2830788,
   0.1864193,
   0.2421521,
   0.2495093,
   0.2557576,
   0.2741716,
   0.2610554,
   0.1752183,
   0.23702,
   0.2509061,
   0.2964925,
   0.3908357};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1014,Graph_from_mc_statistical_error_fy1014,Graph_from_mc_statistical_error_fex1014,Graph_from_mc_statistical_error_fey1014);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1014 = new TH1F("Graph_Graph_from_mc_statistical_error1014","",100,0,440);
   Graph_Graph_from_mc_statistical_error1014->SetMinimum(0.372219);
   Graph_Graph_from_mc_statistical_error1014->SetMaximum(1.627781);
   Graph_Graph_from_mc_statistical_error1014->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1014->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1014);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tags_18->cd();
   H_mass_tags_18->Modified();
   H_mass_tags_18->cd();
   H_mass_tags_18->SetSelected(H_mass_tags_18);
}

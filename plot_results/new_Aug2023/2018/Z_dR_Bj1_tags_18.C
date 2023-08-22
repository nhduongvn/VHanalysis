void Z_dR_Bj1_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_18/Z_dR_Bj1_tags_18
//=========  (Tue Aug 22 09:20:41 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_18 = new TCanvas("Z_dR_Bj1_tags_18", "Z_dR_Bj1_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_18->SetHighLightColor(2);
   Z_dR_Bj1_tags_18->Range(0,0,1,1);
   Z_dR_Bj1_tags_18->SetFillColor(0);
   Z_dR_Bj1_tags_18->SetFillStyle(4000);
   Z_dR_Bj1_tags_18->SetBorderMode(0);
   Z_dR_Bj1_tags_18->SetBorderSize(2);
   Z_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-105.8231,6.314516,105727.3);
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
   st->SetMaximum(90613.33);
   
   TH1F *st_stack_55 = new TH1F("st_stack_55","",30,0,6);
   st_stack_55->SetMinimum(0.01);
   st_stack_55->SetMaximum(95144);
   st_stack_55->SetDirectory(0);
   st_stack_55->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_55->SetLineColor(ci);
   st_stack_55->GetXaxis()->SetRange(1,30);
   st_stack_55->GetXaxis()->SetLabelFont(42);
   st_stack_55->GetXaxis()->SetLabelSize(0.035);
   st_stack_55->GetXaxis()->SetTitleSize(0.035);
   st_stack_55->GetXaxis()->SetTitleFont(42);
   st_stack_55->GetYaxis()->SetTitle("Events/0.2");
   st_stack_55->GetYaxis()->SetLabelFont(42);
   st_stack_55->GetYaxis()->SetLabelSize(0.05);
   st_stack_55->GetYaxis()->SetTitleSize(0.057);
   st_stack_55->GetYaxis()->SetTitleOffset(1.2);
   st_stack_55->GetYaxis()->SetTitleFont(42);
   st_stack_55->GetZaxis()->SetLabelFont(42);
   st_stack_55->GetZaxis()->SetLabelSize(0.035);
   st_stack_55->GetZaxis()->SetTitleSize(0.035);
   st_stack_55->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_55);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,6518.848);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,28388.94);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,31988.61);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,25248.69);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,15317.69);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,16325.14);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,10669.17);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,9421.735);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,9360.829);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,8090.517);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,8961.982);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,4352.314);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,6131.729);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,8022.051);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,5440.74);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,3733.267);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,2497.38);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,2518.086);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,3205.265);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,1386.673);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,1411.95);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,1496.218);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,1352.056);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,419.1125);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,1046.229);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,392.6399);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(27,270.4132);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,62.87758);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(29,46.39898);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(30,83.71314);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(31,40.44272);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,804.0454);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,2646.872);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,2486.858);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,2292.727);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,1637.744);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,2924.911);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,1344.709);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,1378.489);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,1330.535);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,1219.986);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,1329.554);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,702.8429);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,1142.384);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,1320.227);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,1075.647);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,780.6795);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,564.8131);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,669.5984);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,770.3059);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,401.6563);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,539.7978);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,648.2628);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,539.151);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,101.0179);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,530.592);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,100.3213);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(27,84.80399);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,36.91296);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(29,18.87581);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(30,48.60255);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(31,33.83516);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(9459);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,28.87113);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,133.1619);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,156.8502);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,134.8402);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,115.5994);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,101.6978);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,84.33095);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,61.85826);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,64.98788);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,55.89142);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,49.17513);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,44.42287);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,38.98151);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,37.76905);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,31.54072);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,27.65265);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,24.26316);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,16.87171);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,15.00898);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,14.5267);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,9.464564);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,7.512663);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,8.10306);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,5.878026);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,4.08064);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,2.612699);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,1.453865);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,1.255191);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,0.9989258);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(30,0.3723161);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(31,0.2787441);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,2.274847);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,4.671357);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,5.138834);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,4.619344);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,4.230413);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,4.126285);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,3.751091);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,3.090536);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,3.206891);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,3.036026);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,2.855041);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,2.647589);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,2.545076);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,2.51375);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,2.315974);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,2.164918);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,2.018335);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,1.644161);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,1.577304);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,1.624283);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,1.282663);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,1.088759);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,1.179304);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,1.071127);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.8643839);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.7023544);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,0.4444462);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,0.4986905);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,0.3417846);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(30,0.2787971);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(31,0.125169);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(14001);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(1,401.3818);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(2,2204.01);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(3,3005.795);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(4,2861.865);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(5,2477.911);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(6,2032.881);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(7,1677.097);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(8,1425.4);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(9,1231.978);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(10,1091.99);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(11,998.5257);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(12,923.5761);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(13,820.3263);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(14,720.4769);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(15,625.3238);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(16,544.9021);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(17,438.4014);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(18,364.6562);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(19,294.9193);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(20,241.0085);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(21,188.3033);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(22,150.2868);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(23,113.3998);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(24,87.27954);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(25,66.32054);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(26,44.2276);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(27,32.98635);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(28,17.6445);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(29,14.72393);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(30,8.261763);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(31,15.81721);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(1,5.214154);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(2,12.19997);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(3,14.29461);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(4,13.95654);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(5,12.98771);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(6,11.751);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(7,10.67523);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(8,9.833264);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(9,9.152488);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(10,8.628948);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(11,8.249756);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(12,7.93728);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(13,7.483902);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(14,7.009986);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(15,6.525719);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(16,6.093853);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(17,5.465199);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(18,4.975466);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(19,4.479255);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(20,4.043072);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(21,3.570905);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(22,3.189673);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(23,2.763577);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(24,2.423111);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(25,2.11396);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(26,1.714807);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(27,1.493723);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(28,1.077494);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(29,0.985954);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(30,0.7415895);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(31,1.02915);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetEntries(383722);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(1,108.9499);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(2,419.3608);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(3,481.6812);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(4,372.3438);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(5,294.646);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(6,215.1262);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(7,170.0807);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(8,159.2198);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(9,130.2904);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(10,117.7583);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(11,119.629);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(12,106.3359);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(13,97.15529);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(14,89.38958);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(15,70.77255);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(16,64.88005);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(17,48.73906);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(18,43.63846);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(19,39.1526);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(20,34.03937);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(21,26.52395);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(22,18.33527);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(23,14.15306);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(24,10.35504);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(25,9.47792);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(26,5.549468);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(27,5.482594);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(28,2.602593);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(29,1.908854);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(30,0.9544271);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(31,2.153861);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(1,4.084614);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(2,12.21557);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(3,14.59941);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(4,13.70934);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(5,14.48151);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(6,11.04534);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(7,8.226271);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(8,9.703606);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(9,8.243226);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(10,5.991076);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(11,9.031598);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(12,8.798445);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(13,5.53567);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(14,7.56461);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(15,6.015581);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(16,7.05491);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(17,3.886847);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(18,5.233097);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(19,5.129632);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(20,5.067298);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(21,3.019732);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(22,2.379486);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(23,4.332703);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(24,1.737882);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(25,1.553914);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(26,1.242861);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(27,1.162616);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(28,0.6873811);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(29,0.7521128);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(30,0.5318241);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(31,0.7812139);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetEntries(17726);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(1,19.96862);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(2,52.92304);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(3,58.77278);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(4,26.46418);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(5,24.9903);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(6,16.80907);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(7,12.0841);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(8,12.87087);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(9,11.37553);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(10,14.43192);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(11,7.333739);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(12,10.12219);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(13,5.468974);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(14,9.393412);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(15,6.225041);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(16,3.323071);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(17,4.532083);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(18,3.933516);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(19,5.329499);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(20,3.800587);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(21,1.785335);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(22,1.064371);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(23,3.421476);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(24,1.1988);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(25,0.8256602);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(26,0.5299354);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(27,0.7967685);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(28,0.1935769);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(29,0.7958432);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(31,0.2973413);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(1,2.805937);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(2,5.591292);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(3,12.59781);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(4,4.682233);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(5,4.708985);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(6,1.931243);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(7,3.263181);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(8,3.339236);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(9,2.595571);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(10,3.739639);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(11,1.333907);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(12,3.242103);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(13,1.168113);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(14,3.269537);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(15,2.343845);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(16,0.8373211);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(17,2.270865);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(18,2.209872);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(19,2.30756);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(20,2.243675);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(21,0.5185096);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(22,0.4773631);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(23,2.195045);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(24,0.6474063);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(25,0.3911194);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(26,0.2549006);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(27,0.5107219);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(28,0.1361122);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(29,0.5107211);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(31,0.2973413);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetEntries(2023);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(3,0.5709342);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(6,0.5709342);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(3,0.5709342);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(6,0.5709342);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(1,0.7083982);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(2,3.187792);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(3,1.770996);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(4,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(5,1.416796);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(6,1.416796);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(9,1.062597);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(14,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(20,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(1,0.5009132);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(2,1.062597);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(3,0.7920133);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(4,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(5,0.7083982);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(6,0.7083982);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(7,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(8,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(9,0.6134909);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(14,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(20,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(1,1.676486);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(2,7.264773);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(3,8.941259);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(4,9.500088);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(5,7.264773);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(6,3.632387);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(7,2.235315);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(8,2.794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(9,3.352972);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(10,2.794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(11,1.397072);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(12,1.9559);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(13,1.9559);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(14,2.514729);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(15,1.9559);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(16,1.397072);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(17,1.117657);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(18,0.5588287);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(22,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(28,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(1,0.6844226);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(2,1.424739);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(3,1.580606);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(4,1.629252);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(5,1.424739);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(6,1.007443);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(7,0.7903031);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(8,0.8835858);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(9,0.9679197);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(10,0.8835858);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(11,0.6247895);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(12,0.7392609);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(13,0.7392609);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(14,0.8382431);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(15,0.7392609);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(16,0.6247895);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(17,0.5588287);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(18,0.3951516);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(19,0.4839599);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(20,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(22,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(28,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(1,1.712906);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(2,8.054062);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(3,9.341577);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(4,7.41314);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(5,5.677546);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(6,4.23689);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(7,3.159234);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(8,2.685633);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(9,2.611898);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(10,2.679961);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(11,2.589211);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(12,2.60339);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(13,2.098594);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(14,1.885898);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(15,1.395281);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(16,1.006758);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(17,0.8904843);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(18,0.5359921);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(19,0.4253906);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(20,0.3091172);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(21,0.2098594);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(22,0.1701562);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(23,0.1928437);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(24,0.1332891);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(25,0.08507812);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(26,0.06239062);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(27,0.04253906);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(28,0.03119531);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(29,0.01134375);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(30,0.002835937);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(31,0.002835937);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(1,0.06969716);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(2,0.1511318);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(3,0.162764);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(4,0.1449938);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(5,0.1268904);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(6,0.1096155);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(7,0.09465405);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(8,0.08727133);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(9,0.08606497);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(10,0.08717913);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(11,0.08569037);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(12,0.08592469);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(13,0.07714583);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(14,0.073132);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(15,0.06290413);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(16,0.05343315);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(17,0.05025294);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(18,0.03898769);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(19,0.034733);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(20,0.02960805);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(21,0.02439565);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(22,0.02196708);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(23,0.02338574);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(24,0.01944221);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(25,0.01553307);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(26,0.01330172);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(27,0.01098354);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(28,0.00940574);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(29,0.005671875);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(30,0.002835937);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(31,0.002835937);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetEntries(21953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(1,0.7176077);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(2,3.474918);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(3,4.609657);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(4,3.9274);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(5,2.987793);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(6,2.08283);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(7,1.532782);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(8,1.295936);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(9,1.192713);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(10,1.077472);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(11,1.032931);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(12,0.9169824);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(13,0.809518);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(14,0.7176077);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(15,0.6009523);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(16,0.4192526);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(17,0.3690554);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(18,0.270075);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(19,0.2354319);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(20,0.1661456);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(21,0.1364515);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(22,0.1060504);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(23,0.09544536);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(24,0.06857926);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(25,0.03959215);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(26,0.03605714);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(27,0.01555406);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(28,0.007777029);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(29,0.004242016);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(30,0.002121008);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(31,0.001414005);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(1,0.02252444);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(2,0.04956588);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(3,0.057088);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(4,0.05269423);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(5,0.04596061);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(6,0.03837403);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(7,0.03291931);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(8,0.03026929);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(9,0.02903879);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(10,0.02760028);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(11,0.02702378);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(12,0.02546191);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(13,0.02392345);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(14,0.02252444);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(15,0.02061249);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(16,0.01721664);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(17,0.01615312);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(18,0.01381824);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(19,0.01290159);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(20,0.01083815);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(21,0.009821995);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(22,0.008658979);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(23,0.008214629);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(24,0.006963169);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(25,0.005290723);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(26,0.005049009);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(27,0.003316136);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(28,0.002344863);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(29,0.001731796);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(30,0.001224565);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(31,0.0009998527);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(1,0.01593033);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(2,0.04551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(3,0.03186067);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(4,0.0182061);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(5,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(6,0.006827286);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(7,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(8,0.01365457);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(9,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(10,0.009103048);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(11,0.009103048);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(16,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(1,0.0060211);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(2,0.01017752);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(3,0.008515121);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(4,0.006436827);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(5,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(6,0.003941735);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(7,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(8,0.005574455);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(9,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(10,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(11,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(16,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(17,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(27,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(1,0.002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(2,0.02037666);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(3,0.02097598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(4,0.01378421);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(5,0.00749142);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(6,0.002097598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(7,0.002097598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(8,0.003595882);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(9,0.002097598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(10,0.002097598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(11,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(12,0.002097598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(13,0.001198627);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(14,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(15,0.001498284);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(16,0.0008989704);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(17,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(19,0.001498284);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(20,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(22,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(24,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(1,0.000947598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(2,0.002471033);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(3,0.002507109);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(4,0.002032371);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(5,0.001498284);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(6,0.0007928174);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(7,0.0007928174);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(8,0.001038042);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(9,0.0007928174);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(10,0.0007928174);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(11,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(12,0.0007928174);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(13,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(14,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(15,0.000670053);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(16,0.0005190208);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(17,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(19,0.000670053);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(20,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(22,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(24,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__150 = new TH1D("VbbHcc_tags_Z_dR_Bj1__150","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(1,9209);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(2,40776);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(3,40365);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(4,32866);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(5,27047);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(6,21603);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(7,17843);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(8,15200);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(9,13237);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(10,11817);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(11,10919);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(12,10017);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(13,8965);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(14,7972);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(15,7119);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(16,6130);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(17,5194);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(18,4390);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(19,3537);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(20,2985);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(21,2468);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(22,2035);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(23,1631);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(24,1290);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(25,924);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(26,708);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(27,505);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(28,302);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(29,207);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(30,103);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(31,210);
   VbbHcc_tags_Z_dR_Bj1__150->SetEntries(307603);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1__150->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1__150->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1__150->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1__150->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1__150->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1__150->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__150->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__150->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__150->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__150->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__150->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__150->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__150->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1__150->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__150->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__150->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__150->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__150->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__150->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1109[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1109[30] = {
   7082.853,
   31220.45,
   35716.99,
   28665.43,
   18248.2,
   18703.61,
   12620.05,
   11088.23,
   10807.69,
   9377.151,
   10141.67,
   5442.249,
   7098.527,
   8884.553,
   6178.555,
   4376.853,
   3015.698,
   2948.552,
   3561.176,
   1681.157,
   1638.374,
   1673.973,
   1491.701,
   524.0261,
   1127.058,
   445.6581,
   311.1931,
   84.89183,
   64.84212,
   93.3066};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1109[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1109[30] = {
   804.0812,
   2646.939,
   2486.98,
   2292.821,
   1637.873,
   2924.959,
   1344.786,
   1378.566,
   1330.599,
   1220.041,
   1329.614,
   702.9557,
   1142.426,
   1320.274,
   1075.689,
   780.7389,
   564.8614,
   669.6431,
   770.3412,
   401.7184,
   539.8198,
   648.2761,
   539.1813,
   101.0697,
   530.5993,
   100.3464,
   84.82782,
   36.93975,
   18.92648,
   48.61191};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1109,Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1109,Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1109,Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1109);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetMinimum(40.22522);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetMaximum(42019.9);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__151 = new TH1D("data_mc_ratio__151","",30,0,6);
   data_mc_ratio__151->SetBinContent(1,1.300182);
   data_mc_ratio__151->SetBinContent(2,1.306067);
   data_mc_ratio__151->SetBinContent(3,1.130134);
   data_mc_ratio__151->SetBinContent(4,1.146538);
   data_mc_ratio__151->SetBinContent(5,1.482174);
   data_mc_ratio__151->SetBinContent(6,1.155018);
   data_mc_ratio__151->SetBinContent(7,1.413861);
   data_mc_ratio__151->SetBinContent(8,1.370823);
   data_mc_ratio__151->SetBinContent(9,1.224776);
   data_mc_ratio__151->SetBinContent(10,1.260191);
   data_mc_ratio__151->SetBinContent(11,1.076647);
   data_mc_ratio__151->SetBinContent(12,1.840599);
   data_mc_ratio__151->SetBinContent(13,1.262938);
   data_mc_ratio__151->SetBinContent(14,0.8972877);
   data_mc_ratio__151->SetBinContent(15,1.152211);
   data_mc_ratio__151->SetBinContent(16,1.40055);
   data_mc_ratio__151->SetBinContent(17,1.722321);
   data_mc_ratio__151->SetBinContent(18,1.488867);
   data_mc_ratio__151->SetBinContent(19,0.9932114);
   data_mc_ratio__151->SetBinContent(20,1.775563);
   data_mc_ratio__151->SetBinContent(21,1.506372);
   data_mc_ratio__151->SetBinContent(22,1.215671);
   data_mc_ratio__151->SetBinContent(23,1.093382);
   data_mc_ratio__151->SetBinContent(24,2.461709);
   data_mc_ratio__151->SetBinContent(25,0.8198334);
   data_mc_ratio__151->SetBinContent(26,1.588662);
   data_mc_ratio__151->SetBinContent(27,1.622786);
   data_mc_ratio__151->SetBinContent(28,3.557468);
   data_mc_ratio__151->SetBinContent(29,3.192369);
   data_mc_ratio__151->SetBinContent(30,1.103888);
   data_mc_ratio__151->SetBinContent(31,3.559677);
   data_mc_ratio__151->SetBinError(1,0.01354871);
   data_mc_ratio__151->SetBinError(2,0.006467899);
   data_mc_ratio__151->SetBinError(3,0.005625065);
   data_mc_ratio__151->SetBinError(4,0.006324335);
   data_mc_ratio__151->SetBinError(5,0.009012382);
   data_mc_ratio__151->SetBinError(6,0.007858356);
   data_mc_ratio__151->SetBinError(7,0.01058456);
   data_mc_ratio__151->SetBinError(8,0.01111884);
   data_mc_ratio__151->SetBinError(9,0.0106454);
   data_mc_ratio__151->SetBinError(10,0.01159265);
   data_mc_ratio__151->SetBinError(11,0.01030343);
   data_mc_ratio__151->SetBinError(12,0.01839037);
   data_mc_ratio__151->SetBinError(13,0.0133385);
   data_mc_ratio__151->SetBinError(14,0.01004958);
   data_mc_ratio__151->SetBinError(15,0.01365597);
   data_mc_ratio__151->SetBinError(16,0.01788827);
   data_mc_ratio__151->SetBinError(17,0.02389809);
   data_mc_ratio__151->SetBinError(18,0.02247106);
   data_mc_ratio__151->SetBinError(19,0.0167003);
   data_mc_ratio__151->SetBinError(20,0.03249854);
   data_mc_ratio__151->SetBinError(21,0.03032212);
   data_mc_ratio__151->SetBinError(22,0.02694845);
   data_mc_ratio__151->SetBinError(23,0.02707355);
   data_mc_ratio__151->SetBinError(24,0.06853966);
   data_mc_ratio__151->SetBinError(25,0.02697054);
   data_mc_ratio__151->SetBinError(26,0.05970557);
   data_mc_ratio__151->SetBinError(27,0.07221305);
   data_mc_ratio__151->SetBinError(28,0.2047093);
   data_mc_ratio__151->SetBinError(29,0.221885);
   data_mc_ratio__151->SetBinError(30,0.1087693);
   data_mc_ratio__151->SetBinError(31,2.057891);
   data_mc_ratio__151->SetMinimum(0.4);
   data_mc_ratio__151->SetMaximum(1.6);
   data_mc_ratio__151->SetEntries(335.1677);
   data_mc_ratio__151->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__151->SetLineColor(ci);
   data_mc_ratio__151->SetLineWidth(2);
   data_mc_ratio__151->SetMarkerStyle(20);
   data_mc_ratio__151->SetMarkerSize(1.2);
   data_mc_ratio__151->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__151->GetXaxis()->SetRange(1,30);
   data_mc_ratio__151->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__151->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__151->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__151->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__151->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__151->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__151->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__151->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__151->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__151->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__151->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__151->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__151->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__151->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__151->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__151->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__151->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1110[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1110[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1110[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1110[30] = {
   0.113525,
   0.08478222,
   0.06963015,
   0.07998556,
   0.08975531,
   0.1563848,
   0.1065595,
   0.124327,
   0.123116,
   0.1301078,
   0.131104,
   0.1291664,
   0.1609384,
   0.1486034,
   0.1741004,
   0.178379,
   0.187307,
   0.2271092,
   0.2163166,
   0.2389535,
   0.3294851,
   0.387268,
   0.361454,
   0.1928714,
   0.4707825,
   0.2251646,
   0.272589,
   0.4351391,
   0.2918856,
   0.5209911};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1110,Graph_from_mc_statistical_error_fy1110,Graph_from_mc_statistical_error_fex1110,Graph_from_mc_statistical_error_fey1110);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1110 = new TH1F("Graph_Graph_from_mc_statistical_error1110","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1110->SetMinimum(0.3748107);
   Graph_Graph_from_mc_statistical_error1110->SetMaximum(1.625189);
   Graph_Graph_from_mc_statistical_error1110->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1110->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1110->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1110->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1110->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1110->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1110->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1110->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1110->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1110->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1110);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_tags_18->cd();
   Z_dR_Bj1_tags_18->Modified();
   Z_dR_Bj1_tags_18->cd();
   Z_dR_Bj1_tags_18->SetSelected(Z_dR_Bj1_tags_18);
}

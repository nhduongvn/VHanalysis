void Z_dR_Bj0_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_17/Z_dR_Bj0_both_17
//=========  (Thu Aug 10 12:33:02 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_17 = new TCanvas("Z_dR_Bj0_both_17", "Z_dR_Bj0_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_17->SetHighLightColor(2);
   Z_dR_Bj0_both_17->Range(0,0,1,1);
   Z_dR_Bj0_both_17->SetFillColor(0);
   Z_dR_Bj0_both_17->SetFillStyle(4000);
   Z_dR_Bj0_both_17->SetBorderMode(0);
   Z_dR_Bj0_both_17->SetBorderSize(2);
   Z_dR_Bj0_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.873096,6.314516,12.49161);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(2.58958e+10);
   
   TH1F *st_stack_242 = new TH1F("st_stack_242","",30,0,6);
   st_stack_242->SetMinimum(0.001387614);
   st_stack_242->SetMaximum(9.01859e+10);
   st_stack_242->SetDirectory(0);
   st_stack_242->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_242->SetLineColor(ci);
   st_stack_242->GetXaxis()->SetRange(1,30);
   st_stack_242->GetXaxis()->SetLabelFont(42);
   st_stack_242->GetXaxis()->SetLabelSize(0.035);
   st_stack_242->GetXaxis()->SetTitleSize(0.035);
   st_stack_242->GetXaxis()->SetTitleFont(42);
   st_stack_242->GetYaxis()->SetTitle("Events/0.2");
   st_stack_242->GetYaxis()->SetLabelFont(42);
   st_stack_242->GetYaxis()->SetLabelSize(0.05);
   st_stack_242->GetYaxis()->SetTitleSize(0.057);
   st_stack_242->GetYaxis()->SetTitleOffset(1.2);
   st_stack_242->GetYaxis()->SetTitleFont(42);
   st_stack_242->GetZaxis()->SetLabelFont(42);
   st_stack_242->GetZaxis()->SetLabelSize(0.035);
   st_stack_242->GetZaxis()->SetTitleSize(0.035);
   st_stack_242->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_242);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,8487.972);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,27280.96);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,44792.09);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,23376.87);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,13659.84);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,14649.27);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,7779.136);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,9573.707);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,7430.884);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,21616.96);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,4790.876);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,4484.078);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,3194.29);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,2928.082);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,3206.772);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,2234.837);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,1849.006);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,855.1183);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,1361.23);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,2484.497);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,1644.49);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,775.8604);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,1105.653);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,494.6574);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,198.0106);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,419.5501);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(27,145.7866);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(28,62.97662);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,29.84279);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(30,6.808747);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(31,4.305786);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,1001.891);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,1919.679);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,15011.1);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,2313.856);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,1477.591);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,1594.52);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,1036.756);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,1283.582);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,1098.183);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,14848);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,828.6341);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,786.123);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,676.539);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,566.055);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,676.3406);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,554.5916);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,482.4863);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,117.9558);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,396.2507);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,668.9452);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,545.3269);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,284.6319);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,468.9656);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,274.6313);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,50.91366);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,271.8436);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(27,44.27385);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(28,27.14745);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,23.10679);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(30,6.808747);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(31,4.096126);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(10822);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,37.57311);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,142.325);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,152.8014);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,119.4368);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,97.23295);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,78.09053);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,61.21904);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,49.17003);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,42.70642);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,35.25191);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,33.24482);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,29.64233);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,27.8135);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,23.91262);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,20.82988);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,17.86307);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,12.63928);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,9.800625);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,9.755791);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,10.03439);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,8.036997);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,7.126839);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,6.667068);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,2.806592);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,3.472098);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,2.71478);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,1.48632);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,0.6960362);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,0.6500731);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(30,0.5594221);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(31,0.4991865);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,2.528598);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,4.695448);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,4.813809);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,4.308206);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,3.865952);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,3.493538);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,3.059162);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,2.681112);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,2.502113);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,2.233829);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,2.310243);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,2.197149);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,2.070194);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,1.996589);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,1.870215);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,1.669983);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,1.343027);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,1.174798);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,1.198002);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,1.292278);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,1.112414);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,1.040026);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,1.055086);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.7284226);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.7879073);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.7248503);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.4289655);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,0.2996415);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,0.2969426);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(30,0.2891264);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(31,0.2838502);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(12820);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(1,580.8532);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(2,2611.582);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(3,3100.28);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(4,2648.316);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(5,2072.215);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(6,1592.641);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(7,1249.195);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(8,1012.932);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(9,834.1451);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(10,727.4957);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(11,627.6306);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(12,550.9424);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(13,485.3668);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(14,429.2977);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(15,370.4386);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(16,318.9527);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(17,270.9385);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(18,235.0774);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(19,200.9089);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(20,157.8356);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(21,135.0929);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(22,107.1735);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(23,80.47851);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(24,61.57002);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(25,46.62576);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(26,33.29789);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(27,22.23084);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(28,13.86048);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(29,7.924543);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(30,3.942361);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(31,8.123997);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(1,6.03835);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(2,12.77227);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(3,13.9342);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(4,12.89184);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(5,11.40143);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(6,9.979262);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(7,8.835624);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(8,7.956266);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(9,7.21237);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(10,6.743991);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(11,6.26654);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(12,5.87253);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(13,5.512165);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(14,5.185884);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(15,4.81447);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(16,4.461662);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(17,4.122622);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(18,3.836651);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(19,3.545706);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(20,3.131592);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(21,2.894071);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(22,2.577499);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(23,2.246302);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(24,1.952341);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(25,1.70052);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(26,1.444933);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(27,1.174813);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(28,0.9270142);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(29,0.7042789);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(30,0.4817719);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(31,0.7069551);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetEntries(345543);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(1,101.0767);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(2,398.4377);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(3,407.1386);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(4,307.0821);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(5,211.0939);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(6,162.2381);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(7,113.2264);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(8,107.8888);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(9,103.4077);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(10,80.36368);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(11,67.34912);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(12,61.14396);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(13,55.92619);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(14,47.68379);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(15,37.72563);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(16,45.72102);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(17,25.67307);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(18,24.10507);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(19,23.01654);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(20,13.27271);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(21,17.25449);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(22,12.84534);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(23,9.0838);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(24,5.895483);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(25,5.188639);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(26,3.750634);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(27,2.791149);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(28,1.865258);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(29,0.618661);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(30,1.254995);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(31,1.034193);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(1,3.595152);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(2,10.62895);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(3,13.98541);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(4,12.33862);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(5,11.03274);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(6,9.155938);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(7,6.180346);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(8,7.211776);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(9,8.420487);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(10,6.162998);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(11,5.284444);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(12,5.181745);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(13,4.34015);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(14,4.051224);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(15,2.777027);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(16,5.536724);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(17,2.173493);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(18,2.230686);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(19,3.411942);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(20,1.447387);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(21,1.966568);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(22,3.095315);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(23,1.380729);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(24,1.075083);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(25,0.9518344);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(26,0.6397626);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(27,0.6479645);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(28,0.502437);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(29,0.377485);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(30,0.5433758);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(31,0.4232544);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetEntries(17765);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(1,20.14221);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(2,47.02004);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(3,47.13603);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(4,32.72043);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(5,14.44793);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(6,12.89016);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(7,12.60403);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(8,9.496895);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(9,9.301886);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(10,6.338195);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(11,4.179292);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(12,6.04618);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(13,4.682591);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(14,4.435816);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(15,4.884567);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(16,5.40232);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(17,2.689112);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(18,1.845848);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(19,0.9765486);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(20,1.680899);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(21,3.360075);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(22,2.882919);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(23,0.9379891);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(24,0.6298667);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(25,1.159555);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(26,1.835847);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(27,0.5345678);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(28,0.4776063);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(29,0.1055572);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(30,0.08120236);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(31,0.08120236);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(1,2.67788);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(2,4.526477);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(3,4.89117);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(4,9.631744);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(5,2.101335);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(6,2.103423);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(7,2.559869);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(8,1.95287);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(9,1.950491);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(10,1.795863);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(11,0.8095985);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(12,1.467827);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(13,0.811921);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(14,0.7525991);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(15,1.739044);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(16,1.830714);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(17,0.6188887);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(18,0.41765);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(19,0.3044261);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(20,0.5077472);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(21,1.326945);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(22,1.278368);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(23,0.2968072);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(24,0.216414);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(25,0.4419141);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(26,1.187592);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(27,0.2435163);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(28,0.2302979);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(29,0.08285452);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(30,0.08120236);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(31,0.08120236);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetEntries(2446);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(3,0.6306118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(5,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(7,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(3,0.4459099);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(5,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(7,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(11,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(1,0.4958844);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(2,1.487653);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(3,1.239711);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(4,1.239711);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(5,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(6,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(8,0.4958844);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(12,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(16,0.4958844);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(24,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(1,0.3506432);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(2,0.6073318);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(3,0.5544156);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(4,0.5544156);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(5,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(6,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(8,0.3506432);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(12,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(16,0.3506432);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(24,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(1,3.545159);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(2,10.12902);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(3,9.116122);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(4,4.304835);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(5,2.785482);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(6,2.785482);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(7,1.266128);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(8,2.785482);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(9,2.27903);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(10,1.266128);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(11,1.519354);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(12,0.7596768);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(14,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(15,0.5064512);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(16,0.5064512);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(17,0.7596768);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(20,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(23,0.7596768);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(25,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(26,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(1,0.9474835);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(2,1.601539);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(3,1.519354);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(4,1.044076);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(5,0.8398543);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(6,0.8398543);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(7,0.5662297);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(8,0.8398543);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(9,0.7596768);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(10,0.5662297);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(11,0.6202735);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(12,0.4385996);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(14,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(15,0.3581151);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(16,0.3581151);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(17,0.4385996);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(19,0.3581151);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(20,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(23,0.4385996);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(25,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(26,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(1,1.817006);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(2,8.561735);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(3,9.114105);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(4,6.181052);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(5,3.910198);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(6,2.647177);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(7,2.017281);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(8,1.712024);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(9,1.592505);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(10,1.476217);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(11,1.414842);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(12,1.335702);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(13,1.135427);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(14,0.8657026);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(15,0.7914073);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(16,0.6008235);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(17,0.4716141);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(18,0.3924734);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(19,0.2794152);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(20,0.2164257);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(21,0.2115803);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(22,0.1679722);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(23,0.1389001);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(24,0.1227489);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(25,0.06621979);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(26,0.05329886);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(27,0.05006862);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(28,0.01776629);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(29,0.006460468);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(31,0.001615117);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(1,0.05417267);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(2,0.1175934);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(3,0.1213274);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(4,0.09991557);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(5,0.07946966);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(6,0.0653873);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(7,0.05708016);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(8,0.0525844);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(9,0.0507157);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(10,0.04882891);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(11,0.04780309);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(12,0.0464469);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(13,0.04282345);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(14,0.03739266);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(15,0.03575214);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(16,0.03115125);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(17,0.02759913);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(18,0.02517718);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(19,0.02124355);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(20,0.01869633);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(21,0.01848586);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(22,0.01647102);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(23,0.01497798);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(24,0.01408026);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(25,0.01034179);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(26,0.00927814);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(27,0.00899259);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(28,0.005356737);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(29,0.003230234);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(31,0.001615117);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetEntries(29329);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(1,0.6878638);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(2,3.362613);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(3,4.026014);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(4,2.951719);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(5,1.964496);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(6,1.323899);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(7,0.9731261);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(8,0.7935933);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(9,0.6538645);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(10,0.6198652);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(11,0.5630615);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(12,0.4660391);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(13,0.4092354);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(14,0.3619681);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(15,0.3238225);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(16,0.2674335);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(17,0.218093);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(18,0.1824352);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(19,0.1380703);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(20,0.1218999);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(21,0.097437);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(22,0.09080299);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(23,0.07670572);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(24,0.04809656);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(25,0.03773092);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(26,0.02238978);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(27,0.0178289);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(28,0.007048634);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(29,0.005390132);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(30,0.001243877);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(31,0.0004146255);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(1,0.01688804);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(2,0.03733933);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(3,0.04085692);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(4,0.03498368);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(5,0.02853997);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(6,0.02342909);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(7,0.02008688);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(8,0.01813957);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(9,0.01646539);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(10,0.01603159);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(11,0.01527939);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(12,0.01390078);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(13,0.01302611);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(14,0.01225076);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(15,0.01158728);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(16,0.01053018);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(17,0.009509308);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(18,0.008697259);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(19,0.007566206);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(20,0.007109347);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(21,0.006356089);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(22,0.006135898);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(23,0.005639517);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(24,0.004465654);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(25,0.003955276);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(26,0.003046863);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(27,0.002718881);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(28,0.001709545);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(29,0.001494954);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(30,0.0007181525);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(31,0.0004146255);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(1,0.009481507);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(2,0.04108653);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(3,0.03160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(4,0.02212352);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(5,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(6,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(8,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(9,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(10,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(11,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(14,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(15,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(18,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(1,0.003870809);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(2,0.008057731);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(3,0.007067098);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(4,0.005912758);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(5,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(6,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(7,0.003533549);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(8,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(9,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(10,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(11,0.002234813);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(13,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(14,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(15,0.002234813);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(17,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(18,0.002234813);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(1,0.003944507);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(2,0.01287155);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(3,0.01141831);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(4,0.01058789);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(5,0.007058592);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(6,0.002283662);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(7,0.001868451);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(8,0.001245634);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(9,0.001245634);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(10,0.002491268);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(11,0.001038028);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(12,0.001038028);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(13,0.000622817);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(14,0.000622817);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(15,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(16,0.0008304226);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(17,0.0008304226);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(18,0.000622817);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(19,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(20,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(21,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(22,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(23,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(1,0.0009049321);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(2,0.001634689);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(3,0.001539645);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(4,0.001482601);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(5,0.001210539);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(6,0.0006885501);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(7,0.000622817);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(8,0.0005085279);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(9,0.0005085279);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(10,0.0007191671);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(11,0.0004642204);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(12,0.0004642204);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(13,0.0003595835);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(14,0.0003595835);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(15,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(16,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(17,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(18,0.0003595835);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(19,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(20,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(21,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(22,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(23,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj0__664 = new TH1D("VbbHcc_both_Z_dR_Bj0__664","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(1,3621);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(2,12163);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(3,11208);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(4,8348);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(5,6337);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(6,4867);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(7,3854);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(8,3107);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(9,2797);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(10,2302);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(11,2031);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(12,1801);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(13,1645);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(14,1373);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(15,1301);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(16,1069);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(17,852);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(18,756);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(19,683);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(20,586);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(21,491);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(22,410);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(23,328);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(24,248);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(25,192);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(26,143);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(27,108);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(28,65);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(29,38);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(30,21);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(31,34);
   VbbHcc_both_Z_dR_Bj0__664->SetEntries(72808);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0__664->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0__664->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0__664->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0__664->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0__664->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0__664->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__664->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__664->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__664->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0__664->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__664->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__664->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__664->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fx1483[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fy1483[30] = {
   9234.176,
   30503.92,
   48523.62,
   26499.14,
   16064.06,
   16502.14,
   9219.962,
   10758.99,
   8424.974,
   22469.77,
   5527.096,
   5134.663,
   3769.626,
   3434.898,
   3642.276,
   2624.647,
   2162.397,
   1126.526,
   1596.812,
   2667.912,
   1808.546,
   906.1482,
   1203.796,
   565.9783,
   254.8138,
   461.4786,
   172.8976,
   79.90082,
   39.15348,
   12.64797};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fex1483[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fey1483[30] = {
   1001.923,
   1919.763,
   15011.12,
   2313.949,
   1477.683,
   1594.583,
   1036.82,
   1283.631,
   1098.244,
   14848,
   828.6786,
   786.1666,
   676.579,
   566.0973,
   676.3683,
   554.6429,
   482.5113,
   118.0458,
   396.2833,
   668.9556,
   545.3408,
   284.6652,
   468.9745,
   274.6415,
   50.95958,
   271.8519,
   44.29692,
   27.17055,
   23.12266,
   6.853947};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_fx1483,Graph_from_VbbHcc_both_Z_dR_Bj0_fy1483,Graph_from_VbbHcc_both_Z_dR_Bj0_fex1483,Graph_from_VbbHcc_both_Z_dR_Bj0_fey1483);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetMinimum(5.214622);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetMaximum(69887.63);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__665 = new TH1D("data_mc_ratio__665","",30,0,6);
   data_mc_ratio__665->SetBinContent(1,0.3921303);
   data_mc_ratio__665->SetBinContent(2,0.3987357);
   data_mc_ratio__665->SetBinContent(3,0.2309803);
   data_mc_ratio__665->SetBinContent(4,0.3150291);
   data_mc_ratio__665->SetBinContent(5,0.394483);
   data_mc_ratio__665->SetBinContent(6,0.2949315);
   data_mc_ratio__665->SetBinContent(7,0.418006);
   data_mc_ratio__665->SetBinContent(8,0.2887818);
   data_mc_ratio__665->SetBinContent(9,0.3319892);
   data_mc_ratio__665->SetBinContent(10,0.1024487);
   data_mc_ratio__665->SetBinContent(11,0.3674624);
   data_mc_ratio__665->SetBinContent(12,0.3507533);
   data_mc_ratio__665->SetBinContent(13,0.4363828);
   data_mc_ratio__665->SetBinContent(14,0.3997207);
   data_mc_ratio__665->SetBinContent(15,0.3571942);
   data_mc_ratio__665->SetBinContent(16,0.4072928);
   data_mc_ratio__665->SetBinContent(17,0.3940072);
   data_mc_ratio__665->SetBinContent(18,0.6710898);
   data_mc_ratio__665->SetBinContent(19,0.4277271);
   data_mc_ratio__665->SetBinContent(20,0.2196474);
   data_mc_ratio__665->SetBinContent(21,0.2714889);
   data_mc_ratio__665->SetBinContent(22,0.4524646);
   data_mc_ratio__665->SetBinContent(23,0.2724714);
   data_mc_ratio__665->SetBinContent(24,0.4381793);
   data_mc_ratio__665->SetBinContent(25,0.7534913);
   data_mc_ratio__665->SetBinContent(26,0.3098735);
   data_mc_ratio__665->SetBinContent(27,0.6246472);
   data_mc_ratio__665->SetBinContent(28,0.8135086);
   data_mc_ratio__665->SetBinContent(29,0.9705396);
   data_mc_ratio__665->SetBinContent(30,1.660345);
   data_mc_ratio__665->SetBinContent(31,2.420278);
   data_mc_ratio__665->SetBinError(1,0.006516525);
   data_mc_ratio__665->SetBinError(2,0.00361547);
   data_mc_ratio__665->SetBinError(3,0.00218178);
   data_mc_ratio__665->SetBinError(4,0.003447938);
   data_mc_ratio__665->SetBinError(5,0.004955489);
   data_mc_ratio__665->SetBinError(6,0.004227567);
   data_mc_ratio__665->SetBinError(7,0.00673328);
   data_mc_ratio__665->SetBinError(8,0.005180828);
   data_mc_ratio__665->SetBinError(9,0.006277369);
   data_mc_ratio__665->SetBinError(10,0.002135276);
   data_mc_ratio__665->SetBinError(11,0.00815376);
   data_mc_ratio__665->SetBinError(12,0.008265039);
   data_mc_ratio__665->SetBinError(13,0.01075932);
   data_mc_ratio__665->SetBinError(14,0.01078751);
   data_mc_ratio__665->SetBinError(15,0.009902977);
   data_mc_ratio__665->SetBinError(16,0.01245713);
   data_mc_ratio__665->SetBinError(17,0.01349846);
   data_mc_ratio__665->SetBinError(18,0.0244073);
   data_mc_ratio__665->SetBinError(19,0.01636652);
   data_mc_ratio__665->SetBinError(20,0.009073551);
   data_mc_ratio__665->SetBinError(21,0.01225212);
   data_mc_ratio__665->SetBinError(22,0.02234564);
   data_mc_ratio__665->SetBinError(23,0.01504472);
   data_mc_ratio__665->SetBinError(24,0.02782441);
   data_mc_ratio__665->SetBinError(25,0.05437855);
   data_mc_ratio__665->SetBinError(26,0.02591293);
   data_mc_ratio__665->SetBinError(27,0.06010671);
   data_mc_ratio__665->SetBinError(28,0.1009033);
   data_mc_ratio__665->SetBinError(29,0.1574423);
   data_mc_ratio__665->SetBinError(30,0.3623171);
   data_mc_ratio__665->SetBinError(31,0.832496);
   data_mc_ratio__665->SetMinimum(0.4);
   data_mc_ratio__665->SetMaximum(1.6);
   data_mc_ratio__665->SetEntries(116.1005);
   data_mc_ratio__665->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__665->SetLineColor(ci);
   data_mc_ratio__665->SetLineWidth(2);
   data_mc_ratio__665->SetMarkerStyle(20);
   data_mc_ratio__665->SetMarkerSize(1.2);
   data_mc_ratio__665->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__665->GetXaxis()->SetRange(1,30);
   data_mc_ratio__665->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__665->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__665->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__665->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__665->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__665->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__665->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__665->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__665->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__665->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__665->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__665->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__665->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__665->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__665->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__665->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__665->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1484[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1484[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1484[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1484[30] = {
   0.1085016,
   0.06293497,
   0.3093569,
   0.08732169,
   0.0919869,
   0.09662887,
   0.1124538,
   0.1193078,
   0.1303558,
   0.6607989,
   0.1499302,
   0.1531097,
   0.1794817,
   0.1648076,
   0.1856993,
   0.2113209,
   0.2231372,
   0.1047875,
   0.2481715,
   0.2507412,
   0.3015356,
   0.3141486,
   0.3895797,
   0.4852509,
   0.1999875,
   0.5890888,
   0.2562032,
   0.3400535,
   0.5905646,
   0.5419009};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1484,Graph_from_mc_statistical_error_fy1484,Graph_from_mc_statistical_error_fex1484,Graph_from_mc_statistical_error_fey1484);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1484 = new TH1F("Graph_Graph_from_mc_statistical_error1484","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1484->SetMinimum(0.2070413);
   Graph_Graph_from_mc_statistical_error1484->SetMaximum(1.792959);
   Graph_Graph_from_mc_statistical_error1484->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1484->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1484->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1484);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_17->cd();
   Z_dR_Bj0_both_17->Modified();
   Z_dR_Bj0_both_17->cd();
   Z_dR_Bj0_both_17->SetSelected(Z_dR_Bj0_both_17);
}

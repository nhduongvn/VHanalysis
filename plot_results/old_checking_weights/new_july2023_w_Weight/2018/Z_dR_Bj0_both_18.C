void Z_dR_Bj0_both_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_18/Z_dR_Bj0_both_18
//=========  (Thu Aug 10 10:43:23 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_18 = new TCanvas("Z_dR_Bj0_both_18", "Z_dR_Bj0_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_18->SetHighLightColor(2);
   Z_dR_Bj0_both_18->Range(0,0,1,1);
   Z_dR_Bj0_both_18->SetFillColor(0);
   Z_dR_Bj0_both_18->SetFillStyle(4000);
   Z_dR_Bj0_both_18->SetBorderMode(0);
   Z_dR_Bj0_both_18->SetBorderSize(2);
   Z_dR_Bj0_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.876614,6.314516,12.62043);
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
   st->SetMaximum(3.357499e+10);
   
   TH1F *st_stack_243 = new TH1F("st_stack_243","",30,0,6);
   st_stack_243->SetMinimum(0.00137684);
   st_stack_243->SetMaximum(1.176872e+11);
   st_stack_243->SetDirectory(0);
   st_stack_243->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_243->SetLineColor(ci);
   st_stack_243->GetXaxis()->SetRange(1,30);
   st_stack_243->GetXaxis()->SetLabelFont(42);
   st_stack_243->GetXaxis()->SetLabelSize(0.035);
   st_stack_243->GetXaxis()->SetTitleSize(0.035);
   st_stack_243->GetXaxis()->SetTitleFont(42);
   st_stack_243->GetYaxis()->SetTitle("Events/0.2");
   st_stack_243->GetYaxis()->SetLabelFont(42);
   st_stack_243->GetYaxis()->SetLabelSize(0.05);
   st_stack_243->GetYaxis()->SetTitleSize(0.057);
   st_stack_243->GetYaxis()->SetTitleOffset(1.2);
   st_stack_243->GetYaxis()->SetTitleFont(42);
   st_stack_243->GetZaxis()->SetLabelFont(42);
   st_stack_243->GetZaxis()->SetLabelSize(0.035);
   st_stack_243->GetZaxis()->SetTitleSize(0.035);
   st_stack_243->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_243);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,8254.355);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,39075.78);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,36937.52);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,20717.63);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,20631.79);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,16630.5);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,11828.49);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,7725.007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,7734.213);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,8402.178);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,5794.306);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,5995.53);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,4052.242);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,5112.318);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,3435.404);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,4683.619);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,2855.916);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,1736.356);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,2409.612);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,1487.786);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,755.7802);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,979.8636);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,576.9349);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,394.1213);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,385.6191);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,545.2339);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(27,213.9239);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(28,463.4343);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,43.14614);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(30,41.76347);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(31,38.18207);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,653.5357);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,2638.527);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,3414.796);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,1928.043);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,2055.779);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,2366.655);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,2110.523);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,1157.574);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,1159.665);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,1320.507);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,1017.873);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,1084.24);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,782.1434);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,1071.984);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,682.4346);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,1068.336);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,762.1931);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,412.5326);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,664.9839);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,539.2276);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,132.058);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,389.9001);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,114.48);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,95.55303);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,91.81719);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,374.4943);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(27,64.12013);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(28,372.7477);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,33.19169);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(30,33.18002);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(31,32.20072);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(10527);

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
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,49.46349);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,182.2659);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,216.7732);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,172.2833);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,131.9838);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,101.3424);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,79.67751);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,63.41385);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,54.69834);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,54.43808);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,45.34425);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,38.03893);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,33.21325);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,23.68849);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,23.21913);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,21.23489);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,17.74681);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,17.21486);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,13.74899);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,10.14652);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,7.883109);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,6.971742);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,5.575227);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,5.528478);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,3.066457);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,2.097175);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,3.084901);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,1.6079);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,1.377641);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(30,0.6947879);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(31,0.8746714);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,2.92814);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,5.504951);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,6.053061);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,5.360254);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,4.688469);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,4.070006);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,3.522411);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,3.241144);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,2.921821);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,3.036406);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,2.722543);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,2.542895);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,2.401459);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,1.854088);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,1.938792);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,1.822181);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,1.700122);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,1.775708);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,1.63234);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,1.252247);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,1.040486);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,1.077463);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,1.004104);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,1.037382);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.6890841);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.5421474);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.8042377);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,0.5697221);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,0.5001628);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(30,0.3951715);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(31,0.4087796);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(15109);

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
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(1,788.8426);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(2,3515.589);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(3,4141.519);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(4,3558.733);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(5,2729.875);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(6,2109.779);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(7,1653.143);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(8,1338.943);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(9,1109.571);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(10,941.4736);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(11,822.6546);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(12,720.5619);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(13,632.698);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(14,551.3059);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(15,491.0148);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(16,420.9165);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(17,365.8325);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(18,305.1705);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(19,265.422);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(20,204.874);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(21,169.6958);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(22,138.2949);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(23,108.8805);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(24,83.50539);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(25,57.37028);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(26,43.79358);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(27,27.74061);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(28,17.84325);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(29,11.7916);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(30,5.894739);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(31,11.10473);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(1,7.559763);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(2,15.9406);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(3,17.31445);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(4,16.04576);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(5,14.05255);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(6,12.34845);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(7,10.92775);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(8,9.834004);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(9,8.94873);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(10,8.24614);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(11,7.710551);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(12,7.218214);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(13,6.760435);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(14,6.309332);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(15,5.95962);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(16,5.517408);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(17,5.142933);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(18,4.697913);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(19,4.383475);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(20,3.849123);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(21,3.502786);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(22,3.158488);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(23,2.806203);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(24,2.456365);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(25,2.033555);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(26,1.781988);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(27,1.41554);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(28,1.129012);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(29,0.9156001);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(30,0.6534018);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(31,0.886271);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetEntries(383737);

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
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(1,148.2579);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(2,565.7049);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(3,569.2807);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(4,398.8852);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(5,291.0053);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(6,211.8112);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(7,167.4593);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(8,133.6468);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(9,127.4162);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(10,122.3947);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(11,90.8684);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(12,79.10027);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(13,78.11994);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(14,71.00646);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(15,58.16495);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(16,53.34018);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(17,39.36851);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(18,30.09748);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(19,31.82244);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(20,28.43731);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(21,26.4909);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(22,16.23285);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(23,8.946284);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(24,9.641586);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(25,8.389018);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(26,5.671014);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(27,4.897678);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(28,1.916042);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(29,0.8995674);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(30,0.3441296);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(31,1.486382);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(1,5.151019);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(2,15.11465);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(3,18.32478);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(4,14.33584);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(5,11.13595);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(6,9.72067);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(7,9.057691);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(8,8.349959);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(9,10.67351);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(10,9.169334);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(11,6.515039);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(12,7.225713);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(13,7.279988);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(14,7.268866);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(15,4.107876);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(16,5.492219);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(17,3.349028);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(18,2.864919);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(19,3.149223);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(20,3.055429);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(21,4.857721);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(22,2.133457);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(23,1.42447);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(24,1.456955);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(25,1.484705);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(26,1.289677);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(27,0.9762056);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(28,0.6422992);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(29,0.3027023);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(30,0.2005246);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(31,0.6139625);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetEntries(19219);

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
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(1,24.54146);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(2,52.00337);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(3,59.70324);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(4,32.19358);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(5,31.41217);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(6,20.11624);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(7,19.00474);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(8,13.63689);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(9,13.20794);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(10,7.784573);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(11,10.9501);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(12,13.04438);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(13,7.605246);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(14,7.976932);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(15,4.752973);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(16,2.547019);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(17,3.578927);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(18,4.948988);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(19,3.884231);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(20,3.509295);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(21,1.351404);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(22,3.568105);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(23,1.471472);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(24,0.8047994);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(25,0.3231561);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(26,1.171939);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(27,0.4159254);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(28,0.5259094);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(29,0.2977542);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(30,0.0009154413);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(31,0.1263986);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(1,4.452387);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(2,4.261931);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(3,11.95687);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(4,5.103977);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(5,4.936775);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(6,3.427127);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(7,3.918697);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(8,3.227646);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(9,2.591945);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(10,2.301526);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(11,3.178472);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(12,4.262394);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(13,2.353562);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(14,2.305264);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(15,0.9569676);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(16,0.5653695);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(17,0.8145853);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(18,2.18229);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(19,0.9750395);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(20,2.125168);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(21,0.4840325);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(22,2.130922);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(23,0.5453907);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(24,0.3398668);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(25,0.185135);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(26,0.5348103);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(27,0.2199534);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(28,0.3164739);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(29,0.1843213);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(30,0.0009154413);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(31,0.1263986);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetEntries(2591);

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
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(1,0.9040853);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(2,0.4520427);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(3,0.4520427);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(8,0.4520427);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(1,0.6392849);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(2,0.4520427);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(3,0.4520427);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(8,0.4520427);
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
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(1,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(2,2.479394);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(3,3.541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(4,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(5,1.062597);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(8,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(10,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(11,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(12,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(22,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(24,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(1,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(2,0.9371228);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(3,1.120076);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(4,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(5,0.6134909);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(7,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(8,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(10,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(11,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(12,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(22,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(24,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetEntries(33);

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
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(1,4.47063);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(2,13.41189);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(3,10.33833);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(4,8.103016);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(5,4.750044);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(6,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(7,4.191215);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(8,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(9,3.073558);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(10,2.794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(11,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(12,2.235315);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(13,0.8382431);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(14,1.397072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(15,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(16,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(18,0.8382431);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(20,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(24,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(25,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(26,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(1,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(2,1.935839);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(3,1.699611);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(4,1.504692);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(5,1.152055);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(6,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(7,1.082167);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(8,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(9,0.9267126);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(10,0.8835858);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(11,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(12,0.7903031);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(13,0.4839599);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(14,0.6247895);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(15,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(16,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(18,0.4839599);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(19,0.4839599);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(20,0.3951516);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(24,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(25,0.3951516);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(26,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetEntries(232);

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
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(1,2.772649);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(2,12.37292);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(3,12.07577);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(4,7.769362);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(5,4.891566);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(6,3.419525);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(7,2.665218);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(8,2.384067);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(9,2.109774);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(10,1.881196);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(11,1.872053);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(12,1.808051);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(13,1.460613);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(14,1.197748);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(15,0.939455);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(16,0.8320234);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(17,0.6583042);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(18,0.4525842);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(19,0.3451526);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(20,0.2742934);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(21,0.237721);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(22,0.2285779);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(23,0.2148632);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(24,0.1508614);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(25,0.1417183);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(26,0.09143115);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(27,0.04800135);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(28,0.0320009);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(29,0.01371467);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(31,0.006857336);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(1,0.07960944);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(2,0.1681718);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(3,0.1661401);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(4,0.1332631);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(5,0.1057404);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(6,0.08840971);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(7,0.07805189);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(8,0.07382039);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(9,0.06944405);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(10,0.06557436);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(11,0.06541482);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(12,0.06428689);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(13,0.05778094);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(14,0.05232386);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(15,0.0463399);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(16,0.04360988);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(17,0.03879095);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(18,0.03216376);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(19,0.02808812);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(20,0.02503945);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(21,0.02331046);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(22,0.02285779);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(23,0.02216145);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(24,0.01856975);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(25,0.01799824);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(26,0.01445653);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(27,0.01047475);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(28,0.008552601);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(29,0.005598991);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(31,0.003959085);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetEntries(27714);

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
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(1,0.9901881);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(2,4.833815);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(3,5.785758);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(4,4.243407);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(5,2.825353);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(6,1.904484);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(7,1.398932);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(8,1.139583);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(9,0.9393939);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(10,0.8897949);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(11,0.8091217);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(12,0.6704834);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(13,0.5898103);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(14,0.5198936);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(15,0.4655139);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(16,0.3848408);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(17,0.3137289);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(18,0.2623371);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(19,0.1989938);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(20,0.1750906);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(21,0.1398334);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(22,0.1308698);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(23,0.1105521);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(24,0.06931914);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(25,0.05378209);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(26,0.03226926);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(27,0.02509831);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(28,0.01015884);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(29,0.007768525);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(30,0.001792736);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(31,0.0005975788);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(1,0.0243252);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(2,0.05374556);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(3,0.05880006);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(4,0.05035643);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(5,0.04108979);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(6,0.03373543);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(7,0.02891318);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(8,0.0260958);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(9,0.02369308);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(10,0.02305911);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(11,0.02198895);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(12,0.02001666);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(13,0.01877387);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(14,0.01762604);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(15,0.01667877);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(16,0.01516485);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(17,0.01369225);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(18,0.01252067);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(19,0.01090479);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(20,0.0102289);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(21,0.009141198);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(22,0.008843359);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(23,0.008127951);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(24,0.006436121);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(25,0.005669131);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(26,0.00439129);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(27,0.003872753);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(28,0.002463881);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(29,0.002154601);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(30,0.001035037);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(31,0.0005975788);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetEntries(50073);

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
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(1,0.01313895);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(2,0.05781137);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(3,0.03941684);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(4,0.02627789);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(5,0.005255579);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(6,0.007883368);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(7,0.005255579);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(8,0.005255579);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(9,0.005255579);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(10,0.002627789);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(12,0.005255579);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(16,0.002627789);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(17,0.002627789);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(18,0.002627789);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(1,0.005875916);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(2,0.01232542);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(3,0.01017738);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(4,0.0083098);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(5,0.003716255);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(6,0.004551465);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(7,0.003716255);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(8,0.003716255);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(9,0.003716255);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(10,0.002627789);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(12,0.003716255);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(16,0.002627789);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(17,0.002627789);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(18,0.002627789);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetEntries(69);

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
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(1,0.003296225);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(2,0.02816774);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(3,0.01977735);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(4,0.01078764);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(5,0.00659245);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(6,0.005693479);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(7,0.002696911);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(8,0.002397254);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(9,0.002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(10,0.001498284);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(11,0.003296225);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(12,0.001498284);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(13,0.001198627);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(14,0.001198627);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(15,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(16,0.001198627);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(17,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(19,0.0008989704);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(20,0.001198627);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(23,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(24,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(25,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(27,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(1,0.0009938492);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(2,0.00290528);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(3,0.002434423);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(4,0.001797941);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(5,0.001405515);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(6,0.001306174);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(7,0.0008989704);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(8,0.0008475574);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(9,0.000947598);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(10,0.000670053);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(11,0.0009938492);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(12,0.000670053);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(13,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(14,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(15,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(16,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(17,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(19,0.0005190208);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(20,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(23,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(24,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(25,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(27,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetEntries(330);

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
   
   TH1D *VbbHcc_both_Z_dR_Bj0__667 = new TH1D("VbbHcc_both_Z_dR_Bj0__667","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(1,13793);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(2,54539);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(3,50276);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(4,37239);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(5,28762);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(6,21978);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(7,17541);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(8,14312);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(9,12145);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(10,10501);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(11,9296);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(12,8369);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(13,7311);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(14,6550);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(15,5738);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(16,5013);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(17,4113);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(18,3606);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(19,3105);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(20,2464);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(21,2164);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(22,1753);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(23,1401);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(24,1144);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(25,877);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(26,661);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(27,445);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(28,266);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(29,169);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(30,84);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(31,152);
   VbbHcc_both_Z_dR_Bj0__667->SetEntries(325796);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0__667->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0__667->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0__667->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0__667->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0__667->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0__667->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__667->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__667->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__667->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0__667->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__667->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__667->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__667->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fx1485[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fy1485[30] = {
   9275.323,
   43424.98,
   41957.05,
   24900.59,
   23829.61,
   19080,
   13756.39,
   9280.456,
   9045.237,
   9534.193,
   6768.28,
   6851.35,
   4806.768,
   5769.412,
   4015.079,
   5183.996,
   3283.418,
   2095.345,
   2725.873,
   1735.763,
   961.579,
   1145.999,
   702.4139,
   494.456,
   455.523,
   598.3707,
   250.1364,
   485.3696,
   57.53418,
   48.69983};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fex1485[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fey1485[30] = {
   653.6229,
   2638.629,
   3414.916,
   1928.178,
   2055.869,
   2366.713,
   2110.578,
   1157.655,
   1159.755,
   1320.57,
   1017.932,
   1084.3,
   782.2139,
   1072.032,
   682.4767,
   1068.366,
   762.2201,
   412.5792,
   665.0087,
   539.2558,
   132.1987,
   389.9263,
   114.5293,
   95.603,
   91.85533,
   374.5017,
   64.1486,
   372.7506,
   33.20997,
   33.18941};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_fx1485,Graph_from_VbbHcc_both_Z_dR_Bj0_fy1485,Graph_from_VbbHcc_both_Z_dR_Bj0_fex1485,Graph_from_VbbHcc_both_Z_dR_Bj0_fey1485);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetMinimum(13.95938);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetMaximum(50668.41);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__668 = new TH1D("data_mc_ratio__668","",30,0,6);
   data_mc_ratio__668->SetBinContent(1,1.487064);
   data_mc_ratio__668->SetBinContent(2,1.255936);
   data_mc_ratio__668->SetBinContent(3,1.198273);
   data_mc_ratio__668->SetBinContent(4,1.495507);
   data_mc_ratio__668->SetBinContent(5,1.206986);
   data_mc_ratio__668->SetBinContent(6,1.151887);
   data_mc_ratio__668->SetBinContent(7,1.275116);
   data_mc_ratio__668->SetBinContent(8,1.542166);
   data_mc_ratio__668->SetBinContent(9,1.342696);
   data_mc_ratio__668->SetBinContent(10,1.101404);
   data_mc_ratio__668->SetBinContent(11,1.373466);
   data_mc_ratio__668->SetBinContent(12,1.221511);
   data_mc_ratio__668->SetBinContent(13,1.52098);
   data_mc_ratio__668->SetBinContent(14,1.135298);
   data_mc_ratio__668->SetBinContent(15,1.429112);
   data_mc_ratio__668->SetBinContent(16,0.9670146);
   data_mc_ratio__668->SetBinContent(17,1.252658);
   data_mc_ratio__668->SetBinContent(18,1.720958);
   data_mc_ratio__668->SetBinContent(19,1.139085);
   data_mc_ratio__668->SetBinContent(20,1.419549);
   data_mc_ratio__668->SetBinContent(21,2.250465);
   data_mc_ratio__668->SetBinContent(22,1.529669);
   data_mc_ratio__668->SetBinContent(23,1.994551);
   data_mc_ratio__668->SetBinContent(24,2.313654);
   data_mc_ratio__668->SetBinContent(25,1.92526);
   data_mc_ratio__668->SetBinContent(26,1.104666);
   data_mc_ratio__668->SetBinContent(27,1.77903);
   data_mc_ratio__668->SetBinContent(28,0.548036);
   data_mc_ratio__668->SetBinContent(29,2.937384);
   data_mc_ratio__668->SetBinContent(30,1.724852);
   data_mc_ratio__668->SetBinContent(31,2.935399);
   data_mc_ratio__668->SetBinError(1,0.01266194);
   data_mc_ratio__668->SetBinError(2,0.005377916);
   data_mc_ratio__668->SetBinError(3,0.005344111);
   data_mc_ratio__668->SetBinError(4,0.007749781);
   data_mc_ratio__668->SetBinError(5,0.00711693);
   data_mc_ratio__668->SetBinError(6,0.007769904);
   data_mc_ratio__668->SetBinError(7,0.009627702);
   data_mc_ratio__668->SetBinError(8,0.01289083);
   data_mc_ratio__668->SetBinError(9,0.01218369);
   data_mc_ratio__668->SetBinError(10,0.01074809);
   data_mc_ratio__668->SetBinError(11,0.01424524);
   data_mc_ratio__668->SetBinError(12,0.01335244);
   data_mc_ratio__668->SetBinError(13,0.01778833);
   data_mc_ratio__668->SetBinError(14,0.01402778);
   data_mc_ratio__668->SetBinError(15,0.01886627);
   data_mc_ratio__668->SetBinError(16,0.01365791);
   data_mc_ratio__668->SetBinError(17,0.01953229);
   data_mc_ratio__668->SetBinError(18,0.02865876);
   data_mc_ratio__668->SetBinError(19,0.02044208);
   data_mc_ratio__668->SetBinError(20,0.02859763);
   data_mc_ratio__668->SetBinError(21,0.04837753);
   data_mc_ratio__668->SetBinError(22,0.03653479);
   data_mc_ratio__668->SetBinError(23,0.05328758);
   data_mc_ratio__668->SetBinError(24,0.06840461);
   data_mc_ratio__668->SetBinError(25,0.0650114);
   data_mc_ratio__668->SetBinError(26,0.04296654);
   data_mc_ratio__668->SetBinError(27,0.08433409);
   data_mc_ratio__668->SetBinError(28,0.03360224);
   data_mc_ratio__668->SetBinError(29,0.2259527);
   data_mc_ratio__668->SetBinError(30,0.1881968);
   data_mc_ratio__668->SetBinError(31,1.842029);
   data_mc_ratio__668->SetMinimum(0.4);
   data_mc_ratio__668->SetMaximum(1.6);
   data_mc_ratio__668->SetEntries(280.3274);
   data_mc_ratio__668->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__668->SetLineColor(ci);
   data_mc_ratio__668->SetLineWidth(2);
   data_mc_ratio__668->SetMarkerStyle(20);
   data_mc_ratio__668->SetMarkerSize(1.2);
   data_mc_ratio__668->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__668->GetXaxis()->SetRange(1,30);
   data_mc_ratio__668->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__668->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__668->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__668->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__668->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__668->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__668->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__668->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__668->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__668->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__668->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__668->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__668->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__668->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__668->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__668->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__668->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1486[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1486[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1486[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1486[30] = {
   0.07046902,
   0.06076293,
   0.08139076,
   0.07743502,
   0.08627374,
   0.1240415,
   0.1534252,
   0.1247412,
   0.1282172,
   0.1385089,
   0.1503974,
   0.1582608,
   0.1627318,
   0.185813,
   0.1699784,
   0.2060893,
   0.2321423,
   0.1969028,
   0.2439617,
   0.3106737,
   0.1374808,
   0.34025,
   0.163051,
   0.1933499,
   0.2016481,
   0.625869,
   0.2564545,
   0.7679726,
   0.5772217,
   0.6815098};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1486,Graph_from_mc_statistical_error_fy1486,Graph_from_mc_statistical_error_fex1486,Graph_from_mc_statistical_error_fey1486);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1486 = new TH1F("Graph_Graph_from_mc_statistical_error1486","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1486->SetMinimum(0.07843285);
   Graph_Graph_from_mc_statistical_error1486->SetMaximum(1.921567);
   Graph_Graph_from_mc_statistical_error1486->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1486->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1486->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1486);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_18->cd();
   Z_dR_Bj0_both_18->Modified();
   Z_dR_Bj0_both_18->cd();
   Z_dR_Bj0_both_18->SetSelected(Z_dR_Bj0_both_18);
}

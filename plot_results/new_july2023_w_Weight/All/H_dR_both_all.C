void H_dR_both_all()
{
//=========Macro generated from canvas: H_dR_both_all/H_dR_both_all
//=========  (Thu Aug 10 12:24:49 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_all = new TCanvas("H_dR_both_all", "H_dR_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_all->SetHighLightColor(2);
   H_dR_both_all->Range(0,0,1,1);
   H_dR_both_all->SetFillColor(0);
   H_dR_both_all->SetFillStyle(4000);
   H_dR_both_all->SetBorderMode(0);
   H_dR_both_all->SetBorderSize(2);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-184.6258,6.525,184741.1);
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
   st->SetMinimum(0.3);
   st->SetMaximum(158331.9);
   
   TH1F *st_stack_216 = new TH1F("st_stack_216","",30,0,6);
   st_stack_216->SetMinimum(0.3);
   st_stack_216->SetMaximum(166248.5);
   st_stack_216->SetDirectory(0);
   st_stack_216->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_216->SetLineColor(ci);
   st_stack_216->GetXaxis()->SetRange(1,31);
   st_stack_216->GetXaxis()->SetLabelFont(42);
   st_stack_216->GetXaxis()->SetLabelSize(0.035);
   st_stack_216->GetXaxis()->SetTitleSize(0.035);
   st_stack_216->GetXaxis()->SetTitleFont(42);
   st_stack_216->GetYaxis()->SetTitle("Events/0.2");
   st_stack_216->GetYaxis()->SetLabelFont(42);
   st_stack_216->GetYaxis()->SetLabelSize(0.05);
   st_stack_216->GetYaxis()->SetTitleSize(0.057);
   st_stack_216->GetYaxis()->SetTitleOffset(1.2);
   st_stack_216->GetYaxis()->SetTitleFont(42);
   st_stack_216->GetZaxis()->SetLabelFont(42);
   st_stack_216->GetZaxis()->SetLabelSize(0.035);
   st_stack_216->GetZaxis()->SetTitleSize(0.035);
   st_stack_216->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_216);
   
   
   TH1D *VbbHcc_both_H_dR_all_stack_1 = new TH1D("VbbHcc_both_H_dR_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(2,24.97794);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(3,61785.95);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(4,37315.86);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(5,27625.59);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(6,29787.62);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(7,24063.86);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(8,28576.76);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(9,27151.63);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(10,48580.11);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(11,29084.92);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(12,33634.19);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(13,41594.32);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(14,52341.01);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(15,60050.86);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(16,63783.55);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(17,32466.08);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(18,25872.25);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(19,18026.06);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(20,10795.66);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(21,6809.169);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(22,3453.27);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(23,2634.769);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(24,1551.148);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(25,608.1171);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(26,400.129);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(2,14.77399);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(3,21946.47);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(4,3083.383);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(5,2744.048);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(6,3227.089);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(7,2640.538);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(8,2920.677);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(9,2886.761);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(10,15659.39);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(11,2323.913);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(12,2516.945);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(13,3436.648);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(14,3885.257);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(15,3948.88);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(16,4340.008);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(17,2865.641);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(18,2341.607);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(19,1999.498);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(20,1345.139);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(21,1694.659);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(22,672.1087);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(23,639.5285);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(24,589.0547);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(25,292.5509);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(26,305.6594);
   VbbHcc_both_H_dR_all_stack_1->SetEntries(30761);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_2 = new TH1D("VbbHcc_both_H_dR_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(3,80.87743);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(4,113.4973);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(5,120.8224);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(6,134.7738);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(7,134.9863);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(8,152.1749);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(9,172.6931);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(10,189.002);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(11,216.672);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(12,234.6365);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(13,252.3409);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(14,274.7172);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(15,326.4231);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(16,308.3132);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(17,190.9594);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(18,117.5956);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(19,78.1686);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(20,55.19587);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(21,38.89922);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(22,21.67532);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(23,16.22938);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(24,6.729351);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(25,4.781419);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(26,1.889535);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(27,0.3982409);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(28,0.6505977);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(3,3.945948);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(4,4.855466);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(5,4.973164);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(6,5.302038);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(7,5.212896);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(8,5.539487);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(9,5.949153);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(10,6.33371);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(11,7.102447);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(12,7.064948);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(13,7.174883);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(14,7.385776);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(15,8.224555);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(16,7.842955);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(17,6.223729);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(18,4.684163);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(19,3.892941);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(20,3.249988);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(21,2.72455);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(22,1.807364);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(23,1.64018);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(24,0.9567514);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(25,0.8797105);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(26,0.4373454);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(27,0.1559902);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(28,0.4276096);
   VbbHcc_both_H_dR_all_stack_2->SetEntries(36922);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_3 = new TH1D("VbbHcc_both_H_dR_all_stack_3","",30,0,6);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(2,1.728245);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(3,1722.675);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(4,2765.235);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(5,3141.496);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(6,3508.045);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(7,3655.597);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(8,3739.916);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(9,3814.171);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(10,4054.008);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(11,4415.126);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(12,4854.065);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(13,5335.508);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(14,5788.295);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(15,6239.979);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(16,6161.993);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(17,3544.257);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(18,2206.231);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(19,1414.065);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(20,912.9527);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(21,570.587);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(22,349.1832);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(23,196.6521);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(24,108.5035);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(25,50.31182);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(26,19.76014);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(27,8.899579);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(28,2.259493);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(29,0.07763288);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(2,0.3567402);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(3,12.55872);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(4,15.5001);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(5,16.06657);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(6,17.32344);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(7,18.41087);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(8,17.45295);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(9,17.54554);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(10,18.916);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(11,18.86585);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(12,20.21814);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(13,21.07105);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(14,21.92966);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(15,22.63533);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(16,22.80991);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(17,17.13192);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(18,14.18103);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(19,10.67161);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(20,8.625445);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(21,6.701076);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(22,6.348116);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(23,4.005768);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(24,2.929326);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(25,2.005342);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(26,1.221229);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(27,0.8770406);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(28,0.3856274);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(29,0.07763288);
   VbbHcc_both_H_dR_all_stack_3->SetEntries(956114);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_4 = new TH1D("VbbHcc_both_H_dR_all_stack_4","",30,0,6);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(2,0.03310702);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(3,396.8616);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(4,574.6223);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(5,489.2028);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(6,432.6055);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(7,367.001);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(8,364.9381);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(9,418.5671);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(10,420.0921);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(11,496.38);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(12,591.9105);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(13,660.4211);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(14,722.243);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(15,838.1015);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(16,877.7162);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(17,435.467);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(18,284.931);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(19,166.7513);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(20,102.094);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(21,70.75173);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(22,39.71151);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(23,21.54986);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(24,8.887047);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(25,5.380347);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(26,2.185531);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(27,0.6838795);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(28,0.2636904);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(2,0.03310702);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(3,11.91324);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(4,17.11822);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(5,15.90647);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(6,16.80019);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(7,14.2834);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(8,13.14642);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(9,17.15854);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(10,15.26909);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(11,16.78772);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(12,21.53708);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(13,22.21769);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(14,20.79074);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(15,23.21826);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(16,25.03987);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(17,16.78005);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(18,14.38623);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(19,9.570518);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(20,5.969646);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(21,6.691881);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(22,3.971448);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(23,2.27963);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(24,1.58386);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(25,1.193017);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(26,0.7627645);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(27,0.2848811);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(28,0.2006365);
   VbbHcc_both_H_dR_all_stack_4->SetEntries(52923);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_5 = new TH1D("VbbHcc_both_H_dR_all_stack_5","",30,0,6);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(3,40.55082);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(4,44.88158);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(5,49.31919);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(6,29.8564);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(7,46.85198);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(8,35.93442);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(9,44.43247);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(10,48.08194);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(11,55.45348);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(12,54.26407);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(13,58.68356);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(14,80.7576);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(15,75.51081);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(16,74.1593);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(17,41.22047);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(18,23.04483);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(19,21.7213);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(20,17.48158);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(21,11.14398);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(22,6.066999);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(23,5.147661);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(24,2.756648);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(25,2.587702);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(26,3.039502);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(27,0.4149537);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(28,0.5559845);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(3,3.827964);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(4,5.191254);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(5,12.25334);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(6,3.853948);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(7,7.140656);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(8,4.503881);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(9,5.798385);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(10,9.217607);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(11,6.251031);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(12,5.88307);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(13,5.905639);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(14,10.47958);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(15,5.676901);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(16,6.495095);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(17,4.525703);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(18,2.204826);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(19,3.831157);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(20,3.819655);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(21,2.185252);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(22,1.852748);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(23,2.383461);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(24,1.191864);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(25,2.204192);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(26,3.039206);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(27,0.2980565);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(28,0.5559845);
   VbbHcc_both_H_dR_all_stack_5->SetEntries(8398);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_6 = new TH1D("VbbHcc_both_H_dR_all_stack_6","",30,0,6);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(3,0.3608682);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(4,0.5029805);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(5,0.139529);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(6,0.4921557);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(9,0.5474581);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(12,0.289717);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(13,0.1333553);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(15,0.966285);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(16,1.019375);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(17,0.3814147);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(19,0.3402984);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(24,0.268632);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(3,0.3608682);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(4,0.5029805);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(5,0.139529);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(6,0.4921557);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(9,0.3265591);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(12,0.205385);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(13,0.1333553);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(15,0.694728);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(16,0.5997231);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(17,0.2264918);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(19,0.3402984);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(24,0.268632);
   VbbHcc_both_H_dR_all_stack_6->SetEntries(21);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_7 = new TH1D("VbbHcc_both_H_dR_all_stack_7","",30,0,6);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(3,1.206524);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(4,0.8614593);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(5,0.4600077);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(6,0.7252575);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(7,0.2295864);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(8,0.2406448);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(9,0.2493026);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(10,0.2287687);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(11,0.3722059);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(12,0.239674);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(13,0.5476697);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(14,0.4578169);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(15,1.007599);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(16,1.734225);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(17,0.2996727);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(18,0.2426865);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(19,0.3402984);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(22,0.1122779);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(24,0.268632);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(25,0.08719582);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(3,0.482996);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(4,0.544021);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(5,0.2300249);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(6,0.5190396);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(7,0.1623558);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(8,0.1704472);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(9,0.2493026);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(10,0.1617641);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(11,0.2151938);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(12,0.1696072);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(13,0.2471849);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(14,0.2289252);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(15,0.6898939);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(16,0.667105);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(17,0.182517);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(18,0.1718905);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(19,0.3402984);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(22,0.1122779);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(24,0.268632);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(25,0.08719582);
   VbbHcc_both_H_dR_all_stack_7->SetEntries(62);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_8 = new TH1D("VbbHcc_both_H_dR_all_stack_8","",30,0,6);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(3,15.52746);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(4,18.5301);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(5,21.89719);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(6,9.863097);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(7,5.434777);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(8,4.194181);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(9,3.286319);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(10,6.020111);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(11,7.127357);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(12,9.972631);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(13,4.78716);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(14,11.34575);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(15,19.44653);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(16,18.40533);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(17,6.230937);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(18,4.73556);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(19,1.930525);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(20,1.199244);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(23,0.3010719);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(3,2.168945);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(4,2.372448);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(5,2.568688);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(6,1.687642);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(7,1.251959);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(8,1.12345);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(9,0.9985555);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(10,1.343678);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(11,1.550344);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(12,1.744315);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(13,1.168206);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(14,1.861127);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(15,2.402813);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(16,2.3706);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(17,1.348368);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(18,1.234569);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(19,0.687991);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(20,0.6023739);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(23,0.3010719);
   VbbHcc_both_H_dR_all_stack_8->SetEntries(591);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_9 = new TH1D("VbbHcc_both_H_dR_all_stack_9","",30,0,6);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(2,0.005339897);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(3,9.345035);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(4,17.78302);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(5,17.97666);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(6,14.73618);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(7,9.975912);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(8,6.384236);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(9,4.721151);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(10,4.401273);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(11,5.371501);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(12,7.317173);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(13,9.964466);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(14,13.38929);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(15,16.00738);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(16,16.53795);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(17,5.684301);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(18,2.178259);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(19,0.8110022);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(20,0.3880338);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(21,0.2608413);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(22,0.1364675);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(23,0.05371136);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(24,0.05953366);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(25,0.01054731);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(26,0.007209122);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(27,0.004618736);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(28,0.004498031);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(2,0.003799859);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(3,0.1509808);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(4,0.2059918);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(5,0.2043994);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(6,0.1822886);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(7,0.162138);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(8,0.1272334);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(9,0.1013767);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(10,0.09864973);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(11,0.1084996);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(12,0.1306595);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(13,0.1523826);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(14,0.1805607);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(15,0.1957766);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(16,0.1981977);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(17,0.1162818);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(18,0.1258728);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(19,0.04208936);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(20,0.02944143);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(21,0.02441088);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(22,0.01731644);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(23,0.009999186);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(24,0.01514292);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(25,0.007041456);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(26,0.0036952);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(27,0.002891111);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(28,0.003201948);
   VbbHcc_both_H_dR_all_stack_9->SetEntries(84809);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_10 = new TH1D("VbbHcc_both_H_dR_all_stack_10","",30,0,6);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(2,0.001648814);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(3,2.83764);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(4,6.097394);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(5,7.328901);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(6,7.218956);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(7,5.688723);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(8,4.199748);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(9,3.15959);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(10,2.823687);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(11,3.151719);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(12,3.908075);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(13,4.653997);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(14,5.420409);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(15,6.113745);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(16,5.908535);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(17,2.412339);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(18,1.066245);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(19,0.5058936);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(20,0.269607);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(21,0.16175);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(22,0.07491788);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(23,0.03361632);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(24,0.02503097);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(25,0.0101226);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(26,0.002868378);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(27,0.001374957);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(2,0.0009752426);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(3,0.03822527);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(4,0.05615774);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(5,0.06155726);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(6,0.06123955);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(7,0.05430884);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(8,0.04672053);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(9,0.04045548);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(10,0.03819982);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(11,0.04036708);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(12,0.04498364);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(13,0.04917577);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(14,0.05296364);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(15,0.0563286);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(16,0.05533497);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(17,0.03534883);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(18,0.0234753);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(19,0.01611049);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(20,0.01172668);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(21,0.009086171);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(22,0.006166668);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(23,0.004092962);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(24,0.003534075);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(25,0.002271157);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(26,0.001199719);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(27,0.0008132612);
   VbbHcc_both_H_dR_all_stack_10->SetEntries(150219);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_11 = new TH1D("VbbHcc_both_H_dR_all_stack_11","",30,0,6);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(3,0.02078786);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(4,0.04472287);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(5,0.05900471);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(6,0.05202147);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(7,0.04116317);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(8,0.02908284);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(9,0.04180546);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(10,0.02363);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(11,0.02410927);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(12,0.01523464);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(13,0.01929626);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(14,0.01875513);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(15,0.02703069);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(16,0.02382283);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(17,0.02109496);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(18,0.001185265);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(19,0.001999389);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(20,0.002100715);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(21,0.001245676);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(23,0.003003725);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(3,0.007564363);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(4,0.01059351);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(5,0.01283672);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(6,0.01159212);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(7,0.01008053);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(8,0.008192167);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(9,0.01067139);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(10,0.007940901);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(11,0.007790509);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(12,0.005929152);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(13,0.006825238);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(14,0.006807487);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(15,0.008082472);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(16,0.007769423);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(17,0.007244341);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(18,0.001185265);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(19,0.001999389);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(20,0.002100715);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(21,0.001245676);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(23,0.003003725);
   VbbHcc_both_H_dR_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_12 = new TH1D("VbbHcc_both_H_dR_all_stack_12","",30,0,6);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(3,0.007430352);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(4,0.01445403);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(5,0.02216812);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(6,0.02229276);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(7,0.02591023);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(8,0.01306671);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(9,0.01637453);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(10,0.01226786);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(11,0.01459638);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(12,0.01360857);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(13,0.01419806);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(14,0.01289058);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(15,0.0134149);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(16,0.01639595);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(17,0.005563459);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(18,0.004053741);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(19,0.001724344);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(20,0.00215842);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(21,0.0009601269);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(22,0.0006438532);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(23,0.0004451945);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(24,9.545455e-05);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(3,0.001557139);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(4,0.002197319);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(5,0.002705551);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(6,0.002726731);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(7,0.002939001);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(8,0.002080548);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(9,0.002375105);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(10,0.001940059);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(11,0.002149741);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(12,0.002061233);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(13,0.002177814);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(14,0.002041043);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(15,0.002031437);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(16,0.00227981);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(17,0.001339253);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(18,0.001105635);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(19,0.0007289584);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(20,0.0008407198);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(21,0.0005141896);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(22,0.000455273);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(23,0.0003335014);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(24,9.545455e-05);
   VbbHcc_both_H_dR_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_all__593 = new TH1D("VbbHcc_both_H_dR_all__593","",30,0,6);
   VbbHcc_both_H_dR_all__593->SetBinContent(2,15);
   VbbHcc_both_H_dR_all__593->SetBinContent(3,22692);
   VbbHcc_both_H_dR_all__593->SetBinContent(4,25695);
   VbbHcc_both_H_dR_all__593->SetBinContent(5,21073);
   VbbHcc_both_H_dR_all__593->SetBinContent(6,21260);
   VbbHcc_both_H_dR_all__593->SetBinContent(7,21272);
   VbbHcc_both_H_dR_all__593->SetBinContent(8,22037);
   VbbHcc_both_H_dR_all__593->SetBinContent(9,23389);
   VbbHcc_both_H_dR_all__593->SetBinContent(10,25309);
   VbbHcc_both_H_dR_all__593->SetBinContent(11,27890);
   VbbHcc_both_H_dR_all__593->SetBinContent(12,31785);
   VbbHcc_both_H_dR_all__593->SetBinContent(13,35599);
   VbbHcc_both_H_dR_all__593->SetBinContent(14,40698);
   VbbHcc_both_H_dR_all__593->SetBinContent(15,44707);
   VbbHcc_both_H_dR_all__593->SetBinContent(16,46330);
   VbbHcc_both_H_dR_all__593->SetBinContent(17,28543);
   VbbHcc_both_H_dR_all__593->SetBinContent(18,19274);
   VbbHcc_both_H_dR_all__593->SetBinContent(19,13465);
   VbbHcc_both_H_dR_all__593->SetBinContent(20,9383);
   VbbHcc_both_H_dR_all__593->SetBinContent(21,6259);
   VbbHcc_both_H_dR_all__593->SetBinContent(22,4078);
   VbbHcc_both_H_dR_all__593->SetBinContent(23,2539);
   VbbHcc_both_H_dR_all__593->SetBinContent(24,1505);
   VbbHcc_both_H_dR_all__593->SetBinContent(25,791);
   VbbHcc_both_H_dR_all__593->SetBinContent(26,372);
   VbbHcc_both_H_dR_all__593->SetBinContent(27,139);
   VbbHcc_both_H_dR_all__593->SetBinContent(28,32);
   VbbHcc_both_H_dR_all__593->SetBinContent(29,1);
   VbbHcc_both_H_dR_all__593->SetEntries(496161);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all__593->SetLineColor(ci);
   VbbHcc_both_H_dR_all__593->SetLineWidth(2);
   VbbHcc_both_H_dR_all__593->SetMarkerStyle(20);
   VbbHcc_both_H_dR_all__593->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_all__593->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all__593->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all__593->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all__593->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all__593->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all__593->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all__593->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all__593->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all__593->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all__593->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all__593->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all__593->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all__593->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all__593->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all__593->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_all_fx1431[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_all_fy1431[30] = {
   0,
   26.74628,
   64056.22,
   40857.93,
   31474.31,
   33926.01,
   28289.7,
   32884.78,
   31613.52,
   53304.81,
   34284.61,
   39390.83,
   47921.4,
   59237.67,
   67574.46,
   71249.38,
   36693.02,
   28512.28,
   19710.7,
   11885.24,
   7500.976,
   3870.232,
   2874.74,
   1678.646,
   671.2862,
   427.0138,
   10.40265,
   3.734264,
   0.07763288,
   0};
   Double_t Graph_from_VbbHcc_both_H_dR_all_fex1431[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_all_fey1431[30] = {
   0,
   14.77833,
   21946.48,
   3083.479,
   2744.174,
   3227.187,
   2640.656,
   2920.768,
   2886.877,
   15659.41,
   2324.07,
   2517.136,
   3436.797,
   3885.396,
   3949.026,
   4340.152,
   2865.752,
   2341.7,
   1999.557,
   1345.189,
   1694.689,
   672.1554,
   639.5517,
   589.0663,
   292.5698,
   305.6782,
   0.9815992,
   0.8251924,
   0.07763288,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_all_fx1431,Graph_from_VbbHcc_both_H_dR_all_fy1431,Graph_from_VbbHcc_both_H_dR_all_fex1431,Graph_from_VbbHcc_both_H_dR_all_fey1431);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_all1431 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_all1431","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetMinimum(-8600.27);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetMaximum(94602.97);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_all1431);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_both_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__594 = new TH1D("data_mc_ratio__594","",30,0,6);
   data_mc_ratio__594->SetBinContent(2,0.5608256);
   data_mc_ratio__594->SetBinContent(3,0.3542513);
   data_mc_ratio__594->SetBinContent(4,0.6288865);
   data_mc_ratio__594->SetBinContent(5,0.6695302);
   data_mc_ratio__594->SetBinContent(6,0.6266578);
   data_mc_ratio__594->SetBinContent(7,0.7519345);
   data_mc_ratio__594->SetBinContent(8,0.6701277);
   data_mc_ratio__594->SetBinContent(9,0.7398418);
   data_mc_ratio__594->SetBinContent(10,0.4747977);
   data_mc_ratio__594->SetBinContent(11,0.8134845);
   data_mc_ratio__594->SetBinContent(12,0.8069138);
   data_mc_ratio__594->SetBinContent(13,0.7428623);
   data_mc_ratio__594->SetBinContent(14,0.6870291);
   data_mc_ratio__594->SetBinContent(15,0.6615961);
   data_mc_ratio__594->SetBinContent(16,0.6502513);
   data_mc_ratio__594->SetBinContent(17,0.7778863);
   data_mc_ratio__594->SetBinContent(18,0.6759895);
   data_mc_ratio__594->SetBinContent(19,0.6831316);
   data_mc_ratio__594->SetBinContent(20,0.7894664);
   data_mc_ratio__594->SetBinContent(21,0.8344247);
   data_mc_ratio__594->SetBinContent(22,1.053684);
   data_mc_ratio__594->SetBinContent(23,0.8832103);
   data_mc_ratio__594->SetBinContent(24,0.8965558);
   data_mc_ratio__594->SetBinContent(25,1.178335);
   data_mc_ratio__594->SetBinContent(26,0.8711663);
   data_mc_ratio__594->SetBinContent(27,13.36198);
   data_mc_ratio__594->SetBinContent(28,8.569293);
   data_mc_ratio__594->SetBinContent(29,12.88114);
   data_mc_ratio__594->SetBinError(2,0.1448045);
   data_mc_ratio__594->SetBinError(3,0.002351663);
   data_mc_ratio__594->SetBinError(4,0.003923268);
   data_mc_ratio__594->SetBinError(5,0.004612188);
   data_mc_ratio__594->SetBinError(6,0.004297826);
   data_mc_ratio__594->SetBinError(7,0.00515556);
   data_mc_ratio__594->SetBinError(8,0.004514205);
   data_mc_ratio__594->SetBinError(9,0.004837634);
   data_mc_ratio__594->SetBinError(10,0.002984497);
   data_mc_ratio__594->SetBinError(11,0.004871077);
   data_mc_ratio__594->SetBinError(12,0.004526015);
   data_mc_ratio__594->SetBinError(13,0.003937218);
   data_mc_ratio__594->SetBinError(14,0.00340556);
   data_mc_ratio__594->SetBinError(15,0.003128997);
   data_mc_ratio__594->SetBinError(16,0.003020996);
   data_mc_ratio__594->SetBinError(17,0.004604329);
   data_mc_ratio__594->SetBinError(18,0.00486916);
   data_mc_ratio__594->SetBinError(19,0.005887097);
   data_mc_ratio__594->SetBinError(20,0.008150097);
   data_mc_ratio__594->SetBinError(21,0.01054714);
   data_mc_ratio__594->SetBinError(22,0.0165001);
   data_mc_ratio__594->SetBinError(23,0.01752802);
   data_mc_ratio__594->SetBinError(24,0.02311048);
   data_mc_ratio__594->SetBinError(25,0.04189677);
   data_mc_ratio__594->SetBinError(26,0.04516787);
   data_mc_ratio__594->SetBinError(27,1.133349);
   data_mc_ratio__594->SetBinError(28,1.514851);
   data_mc_ratio__594->SetBinError(29,12.88114);
   data_mc_ratio__594->SetMinimum(0.4);
   data_mc_ratio__594->SetMaximum(1.6);
   data_mc_ratio__594->SetEntries(8.313151);
   data_mc_ratio__594->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__594->SetLineColor(ci);
   data_mc_ratio__594->SetLineWidth(2);
   data_mc_ratio__594->SetMarkerStyle(20);
   data_mc_ratio__594->SetMarkerSize(1.2);
   data_mc_ratio__594->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__594->GetXaxis()->SetRange(1,31);
   data_mc_ratio__594->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__594->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__594->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__594->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__594->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__594->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__594->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__594->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__594->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__594->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__594->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__594->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__594->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__594->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__594->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__594->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__594->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1432[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1432[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1432[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1432[30] = {
   0,
   0.5525378,
   0.3426128,
   0.07546831,
   0.08718776,
   0.09512425,
   0.09334339,
   0.08881824,
   0.09131781,
   0.2937711,
   0.06778757,
   0.06390158,
   0.07171739,
   0.06558996,
   0.05843963,
   0.06091495,
   0.07810073,
   0.08212954,
   0.1014453,
   0.1131814,
   0.2259291,
   0.1736732,
   0.2224729,
   0.3509174,
   0.4358347,
   0.7158509,
   0.09436053,
   0.2209786,
   1,
   0};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1432,Graph_from_mc_statistical_error_fy1432,Graph_from_mc_statistical_error_fex1432,Graph_from_mc_statistical_error_fey1432);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1432 = new TH1F("Graph_Graph_from_mc_statistical_error1432","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1432->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1432->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1432->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1432->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1432->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1432->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1432->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1432->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1432->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1432->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1432->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1432->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1432);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_both_all->cd();
   H_dR_both_all->Modified();
   H_dR_both_all->cd();
   H_dR_both_all->SetSelected(H_dR_both_all);
}

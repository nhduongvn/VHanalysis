void H_dR_both_18()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Tue Aug 22 09:22:45 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(0,0,1,1);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetFillStyle(4000);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-77.98925,6.525,77921.26);
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
   st->SetMaximum(66782.22);
   
   TH1F *st_stack_215 = new TH1F("st_stack_215","",30,0,6);
   st_stack_215->SetMinimum(0.01);
   st_stack_215->SetMaximum(70121.33);
   st_stack_215->SetDirectory(0);
   st_stack_215->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_215->SetLineColor(ci);
   st_stack_215->GetXaxis()->SetRange(1,31);
   st_stack_215->GetXaxis()->SetLabelFont(42);
   st_stack_215->GetXaxis()->SetLabelSize(0.035);
   st_stack_215->GetXaxis()->SetTitleSize(0.035);
   st_stack_215->GetXaxis()->SetTitleFont(42);
   st_stack_215->GetYaxis()->SetTitle("Events/0.2");
   st_stack_215->GetYaxis()->SetLabelFont(42);
   st_stack_215->GetYaxis()->SetLabelSize(0.05);
   st_stack_215->GetYaxis()->SetTitleSize(0.057);
   st_stack_215->GetYaxis()->SetTitleOffset(1.2);
   st_stack_215->GetYaxis()->SetTitleFont(42);
   st_stack_215->GetZaxis()->SetLabelFont(42);
   st_stack_215->GetZaxis()->SetLabelSize(0.035);
   st_stack_215->GetZaxis()->SetTitleSize(0.035);
   st_stack_215->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_215);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,8.465844);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,13638.88);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,11989.37);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,8193.092);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,12889.75);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,7510.551);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,11089.15);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,10172.74);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,12295.68);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,11485.93);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,12190.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,13884.38);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,19100.52);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,19846.97);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,22057.14);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,12293.32);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,9333.939);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,6401.423);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,3563.924);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,1191.712);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1062.568);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,1005.426);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,546.3082);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,105.9928);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,9.378231);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,8.465844);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,1787.037);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,1598.775);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,1173.332);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,2668.073);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,1188.427);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,1685.928);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,1514.209);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,2658.595);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,1565.589);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1598.438);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,1662.016);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,2062.264);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,2373.213);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,2168.678);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,1712.999);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,1509.957);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,1311.981);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,775.8227);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,169.1893);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,236.0293);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,391.8283);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,395.4824);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,37.26018);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,6.32975);
   VbbHcc_both_H_dR_stack_1->SetEntries(9895);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,31.93068);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,45.57425);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,49.93813);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,54.22182);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,57.6144);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,57.66233);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,66.25444);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,80.43522);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,94.16542);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,97.50953);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,105.644);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,117.0746);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,133.7178);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,117.3648);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,74.54139);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,50.13085);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,34.08944);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,21.52862);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,15.62341);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,9.245781);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,6.002104);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,2.209068);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,1.829152);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.8049927);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.2737635);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,0.2616037);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,2.402199);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,3.005488);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,3.183544);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,3.395495);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,3.442265);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,3.417936);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,3.591911);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,4.180718);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,4.855829);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,4.428316);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,4.644036);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,4.797617);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,5.192587);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,4.752361);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,3.805088);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,3.069855);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,2.59565);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,1.968523);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,1.827038);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,1.207295);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.9693201);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.5108628);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.6108247);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.3391922);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.1267342);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.2616037);
   VbbHcc_both_H_dR_stack_2->SetEntries(14948);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_stack_3 = new TH1D("VbbHcc_both_H_dR_stack_3","",30,0,6);
   VbbHcc_both_H_dR_stack_3->SetBinContent(2,0.901209);
   VbbHcc_both_H_dR_stack_3->SetBinContent(3,727.1533);
   VbbHcc_both_H_dR_stack_3->SetBinContent(4,1162.534);
   VbbHcc_both_H_dR_stack_3->SetBinContent(5,1308.458);
   VbbHcc_both_H_dR_stack_3->SetBinContent(6,1457.396);
   VbbHcc_both_H_dR_stack_3->SetBinContent(7,1502.621);
   VbbHcc_both_H_dR_stack_3->SetBinContent(8,1519.829);
   VbbHcc_both_H_dR_stack_3->SetBinContent(9,1561.198);
   VbbHcc_both_H_dR_stack_3->SetBinContent(10,1656.206);
   VbbHcc_both_H_dR_stack_3->SetBinContent(11,1808.464);
   VbbHcc_both_H_dR_stack_3->SetBinContent(12,1994.391);
   VbbHcc_both_H_dR_stack_3->SetBinContent(13,2191.443);
   VbbHcc_both_H_dR_stack_3->SetBinContent(14,2395.942);
   VbbHcc_both_H_dR_stack_3->SetBinContent(15,2564.796);
   VbbHcc_both_H_dR_stack_3->SetBinContent(16,2526.964);
   VbbHcc_both_H_dR_stack_3->SetBinContent(17,1472.603);
   VbbHcc_both_H_dR_stack_3->SetBinContent(18,911.8949);
   VbbHcc_both_H_dR_stack_3->SetBinContent(19,579.7693);
   VbbHcc_both_H_dR_stack_3->SetBinContent(20,379.0973);
   VbbHcc_both_H_dR_stack_3->SetBinContent(21,232.2816);
   VbbHcc_both_H_dR_stack_3->SetBinContent(22,147.7167);
   VbbHcc_both_H_dR_stack_3->SetBinContent(23,79.58675);
   VbbHcc_both_H_dR_stack_3->SetBinContent(24,46.81803);
   VbbHcc_both_H_dR_stack_3->SetBinContent(25,19.89357);
   VbbHcc_both_H_dR_stack_3->SetBinContent(26,8.724706);
   VbbHcc_both_H_dR_stack_3->SetBinContent(27,3.611478);
   VbbHcc_both_H_dR_stack_3->SetBinContent(28,0.798245);
   VbbHcc_both_H_dR_stack_3->SetBinError(2,0.2755891);
   VbbHcc_both_H_dR_stack_3->SetBinError(3,8.341329);
   VbbHcc_both_H_dR_stack_3->SetBinError(4,10.2594);
   VbbHcc_both_H_dR_stack_3->SetBinError(5,10.26741);
   VbbHcc_both_H_dR_stack_3->SetBinError(6,11.17942);
   VbbHcc_both_H_dR_stack_3->SetBinError(7,12.27642);
   VbbHcc_both_H_dR_stack_3->SetBinError(8,11.04527);
   VbbHcc_both_H_dR_stack_3->SetBinError(9,11.13615);
   VbbHcc_both_H_dR_stack_3->SetBinError(10,12.2818);
   VbbHcc_both_H_dR_stack_3->SetBinError(11,11.94304);
   VbbHcc_both_H_dR_stack_3->SetBinError(12,13.08778);
   VbbHcc_both_H_dR_stack_3->SetBinError(13,13.45143);
   VbbHcc_both_H_dR_stack_3->SetBinError(14,14.43725);
   VbbHcc_both_H_dR_stack_3->SetBinError(15,14.42855);
   VbbHcc_both_H_dR_stack_3->SetBinError(16,14.77727);
   VbbHcc_both_H_dR_stack_3->SetBinError(17,11.06006);
   VbbHcc_both_H_dR_stack_3->SetBinError(18,9.569755);
   VbbHcc_both_H_dR_stack_3->SetBinError(19,6.774555);
   VbbHcc_both_H_dR_stack_3->SetBinError(20,5.593125);
   VbbHcc_both_H_dR_stack_3->SetBinError(21,4.217345);
   VbbHcc_both_H_dR_stack_3->SetBinError(22,4.679873);
   VbbHcc_both_H_dR_stack_3->SetBinError(23,2.563726);
   VbbHcc_both_H_dR_stack_3->SetBinError(24,1.890051);
   VbbHcc_both_H_dR_stack_3->SetBinError(25,1.276501);
   VbbHcc_both_H_dR_stack_3->SetBinError(26,0.7958201);
   VbbHcc_both_H_dR_stack_3->SetBinError(27,0.6008201);
   VbbHcc_both_H_dR_stack_3->SetBinError(28,0.2361368);
   VbbHcc_both_H_dR_stack_3->SetEntries(416844);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_stack_4 = new TH1D("VbbHcc_both_H_dR_stack_4","",30,0,6);
   VbbHcc_both_H_dR_stack_4->SetBinContent(3,168.6756);
   VbbHcc_both_H_dR_stack_4->SetBinContent(4,240.7355);
   VbbHcc_both_H_dR_stack_4->SetBinContent(5,204.1774);
   VbbHcc_both_H_dR_stack_4->SetBinContent(6,195.1555);
   VbbHcc_both_H_dR_stack_4->SetBinContent(7,144.8461);
   VbbHcc_both_H_dR_stack_4->SetBinContent(8,148.3437);
   VbbHcc_both_H_dR_stack_4->SetBinContent(9,152.5635);
   VbbHcc_both_H_dR_stack_4->SetBinContent(10,171.9111);
   VbbHcc_both_H_dR_stack_4->SetBinContent(11,186.0571);
   VbbHcc_both_H_dR_stack_4->SetBinContent(12,221.9821);
   VbbHcc_both_H_dR_stack_4->SetBinContent(13,277.6579);
   VbbHcc_both_H_dR_stack_4->SetBinContent(14,294.6388);
   VbbHcc_both_H_dR_stack_4->SetBinContent(15,340.8624);
   VbbHcc_both_H_dR_stack_4->SetBinContent(16,378.3042);
   VbbHcc_both_H_dR_stack_4->SetBinContent(17,188.704);
   VbbHcc_both_H_dR_stack_4->SetBinContent(18,109.053);
   VbbHcc_both_H_dR_stack_4->SetBinContent(19,72.84548);
   VbbHcc_both_H_dR_stack_4->SetBinContent(20,45.49994);
   VbbHcc_both_H_dR_stack_4->SetBinContent(21,25.50748);
   VbbHcc_both_H_dR_stack_4->SetBinContent(22,13.2534);
   VbbHcc_both_H_dR_stack_4->SetBinContent(23,8.021147);
   VbbHcc_both_H_dR_stack_4->SetBinContent(24,4.314012);
   VbbHcc_both_H_dR_stack_4->SetBinContent(25,1.684363);
   VbbHcc_both_H_dR_stack_4->SetBinContent(26,0.8901593);
   VbbHcc_both_H_dR_stack_4->SetBinContent(27,0.2893665);
   VbbHcc_both_H_dR_stack_4->SetBinContent(28,0.1910644);
   VbbHcc_both_H_dR_stack_4->SetBinError(3,7.710796);
   VbbHcc_both_H_dR_stack_4->SetBinError(4,12.00184);
   VbbHcc_both_H_dR_stack_4->SetBinError(5,10.69205);
   VbbHcc_both_H_dR_stack_4->SetBinError(6,12.44338);
   VbbHcc_both_H_dR_stack_4->SetBinError(7,8.230878);
   VbbHcc_both_H_dR_stack_4->SetBinError(8,8.15192);
   VbbHcc_both_H_dR_stack_4->SetBinError(9,8.080855);
   VbbHcc_both_H_dR_stack_4->SetBinError(10,9.423463);
   VbbHcc_both_H_dR_stack_4->SetBinError(11,9.33916);
   VbbHcc_both_H_dR_stack_4->SetBinError(12,12.60201);
   VbbHcc_both_H_dR_stack_4->SetBinError(13,17.22477);
   VbbHcc_both_H_dR_stack_4->SetBinError(14,13.33876);
   VbbHcc_both_H_dR_stack_4->SetBinError(15,16.08768);
   VbbHcc_both_H_dR_stack_4->SetBinError(16,18.82263);
   VbbHcc_both_H_dR_stack_4->SetBinError(17,12.72859);
   VbbHcc_both_H_dR_stack_4->SetBinError(18,8.478021);
   VbbHcc_both_H_dR_stack_4->SetBinError(19,6.501329);
   VbbHcc_both_H_dR_stack_4->SetBinError(20,4.073499);
   VbbHcc_both_H_dR_stack_4->SetBinError(21,3.230605);
   VbbHcc_both_H_dR_stack_4->SetBinError(22,1.892735);
   VbbHcc_both_H_dR_stack_4->SetBinError(23,1.403599);
   VbbHcc_both_H_dR_stack_4->SetBinError(24,1.197876);
   VbbHcc_both_H_dR_stack_4->SetBinError(25,0.6165408);
   VbbHcc_both_H_dR_stack_4->SetBinError(26,0.4690485);
   VbbHcc_both_H_dR_stack_4->SetBinError(27,0.2146038);
   VbbHcc_both_H_dR_stack_4->SetBinError(28,0.1910644);
   VbbHcc_both_H_dR_stack_4->SetEntries(18425);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,16.62313);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,15.93927);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,18.24855);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,14.62617);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,16.34538);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,17.3361);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,20.60267);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,17.36474);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,23.38716);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,25.153);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,22.86567);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,30.55865);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,24.89125);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,31.10453);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,17.82981);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,7.898834);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,11.03157);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,7.473827);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,3.132121);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,1.536414);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,3.244489);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,0.4667544);
   VbbHcc_both_H_dR_stack_5->SetBinContent(25,0.3002715);
   VbbHcc_both_H_dR_stack_5->SetBinContent(26,2.838361);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,2.808494);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,3.652034);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,8.929618);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,3.289223);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,3.115541);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,3.608688);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,4.353019);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,3.680085);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,4.490936);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,4.711776);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,4.249751);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,5.644944);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,3.251354);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,4.75861);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,3.193956);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,1.2102);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,3.402219);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,3.474335);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,0.7456081);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,0.4590564);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,2.18626);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,0.3407584);
   VbbHcc_both_H_dR_stack_5->SetBinError(25,0.1968253);
   VbbHcc_both_H_dR_stack_5->SetBinError(26,2.838361);
   VbbHcc_both_H_dR_stack_5->SetEntries(2210);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_stack_6 = new TH1D("VbbHcc_both_H_dR_stack_6","",30,0,6);
   VbbHcc_both_H_dR_stack_6->SetBinContent(4,0.6225638);
   VbbHcc_both_H_dR_stack_6->SetBinContent(16,0.4278565);
   VbbHcc_both_H_dR_stack_6->SetBinError(4,0.6225638);
   VbbHcc_both_H_dR_stack_6->SetBinError(16,0.4278565);
   VbbHcc_both_H_dR_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(3,0.6853785);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,2.217858);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,2.087693);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,0.9354488);
   VbbHcc_both_H_dR_stack_7->SetBinContent(9,0.5652251);
   VbbHcc_both_H_dR_stack_7->SetBinContent(10,0.4702074);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,1.265549);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,0.4671207);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,0.3690103);
   VbbHcc_both_H_dR_stack_7->SetBinContent(14,1.7803);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,1.379059);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,0.4394432);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,0.6196682);
   VbbHcc_both_H_dR_stack_7->SetBinContent(19,0.3477974);
   VbbHcc_both_H_dR_stack_7->SetBinError(3,0.4846417);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,0.9975036);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,0.9480176);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.5463117);
   VbbHcc_both_H_dR_stack_7->SetBinError(9,0.4761242);
   VbbHcc_both_H_dR_stack_7->SetBinError(10,0.4702074);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.7368768);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.4671207);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,0.3690103);
   VbbHcc_both_H_dR_stack_7->SetBinError(14,1.127063);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,0.6981447);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,0.4394432);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,0.6196682);
   VbbHcc_both_H_dR_stack_7->SetBinError(19,0.3477974);
   VbbHcc_both_H_dR_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,6.934605);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,8.708645);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,8.819095);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,2.581211);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,1.393784);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,2.397003);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,1.74364);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,2.688005);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,3.886675);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,4.046181);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,2.933221);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,3.644379);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,6.67778);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,6.493317);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,2.48154);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,2.188322);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.6603673);
   VbbHcc_both_H_dR_stack_8->SetBinContent(23,0.27247);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,1.429929);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,1.630449);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.696662);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,0.868695);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.6628502);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.8389374);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.7202614);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.8805334);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,1.186242);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,1.169411);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.9003025);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,1.110785);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.440081);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,1.428328);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.8403901);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.838299);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.3879085);
   VbbHcc_both_H_dR_stack_8->SetBinError(23,0.27247);
   VbbHcc_both_H_dR_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_stack_9 = new TH1D("VbbHcc_both_H_dR_stack_9","",30,0,6);
   VbbHcc_both_H_dR_stack_9->SetBinContent(2,0.00333629);
   VbbHcc_both_H_dR_stack_9->SetBinContent(3,3.998026);
   VbbHcc_both_H_dR_stack_9->SetBinContent(4,7.621269);
   VbbHcc_both_H_dR_stack_9->SetBinContent(5,7.460792);
   VbbHcc_both_H_dR_stack_9->SetBinContent(6,5.952281);
   VbbHcc_both_H_dR_stack_9->SetBinContent(7,3.67376);
   VbbHcc_both_H_dR_stack_9->SetBinContent(8,2.146736);
   VbbHcc_both_H_dR_stack_9->SetBinContent(9,1.625165);
   VbbHcc_both_H_dR_stack_9->SetBinContent(10,1.665176);
   VbbHcc_both_H_dR_stack_9->SetBinContent(11,2.038727);
   VbbHcc_both_H_dR_stack_9->SetBinContent(12,2.793496);
   VbbHcc_both_H_dR_stack_9->SetBinContent(13,3.990649);
   VbbHcc_both_H_dR_stack_9->SetBinContent(14,5.522354);
   VbbHcc_both_H_dR_stack_9->SetBinContent(15,6.65473);
   VbbHcc_both_H_dR_stack_9->SetBinContent(16,6.811276);
   VbbHcc_both_H_dR_stack_9->SetBinContent(17,2.353228);
   VbbHcc_both_H_dR_stack_9->SetBinContent(18,0.9812826);
   VbbHcc_both_H_dR_stack_9->SetBinContent(19,0.3144058);
   VbbHcc_both_H_dR_stack_9->SetBinContent(20,0.1480518);
   VbbHcc_both_H_dR_stack_9->SetBinContent(21,0.08811484);
   VbbHcc_both_H_dR_stack_9->SetBinContent(22,0.05142119);
   VbbHcc_both_H_dR_stack_9->SetBinContent(23,0.01878972);
   VbbHcc_both_H_dR_stack_9->SetBinContent(24,0.04354449);
   VbbHcc_both_H_dR_stack_9->SetBinContent(25,0.01006149);
   VbbHcc_both_H_dR_stack_9->SetBinContent(26,0.002729604);
   VbbHcc_both_H_dR_stack_9->SetBinContent(27,0.004385334);
   VbbHcc_both_H_dR_stack_9->SetBinContent(28,0.002818393);
   VbbHcc_both_H_dR_stack_9->SetBinError(2,0.00333629);
   VbbHcc_both_H_dR_stack_9->SetBinError(3,0.1185058);
   VbbHcc_both_H_dR_stack_9->SetBinError(4,0.1634923);
   VbbHcc_both_H_dR_stack_9->SetBinError(5,0.1614536);
   VbbHcc_both_H_dR_stack_9->SetBinError(6,0.1413819);
   VbbHcc_both_H_dR_stack_9->SetBinError(7,0.1196001);
   VbbHcc_both_H_dR_stack_9->SetBinError(8,0.0981169);
   VbbHcc_both_H_dR_stack_9->SetBinError(9,0.07429658);
   VbbHcc_both_H_dR_stack_9->SetBinError(10,0.07593762);
   VbbHcc_both_H_dR_stack_9->SetBinError(11,0.08198586);
   VbbHcc_both_H_dR_stack_9->SetBinError(12,0.09724109);
   VbbHcc_both_H_dR_stack_9->SetBinError(13,0.1197755);
   VbbHcc_both_H_dR_stack_9->SetBinError(14,0.1389897);
   VbbHcc_both_H_dR_stack_9->SetBinError(15,0.1596686);
   VbbHcc_both_H_dR_stack_9->SetBinError(16,0.1572079);
   VbbHcc_both_H_dR_stack_9->SetBinError(17,0.09498231);
   VbbHcc_both_H_dR_stack_9->SetBinError(18,0.1311062);
   VbbHcc_both_H_dR_stack_9->SetBinError(19,0.0316233);
   VbbHcc_both_H_dR_stack_9->SetBinError(20,0.021598);
   VbbHcc_both_H_dR_stack_9->SetBinError(21,0.01635152);
   VbbHcc_both_H_dR_stack_9->SetBinError(22,0.0123869);
   VbbHcc_both_H_dR_stack_9->SetBinError(23,0.007108659);
   VbbHcc_both_H_dR_stack_9->SetBinError(24,0.01569064);
   VbbHcc_both_H_dR_stack_9->SetBinError(25,0.007719403);
   VbbHcc_both_H_dR_stack_9->SetBinError(26,0.002729604);
   VbbHcc_both_H_dR_stack_9->SetBinError(27,0.003283347);
   VbbHcc_both_H_dR_stack_9->SetBinError(28,0.002818393);
   VbbHcc_both_H_dR_stack_9->SetEntries(22331);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_stack_10 = new TH1D("VbbHcc_both_H_dR_stack_10","",30,0,6);
   VbbHcc_both_H_dR_stack_10->SetBinContent(3,0.9319714);
   VbbHcc_both_H_dR_stack_10->SetBinContent(4,1.985903);
   VbbHcc_both_H_dR_stack_10->SetBinContent(5,2.319299);
   VbbHcc_both_H_dR_stack_10->SetBinContent(6,2.236234);
   VbbHcc_both_H_dR_stack_10->SetBinContent(7,1.741177);
   VbbHcc_both_H_dR_stack_10->SetBinContent(8,1.311359);
   VbbHcc_both_H_dR_stack_10->SetBinContent(9,0.9818494);
   VbbHcc_both_H_dR_stack_10->SetBinContent(10,0.877552);
   VbbHcc_both_H_dR_stack_10->SetBinContent(11,0.9872867);
   VbbHcc_both_H_dR_stack_10->SetBinContent(12,1.23852);
   VbbHcc_both_H_dR_stack_10->SetBinContent(13,1.457793);
   VbbHcc_both_H_dR_stack_10->SetBinContent(14,1.694645);
   VbbHcc_both_H_dR_stack_10->SetBinContent(15,1.915419);
   VbbHcc_both_H_dR_stack_10->SetBinContent(16,1.848565);
   VbbHcc_both_H_dR_stack_10->SetBinContent(17,0.7642997);
   VbbHcc_both_H_dR_stack_10->SetBinContent(18,0.3330067);
   VbbHcc_both_H_dR_stack_10->SetBinContent(19,0.1583087);
   VbbHcc_both_H_dR_stack_10->SetBinContent(20,0.08627289);
   VbbHcc_both_H_dR_stack_10->SetBinContent(21,0.04973633);
   VbbHcc_both_H_dR_stack_10->SetBinContent(22,0.02599095);
   VbbHcc_both_H_dR_stack_10->SetBinContent(23,0.01177636);
   VbbHcc_both_H_dR_stack_10->SetBinContent(24,0.007061199);
   VbbHcc_both_H_dR_stack_10->SetBinContent(25,0.003389949);
   VbbHcc_both_H_dR_stack_10->SetBinContent(26,0.001128458);
   VbbHcc_both_H_dR_stack_10->SetBinContent(27,0.0005398539);
   VbbHcc_both_H_dR_stack_10->SetBinError(3,0.02347456);
   VbbHcc_both_H_dR_stack_10->SetBinError(4,0.03385387);
   VbbHcc_both_H_dR_stack_10->SetBinError(5,0.03606278);
   VbbHcc_both_H_dR_stack_10->SetBinError(6,0.03512079);
   VbbHcc_both_H_dR_stack_10->SetBinError(7,0.03081912);
   VbbHcc_both_H_dR_stack_10->SetBinError(8,0.02681402);
   VbbHcc_both_H_dR_stack_10->SetBinError(9,0.02335653);
   VbbHcc_both_H_dR_stack_10->SetBinError(10,0.0221553);
   VbbHcc_both_H_dR_stack_10->SetBinError(11,0.02347107);
   VbbHcc_both_H_dR_stack_10->SetBinError(12,0.02629239);
   VbbHcc_both_H_dR_stack_10->SetBinError(13,0.02846572);
   VbbHcc_both_H_dR_stack_10->SetBinError(14,0.03070592);
   VbbHcc_both_H_dR_stack_10->SetBinError(15,0.03272814);
   VbbHcc_both_H_dR_stack_10->SetBinError(16,0.03214762);
   VbbHcc_both_H_dR_stack_10->SetBinError(17,0.02063393);
   VbbHcc_both_H_dR_stack_10->SetBinError(18,0.01365377);
   VbbHcc_both_H_dR_stack_10->SetBinError(19,0.009429925);
   VbbHcc_both_H_dR_stack_10->SetBinError(20,0.006929648);
   VbbHcc_both_H_dR_stack_10->SetBinError(21,0.005298753);
   VbbHcc_both_H_dR_stack_10->SetBinError(22,0.003813473);
   VbbHcc_both_H_dR_stack_10->SetBinError(23,0.002533652);
   VbbHcc_both_H_dR_stack_10->SetBinError(24,0.001985308);
   VbbHcc_both_H_dR_stack_10->SetBinError(25,0.001387741);
   VbbHcc_both_H_dR_stack_10->SetBinError(26,0.0007979867);
   VbbHcc_both_H_dR_stack_10->SetBinError(27,0.0005398539);
   VbbHcc_both_H_dR_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(3,0.01950193);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.01663726);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.03559091);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.01651034);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.01307704);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.006112798);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.01853142);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.009146992);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.01312856);
   VbbHcc_both_H_dR_stack_11->SetBinContent(12,0.004675028);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.004425719);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.008073542);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.007409301);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.006612664);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.00664369);
   VbbHcc_both_H_dR_stack_11->SetBinContent(18,0.002607922);
   VbbHcc_both_H_dR_stack_11->SetBinContent(19,0.001589558);
   VbbHcc_both_H_dR_stack_11->SetBinError(3,0.006603635);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.006348062);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.009304595);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.006809867);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.0058924);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.003789232);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.006594619);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.004540927);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.005363264);
   VbbHcc_both_H_dR_stack_11->SetBinError(12,0.003306605);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.003129504);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.004123221);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.003903249);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.003824585);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.003837388);
   VbbHcc_both_H_dR_stack_11->SetBinError(18,0.002607922);
   VbbHcc_both_H_dR_stack_11->SetBinError(19,0.001589558);
   VbbHcc_both_H_dR_stack_11->SetEntries(84);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.00360772);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.006926576);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.009413139);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.01207473);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.01004411);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.005029217);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.009865882);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.005304311);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.007200755);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.00463775);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.00679472);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.003850447);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.004968328);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.005351431);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.002385016);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.001780684);
   VbbHcc_both_H_dR_stack_12->SetBinContent(19,0.0009953652);
   VbbHcc_both_H_dR_stack_12->SetBinContent(20,0.001300859);
   VbbHcc_both_H_dR_stack_12->SetBinContent(21,0.0003525261);
   VbbHcc_both_H_dR_stack_12->SetBinContent(22,0.0005865502);
   VbbHcc_both_H_dR_stack_12->SetBinContent(23,0.0001322906);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.001088066);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.001522282);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.001741264);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.002029463);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.00188059);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.001321558);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.00182787);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.001258038);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.001531269);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.001146885);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.001520644);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.001076319);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.001247601);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.001251034);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0008828223);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.0007367537);
   VbbHcc_both_H_dR_stack_12->SetBinError(19,0.000580731);
   VbbHcc_both_H_dR_stack_12->SetBinError(20,0.0006607386);
   VbbHcc_both_H_dR_stack_12->SetBinError(21,0.0003525261);
   VbbHcc_both_H_dR_stack_12->SetBinError(22,0.0004147559);
   VbbHcc_both_H_dR_stack_12->SetBinError(23,0.0001322906);
   VbbHcc_both_H_dR_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR__590 = new TH1D("VbbHcc_both_H_dR__590","",30,0,6);
   VbbHcc_both_H_dR__590->SetBinContent(2,9);
   VbbHcc_both_H_dR__590->SetBinContent(3,14458);
   VbbHcc_both_H_dR__590->SetBinContent(4,16344);
   VbbHcc_both_H_dR__590->SetBinContent(5,13458);
   VbbHcc_both_H_dR__590->SetBinContent(6,13661);
   VbbHcc_both_H_dR__590->SetBinContent(7,13521);
   VbbHcc_both_H_dR__590->SetBinContent(8,13973);
   VbbHcc_both_H_dR__590->SetBinContent(9,14803);
   VbbHcc_both_H_dR__590->SetBinContent(10,16090);
   VbbHcc_both_H_dR__590->SetBinContent(11,17660);
   VbbHcc_both_H_dR__590->SetBinContent(12,20419);
   VbbHcc_both_H_dR__590->SetBinContent(13,22963);
   VbbHcc_both_H_dR__590->SetBinContent(14,26350);
   VbbHcc_both_H_dR__590->SetBinContent(15,28905);
   VbbHcc_both_H_dR__590->SetBinContent(16,30052);
   VbbHcc_both_H_dR__590->SetBinContent(17,18702);
   VbbHcc_both_H_dR__590->SetBinContent(18,12671);
   VbbHcc_both_H_dR__590->SetBinContent(19,8834);
   VbbHcc_both_H_dR__590->SetBinContent(20,6186);
   VbbHcc_both_H_dR__590->SetBinContent(21,4085);
   VbbHcc_both_H_dR__590->SetBinContent(22,2691);
   VbbHcc_both_H_dR__590->SetBinContent(23,1693);
   VbbHcc_both_H_dR__590->SetBinContent(24,975);
   VbbHcc_both_H_dR__590->SetBinContent(25,547);
   VbbHcc_both_H_dR__590->SetBinContent(26,254);
   VbbHcc_both_H_dR__590->SetBinContent(27,98);
   VbbHcc_both_H_dR__590->SetBinContent(28,19);
   VbbHcc_both_H_dR__590->SetBinContent(29,1);
   VbbHcc_both_H_dR__590->SetEntries(319451);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR__590->SetLineColor(ci);
   VbbHcc_both_H_dR__590->SetLineWidth(2);
   VbbHcc_both_H_dR__590->SetMarkerStyle(20);
   VbbHcc_both_H_dR__590->SetMarkerSize(1.2);
   VbbHcc_both_H_dR__590->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR__590->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__590->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__590->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__590->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__590->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__590->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__590->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__590->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR__590->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__590->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__590->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__590->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__590->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__590->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_fx1429[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_fy1429[30] = {
   0,
   9.370389,
   14595.84,
   13475.34,
   9794.646,
   14621.94,
   9239.745,
   12838.19,
   11978.31,
   14227.31,
   13606.2,
   14537.79,
   16490.75,
   21951.38,
   22927.88,
   25126.91,
   14053.22,
   10416.42,
   7100.642,
   4017.759,
   1468.395,
   1234.398,
   1102.583,
   600.1667,
   129.7136,
   22.64031,
   4.179533,
   1.253731,
   0,
   0};
   Double_t Graph_from_VbbHcc_both_H_dR_fex1429[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_fey1429[30] = {
   0,
   8.470329,
   1787.078,
   1598.861,
   1173.465,
   2668.13,
   1188.528,
   1685.992,
   1514.283,
   2658.646,
   1565.677,
   1598.555,
   1662.172,
   2062.372,
   2373.32,
   2168.821,
   1713.089,
   1510.015,
   1312.022,
   775.8639,
   169.2842,
   236.0868,
   391.8466,
   395.4892,
   37.29266,
   7.006456,
   0.6504707,
   0.4008873,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_fx1429,Graph_from_VbbHcc_both_H_dR_fy1429,Graph_from_VbbHcc_both_H_dR_fex1429,Graph_from_VbbHcc_both_H_dR_fey1429);
   gre->SetName("Graph_from_VbbHcc_both_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR1429 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR1429","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetMaximum(30025.31);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR1429);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR","MC unc. (stat.)","fl");

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
   H_dR_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__591 = new TH1D("data_mc_ratio__591","",30,0,6);
   data_mc_ratio__591->SetBinContent(2,0.9604724);
   data_mc_ratio__591->SetBinContent(3,0.9905563);
   data_mc_ratio__591->SetBinContent(4,1.212882);
   data_mc_ratio__591->SetBinContent(5,1.374016);
   data_mc_ratio__591->SetBinContent(6,0.9342807);
   data_mc_ratio__591->SetBinContent(7,1.463352);
   data_mc_ratio__591->SetBinContent(8,1.088394);
   data_mc_ratio__591->SetBinContent(9,1.235818);
   data_mc_ratio__591->SetBinContent(10,1.130923);
   data_mc_ratio__591->SetBinContent(11,1.297938);
   data_mc_ratio__591->SetBinContent(12,1.404546);
   data_mc_ratio__591->SetBinContent(13,1.392478);
   data_mc_ratio__591->SetBinContent(14,1.20038);
   data_mc_ratio__591->SetBinContent(15,1.260692);
   data_mc_ratio__591->SetBinContent(16,1.196008);
   data_mc_ratio__591->SetBinContent(17,1.330798);
   data_mc_ratio__591->SetBinContent(18,1.216444);
   data_mc_ratio__591->SetBinContent(19,1.244113);
   data_mc_ratio__591->SetBinContent(20,1.539664);
   data_mc_ratio__591->SetBinContent(21,2.78195);
   data_mc_ratio__591->SetBinContent(22,2.18001);
   data_mc_ratio__591->SetBinContent(23,1.535485);
   data_mc_ratio__591->SetBinContent(24,1.624549);
   data_mc_ratio__591->SetBinContent(25,4.216984);
   data_mc_ratio__591->SetBinContent(26,11.21893);
   data_mc_ratio__591->SetBinContent(27,23.44759);
   data_mc_ratio__591->SetBinContent(28,15.15476);
   data_mc_ratio__591->SetBinError(2,0.3201575);
   data_mc_ratio__591->SetBinError(3,0.008238062);
   data_mc_ratio__591->SetBinError(4,0.009487233);
   data_mc_ratio__591->SetBinError(5,0.01184409);
   data_mc_ratio__591->SetBinError(6,0.007993485);
   data_mc_ratio__591->SetBinError(7,0.01258474);
   data_mc_ratio__591->SetBinError(8,0.009207488);
   data_mc_ratio__591->SetBinError(9,0.01015733);
   data_mc_ratio__591->SetBinError(10,0.008915695);
   data_mc_ratio__591->SetBinError(11,0.00976694);
   data_mc_ratio__591->SetBinError(12,0.009829212);
   data_mc_ratio__591->SetBinError(13,0.00918912);
   data_mc_ratio__591->SetBinError(14,0.007394834);
   data_mc_ratio__591->SetBinError(15,0.007415196);
   data_mc_ratio__591->SetBinError(16,0.006899181);
   data_mc_ratio__591->SetBinError(17,0.009731237);
   data_mc_ratio__591->SetBinError(18,0.01080654);
   data_mc_ratio__591->SetBinError(19,0.01323674);
   data_mc_ratio__591->SetBinError(20,0.01957587);
   data_mc_ratio__591->SetBinError(21,0.04352645);
   data_mc_ratio__591->SetBinError(22,0.0420244);
   data_mc_ratio__591->SetBinError(23,0.03731789);
   data_mc_ratio__591->SetBinError(24,0.0520272);
   data_mc_ratio__591->SetBinError(25,0.1803052);
   data_mc_ratio__591->SetBinError(26,0.7039382);
   data_mc_ratio__591->SetBinError(27,2.368565);
   data_mc_ratio__591->SetBinError(28,3.47674);
   data_mc_ratio__591->SetMinimum(0.4);
   data_mc_ratio__591->SetMaximum(1.6);
   data_mc_ratio__591->SetEntries(102.3381);
   data_mc_ratio__591->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__591->SetLineColor(ci);
   data_mc_ratio__591->SetLineWidth(2);
   data_mc_ratio__591->SetMarkerStyle(20);
   data_mc_ratio__591->SetMarkerSize(1.2);
   data_mc_ratio__591->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__591->GetXaxis()->SetRange(1,31);
   data_mc_ratio__591->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__591->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__591->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__591->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__591->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__591->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__591->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__591->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__591->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__591->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__591->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__591->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__591->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__591->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__591->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__591->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__591->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1430[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1430[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1430[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1430[30] = {
   0,
   0.9039463,
   0.1224375,
   0.1186509,
   0.1198068,
   0.1824744,
   0.1286322,
   0.1313263,
   0.1264188,
   0.1868692,
   0.1150708,
   0.1099586,
   0.1007942,
   0.09395178,
   0.1035124,
   0.08631465,
   0.1219001,
   0.1449648,
   0.184775,
   0.1931086,
   0.1152852,
   0.1912566,
   0.3553896,
   0.6589656,
   0.2875001,
   0.3094682,
   0.1556324,
   0.3197553,
   0,
   0};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1430,Graph_from_mc_statistical_error_fy1430,Graph_from_mc_statistical_error_fex1430,Graph_from_mc_statistical_error_fey1430);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1430 = new TH1F("Graph_Graph_from_mc_statistical_error1430","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1430->SetMinimum(0.08644829);
   Graph_Graph_from_mc_statistical_error1430->SetMaximum(2.084736);
   Graph_Graph_from_mc_statistical_error1430->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1430->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1430->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1430);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}

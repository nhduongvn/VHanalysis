void H_dR_both_all()
{
//=========Macro generated from canvas: H_dR_both_all/H_dR_both_all
//=========  (Thu Aug 10 12:29:14 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.9499975,-168.3119,6.525,168443.6);
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
   st->SetMaximum(144364.2);
   
   TH1F *st_stack_216 = new TH1F("st_stack_216","",30,0,6);
   st_stack_216->SetMinimum(0.3);
   st_stack_216->SetMaximum(151582.4);
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
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(2,22.47793);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(3,51714.87);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(4,33803.74);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(5,25155.2);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(6,27001.62);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(7,21202.08);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(8,26197);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(9,24792.38);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(10,44979.87);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(11,27382.62);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(12,30576.72);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(13,38374.31);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(14,47989.07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(15,53749.95);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(16,58125.64);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(17,30740.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(18,23453.95);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(19,16452.64);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(20,10220.57);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(21,6528.778);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(22,3798.687);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(23,2478.057);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(24,1435.925);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(25,648.3009);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(26,363.4217);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(2,13.29528);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(3,15134.58);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(4,2719.768);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(5,2376.925);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(6,2687.614);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(7,2217.184);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(8,2565.945);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(9,2565.496);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(10,15120.32);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(11,2352.34);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(12,2199.485);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(13,3130.97);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(14,3413.043);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(15,3293.243);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(16,3795.926);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(17,2959.078);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(18,2054.103);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(19,1759.366);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(20,1289.121);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(21,1625.771);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(22,734.937);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(23,615.8173);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(24,539.2028);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(25,280.0411);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(26,271.2703);
   VbbHcc_both_H_dR_all_stack_1->SetEntries(31751);

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
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(3,78.08282);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(4,113.8764);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(5,120.7588);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(6,134.3722);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(7,132.2635);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(8,149.7549);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(9,171.5616);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(10,188.9155);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(11,212.7403);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(12,231.9598);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(13,250.0365);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(14,273.8622);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(15,315.8709);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(16,307.0837);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(17,190.1301);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(18,123.127);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(19,79.45928);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(20,57.85579);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(21,39.31776);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(22,22.71509);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(23,16.33431);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(24,6.814752);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(25,5.011216);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(26,1.823695);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(27,0.3995498);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(28,0.7297398);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(3,3.498429);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(4,4.282792);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(5,4.483039);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(6,4.762269);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(7,4.577562);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(8,4.888664);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(9,5.324888);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(10,5.658553);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(11,6.011998);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(12,6.258191);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(13,6.358701);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(14,6.655373);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(15,7.232644);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(16,7.01295);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(17,5.537865);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(18,4.310146);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(19,3.413777);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(20,2.906836);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(21,2.34459);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(22,1.731734);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(23,1.468371);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(24,0.9402936);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(25,0.8159729);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(26,0.4080967);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(27,0.1416017);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(28,0.3920401);
   VbbHcc_both_H_dR_all_stack_2->SetEntries(38814);

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
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(2,1.722632);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(3,1578.278);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(4,2541.617);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(5,2876.034);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(6,3199.031);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(7,3321.44);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(8,3406.243);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(9,3479.038);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(10,3684.437);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(11,4020.897);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(12,4424.706);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(13,4877.796);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(14,5286.302);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(15,5715.273);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(16,5649.064);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(17,3271.754);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(18,2044.484);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(19,1322.973);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(20,852.3206);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(21,537.0803);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(22,323.4056);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(23,186.0608);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(24,102.2224);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(25,47.44432);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(26,20.15784);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(27,8.785747);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(28,2.296588);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(29,0.07035638);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(2,0.3263685);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(3,9.908624);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(4,12.6404);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(5,13.48411);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(6,14.22892);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(7,14.46555);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(8,14.62802);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(9,14.74075);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(10,15.13947);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(11,15.80618);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(12,16.56801);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(13,17.40795);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(14,18.12448);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(15,18.88053);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(16,18.77514);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(17,14.23761);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(18,11.24115);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(19,9.02509);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(20,7.22409);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(21,5.728132);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(22,4.440408);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(23,3.367005);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(24,2.491571);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(25,1.701613);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(26,1.10929);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(27,0.7285378);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(28,0.3715841);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(29,0.07035638);
   VbbHcc_both_H_dR_all_stack_3->SetEntries(1047064);

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
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(2,0.066575);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(3,355.2335);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(4,505.9415);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(5,442.7106);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(6,386.1431);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(7,327.2797);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(8,327.8306);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(9,384.0089);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(10,382.8396);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(11,447.8021);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(12,538.4555);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(13,571.0841);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(14,652.3816);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(15,758.0578);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(16,772.8523);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(17,392.1043);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(18,263.2612);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(19,149.215);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(20,94.48391);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(21,68.71463);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(22,36.86836);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(23,19.68354);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(24,7.998379);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(25,4.793066);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(26,2.197187);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(27,0.6850962);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(28,0.204081);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(2,0.066575);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(3,10.34133);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(4,12.55716);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(5,13.47719);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(6,14.77776);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(7,12.32835);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(8,12.01243);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(9,16.34431);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(10,14.13896);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(11,15.07377);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(12,18.56342);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(13,16.16375);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(14,18.18827);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(15,20.81013);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(16,19.5722);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(17,14.71897);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(18,13.31692);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(19,8.330181);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(20,5.406717);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(21,7.550201);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(22,3.777815);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(23,2.009723);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(24,1.396047);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(25,1.032743);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(26,0.7662467);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(27,0.2691676);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(28,0.1481604);
   VbbHcc_both_H_dR_all_stack_4->SetEntries(52623);

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
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(3,36.47729);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(4,41.40846);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(5,48.92232);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(6,28.88452);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(7,44.003);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(8,32.32357);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(9,41.16449);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(10,46.14975);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(11,50.40219);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(12,50.57307);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(13,52.45582);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(14,74.21784);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(15,70.49529);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(16,68.97507);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(17,37.46705);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(18,21.36823);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(19,20.28149);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(20,14.77997);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(21,10.63664);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(22,5.34773);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(23,4.957943);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(24,2.499267);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(25,2.526527);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(26,2.081883);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(27,0.4358625);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(28,0.3746698);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(3,3.375558);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(4,4.643929);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(5,12.66782);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(6,3.635051);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(7,7.712385);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(8,4.036321);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(9,5.295713);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(10,8.023416);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(11,5.456215);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(12,5.335486);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(13,5.089264);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(14,9.169675);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(15,5.227767);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(16,5.875637);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(17,3.680262);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(18,1.907418);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(19,3.348755);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(20,2.375385);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(21,2.149401);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(22,1.392628);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(23,2.209448);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(24,1.106652);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(25,2.094982);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(26,2.08167);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(27,0.3137578);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(28,0.3746698);
   VbbHcc_both_H_dR_all_stack_5->SetEntries(8810);

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
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(3,0.3153059);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(4,0.4520427);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(6,0.4520427);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(9,0.7207813);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(12,0.2687386);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(13,0.1343693);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(15,0.7207813);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(16,1.082654);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(17,0.4031079);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(19,0.3153059);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(24,0.3153059);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(3,0.3153059);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(4,0.4520427);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(5,0.1343693);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(6,0.4520427);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(9,0.4903599);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(12,0.1900269);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(13,0.1343693);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(15,0.4903599);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(16,0.6349631);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(17,0.2327345);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(19,0.3153059);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(24,0.3153059);
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
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(3,1.078716);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(4,0.7792186);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(5,0.4362346);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(6,0.6701599);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(7,0.2181173);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(8,0.2181173);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(9,0.4520427);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(10,0.2181173);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(11,0.3271759);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(12,0.2181173);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(13,0.5452932);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(14,0.4362346);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(15,0.7792186);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(16,1.737006);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(17,0.3271759);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(18,0.2181173);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(19,0.3153059);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(22,0.1090586);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(24,0.3153059);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(25,0.1090586);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(3,0.4274042);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(4,0.4899224);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(5,0.2181173);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(6,0.4776297);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(7,0.1542322);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(8,0.1542322);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(9,0.4520427);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(10,0.1542322);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(11,0.1888951);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(12,0.1542322);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(13,0.2438625);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(14,0.2181173);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(15,0.4899224);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(16,0.6888693);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(17,0.1888951);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(18,0.1542322);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(19,0.3153059);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(22,0.1090586);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(24,0.3153059);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(25,0.1090586);
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
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(3,13.9493);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(4,16.81177);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(5,19.5048);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(6,8.968355);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(7,5.125327);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(8,3.994009);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(9,3.155766);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(10,5.509496);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(11,5.78891);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(12,8.819884);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(13,4.786026);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(14,10.03363);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(15,17.84448);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(16,16.65235);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(17,5.736533);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(18,3.941631);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(19,2.074316);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(20,1.002884);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(3,1.919264);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(4,2.105431);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(5,2.256192);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(6,1.518288);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(7,1.147779);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(8,1.033197);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(9,0.9128415);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(10,1.204684);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(11,1.236664);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(12,1.515544);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(13,1.130406);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(14,1.609221);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(15,2.151962);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(16,2.084733);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(17,1.225332);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(18,1.019607);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(19,0.7347875);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(20,0.501517);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(23,0.2794144);
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
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(2,0.004571557);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(3,8.696758);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(4,16.4502);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(5,16.6909);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(6,13.54937);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(7,9.047172);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(8,5.765137);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(9,4.283805);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(10,4.036012);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(11,4.896002);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(12,6.773358);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(13,9.165361);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(14,12.26713);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(15,14.89832);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(16,15.2249);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(17,5.216775);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(18,1.919143);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(19,0.7414501);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(20,0.354118);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(21,0.2370943);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(22,0.1234391);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(23,0.05302226);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(24,0.04789069);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(25,0.006186674);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(26,0.006648797);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(27,0.006186674);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(28,0.003900896);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(2,0.003232579);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(3,0.1274982);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(4,0.1754371);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(5,0.1754694);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(6,0.1575716);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(7,0.1274773);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(8,0.1009059);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(9,0.08732051);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(10,0.0852464);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(11,0.09412689);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(12,0.1111035);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(13,0.1293086);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(14,0.1503599);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(15,0.1653484);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(16,0.1674319);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(17,0.09783926);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(18,0.05948445);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(19,0.03683318);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(20,0.02550661);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(21,0.02097795);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(22,0.01518312);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(23,0.009725611);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(24,0.009778605);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(25,0.003613609);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(26,0.003407179);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(27,0.003613609);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(28,0.002798819);
   VbbHcc_both_H_dR_all_stack_9->SetEntries(85972);

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
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(2,0.001368816);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(3,2.686987);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(4,5.743554);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(5,6.908416);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(6,6.746896);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(7,5.343859);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(8,3.936716);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(9,2.966225);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(10,2.665085);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(11,2.9717);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(12,3.680747);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(13,4.361049);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(14,5.112529);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(15,5.727128);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(16,5.547813);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(17,2.272235);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(18,1.007449);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(19,0.4804546);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(20,0.2587063);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(21,0.1533074);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(22,0.07117845);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(23,0.03285159);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(24,0.02463869);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(25,0.009581715);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(26,0.002737633);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(27,0.001368816);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(2,0.0008096295);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(3,0.03587124);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(4,0.05244499);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(5,0.05751789);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(6,0.05684152);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(7,0.05058727);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(8,0.04341909);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(9,0.0376891);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(10,0.03572476);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(11,0.03772387);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(12,0.0419838);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(13,0.04569926);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(14,0.04948022);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(15,0.05236995);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(16,0.05154358);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(17,0.03298681);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(18,0.0219647);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(19,0.0151684);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(20,0.01113056);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(21,0.008568313);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(22,0.005838321);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(23,0.003966358);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(24,0.003434967);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(25,0.002142078);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(26,0.001144989);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(27,0.0008096295);
   VbbHcc_both_H_dR_all_stack_10->SetEntries(150600);

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
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(3,0.02364236);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(4,0.04309837);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(5,0.05844773);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(6,0.04355761);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(7,0.03739209);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(8,0.0253648);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(9,0.03546713);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(10,0.02158958);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(11,0.02271058);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(12,0.01245278);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(13,0.0206578);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(14,0.01657881);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(15,0.02636408);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(16,0.02293356);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(17,0.01746355);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(18,0.003856013);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(19,0.002275762);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(20,0.001580251);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(3,0.007183747);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(4,0.009415985);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(5,0.01162127);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(6,0.009537397);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(7,0.008562681);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(8,0.006927444);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(9,0.009019012);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(10,0.006953242);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(11,0.006967323);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(12,0.004779556);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(13,0.006729409);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(14,0.005973961);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(15,0.007786283);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(16,0.007103805);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(17,0.005958482);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(18,0.002770611);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(19,0.002275762);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(20,0.001580251);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(23,0.002735007);
   VbbHcc_both_H_dR_all_stack_11->SetEntries(215);

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
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(3,0.006743736);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(4,0.01292193);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(5,0.01995404);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(6,0.01940112);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(7,0.02262874);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(8,0.01165475);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(9,0.01389012);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(10,0.01178158);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(11,0.01339542);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(12,0.01291065);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(13,0.01247261);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(14,0.01206929);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(15,0.01192064);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(16,0.01571184);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(17,0.005129897);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(18,0.003608446);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(19,0.001521787);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(20,0.001821444);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(21,0.0009224738);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(22,0.0005993136);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(23,0.0005072625);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(3,0.001375299);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(4,0.001941835);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(5,0.002402522);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(6,0.002328661);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(7,0.00255759);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(8,0.001820595);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(9,0.001994623);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(10,0.001814063);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(11,0.001932926);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(12,0.001947016);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(13,0.001896415);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(14,0.001886619);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(15,0.001799151);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(16,0.002148388);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(17,0.001202527);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(18,0.0009839232);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(19,0.0006314134);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(20,0.0006989114);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(21,0.0004680753);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(22,0.0004237787);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(23,0.0003645467);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(24,0.0002076057);
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
   VbbHcc_both_H_dR_all__593->SetBinContent(3,22919);
   VbbHcc_both_H_dR_all__593->SetBinContent(4,25960);
   VbbHcc_both_H_dR_all__593->SetBinContent(5,21289);
   VbbHcc_both_H_dR_all__593->SetBinContent(6,21509);
   VbbHcc_both_H_dR_all__593->SetBinContent(7,21484);
   VbbHcc_both_H_dR_all__593->SetBinContent(8,22292);
   VbbHcc_both_H_dR_all__593->SetBinContent(9,23647);
   VbbHcc_both_H_dR_all__593->SetBinContent(10,25613);
   VbbHcc_both_H_dR_all__593->SetBinContent(11,28186);
   VbbHcc_both_H_dR_all__593->SetBinContent(12,32099);
   VbbHcc_both_H_dR_all__593->SetBinContent(13,35972);
   VbbHcc_both_H_dR_all__593->SetBinContent(14,41121);
   VbbHcc_both_H_dR_all__593->SetBinContent(15,45112);
   VbbHcc_both_H_dR_all__593->SetBinContent(16,46763);
   VbbHcc_both_H_dR_all__593->SetBinContent(17,28825);
   VbbHcc_both_H_dR_all__593->SetBinContent(18,19474);
   VbbHcc_both_H_dR_all__593->SetBinContent(19,13581);
   VbbHcc_both_H_dR_all__593->SetBinContent(20,9446);
   VbbHcc_both_H_dR_all__593->SetBinContent(21,6320);
   VbbHcc_both_H_dR_all__593->SetBinContent(22,4105);
   VbbHcc_both_H_dR_all__593->SetBinContent(23,2574);
   VbbHcc_both_H_dR_all__593->SetBinContent(24,1519);
   VbbHcc_both_H_dR_all__593->SetBinContent(25,791);
   VbbHcc_both_H_dR_all__593->SetBinContent(26,373);
   VbbHcc_both_H_dR_all__593->SetBinContent(27,143);
   VbbHcc_both_H_dR_all__593->SetBinContent(28,32);
   VbbHcc_both_H_dR_all__593->SetBinContent(29,1);
   VbbHcc_both_H_dR_all__593->SetEntries(501194);

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
   24.27308,
   53789.7,
   37046.88,
   28687.38,
   30780.5,
   25046.87,
   30127.11,
   28879.78,
   49294.68,
   32128.49,
   35842.2,
   44144.7,
   54303.71,
   60649.65,
   64963.9,
   34645.74,
   25913.28,
   18028.49,
   11241.63,
   7184.92,
   4187.328,
   2705.462,
   1556.163,
   708.2009,
   389.6917,
   10.31381,
   3.60898,
   0.07035638,
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
   13.29945,
   15134.58,
   2719.835,
   2377.041,
   2687.7,
   2217.284,
   2566.023,
   2565.602,
   15120.34,
   2352.455,
   2199.642,
   3131.07,
   3413.159,
   3293.376,
   3796.034,
   2959.157,
   2054.183,
   1759.415,
   1289.158,
   1625.801,
   734.9635,
   615.8356,
   539.2125,
   280.0573,
   271.2819,
   0.8495453,
   0.6738746,
   0.07035638,
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
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetMaximum(75816.71);
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
   data_mc_ratio__594->SetBinContent(2,0.6179686);
   data_mc_ratio__594->SetBinContent(3,0.4260853);
   data_mc_ratio__594->SetBinContent(4,0.7007338);
   data_mc_ratio__594->SetBinContent(5,0.7421033);
   data_mc_ratio__594->SetBinContent(6,0.6987865);
   data_mc_ratio__594->SetBinContent(7,0.8577521);
   data_mc_ratio__594->SetBinContent(8,0.7399317);
   data_mc_ratio__594->SetBinContent(9,0.8188081);
   data_mc_ratio__594->SetBinContent(10,0.5195896);
   data_mc_ratio__594->SetBinContent(11,0.87729);
   data_mc_ratio__594->SetBinContent(12,0.8955644);
   data_mc_ratio__594->SetBinContent(13,0.8148656);
   data_mc_ratio__594->SetBinContent(14,0.7572411);
   data_mc_ratio__594->SetBinContent(15,0.743813);
   data_mc_ratio__594->SetBinContent(16,0.7198305);
   data_mc_ratio__594->SetBinContent(17,0.8319927);
   data_mc_ratio__594->SetBinContent(18,0.7515065);
   data_mc_ratio__594->SetBinContent(19,0.7533075);
   data_mc_ratio__594->SetBinContent(20,0.8402694);
   data_mc_ratio__594->SetBinContent(21,0.8796201);
   data_mc_ratio__594->SetBinContent(22,0.9803387);
   data_mc_ratio__594->SetBinContent(23,0.9514088);
   data_mc_ratio__594->SetBinContent(24,0.9761188);
   data_mc_ratio__594->SetBinContent(25,1.116915);
   data_mc_ratio__594->SetBinContent(26,0.957167);
   data_mc_ratio__594->SetBinContent(27,13.8649);
   data_mc_ratio__594->SetBinContent(28,8.866772);
   data_mc_ratio__594->SetBinContent(29,14.21335);
   data_mc_ratio__594->SetBinError(2,0.1595588);
   data_mc_ratio__594->SetBinError(3,0.002814484);
   data_mc_ratio__594->SetBinError(4,0.004349114);
   data_mc_ratio__594->SetBinError(5,0.005086121);
   data_mc_ratio__594->SetBinError(6,0.004764688);
   data_mc_ratio__594->SetBinError(7,0.005851998);
   data_mc_ratio__594->SetBinError(8,0.004955838);
   data_mc_ratio__594->SetBinError(9,0.005324687);
   data_mc_ratio__594->SetBinError(10,0.003246611);
   data_mc_ratio__594->SetBinError(11,0.005225483);
   data_mc_ratio__594->SetBinError(12,0.004998631);
   data_mc_ratio__594->SetBinError(13,0.00429639);
   data_mc_ratio__594->SetBinError(14,0.003734241);
   data_mc_ratio__594->SetBinError(15,0.003502013);
   data_mc_ratio__594->SetBinError(16,0.003328734);
   data_mc_ratio__594->SetBinError(17,0.004900438);
   data_mc_ratio__594->SetBinError(18,0.005385241);
   data_mc_ratio__594->SetBinError(19,0.006464075);
   data_mc_ratio__594->SetBinError(20,0.008645589);
   data_mc_ratio__594->SetBinError(21,0.01106462);
   data_mc_ratio__594->SetBinError(22,0.01530099);
   data_mc_ratio__594->SetBinError(23,0.01875266);
   data_mc_ratio__594->SetBinError(24,0.02504516);
   data_mc_ratio__594->SetBinError(25,0.03971292);
   data_mc_ratio__594->SetBinError(26,0.04956023);
   data_mc_ratio__594->SetBinError(27,1.159442);
   data_mc_ratio__594->SetBinError(28,1.567439);
   data_mc_ratio__594->SetBinError(29,14.21335);
   data_mc_ratio__594->SetMinimum(0.4);
   data_mc_ratio__594->SetMaximum(1.6);
   data_mc_ratio__594->SetEntries(7.843019);
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
   0.5479095,
   0.2813659,
   0.07341604,
   0.08286015,
   0.08731826,
   0.0885254,
   0.08517324,
   0.0888373,
   0.3067337,
   0.07322024,
   0.06137016,
   0.07092743,
   0.06285315,
   0.05430164,
   0.05843298,
   0.08541186,
   0.07927142,
   0.09759081,
   0.1146772,
   0.2262797,
   0.1755209,
   0.2276268,
   0.3465013,
   0.3954489,
   0.696145,
   0.08236968,
   0.1867216,
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
   Graph_Graph_from_mc_statistical_error1432->SetMinimum(0);
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

void H_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Thu Aug 10 12:20:55 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(0,0,1,1);
   H_dR_Bj0_algo_all->SetFillColor(0);
   H_dR_Bj0_algo_all->SetFillStyle(4000);
   H_dR_Bj0_algo_all->SetBorderMode(0);
   H_dR_Bj0_algo_all->SetBorderSize(2);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.451452,6.314516,16.11452);
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
   st->SetMinimum(0.3);
   st->SetMaximum(5.908338e+13);
   
   TH1F *st_stack_140 = new TH1F("st_stack_140","",30,0,6);
   st_stack_140->SetMinimum(0.03682259);
   st_stack_140->SetMaximum(2.27995e+14);
   st_stack_140->SetDirectory(0);
   st_stack_140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_140->SetLineColor(ci);
   st_stack_140->GetXaxis()->SetRange(1,30);
   st_stack_140->GetXaxis()->SetLabelFont(42);
   st_stack_140->GetXaxis()->SetLabelSize(0.035);
   st_stack_140->GetXaxis()->SetTitleSize(0.035);
   st_stack_140->GetXaxis()->SetTitleFont(42);
   st_stack_140->GetYaxis()->SetTitle("Events/0.2");
   st_stack_140->GetYaxis()->SetLabelFont(42);
   st_stack_140->GetYaxis()->SetLabelSize(0.05);
   st_stack_140->GetYaxis()->SetTitleSize(0.057);
   st_stack_140->GetYaxis()->SetTitleOffset(1.2);
   st_stack_140->GetYaxis()->SetTitleFont(42);
   st_stack_140->GetZaxis()->SetLabelFont(42);
   st_stack_140->GetZaxis()->SetLabelSize(0.035);
   st_stack_140->GetZaxis()->SetTitleSize(0.035);
   st_stack_140->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_140);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,493943);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,1350578);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,1185655);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,870088.2);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,619680);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,438195.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,343456.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,250518.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,237457.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,188696.9);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,172952.1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(12,136010.8);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(13,120953.1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(14,93109.33);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(15,74104.05);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(16,53299.31);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(17,31502.99);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(18,47316.42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(19,16780.61);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(20,11303);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(21,6845.732);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(22,3964.732);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(23,4378.584);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(24,1074.134);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(25,649.1182);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(26,1403.343);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(27,712.3938);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(28,365.2462);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(29,46.48273);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(30,340.2623);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(31,2373.28);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,16196.27);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,21634.93);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,17792.52);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,25910.24);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,25308.36);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,23280.54);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,22111.32);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,8642.17);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,16785.03);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,7351.712);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,21271.22);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(12,6644.348);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(13,6602.953);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(14,5408.077);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(15,5098.506);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(16,4250.334);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(17,2541.443);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(18,20465.76);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(19,2650.275);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(20,2017.81);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(21,1765.028);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(22,1589.777);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(23,1635.187);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(24,470.0777);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(25,383.8125);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(26,601.4225);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(27,384.5194);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(28,272.4413);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(29,26.92144);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(30,271.2933);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(31,1514.894);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(355717);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,3126.452);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,10798.97);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,9610.749);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,6458.265);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,4341.137);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,3073.501);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,2389.666);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,1909.141);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,1569.743);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,1277.805);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,1018.509);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,840.3263);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,691.4486);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(14,558.1939);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(15,460.4213);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(16,363.7538);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(17,270.3496);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(18,193.0239);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(19,131.6601);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(20,82.14594);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(21,50.51666);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(22,31.11432);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(23,18.73759);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(24,12.35025);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(25,8.946255);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(26,5.944991);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(27,5.327509);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(28,2.793857);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(29,1.464356);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(30,1.581213);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(31,2.650061);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,22.24555);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,39.52643);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,37.26039);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,30.38763);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,24.81005);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,20.75874);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,18.33323);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,16.37835);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,14.82914);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,13.30259);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,11.78474);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,10.8329);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,9.803424);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(14,8.756551);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(15,7.955807);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(16,7.120762);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(17,6.065968);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(18,5.117017);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(19,4.13782);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(20,3.228437);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(21,2.501852);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(22,1.83185);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(23,1.30553);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(24,1.068849);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(25,1.014272);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(26,0.6890194);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(27,0.6281087);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(28,0.450301);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(29,0.3611164);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(30,0.3673972);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(31,0.4353938);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(639487);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(1,54618.28);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(2,201422.2);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(3,172630.1);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(4,106353.9);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(5,66481.65);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(6,45548.64);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(7,34088.13);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(8,26942.77);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(9,21532.31);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(10,17185.54);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(11,13788.96);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(12,11537.32);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(13,9937.075);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(14,8682.255);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(15,7362.096);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(16,6057.017);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(17,4714.207);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(18,3460.154);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(19,2385.374);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(20,1451.483);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(21,758.3545);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(22,374.436);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(23,215.7115);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(24,129.4855);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(25,83.36754);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(26,56.52514);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(27,39.7581);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(28,23.83873);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(29,18.36015);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(30,14.26838);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(31,25.98086);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(1,60.6016);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(2,115.9189);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(3,106.9841);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(4,83.82444);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(5,66.17608);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(6,54.71902);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(7,47.31604);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(8,42.07696);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(9,37.61801);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(10,33.60392);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(11,30.10302);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(12,27.54781);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(13,25.59901);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(14,23.95778);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(15,22.07501);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(16,20.02378);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(17,17.66929);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(18,15.13552);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(19,12.57377);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(20,9.794744);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(21,7.044391);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(22,4.925164);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(23,3.731534);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(24,2.888745);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(25,2.316659);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(26,1.901493);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(27,1.604684);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(28,1.240015);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(29,1.086702);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(30,0.9617536);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(31,1.281341);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetEntries(1.27678e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(1,2947.675);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(2,8115.832);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(3,6284.21);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(4,4327.895);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(5,2839.078);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(6,2068.578);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(7,1613.552);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(8,1363.637);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(9,1139.851);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(10,938.835);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(11,740.4735);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(12,643.1828);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(13,518.7538);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(14,426.6816);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(15,333.5158);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(16,264.8304);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(17,162.3575);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(18,126.6903);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(19,74.77101);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(20,51.01204);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(21,22.4582);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(22,18.21361);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(23,15.3264);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(24,6.361301);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(25,5.637008);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(26,4.904827);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(27,1.646081);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(28,1.840722);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(29,0.360867);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(30,1.517527);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(31,0.9374012);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(1,24.97506);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(2,65.17723);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(3,65.55738);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(4,57.09675);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(5,45.91583);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(6,40.18413);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(7,34.41105);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(8,31.75493);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(9,29.17277);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(10,27.16565);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(11,21.79686);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(12,23.18114);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(13,21.27403);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(14,18.89614);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(15,16.40717);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(16,16.03282);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(17,11.27044);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(18,11.78436);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(19,8.306472);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(20,6.888735);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(21,4.826515);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(22,5.19708);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(23,5.124315);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(24,2.605029);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(25,2.620754);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(26,2.546915);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(27,0.7309019);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(28,0.8990011);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(29,0.360867);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(30,0.8004324);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(31,0.424302);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetEntries(204480);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(1,1554.95);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(2,3327.052);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(3,2551.264);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(4,1742.236);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(5,1038.14);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(6,869.8861);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(7,618.8552);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(8,543.848);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(9,427.36);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(10,315.6336);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(11,288.0482);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(12,229.9277);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(13,191.4046);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(14,133.0343);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(15,126.2059);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(16,78.38751);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(17,54.61475);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(18,40.39911);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(19,24.85634);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(20,26.29777);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(21,10.3363);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(22,5.452236);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(23,5.615879);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(24,0.4025478);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(25,0.2621722);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(26,6.13927);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(27,0.6013086);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(28,1.161321);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(29,0.1289434);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(31,0.04495706);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(1,28.2714);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(2,68.75836);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(3,72.91021);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(4,60.22466);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(5,43.41459);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(6,43.55676);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(7,32.03717);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(8,32.93541);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(9,26.64327);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(10,24.17054);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(11,20.2496);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(12,18.69458);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(13,21.42035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(14,17.80893);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(15,15.41052);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(16,12.60562);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(17,6.607666);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(18,9.494662);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(19,7.35663);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(20,9.104504);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(21,3.238772);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(22,1.968527);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(23,2.658133);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(24,0.2781372);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(25,0.1515332);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(26,6.068018);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(27,0.3387661);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(28,1.036313);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(29,0.09546593);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(31,0.04495706);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetEntries(98236);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(1,19.69432);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(2,30.14633);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(3,22.76764);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(4,19.01241);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(5,8.839574);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(6,6.420927);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(7,4.774363);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(8,7.831322);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(9,5.446209);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(10,3.008024);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(11,3.015127);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(12,1.575932);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(13,1.168089);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(14,1.304826);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(15,0.2687386);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(16,0.9017179);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(17,0.4031079);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(18,0.8551506);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(19,0.2687386);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(20,0.1343693);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(1,2.285889);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(2,2.678549);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(3,2.243734);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(4,2.188472);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(5,1.316311);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(6,1.186458);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(7,1.249076);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(8,1.530606);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(9,1.284704);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(10,0.795228);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(11,0.944985);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(12,0.7063715);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(13,0.5206304);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(14,0.6131727);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(15,0.1900269);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(16,0.5672878);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(17,0.2327345);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(18,0.5084367);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(19,0.1900269);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(20,0.1343693);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(21,0.1343693);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetEntries(733);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(1,29.00785);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(2,40.69392);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(3,28.35908);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(4,23.97412);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(5,10.48728);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(6,8.961539);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(7,7.168849);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(8,8.991096);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(9,6.514962);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(10,5.075567);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(11,4.722909);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(12,3.737598);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(13,2.26533);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(14,2.075123);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(15,0.8718499);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(16,1.966142);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(17,0.7628687);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(18,0.6700051);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(19,0.7628687);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(20,0.3269437);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(22,0.1089812);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(23,0.2179625);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(1,2.449098);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(2,2.804816);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(3,2.298282);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(4,2.252618);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(5,1.318432);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(6,1.253788);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(7,1.332965);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(8,1.546185);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(9,1.305961);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(10,0.9018664);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(11,1.022252);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(12,0.8470448);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(13,0.6139945);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(14,0.6680444);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(15,0.3082455);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(16,0.6590951);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(17,0.2883373);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(18,0.4775944);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(19,0.2883373);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(20,0.188761);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(22,0.1089812);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(23,0.1541227);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetEntries(1323);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(1,63.58554);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(2,120.5852);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(3,66.36741);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(4,44.18163);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(5,25.98896);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(6,19.79629);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(7,13.33014);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(8,13.51117);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(9,10.06598);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(10,11.15358);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(11,9.119336);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(12,4.55648);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(13,4.283217);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(14,5.881137);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(15,4.164802);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(16,3.50737);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(17,1.505469);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(18,1.758694);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(19,1.515487);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(21,0.7758471);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(1,4.061333);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(2,5.602406);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(3,4.13125);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(4,3.385092);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(5,2.577717);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(6,2.26012);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(7,1.851825);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(8,1.877197);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(9,1.614789);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(10,1.70438);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(11,1.54431);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(12,1.075303);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(13,1.040292);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(14,1.22833);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(15,1.043456);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(16,0.9385424);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(17,0.6154628);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(18,0.6655206);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(19,0.6194901);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(21,0.4487152);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetEntries(1651);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(1,37.50925);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(2,86.2783);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(3,52.97554);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(4,30.23158);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(5,17.17408);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(6,12.03374);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(7,9.742986);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(8,8.0377);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(9,7.012453);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(10,5.643258);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(11,4.589121);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(12,3.840778);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(13,3.206725);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(14,2.775012);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(15,2.051881);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(16,1.828027);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(17,1.195917);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(18,0.9499429);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(19,0.5527148);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(20,0.3583218);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(21,0.177082);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(22,0.08759168);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(23,0.03105924);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(24,0.02364146);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(25,0.006106284);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(26,0.01330178);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(27,0.004720062);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(28,0.004439365);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(31,0.01116451);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(1,0.263161);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(2,0.3976238);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(3,0.3074023);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(4,0.2310512);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(5,0.1738429);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(6,0.1458365);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(7,0.1319064);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(8,0.1197233);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(9,0.1126895);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(10,0.1007147);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(11,0.09095205);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(12,0.08327329);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(13,0.07560908);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(14,0.0705102);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(15,0.05991993);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(16,0.0565773);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(17,0.04573165);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(18,0.04051213);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(19,0.03098961);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(20,0.02493217);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(21,0.01767781);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(22,0.01200987);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(23,0.007290498);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(24,0.006702601);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(25,0.003066018);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(26,0.005163717);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(27,0.002734749);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(28,0.002573295);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(31,0.004297497);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetEntries(167452);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(1,11.52709);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(2,39.63613);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(3,30.82718);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(4,19.2356);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(5,11.3199);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(6,7.70165);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(7,6.159399);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(8,5.037014);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(9,4.474449);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(10,3.527693);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(11,2.722265);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(12,2.401192);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(13,2.043071);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(14,1.812557);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(15,1.539507);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(16,1.226666);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(17,0.8973596);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(18,0.5954955);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(19,0.4527961);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(20,0.3155852);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(21,0.1481878);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(22,0.05900071);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(23,0.03704696);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(24,0.0288143);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(25,0.01783742);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(26,0.01097688);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(27,0.008232657);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(28,0.006860547);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(29,0.002744219);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(31,0.008232657);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(1,0.07438671);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(2,0.1379371);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(3,0.1216473);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(4,0.09609225);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(5,0.07371516);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(6,0.06080333);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(7,0.05437568);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(8,0.04917247);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(9,0.04634525);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(10,0.04115105);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(11,0.03614937);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(12,0.03395071);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(13,0.03131679);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(14,0.02949723);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(15,0.02718481);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(16,0.02426602);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(17,0.02075481);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(18,0.01690732);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(19,0.01474303);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(20,0.01230818);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(21,0.008434158);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(22,0.005321868);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(23,0.004217079);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(24,0.003719114);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(25,0.002926183);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(26,0.002295487);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(27,0.00198795);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(28,0.001814742);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(29,0.001147744);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(31,0.00198795);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetEntries(336228);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(1,0.2836141);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(2,0.6498613);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(3,0.4215024);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(4,0.3336305);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(5,0.1752458);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(6,0.09458939);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(7,0.1039492);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(8,0.08994135);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(9,0.05702079);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(10,0.0673354);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(11,0.04228033);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(12,0.04597355);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(13,0.01873407);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(14,0.02576645);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(15,0.02935244);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(16,0.01884129);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(17,0.01608839);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(18,0.009996332);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(19,0.01115109);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(21,0.004315259);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(22,0.001580251);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(1,0.02613424);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(2,0.0394844);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(3,0.03143424);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(4,0.02837619);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(5,0.02081755);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(6,0.01471181);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(7,0.01561606);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(8,0.01491766);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(9,0.01190672);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(10,0.01264955);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(11,0.01040146);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(12,0.01054864);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(13,0.00646777);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(14,0.008217033);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(15,0.008368282);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(16,0.006512068);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(17,0.006569371);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(18,0.004615424);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(19,0.00512691);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(21,0.003158712);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(22,0.001580251);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(23,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetEntries(1102);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(1,0.08544201);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(2,0.2833314);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(3,0.2094304);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(4,0.1368971);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(5,0.07286803);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(6,0.05380937);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(7,0.05302394);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(8,0.04138214);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(9,0.0306866);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(10,0.02095696);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(11,0.02183175);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(12,0.02355122);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(13,0.01239245);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(14,0.01099648);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(15,0.009430325);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(16,0.005153064);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(17,0.007353932);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(18,0.003988879);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(19,0.002559143);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(20,0.002351201);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(1,0.004991534);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(2,0.009112872);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(3,0.007866568);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(4,0.006403608);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(5,0.004587442);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(6,0.003994785);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(7,0.004020079);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(8,0.003525607);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(9,0.003002691);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(10,0.002477364);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(11,0.002572075);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(12,0.00260007);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(13,0.00189706);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(14,0.001847773);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(15,0.00164613);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(16,0.001214523);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(17,0.001535587);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(18,0.001060537);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(19,0.0008790621);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(20,0.0008994073);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all__384 = new TH1D("VbbHcc_algo_H_dR_Bj0_all__384","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(1,277986);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(2,748864);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(3,588991);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(4,398023);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(5,259717);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(6,186096);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(7,147192);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(8,122197);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(9,102609);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(10,85727);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(11,71047);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(12,57554);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(13,47458);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(14,38345);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(15,29800);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(16,22243);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(17,16142);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(18,11112);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(19,7507);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(20,4888);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(21,2906);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(22,1777);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(23,1122);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(24,723);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(25,518);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(26,342);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(27,245);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(28,141);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(29,128);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(30,71);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(31,171);
   VbbHcc_algo_H_dR_Bj0_all__384->SetEntries(3231671);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all__384->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all__384->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj0_all__384->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj0_all__384->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj0_all__384->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all__384->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all__384->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__384->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__384->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all__384->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all__384->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__384->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__384->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all__384->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all__384->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all__384->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__384->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__384->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all__384->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fx1279[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fy1279[30] = {
   556352.1,
   1574561,
   1376933,
   989107.7,
   694454.1,
   489811,
   382207.8,
   281321.2,
   262160.2,
   208443.2,
   188812.3,
   149277.8,
   132304.8,
   102923.4,
   82395.22,
   60072.76,
   36709.3,
   51141.53,
   19400.84,
   12915.08,
   7688.638,
   4394.205,
   4634.264,
   1222.786,
   747.3554,
   1476.881,
   759.7397,
   394.8921,
   66.79979,
   357.6294};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fex1279[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fey1279[30] = {
   16196.44,
   21635.49,
   17793.15,
   25910.53,
   25308.54,
   23280.69,
   22111.42,
   8642.41,
   16785.12,
   7351.891,
   21271.27,
   6644.48,
   6603.079,
   5408.2,
   5098.609,
   4250.437,
   2541.545,
   20465.78,
   2650.332,
   2017.869,
   1765.053,
   1589.795,
   1635.202,
   470.0951,
   383.8298,
   601.4619,
   384.5241,
   272.4479,
   26.94837,
   271.2964};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fx1279,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fy1279,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fex1279,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fey1279);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetMinimum(35.86628);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetMaximum(1755812);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj0_all","MC unc. (stat.)","fl");

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
   H_dR_Bj0_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__385 = new TH1D("data_mc_ratio__385","",30,0,6);
   data_mc_ratio__385->SetBinContent(1,0.4996584);
   data_mc_ratio__385->SetBinContent(2,0.4756019);
   data_mc_ratio__385->SetBinContent(3,0.4277557);
   data_mc_ratio__385->SetBinContent(4,0.4024061);
   data_mc_ratio__385->SetBinContent(5,0.3739873);
   data_mc_ratio__385->SetBinContent(6,0.3799343);
   data_mc_ratio__385->SetBinContent(7,0.3851098);
   data_mc_ratio__385->SetBinContent(8,0.4343682);
   data_mc_ratio__385->SetBinContent(9,0.3913981);
   data_mc_ratio__385->SetBinContent(10,0.4112726);
   data_mc_ratio__385->SetBinContent(11,0.3762837);
   data_mc_ratio__385->SetBinContent(12,0.3855497);
   data_mc_ratio__385->SetBinContent(13,0.3587021);
   data_mc_ratio__385->SetBinContent(14,0.3725587);
   data_mc_ratio__385->SetBinContent(15,0.3616715);
   data_mc_ratio__385->SetBinContent(16,0.3702677);
   data_mc_ratio__385->SetBinContent(17,0.439725);
   data_mc_ratio__385->SetBinContent(18,0.2172794);
   data_mc_ratio__385->SetBinContent(19,0.3869421);
   data_mc_ratio__385->SetBinContent(20,0.3784724);
   data_mc_ratio__385->SetBinContent(21,0.3779603);
   data_mc_ratio__385->SetBinContent(22,0.4043962);
   data_mc_ratio__385->SetBinContent(23,0.2421096);
   data_mc_ratio__385->SetBinContent(24,0.5912729);
   data_mc_ratio__385->SetBinContent(25,0.6931106);
   data_mc_ratio__385->SetBinContent(26,0.231569);
   data_mc_ratio__385->SetBinContent(27,0.3224789);
   data_mc_ratio__385->SetBinContent(28,0.3570596);
   data_mc_ratio__385->SetBinContent(29,1.916174);
   data_mc_ratio__385->SetBinContent(30,0.1985296);
   data_mc_ratio__385->SetBinContent(31,0.07116365);
   data_mc_ratio__385->SetBinError(1,0.0009476801);
   data_mc_ratio__385->SetBinError(2,0.0005495941);
   data_mc_ratio__385->SetBinError(3,0.0005573673);
   data_mc_ratio__385->SetBinError(4,0.0006378382);
   data_mc_ratio__385->SetBinError(5,0.0007338489);
   data_mc_ratio__385->SetBinError(6,0.0008807244);
   data_mc_ratio__385->SetBinError(7,0.001003789);
   data_mc_ratio__385->SetBinError(8,0.00124259);
   data_mc_ratio__385->SetBinError(9,0.001221873);
   data_mc_ratio__385->SetBinError(10,0.001404659);
   data_mc_ratio__385->SetBinError(11,0.0014117);
   data_mc_ratio__385->SetBinError(12,0.001607099);
   data_mc_ratio__385->SetBinError(13,0.001646566);
   data_mc_ratio__385->SetBinError(14,0.001902569);
   data_mc_ratio__385->SetBinError(15,0.002095106);
   data_mc_ratio__385->SetBinError(16,0.002482671);
   data_mc_ratio__385->SetBinError(17,0.003461007);
   data_mc_ratio__385->SetBinError(18,0.002061211);
   data_mc_ratio__385->SetBinError(19,0.004465939);
   data_mc_ratio__385->SetBinError(20,0.005413381);
   data_mc_ratio__385->SetBinError(21,0.007011298);
   data_mc_ratio__385->SetBinError(22,0.009593197);
   data_mc_ratio__385->SetBinError(23,0.007227958);
   data_mc_ratio__385->SetBinError(24,0.02198967);
   data_mc_ratio__385->SetBinError(25,0.03045353);
   data_mc_ratio__385->SetBinError(26,0.01252182);
   data_mc_ratio__385->SetBinError(27,0.02060242);
   data_mc_ratio__385->SetBinError(28,0.03006984);
   data_mc_ratio__385->SetBinError(29,0.1693674);
   data_mc_ratio__385->SetBinError(30,0.02356112);
   data_mc_ratio__385->SetBinError(31,0.04519335);
   data_mc_ratio__385->SetMinimum(0.4);
   data_mc_ratio__385->SetMaximum(1.6);
   data_mc_ratio__385->SetEntries(175.9745);
   data_mc_ratio__385->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__385->SetLineColor(ci);
   data_mc_ratio__385->SetLineWidth(2);
   data_mc_ratio__385->SetMarkerStyle(20);
   data_mc_ratio__385->SetMarkerSize(1.2);
   data_mc_ratio__385->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__385->GetXaxis()->SetRange(1,30);
   data_mc_ratio__385->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__385->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__385->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__385->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__385->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__385->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__385->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__385->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__385->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__385->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__385->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__385->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__385->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__385->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__385->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__385->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__385->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1280[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1280[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1280[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1280[30] = {
   0.02911186,
   0.01374065,
   0.0129223,
   0.02619586,
   0.03644378,
   0.04752994,
   0.05785183,
   0.03072079,
   0.0640262,
   0.03527047,
   0.1126583,
   0.04451085,
   0.04990809,
   0.05254588,
   0.06187991,
   0.07075481,
   0.06923437,
   0.4001792,
   0.1366092,
   0.1562413,
   0.2295664,
   0.3617935,
   0.3528504,
   0.384446,
   0.5135841,
   0.4072514,
   0.5061261,
   0.68993,
   0.4034199,
   0.7585966};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1280,Graph_from_mc_statistical_error_fy1280,Graph_from_mc_statistical_error_fex1280,Graph_from_mc_statistical_error_fey1280);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1280 = new TH1F("Graph_Graph_from_mc_statistical_error1280","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1280->SetMinimum(0.08968412);
   Graph_Graph_from_mc_statistical_error1280->SetMaximum(1.910316);
   Graph_Graph_from_mc_statistical_error1280->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1280->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1280->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1280);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->SetSelected(H_dR_Bj0_algo_all);
}

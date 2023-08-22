void H_dR_Bj0_both_all()
{
//=========Macro generated from canvas: H_dR_Bj0_both_all/H_dR_Bj0_both_all
//=========  (Tue Aug 22 09:23:03 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_all = new TCanvas("H_dR_Bj0_both_all", "H_dR_Bj0_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_both_all->SetHighLightColor(2);
   H_dR_Bj0_both_all->Range(0,0,1,1);
   H_dR_Bj0_both_all->SetFillColor(0);
   H_dR_Bj0_both_all->SetFillStyle(4000);
   H_dR_Bj0_both_all->SetBorderMode(0);
   H_dR_Bj0_both_all->SetBorderSize(2);
   H_dR_Bj0_both_all->SetFrameFillStyle(1000);
   H_dR_Bj0_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-277.6583,6.314516,277680.6);
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
   st->SetMaximum(237985.5);
   
   TH1F *st_stack_236 = new TH1F("st_stack_236","",30,0,6);
   st_stack_236->SetMinimum(0.3);
   st_stack_236->SetMaximum(249884.8);
   st_stack_236->SetDirectory(0);
   st_stack_236->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_236->SetLineColor(ci);
   st_stack_236->GetXaxis()->SetRange(1,30);
   st_stack_236->GetXaxis()->SetLabelFont(42);
   st_stack_236->GetXaxis()->SetLabelSize(0.035);
   st_stack_236->GetXaxis()->SetTitleSize(0.035);
   st_stack_236->GetXaxis()->SetTitleFont(42);
   st_stack_236->GetYaxis()->SetTitle("Events/0.2");
   st_stack_236->GetYaxis()->SetLabelFont(42);
   st_stack_236->GetYaxis()->SetLabelSize(0.05);
   st_stack_236->GetYaxis()->SetTitleSize(0.057);
   st_stack_236->GetYaxis()->SetTitleOffset(1.2);
   st_stack_236->GetYaxis()->SetTitleFont(42);
   st_stack_236->GetZaxis()->SetLabelFont(42);
   st_stack_236->GetZaxis()->SetLabelSize(0.035);
   st_stack_236->GetZaxis()->SetTitleSize(0.035);
   st_stack_236->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_236);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(1,19583.11);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(2,99234.43);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(3,77271.42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(4,56487.3);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(5,48911.93);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(6,35675.36);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(7,33806.61);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(8,28746.2);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(9,46333.98);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(10,21849.66);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(11,20788.51);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(12,25215.32);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(13,20748.67);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(14,19995.78);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(15,14077.32);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(16,14906.24);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(17,9432.455);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(18,5537.125);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(19,4095.147);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(20,4224.127);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(21,2068.693);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(22,2375.136);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(23,1711.48);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(24,475.2915);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(25,97.78402);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(26,358.8702);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(27,47.77016);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(28,77.12119);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(29,33.30724);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(1,1516.272);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(2,17654.03);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(3,4320.691);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(4,4410.825);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(5,3398.072);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(6,2600.921);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(7,3470.506);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(8,2710.617);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(9,17299.61);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(10,2758.815);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(11,1991.697);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(12,2561.817);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(13,1947.413);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(14,1947.713);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(15,1285.163);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(16,1493.216);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(17,1148.976);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(18,756.6831);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(19,707.8807);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(20,816.9487);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(21,489.6876);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(22,727.868);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(23,639.9166);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(24,96.75974);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(25,45.31271);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(26,309.8754);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(27,19.97942);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(28,38.99095);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(29,33.30724);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetEntries(28873);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(1,100.7578);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(2,317.7122);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(3,381.6949);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(4,336.0265);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(5,279.4081);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(6,238.4455);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(7,211.4691);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(8,177.6087);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(9,158.4908);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(10,148.8196);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(11,124.0591);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(12,122.6546);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(13,113.4506);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(14,115.3982);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(15,103.9977);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(16,100.9272);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(17,58.50861);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(18,43.4038);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(19,29.53779);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(20,19.97555);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(21,13.83444);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(22,8.632956);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(23,8.164268);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(24,4.586862);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(25,2.107364);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(26,1.288058);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(27,1.357745);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(28,0.9060323);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(29,0.05162389);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(30,0.05162389);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(31,0.4345497);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(1,4.187651);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(2,7.090186);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(3,7.860444);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(4,7.40761);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(5,6.805673);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(6,6.173883);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(7,5.878515);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(8,5.408965);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(9,5.064972);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(10,4.956564);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(11,4.39248);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(12,4.488017);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(13,4.213367);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(14,4.347562);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(15,4.008449);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(16,4.028415);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(17,2.974477);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(18,2.602041);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(19,2.084168);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(20,1.577477);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(21,1.353686);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(22,0.9868948);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(23,1.08268);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(24,0.8014015);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(25,0.5303693);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(26,0.4251029);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(27,0.4963365);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(28,0.400263);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(29,0.05162389);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(30,0.05162389);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(31,0.2912361);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetEntries(36867);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(1,1575.22);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(2,6361.315);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(3,7985.2);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(4,7172.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(5,6010.958);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(6,4983.233);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(7,4144.297);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(8,3524.527);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(9,3072.318);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(10,2733.15);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(11,2445.483);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(12,2250.692);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(13,2050.558);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(14,1924.255);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(15,1822.013);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(16,1647.606);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(17,1018.772);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(18,688.7047);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(19,465.5417);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(20,318.3785);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(21,217.3454);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(22,139.3855);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(23,92.47752);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(24,59.14262);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(25,36.54562);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(26,21.29421);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(27,11.87533);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(28,6.045466);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(29,4.485656);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(30,2.484033);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(31,4.244344);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(1,10.22301);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(2,20.57006);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(3,23.08442);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(4,21.86392);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(5,19.99579);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(6,18.18608);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(7,16.57277);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(8,15.26546);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(9,14.25206);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(10,13.44962);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(11,12.72539);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(12,12.20381);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(13,11.65446);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(14,11.29363);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(15,10.9989);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(16,10.45531);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(17,8.205235);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(18,6.752562);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(19,5.538719);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(20,4.57723);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(21,3.787284);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(22,3.026022);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(23,2.460865);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(24,1.969995);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(25,1.548455);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(26,1.176414);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(27,0.8902733);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(28,0.6320054);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(29,0.5529726);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(30,0.4045987);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(31,0.5266981);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetEntries(982703);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(1,319.9108);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(2,1016.064);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(3,1084.659);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(4,833.4467);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(5,622.6554);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(6,508.8099);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(7,434.0084);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(8,386.7723);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(9,347.0983);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(10,318.2546);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(11,305.5685);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(12,285.1614);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(13,253.2232);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(14,269.7693);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(15,275.0007);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(16,239.5771);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(17,134.9088);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(18,81.49893);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(19,53.74497);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(20,36.11619);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(21,28.40627);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(22,18.53539);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(23,11.16173);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(24,5.379354);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(25,4.489062);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(26,0.6076457);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(27,1.480059);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(28,0.1436599);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(29,0.4639287);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(30,0.4622776);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(31,0.3546586);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(1,8.971931);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(2,19.56633);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(3,22.79568);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(4,21.98787);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(5,17.28279);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(6,16.86224);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(7,15.30692);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(8,15.3008);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(9,14.83276);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(10,12.26152);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(11,13.14302);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(12,13.24717);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(13,10.23266);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(14,11.23053);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(15,12.4304);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(16,9.645185);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(17,8.020236);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(18,5.231948);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(19,4.050941);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(20,2.962447);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(21,3.363969);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(22,2.266208);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(23,2.653903);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(24,1.053949);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(25,1.137365);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(26,0.2404958);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(27,0.722619);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(28,0.1436599);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(29,0.3432035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(30,0.3495073);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(31,0.2140347);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetEntries(51772);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(1,36.78713);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(2,94.91851);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(3,111.063);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(4,79.79386);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(5,65.16194);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(6,56.11363);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(7,34.26697);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(8,43.3076);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(9,33.03163);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(10,37.44477);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(11,31.26025);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(12,35.73994);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(13,30.78219);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(14,28.96977);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(15,24.07879);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(16,25.54068);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(17,13.21854);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(18,14.61351);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(19,8.19698);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(20,3.513048);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(21,4.370159);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(22,3.268272);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(23,0.8758827);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(24,0.4255835);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(25,0.2276349);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(26,0.1695762);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(27,0.0002367642);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(29,0.02229029);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(31,0.02205352);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(1,3.204852);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(2,12.35836);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(3,12.53232);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(4,9.885092);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(5,5.923577);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(6,6.449519);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(7,3.238112);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(8,8.594009);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(9,4.832496);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(10,5.186071);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(11,3.892787);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(12,4.920294);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(13,4.267373);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(14,3.490829);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(15,2.294938);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(16,3.700644);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(17,2.46593);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(18,2.428065);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(19,2.362049);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(20,0.6878014);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(21,1.317556);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(22,1.337987);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(23,0.4614856);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(24,0.2162275);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(25,0.1366146);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(26,0.1695762);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(27,0.0002367642);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(29,0.02205479);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(31,0.02205352);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetEntries(7913);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(2,0.8862401);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(3,0.4533354);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(4,0.4664177);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(7,0.1511118);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(11,0.1511118);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(14,0.3022236);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(15,0.3022236);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(16,0.8862401);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(2,0.6522144);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(3,0.2617333);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(4,0.3496464);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(7,0.1511118);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(10,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(11,0.1511118);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(14,0.2137044);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(15,0.2137044);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(16,0.6522144);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetEntries(17);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(1,0.2244502);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(2,1.896266);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(3,0.6733507);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(4,0.5397561);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(5,0.5611256);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(6,0.1122251);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(7,0.2244502);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(8,0.2244502);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(9,0.4489005);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(10,0.6519812);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(11,0.3366753);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(12,0.1122251);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(13,0.2244502);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(14,0.1122251);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(15,0.2244502);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(16,1.11069);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(17,0.2244502);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(1,0.1587103);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(2,0.733985);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(3,0.2748943);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(4,0.3529968);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(5,0.250943);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(6,0.1122251);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(7,0.1587103);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(8,0.1587103);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(9,0.2244502);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(10,0.3704068);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(11,0.1943796);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(12,0.1122251);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(13,0.1587103);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(14,0.1122251);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(15,0.1587103);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(16,0.6712471);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(17,0.1587103);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetEntries(56);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(1,7.481603);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(2,29.50879);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(3,23.06885);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(4,19.2084);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(5,7.441548);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(6,5.617106);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(7,8.306495);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(8,4.79273);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(9,6.948448);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(10,6.21599);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(11,4.045375);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(12,3.753639);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(13,5.831821);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(14,5.805117);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(15,4.286279);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(16,3.98119);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(17,2.863018);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(18,2.675522);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(19,1.064765);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(22,0.2794144);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(1,1.415216);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(2,2.815764);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(3,2.489823);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(4,2.265583);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(5,1.407475);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(6,1.22672);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(7,1.493242);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(8,1.130719);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(9,1.363827);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(10,1.297242);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(11,1.045086);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(12,1.004034);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(13,1.244575);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(14,1.23871);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(15,1.072511);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(16,1.029017);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(17,0.8636948);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(18,0.8467744);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(19,0.5327045);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(20,0.2794144);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(22,0.2794144);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetEntries(574);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(1,6.107909);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(2,26.23817);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(3,26.04934);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(4,17.97562);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(5,11.40124);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(6,8.149004);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(7,6.421392);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(8,5.678206);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(9,5.119887);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(10,4.957604);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(11,4.892052);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(12,4.544434);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(13,4.5742);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(14,4.403283);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(15,4.489717);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(16,3.993324);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(17,2.292409);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(18,1.329573);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(19,0.737163);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(20,0.3985462);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(21,0.2576784);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(22,0.209356);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(23,0.0803714);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(24,0.05087502);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(25,0.0382683);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(26,0.02485004);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(27,0.008726037);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(28,0.01003489);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(29,0.005825005);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(30,0.002835937);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(31,0.004209888);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(1,0.1132708);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(2,0.2350538);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(3,0.2317705);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(4,0.1913988);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(5,0.1515852);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(6,0.128495);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(7,0.1147531);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(8,0.1081315);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(9,0.1022424);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(10,0.1012726);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(11,0.1005496);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(12,0.0974434);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(13,0.09718099);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(14,0.09543556);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(15,0.09696265);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(16,0.09156535);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(17,0.06875856);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(18,0.05232807);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(19,0.0394703);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(20,0.02880466);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(21,0.02279902);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(22,0.02108512);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(23,0.0122563);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(24,0.01012068);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(25,0.009204215);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(26,0.007783148);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(27,0.003573257);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(28,0.004740165);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(29,0.003541029);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(30,0.002835937);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(31,0.003151235);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetEntries(80589);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(1,2.272703);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(2,10.40249);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(3,12.28071);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(4,9.266134);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(5,6.061623);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(6,4.350602);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(7,3.35873);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(8,2.803541);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(9,2.545427);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(10,2.274326);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(11,2.048679);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(12,1.86524);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(13,1.724007);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(14,1.69154);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(15,1.524334);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(16,1.441543);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(17,0.8409);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(18,0.5048647);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(19,0.2970747);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(20,0.167206);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(21,0.0990249);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(22,0.05844093);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(23,0.05032413);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(24,0.0275971);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(25,0.01785695);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(26,0.01136351);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(27,0.006493436);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(28,0.004870077);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(29,0.003246718);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(31,0.003246718);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(1,0.0359269);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(2,0.07686293);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(3,0.08351417);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(4,0.07254336);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(5,0.05867362);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(6,0.04970763);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(7,0.04367531);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(8,0.03990266);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(9,0.03802145);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(10,0.03593973);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(11,0.03411029);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(12,0.03254736);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(13,0.03129089);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(14,0.03099485);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(15,0.0294231);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(16,0.02861292);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(17,0.02185348);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(18,0.01693308);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(19,0.01298917);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(20,0.009744831);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(21,0.007499298);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(22,0.00576112);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(23,0.005346093);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(24,0.003958951);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(25,0.003184579);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(26,0.002540415);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(27,0.001920373);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(28,0.001663092);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(29,0.001357909);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(31,0.001357909);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetEntries(125673);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(1,0.03115187);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(2,0.08242151);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(3,0.07143445);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(4,0.05789441);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(5,0.04290914);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(6,0.03361686);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(7,0.03407611);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(8,0.007712026);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(9,0.01341831);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(10,0.01360754);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(11,0.0127228);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(12,0.003856013);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(13,0.004551524);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(14,0.008171272);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(15,0.007016515);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(16,0.008171272);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(17,0.003160502);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(26,0.002275762);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(1,0.008447788);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(2,0.01332965);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(3,0.01202128);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(4,0.01123646);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(5,0.009566994);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(6,0.008583566);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(7,0.008716581);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(8,0.003918236);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(9,0.005540201);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(10,0.005275152);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(11,0.00529263);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(12,0.002770611);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(13,0.003218413);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(14,0.004201636);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(15,0.003559589);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(16,0.004201636);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(17,0.002234813);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(26,0.002275762);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetEntries(215);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(1,0.007665873);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(2,0.02816196);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(3,0.03665758);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(4,0.03113699);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(5,0.02023053);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(6,0.01673798);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(7,0.01106671);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(8,0.012265);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(9,0.009475706);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(10,0.006767239);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(11,0.005487163);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(12,0.00450708);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(13,0.00483024);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(14,0.002535976);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(15,0.004265369);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(16,0.002052217);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(17,0.003883927);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(18,0.001902557);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(19,0.0008069192);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(20,0.0005072625);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(21,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(29,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(1,0.001479806);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(2,0.002832737);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(3,0.003247336);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(4,0.002953774);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(5,0.002415142);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(6,0.002186762);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(7,0.001764888);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(8,0.001885017);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(9,0.001666653);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(10,0.001356894);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(11,0.001254476);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(12,0.001147506);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(13,0.001164593);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(14,0.0008624122);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(15,0.001088824);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(16,0.0007487139);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(17,0.001125502);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(18,0.000689952);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(19,0.0004718988);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(20,0.0003645467);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(21,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(23,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(29,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all__648 = new TH1D("VbbHcc_both_H_dR_Bj0_all__648","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(1,18414);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(2,61191);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(3,61400);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(4,48366);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(5,39727);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(6,33381);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(7,28402);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(8,24823);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(9,22334);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(10,20119);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(11,18793);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(12,17460);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(13,16523);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(14,15986);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(15,15385);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(16,14234);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(17,9117);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(18,6285);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(19,4453);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(20,3161);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(21,2206);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(22,1554);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(23,1017);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(24,630);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(25,380);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(26,269);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(27,123);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(28,91);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(29,53);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(30,27);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(31,45);
   VbbHcc_both_H_dR_Bj0_all__648->SetEntries(485978);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all__648->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all__648->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj0_all__648->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj0_all__648->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj0_all__648->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all__648->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all__648->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_all_fx1471[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_all_fy1471[30] = {
   21631.91,
   107093.5,
   86896.67,
   64956.15,
   55915.64,
   41480.24,
   38649.16,
   32891.93,
   49960,
   25101.77,
   23706.38,
   27919.85,
   23209.04,
   22346.5,
   16313.25,
   16931.31,
   10664.09,
   6370.488,
   4654.27,
   4602.956,
   2333.006,
   2545.505,
   1824.29,
   544.9044,
   141.2098,
   382.2682,
   62.49875,
   84.23125,
   38.34002,
   3.000771};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_all_fex1471[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_all_fey1471[30] = {
   1516.343,
   17654.06,
   4320.839,
   4410.952,
   3398.187,
   2601.055,
   3470.586,
   2710.723,
   17299.62,
   2758.884,
   1991.79,
   2561.889,
   1947.484,
   1947.786,
   1285.279,
   1493.294,
   1149.04,
   756.7403,
   707.9211,
   816.9687,
   489.7175,
   727.8798,
   639.928,
   96.78909,
   45.35673,
   309.8781,
   20.01845,
   38.99839,
   33.31365,
   0.5371485};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_all_fx1471,Graph_from_VbbHcc_both_H_dR_Bj0_all_fy1471,Graph_from_VbbHcc_both_H_dR_Bj0_all_fex1471,Graph_from_VbbHcc_both_H_dR_Bj0_all_fey1471);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetMinimum(2.21726);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetMaximum(137222);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj0_all","MC unc. (stat.)","fl");

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
   H_dR_Bj0_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__649 = new TH1D("data_mc_ratio__649","",30,0,6);
   data_mc_ratio__649->SetBinContent(1,0.8512425);
   data_mc_ratio__649->SetBinContent(2,0.5713793);
   data_mc_ratio__649->SetBinContent(3,0.7065863);
   data_mc_ratio__649->SetBinContent(4,0.7445946);
   data_mc_ratio__649->SetBinContent(5,0.710481);
   data_mc_ratio__649->SetBinContent(6,0.8047447);
   data_mc_ratio__649->SetBinContent(7,0.7348672);
   data_mc_ratio__649->SetBinContent(8,0.7546835);
   data_mc_ratio__649->SetBinContent(9,0.4470376);
   data_mc_ratio__649->SetBinContent(10,0.8014973);
   data_mc_ratio__649->SetBinContent(11,0.7927403);
   data_mc_ratio__649->SetBinContent(12,0.6253615);
   data_mc_ratio__649->SetBinContent(13,0.7119208);
   data_mc_ratio__649->SetBinContent(14,0.7153693);
   data_mc_ratio__649->SetBinContent(15,0.9430982);
   data_mc_ratio__649->SetBinContent(16,0.840691);
   data_mc_ratio__649->SetBinContent(17,0.8549252);
   data_mc_ratio__649->SetBinContent(18,0.9865806);
   data_mc_ratio__649->SetBinContent(19,0.9567559);
   data_mc_ratio__649->SetBinContent(20,0.6867325);
   data_mc_ratio__649->SetBinContent(21,0.9455613);
   data_mc_ratio__649->SetBinContent(22,0.6104878);
   data_mc_ratio__649->SetBinContent(23,0.5574772);
   data_mc_ratio__649->SetBinContent(24,1.156166);
   data_mc_ratio__649->SetBinContent(25,2.691031);
   data_mc_ratio__649->SetBinContent(26,0.7036944);
   data_mc_ratio__649->SetBinContent(27,1.968039);
   data_mc_ratio__649->SetBinContent(28,1.080359);
   data_mc_ratio__649->SetBinContent(29,1.382368);
   data_mc_ratio__649->SetBinContent(30,8.997689);
   data_mc_ratio__649->SetBinContent(31,8.887902);
   data_mc_ratio__649->SetBinError(1,0.006273057);
   data_mc_ratio__649->SetBinError(2,0.002309834);
   data_mc_ratio__649->SetBinError(3,0.00285155);
   data_mc_ratio__649->SetBinError(4,0.00338571);
   data_mc_ratio__649->SetBinError(5,0.00356459);
   data_mc_ratio__649->SetBinError(6,0.00440462);
   data_mc_ratio__649->SetBinError(7,0.004360481);
   data_mc_ratio__649->SetBinError(8,0.004790025);
   data_mc_ratio__649->SetBinError(9,0.002991306);
   data_mc_ratio__649->SetBinError(10,0.005650656);
   data_mc_ratio__649->SetBinError(11,0.00578273);
   data_mc_ratio__649->SetBinError(12,0.004732701);
   data_mc_ratio__649->SetBinError(13,0.005538437);
   data_mc_ratio__649->SetBinError(14,0.005657967);
   data_mc_ratio__649->SetBinError(15,0.007603406);
   data_mc_ratio__649->SetBinError(16,0.007046491);
   data_mc_ratio__649->SetBinError(17,0.008953692);
   data_mc_ratio__649->SetBinError(18,0.01244457);
   data_mc_ratio__649->SetBinError(19,0.01433755);
   data_mc_ratio__649->SetBinError(20,0.01221449);
   data_mc_ratio__649->SetBinError(21,0.020132);
   data_mc_ratio__649->SetBinError(22,0.01548644);
   data_mc_ratio__649->SetBinError(23,0.01748101);
   data_mc_ratio__649->SetBinError(24,0.04606276);
   data_mc_ratio__649->SetBinError(25,0.138047);
   data_mc_ratio__649->SetBinError(26,0.042905);
   data_mc_ratio__649->SetBinError(27,0.1774521);
   data_mc_ratio__649->SetBinError(28,0.1132524);
   data_mc_ratio__649->SetBinError(29,0.1898828);
   data_mc_ratio__649->SetBinError(30,1.731606);
   data_mc_ratio__649->SetBinError(31,1.736197);
   data_mc_ratio__649->SetMinimum(0.4);
   data_mc_ratio__649->SetMaximum(1.6);
   data_mc_ratio__649->SetEntries(136.3587);
   data_mc_ratio__649->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__649->SetLineColor(ci);
   data_mc_ratio__649->SetLineWidth(2);
   data_mc_ratio__649->SetMarkerStyle(20);
   data_mc_ratio__649->SetMarkerSize(1.2);
   data_mc_ratio__649->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__649->GetXaxis()->SetRange(1,30);
   data_mc_ratio__649->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__649->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__649->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__649->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__649->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__649->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__649->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__649->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__649->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__649->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__649->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__649->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__649->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__649->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__649->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__649->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__649->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1472[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1472[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1472[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1472[30] = {
   0.07009751,
   0.1648472,
   0.04972388,
   0.06790661,
   0.06077347,
   0.06270589,
   0.08979719,
   0.08241299,
   0.3462695,
   0.109908,
   0.08401916,
   0.09175869,
   0.08391057,
   0.08716291,
   0.07878739,
   0.08819722,
   0.1077485,
   0.1187884,
   0.1521014,
   0.1774878,
   0.2099084,
   0.2859471,
   0.3507819,
   0.1776258,
   0.321201,
   0.8106299,
   0.3203015,
   0.4629919,
   0.8689001,
   0.1790035};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1472,Graph_from_mc_statistical_error_fy1472,Graph_from_mc_statistical_error_fex1472,Graph_from_mc_statistical_error_fey1472);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1472 = new TH1F("Graph_Graph_from_mc_statistical_error1472","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1472->SetMinimum(0.1179899);
   Graph_Graph_from_mc_statistical_error1472->SetMaximum(2.04268);
   Graph_Graph_from_mc_statistical_error1472->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1472->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1472->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1472);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_both_all->cd();
   H_dR_Bj0_both_all->Modified();
   H_dR_Bj0_both_all->cd();
   H_dR_Bj0_both_all->SetSelected(H_dR_Bj0_both_all);
}

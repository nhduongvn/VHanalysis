void H_dR_algo_17()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Thu Aug  3 12:24:23 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(0,0,1,1);
   H_dR_algo_17->SetFillColor(0);
   H_dR_algo_17->SetFillStyle(4000);
   H_dR_algo_17->SetBorderMode(0);
   H_dR_algo_17->SetBorderSize(2);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-308.6714,6.525,308372.7);
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
   st->SetMaximum(264290.1);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",30,0,6);
   st_stack_118->SetMinimum(0.01);
   st_stack_118->SetMaximum(277504.6);
   st_stack_118->SetDirectory(0);
   st_stack_118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_118->SetLineColor(ci);
   st_stack_118->GetXaxis()->SetRange(1,31);
   st_stack_118->GetXaxis()->SetLabelFont(42);
   st_stack_118->GetXaxis()->SetLabelSize(0.035);
   st_stack_118->GetXaxis()->SetTitleSize(0.035);
   st_stack_118->GetXaxis()->SetTitleFont(42);
   st_stack_118->GetYaxis()->SetTitle("Events/0.2");
   st_stack_118->GetYaxis()->SetLabelFont(42);
   st_stack_118->GetYaxis()->SetLabelSize(0.05);
   st_stack_118->GetYaxis()->SetTitleSize(0.057);
   st_stack_118->GetYaxis()->SetTitleOffset(1.2);
   st_stack_118->GetYaxis()->SetTitleFont(42);
   st_stack_118->GetZaxis()->SetLabelFont(42);
   st_stack_118->GetZaxis()->SetLabelSize(0.035);
   st_stack_118->GetZaxis()->SetTitleSize(0.035);
   st_stack_118->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_118);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,46038.74);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,57496.27);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,55769.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,50018.19);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,45278.31);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,50258.57);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,53700.49);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,62789.74);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,69741.13);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,77216.32);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,82292.77);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,106211.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,88797.33);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,110476.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,94450.45);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,88623.45);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,83671.56);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,72529.89);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,73736.33);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,59361.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,33389.85);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,27447.93);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,22699.66);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,17061.78);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,10730.75);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,10642.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(29,8269.53);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(30,5068.283);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(31,4305.921);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,2540.108);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,3181.586);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,15018.95);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,3540.08);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,2644.043);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,3209.86);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,3217.844);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,3500.861);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,3481.706);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,3516.228);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,3394.046);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,15274.86);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,3690.23);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,15293.66);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,4046.331);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,3815.494);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,3996.36);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,3365.457);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,15088.32);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,15053.02);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,2104.357);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,2291.042);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,2154.834);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,1662.54);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,1258.156);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,1361.925);
   VbbHcc_algo_H_dR_stack_1->SetBinError(29,1131.236);
   VbbHcc_algo_H_dR_stack_1->SetBinError(30,868.7596);
   VbbHcc_algo_H_dR_stack_1->SetBinError(31,862.1062);
   VbbHcc_algo_H_dR_stack_1->SetEntries(116866);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.04712387);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,219.7007);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,370.9964);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,417.0492);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,426.484);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,422.9557);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,443.6636);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,486.1667);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,538.9638);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,606.2357);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,646.1263);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,675.876);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,683.6768);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,666.5774);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,655.2871);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,611.7313);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,570.5336);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,523.4254);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,488.197);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,429.4665);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,350.704);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,277.943);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,223.1602);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,183.5714);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,135.0794);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,104.7591);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,83.13818);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,59.00454);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(30,34.70094);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(31,30.26271);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.04712387);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,6.01084);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,7.674087);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,8.136186);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,8.066236);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,7.903089);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,8.096067);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,8.478307);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,9.044158);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,9.630459);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,9.735904);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,9.867511);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,9.899163);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,9.615391);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,9.564701);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,9.179538);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,8.832606);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,8.466476);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,8.296329);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,7.802423);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,7.005777);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,6.212566);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,5.619718);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,5.185663);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,4.396631);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,3.812152);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,3.473258);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,2.974859);
   VbbHcc_algo_H_dR_stack_2->SetBinError(30,2.164008);
   VbbHcc_algo_H_dR_stack_2->SetBinError(31,2.126747);
   VbbHcc_algo_H_dR_stack_2->SetEntries(147618);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_3 = new TH1D("VbbHcc_algo_H_dR_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(2,1.925331);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(3,5830.014);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(4,11726.31);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(5,13692.61);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(6,13816.86);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(7,12471.98);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(8,10674.28);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(9,9356.269);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(10,8647.726);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(11,8556.404);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(12,8728.101);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(13,8731.312);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(14,8292.771);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(15,7685.566);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(16,7124.127);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(17,6581.062);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(18,6224.753);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(19,6106.662);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(20,5905.459);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(21,5406.243);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(22,4768.362);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(23,4117.582);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(24,3637.482);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(25,3253.167);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(26,2883.584);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(27,2493.444);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(28,2016.649);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(29,1406.087);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(30,778.5206);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(31,495.7279);
   VbbHcc_algo_H_dR_stack_3->SetBinError(2,0.3364234);
   VbbHcc_algo_H_dR_stack_3->SetBinError(3,19.19728);
   VbbHcc_algo_H_dR_stack_3->SetBinError(4,27.37715);
   VbbHcc_algo_H_dR_stack_3->SetBinError(5,29.61206);
   VbbHcc_algo_H_dR_stack_3->SetBinError(6,29.73759);
   VbbHcc_algo_H_dR_stack_3->SetBinError(7,28.18982);
   VbbHcc_algo_H_dR_stack_3->SetBinError(8,25.97266);
   VbbHcc_algo_H_dR_stack_3->SetBinError(9,24.17633);
   VbbHcc_algo_H_dR_stack_3->SetBinError(10,23.09611);
   VbbHcc_algo_H_dR_stack_3->SetBinError(11,22.88653);
   VbbHcc_algo_H_dR_stack_3->SetBinError(12,23.08299);
   VbbHcc_algo_H_dR_stack_3->SetBinError(13,23.07165);
   VbbHcc_algo_H_dR_stack_3->SetBinError(14,22.46217);
   VbbHcc_algo_H_dR_stack_3->SetBinError(15,21.59762);
   VbbHcc_algo_H_dR_stack_3->SetBinError(16,20.7778);
   VbbHcc_algo_H_dR_stack_3->SetBinError(17,19.9842);
   VbbHcc_algo_H_dR_stack_3->SetBinError(18,19.45974);
   VbbHcc_algo_H_dR_stack_3->SetBinError(19,19.30972);
   VbbHcc_algo_H_dR_stack_3->SetBinError(20,19.00857);
   VbbHcc_algo_H_dR_stack_3->SetBinError(21,18.19766);
   VbbHcc_algo_H_dR_stack_3->SetBinError(22,17.09775);
   VbbHcc_algo_H_dR_stack_3->SetBinError(23,15.92371);
   VbbHcc_algo_H_dR_stack_3->SetBinError(24,15.01705);
   VbbHcc_algo_H_dR_stack_3->SetBinError(25,14.2442);
   VbbHcc_algo_H_dR_stack_3->SetBinError(26,13.45005);
   VbbHcc_algo_H_dR_stack_3->SetBinError(27,12.53416);
   VbbHcc_algo_H_dR_stack_3->SetBinError(28,11.2663);
   VbbHcc_algo_H_dR_stack_3->SetBinError(29,9.388869);
   VbbHcc_algo_H_dR_stack_3->SetBinError(30,6.966351);
   VbbHcc_algo_H_dR_stack_3->SetBinError(31,5.503947);
   VbbHcc_algo_H_dR_stack_3->SetEntries(3230340);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_4 = new TH1D("VbbHcc_algo_H_dR_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(3,240.5871);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(4,382.7216);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(5,383.1982);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(6,289.8792);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(7,276.1888);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(8,293.3525);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(9,317.6325);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(10,363.914);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(11,426.4703);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(12,468.6553);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(13,535.3768);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(14,527.457);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(15,523.5891);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(16,489.8549);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(17,477.8293);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(18,444.1399);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(19,415.1665);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(20,397.7941);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(21,329.7397);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(22,264.928);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(23,214.8911);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(24,165.2721);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(25,124.1181);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(26,86.62003);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(27,77.52264);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(28,61.69669);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(29,47.22407);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(30,29.29352);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(31,18.12272);
   VbbHcc_algo_H_dR_stack_4->SetBinError(3,7.114034);
   VbbHcc_algo_H_dR_stack_4->SetBinError(4,12.86124);
   VbbHcc_algo_H_dR_stack_4->SetBinError(5,15.68422);
   VbbHcc_algo_H_dR_stack_4->SetBinError(6,14.41068);
   VbbHcc_algo_H_dR_stack_4->SetBinError(7,11.93515);
   VbbHcc_algo_H_dR_stack_4->SetBinError(8,13.67184);
   VbbHcc_algo_H_dR_stack_4->SetBinError(9,14.39258);
   VbbHcc_algo_H_dR_stack_4->SetBinError(10,14.84523);
   VbbHcc_algo_H_dR_stack_4->SetBinError(11,17.56655);
   VbbHcc_algo_H_dR_stack_4->SetBinError(12,17.16289);
   VbbHcc_algo_H_dR_stack_4->SetBinError(13,18.88421);
   VbbHcc_algo_H_dR_stack_4->SetBinError(14,16.81873);
   VbbHcc_algo_H_dR_stack_4->SetBinError(15,16.11888);
   VbbHcc_algo_H_dR_stack_4->SetBinError(16,15.57539);
   VbbHcc_algo_H_dR_stack_4->SetBinError(17,13.4177);
   VbbHcc_algo_H_dR_stack_4->SetBinError(18,14.34382);
   VbbHcc_algo_H_dR_stack_4->SetBinError(19,13.18925);
   VbbHcc_algo_H_dR_stack_4->SetBinError(20,14.86586);
   VbbHcc_algo_H_dR_stack_4->SetBinError(21,12.56787);
   VbbHcc_algo_H_dR_stack_4->SetBinError(22,11.72713);
   VbbHcc_algo_H_dR_stack_4->SetBinError(23,11.57743);
   VbbHcc_algo_H_dR_stack_4->SetBinError(24,10.68328);
   VbbHcc_algo_H_dR_stack_4->SetBinError(25,9.904716);
   VbbHcc_algo_H_dR_stack_4->SetBinError(26,6.931837);
   VbbHcc_algo_H_dR_stack_4->SetBinError(27,7.312191);
   VbbHcc_algo_H_dR_stack_4->SetBinError(28,7.029172);
   VbbHcc_algo_H_dR_stack_4->SetBinError(29,4.952105);
   VbbHcc_algo_H_dR_stack_4->SetBinError(30,4.521723);
   VbbHcc_algo_H_dR_stack_4->SetBinError(31,3.368316);
   VbbHcc_algo_H_dR_stack_4->SetEntries(52708);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_5 = new TH1D("VbbHcc_algo_H_dR_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(3,88.41571);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(4,136.5547);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(5,123.5485);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(6,109.2091);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(7,86.73664);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(8,92.21756);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(9,100.029);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(10,144.2517);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(11,152.2258);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(12,151.0259);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(13,161.5215);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(14,160.7694);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(15,166.9456);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(16,171.1103);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(17,158.1729);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(18,134.8973);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(19,154.4271);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(20,148.0801);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(21,102.5795);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(22,107.7463);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(23,67.01888);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(24,43.07879);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(25,59.84383);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(26,32.78507);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(27,28.41764);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(28,16.13575);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(29,20.29425);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(30,13.25017);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(31,8.308873);
   VbbHcc_algo_H_dR_stack_5->SetBinError(3,6.075585);
   VbbHcc_algo_H_dR_stack_5->SetBinError(4,14.46377);
   VbbHcc_algo_H_dR_stack_5->SetBinError(5,14.34636);
   VbbHcc_algo_H_dR_stack_5->SetBinError(6,13.85037);
   VbbHcc_algo_H_dR_stack_5->SetBinError(7,11.33615);
   VbbHcc_algo_H_dR_stack_5->SetBinError(8,7.897658);
   VbbHcc_algo_H_dR_stack_5->SetBinError(9,11.86074);
   VbbHcc_algo_H_dR_stack_5->SetBinError(10,18.088);
   VbbHcc_algo_H_dR_stack_5->SetBinError(11,18.24976);
   VbbHcc_algo_H_dR_stack_5->SetBinError(12,13.09715);
   VbbHcc_algo_H_dR_stack_5->SetBinError(13,13.1285);
   VbbHcc_algo_H_dR_stack_5->SetBinError(14,11.03768);
   VbbHcc_algo_H_dR_stack_5->SetBinError(15,11.50644);
   VbbHcc_algo_H_dR_stack_5->SetBinError(16,11.47944);
   VbbHcc_algo_H_dR_stack_5->SetBinError(17,14.04804);
   VbbHcc_algo_H_dR_stack_5->SetBinError(18,7.962649);
   VbbHcc_algo_H_dR_stack_5->SetBinError(19,16.53165);
   VbbHcc_algo_H_dR_stack_5->SetBinError(20,12.74723);
   VbbHcc_algo_H_dR_stack_5->SetBinError(21,9.785178);
   VbbHcc_algo_H_dR_stack_5->SetBinError(22,15.04128);
   VbbHcc_algo_H_dR_stack_5->SetBinError(23,8.896285);
   VbbHcc_algo_H_dR_stack_5->SetBinError(24,4.455891);
   VbbHcc_algo_H_dR_stack_5->SetBinError(25,11.05893);
   VbbHcc_algo_H_dR_stack_5->SetBinError(26,4.67751);
   VbbHcc_algo_H_dR_stack_5->SetBinError(27,7.536322);
   VbbHcc_algo_H_dR_stack_5->SetBinError(28,2.942256);
   VbbHcc_algo_H_dR_stack_5->SetBinError(29,7.223224);
   VbbHcc_algo_H_dR_stack_5->SetBinError(30,6.876863);
   VbbHcc_algo_H_dR_stack_5->SetBinError(31,2.192686);
   VbbHcc_algo_H_dR_stack_5->SetEntries(17207);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_6 = new TH1D("VbbHcc_algo_H_dR_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,0.9459177);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,1.261224);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,1.576529);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(6,1.576529);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,0.6306118);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,1.261224);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,1.891835);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,1.576529);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,1.576529);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,1.576529);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,1.891835);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,1.261224);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,1.576529);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,0.9459177);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,1.576529);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,1.891835);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,0.6306118);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(22,0.9459177);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(24,0.3153059);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(26,0.6306118);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(27,0.3153059);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(30,0.3153059);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.5461258);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.6306118);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,0.7050454);
   VbbHcc_algo_H_dR_stack_6->SetBinError(6,0.7050454);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,0.4459099);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,0.6306118);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,0.7723385);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,0.7050454);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,0.7050454);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,0.7050454);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,0.7723385);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,0.6306118);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,0.7050454);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,0.5461258);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.7050454);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,0.7723385);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.4459099);
   VbbHcc_algo_H_dR_stack_6->SetBinError(22,0.5461258);
   VbbHcc_algo_H_dR_stack_6->SetBinError(24,0.3153059);
   VbbHcc_algo_H_dR_stack_6->SetBinError(26,0.4459099);
   VbbHcc_algo_H_dR_stack_6->SetBinError(27,0.3153059);
   VbbHcc_algo_H_dR_stack_6->SetBinError(30,0.3153059);
   VbbHcc_algo_H_dR_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_7 = new TH1D("VbbHcc_algo_H_dR_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(3,5.454728);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(4,5.454728);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(5,6.942381);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(6,4.215017);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(7,1.983537);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(8,1.735595);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(9,1.239711);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(10,1.983537);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(11,3.223248);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(12,4.215017);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(13,2.975306);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(14,2.727364);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(15,3.967075);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(16,3.471191);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(17,4.215017);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(18,3.719133);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(19,2.727364);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(20,2.479422);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(21,1.487653);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(22,2.23148);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(23,0.9917687);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(24,0.9917687);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(26,0.7438266);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(27,0.7438266);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(28,0.7438266);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(29,0.7438266);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(30,0.2479422);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(31,0.2479422);
   VbbHcc_algo_H_dR_stack_7->SetBinError(3,1.162952);
   VbbHcc_algo_H_dR_stack_7->SetBinError(4,1.162952);
   VbbHcc_algo_H_dR_stack_7->SetBinError(5,1.311987);
   VbbHcc_algo_H_dR_stack_7->SetBinError(6,1.022292);
   VbbHcc_algo_H_dR_stack_7->SetBinError(7,0.7012864);
   VbbHcc_algo_H_dR_stack_7->SetBinError(8,0.6559934);
   VbbHcc_algo_H_dR_stack_7->SetBinError(9,0.5544156);
   VbbHcc_algo_H_dR_stack_7->SetBinError(10,0.7012864);
   VbbHcc_algo_H_dR_stack_7->SetBinError(11,0.8939683);
   VbbHcc_algo_H_dR_stack_7->SetBinError(12,1.022292);
   VbbHcc_algo_H_dR_stack_7->SetBinError(13,0.8588969);
   VbbHcc_algo_H_dR_stack_7->SetBinError(14,0.8223312);
   VbbHcc_algo_H_dR_stack_7->SetBinError(15,0.9917687);
   VbbHcc_algo_H_dR_stack_7->SetBinError(16,0.9277147);
   VbbHcc_algo_H_dR_stack_7->SetBinError(17,1.022292);
   VbbHcc_algo_H_dR_stack_7->SetBinError(18,0.960276);
   VbbHcc_algo_H_dR_stack_7->SetBinError(19,0.8223312);
   VbbHcc_algo_H_dR_stack_7->SetBinError(20,0.784062);
   VbbHcc_algo_H_dR_stack_7->SetBinError(21,0.6073318);
   VbbHcc_algo_H_dR_stack_7->SetBinError(22,0.7438266);
   VbbHcc_algo_H_dR_stack_7->SetBinError(23,0.4958844);
   VbbHcc_algo_H_dR_stack_7->SetBinError(24,0.4958844);
   VbbHcc_algo_H_dR_stack_7->SetBinError(26,0.4294485);
   VbbHcc_algo_H_dR_stack_7->SetBinError(27,0.4294485);
   VbbHcc_algo_H_dR_stack_7->SetBinError(28,0.4294485);
   VbbHcc_algo_H_dR_stack_7->SetBinError(29,0.4294485);
   VbbHcc_algo_H_dR_stack_7->SetBinError(30,0.2479422);
   VbbHcc_algo_H_dR_stack_7->SetBinError(31,0.2479422);
   VbbHcc_algo_H_dR_stack_7->SetEntries(290);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_8 = new TH1D("VbbHcc_algo_H_dR_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(3,10.12902);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(4,12.91451);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(5,11.9016);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(6,7.090317);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(7,3.291933);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(8,1.772579);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(9,2.785482);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(10,3.798384);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(11,3.291933);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(12,2.785482);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(13,4.811287);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(14,5.317738);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(15,5.317738);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(16,4.558061);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(17,5.317738);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(18,4.811287);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(19,5.824189);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(20,3.545159);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(21,4.05161);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(22,2.532256);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(23,0.2532256);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(24,1.012902);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(25,0.7596768);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(26,0.7596768);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(27,1.266128);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(28,1.772579);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(30,0.5064512);
   VbbHcc_algo_H_dR_stack_8->SetBinError(3,1.601539);
   VbbHcc_algo_H_dR_stack_8->SetBinError(4,1.808393);
   VbbHcc_algo_H_dR_stack_8->SetBinError(5,1.736027);
   VbbHcc_algo_H_dR_stack_8->SetBinError(6,1.339944);
   VbbHcc_algo_H_dR_stack_8->SetBinError(7,0.9130179);
   VbbHcc_algo_H_dR_stack_8->SetBinError(8,0.669972);
   VbbHcc_algo_H_dR_stack_8->SetBinError(9,0.8398543);
   VbbHcc_algo_H_dR_stack_8->SetBinError(10,0.9807386);
   VbbHcc_algo_H_dR_stack_8->SetBinError(11,0.9130179);
   VbbHcc_algo_H_dR_stack_8->SetBinError(12,0.8398543);
   VbbHcc_algo_H_dR_stack_8->SetBinError(13,1.103785);
   VbbHcc_algo_H_dR_stack_8->SetBinError(14,1.160426);
   VbbHcc_algo_H_dR_stack_8->SetBinError(15,1.160426);
   VbbHcc_algo_H_dR_stack_8->SetBinError(16,1.074345);
   VbbHcc_algo_H_dR_stack_8->SetBinError(17,1.160426);
   VbbHcc_algo_H_dR_stack_8->SetBinError(18,1.103785);
   VbbHcc_algo_H_dR_stack_8->SetBinError(19,1.214427);
   VbbHcc_algo_H_dR_stack_8->SetBinError(20,0.9474835);
   VbbHcc_algo_H_dR_stack_8->SetBinError(21,1.012902);
   VbbHcc_algo_H_dR_stack_8->SetBinError(22,0.8007697);
   VbbHcc_algo_H_dR_stack_8->SetBinError(23,0.2532256);
   VbbHcc_algo_H_dR_stack_8->SetBinError(24,0.5064512);
   VbbHcc_algo_H_dR_stack_8->SetBinError(25,0.4385996);
   VbbHcc_algo_H_dR_stack_8->SetBinError(26,0.4385996);
   VbbHcc_algo_H_dR_stack_8->SetBinError(27,0.5662297);
   VbbHcc_algo_H_dR_stack_8->SetBinError(28,0.669972);
   VbbHcc_algo_H_dR_stack_8->SetBinError(30,0.3581151);
   VbbHcc_algo_H_dR_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_9 = new TH1D("VbbHcc_algo_H_dR_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(3,4.551399);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(4,8.929981);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(5,9.328915);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(6,7.726719);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(7,5.746586);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(8,3.10264);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(9,2.043123);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(10,1.825082);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(11,2.222401);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(12,2.660097);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(13,3.139787);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(14,3.071952);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(15,2.89752);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(16,2.543809);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(17,2.340304);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(18,2.408139);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(19,2.41783);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(20,2.159411);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(21,1.679722);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(22,1.23718);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(23,0.939998);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(24,0.8140189);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(25,0.9286922);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(26,1.054671);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(27,1.093434);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(28,1.088589);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(29,0.8140189);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(30,0.4651537);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(31,0.2422675);
   VbbHcc_algo_H_dR_stack_9->SetBinError(3,0.08573822);
   VbbHcc_algo_H_dR_stack_9->SetBinError(4,0.1200956);
   VbbHcc_algo_H_dR_stack_9->SetBinError(5,0.1227489);
   VbbHcc_algo_H_dR_stack_9->SetBinError(6,0.1117119);
   VbbHcc_algo_H_dR_stack_9->SetBinError(7,0.09634006);
   VbbHcc_algo_H_dR_stack_9->SetBinError(8,0.0707893);
   VbbHcc_algo_H_dR_stack_9->SetBinError(9,0.0574446);
   VbbHcc_algo_H_dR_stack_9->SetBinError(10,0.05429292);
   VbbHcc_algo_H_dR_stack_9->SetBinError(11,0.05991191);
   VbbHcc_algo_H_dR_stack_9->SetBinError(12,0.06554669);
   VbbHcc_algo_H_dR_stack_9->SetBinError(13,0.07121182);
   VbbHcc_algo_H_dR_stack_9->SetBinError(14,0.07043836);
   VbbHcc_algo_H_dR_stack_9->SetBinError(15,0.0684093);
   VbbHcc_algo_H_dR_stack_9->SetBinError(16,0.06409796);
   VbbHcc_algo_H_dR_stack_9->SetBinError(17,0.06148061);
   VbbHcc_algo_H_dR_stack_9->SetBinError(18,0.06236527);
   VbbHcc_algo_H_dR_stack_9->SetBinError(19,0.06249062);
   VbbHcc_algo_H_dR_stack_9->SetBinError(20,0.05905677);
   VbbHcc_algo_H_dR_stack_9->SetBinError(21,0.05208595);
   VbbHcc_algo_H_dR_stack_9->SetBinError(22,0.04470111);
   VbbHcc_algo_H_dR_stack_9->SetBinError(23,0.03896417);
   VbbHcc_algo_H_dR_stack_9->SetBinError(24,0.03625928);
   VbbHcc_algo_H_dR_stack_9->SetBinError(25,0.03872914);
   VbbHcc_algo_H_dR_stack_9->SetBinError(26,0.04127248);
   VbbHcc_algo_H_dR_stack_9->SetBinError(27,0.04202409);
   VbbHcc_algo_H_dR_stack_9->SetBinError(28,0.04193087);
   VbbHcc_algo_H_dR_stack_9->SetBinError(29,0.03625928);
   VbbHcc_algo_H_dR_stack_9->SetBinError(30,0.02740944);
   VbbHcc_algo_H_dR_stack_9->SetBinError(31,0.01978106);
   VbbHcc_algo_H_dR_stack_9->SetEntries(49206);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_10 = new TH1D("VbbHcc_algo_H_dR_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(2,0.0004146255);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(3,1.168415);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(4,3.002304);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(5,3.863066);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(6,3.965893);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(7,3.184324);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(8,2.305733);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(9,1.723598);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(10,1.589674);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(11,1.769622);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(12,2.045348);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(13,2.216173);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(14,2.182589);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(15,1.940033);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(16,1.849645);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(17,1.629893);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(18,1.6556);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(19,1.65021);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(20,1.594235);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(21,1.366606);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(22,1.135659);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(23,0.8176416);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(24,0.7550331);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(25,0.7297409);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(26,0.6833029);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(27,0.6016217);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(28,0.4929898);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(29,0.3603096);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(30,0.1836791);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(31,0.120656);
   VbbHcc_algo_H_dR_stack_10->SetBinError(2,0.0004146255);
   VbbHcc_algo_H_dR_stack_10->SetBinError(3,0.02201033);
   VbbHcc_algo_H_dR_stack_10->SetBinError(4,0.03528217);
   VbbHcc_algo_H_dR_stack_10->SetBinError(5,0.04002157);
   VbbHcc_algo_H_dR_stack_10->SetBinError(6,0.04055072);
   VbbHcc_algo_H_dR_stack_10->SetBinError(7,0.03633596);
   VbbHcc_algo_H_dR_stack_10->SetBinError(8,0.0309195);
   VbbHcc_algo_H_dR_stack_10->SetBinError(9,0.0267329);
   VbbHcc_algo_H_dR_stack_10->SetBinError(10,0.02567332);
   VbbHcc_algo_H_dR_stack_10->SetBinError(11,0.02708746);
   VbbHcc_algo_H_dR_stack_10->SetBinError(12,0.02912136);
   VbbHcc_algo_H_dR_stack_10->SetBinError(13,0.03031307);
   VbbHcc_algo_H_dR_stack_10->SetBinError(14,0.0300825);
   VbbHcc_algo_H_dR_stack_10->SetBinError(15,0.02836172);
   VbbHcc_algo_H_dR_stack_10->SetBinError(16,0.02769314);
   VbbHcc_algo_H_dR_stack_10->SetBinError(17,0.02599606);
   VbbHcc_algo_H_dR_stack_10->SetBinError(18,0.02620027);
   VbbHcc_algo_H_dR_stack_10->SetBinError(19,0.02615758);
   VbbHcc_algo_H_dR_stack_10->SetBinError(20,0.02571013);
   VbbHcc_algo_H_dR_stack_10->SetBinError(21,0.02380398);
   VbbHcc_algo_H_dR_stack_10->SetBinError(22,0.02169962);
   VbbHcc_algo_H_dR_stack_10->SetBinError(23,0.01841236);
   VbbHcc_algo_H_dR_stack_10->SetBinError(24,0.01769339);
   VbbHcc_algo_H_dR_stack_10->SetBinError(25,0.01739452);
   VbbHcc_algo_H_dR_stack_10->SetBinError(26,0.01683196);
   VbbHcc_algo_H_dR_stack_10->SetBinError(27,0.01579391);
   VbbHcc_algo_H_dR_stack_10->SetBinError(28,0.01429707);
   VbbHcc_algo_H_dR_stack_10->SetBinError(29,0.01222267);
   VbbHcc_algo_H_dR_stack_10->SetBinError(30,0.008726858);
   VbbHcc_algo_H_dR_stack_10->SetBinError(31,0.007072982);
   VbbHcc_algo_H_dR_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_11 = new TH1D("VbbHcc_algo_H_dR_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(3,0.03160502);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(4,0.04740753);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(5,0.05056804);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(6,0.06321005);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(7,0.03634578);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(8,0.04898779);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(9,0.01738276);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(10,0.02212352);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(11,0.02528402);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(12,0.02528402);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(13,0.02686427);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(14,0.02844452);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(15,0.02844452);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(16,0.02212352);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(17,0.01896301);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(18,0.02054326);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(19,0.02528402);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(20,0.01580251);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(21,0.01106176);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(22,0.01106176);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(23,0.01264201);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(24,0.01264201);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(25,0.004740753);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(26,0.004740753);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(27,0.01264201);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(28,0.01738276);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(29,0.006321005);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(30,0.003160502);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_algo_H_dR_stack_11->SetBinError(3,0.007067098);
   VbbHcc_algo_H_dR_stack_11->SetBinError(4,0.008655392);
   VbbHcc_algo_H_dR_stack_11->SetBinError(5,0.00893925);
   VbbHcc_algo_H_dR_stack_11->SetBinError(6,0.009994386);
   VbbHcc_algo_H_dR_stack_11->SetBinError(7,0.007578618);
   VbbHcc_algo_H_dR_stack_11->SetBinError(8,0.008798466);
   VbbHcc_algo_H_dR_stack_11->SetBinError(9,0.0052411);
   VbbHcc_algo_H_dR_stack_11->SetBinError(10,0.005912758);
   VbbHcc_algo_H_dR_stack_11->SetBinError(11,0.006321005);
   VbbHcc_algo_H_dR_stack_11->SetBinError(12,0.006321005);
   VbbHcc_algo_H_dR_stack_11->SetBinError(13,0.006515542);
   VbbHcc_algo_H_dR_stack_11->SetBinError(14,0.006704438);
   VbbHcc_algo_H_dR_stack_11->SetBinError(15,0.006704438);
   VbbHcc_algo_H_dR_stack_11->SetBinError(16,0.005912758);
   VbbHcc_algo_H_dR_stack_11->SetBinError(17,0.005474151);
   VbbHcc_algo_H_dR_stack_11->SetBinError(18,0.005697677);
   VbbHcc_algo_H_dR_stack_11->SetBinError(19,0.006321005);
   VbbHcc_algo_H_dR_stack_11->SetBinError(20,0.004997193);
   VbbHcc_algo_H_dR_stack_11->SetBinError(21,0.004180952);
   VbbHcc_algo_H_dR_stack_11->SetBinError(22,0.004180952);
   VbbHcc_algo_H_dR_stack_11->SetBinError(23,0.004469625);
   VbbHcc_algo_H_dR_stack_11->SetBinError(24,0.004469625);
   VbbHcc_algo_H_dR_stack_11->SetBinError(25,0.002737075);
   VbbHcc_algo_H_dR_stack_11->SetBinError(26,0.002737075);
   VbbHcc_algo_H_dR_stack_11->SetBinError(27,0.004469625);
   VbbHcc_algo_H_dR_stack_11->SetBinError(28,0.0052411);
   VbbHcc_algo_H_dR_stack_11->SetBinError(29,0.003160502);
   VbbHcc_algo_H_dR_stack_11->SetBinError(30,0.002234813);
   VbbHcc_algo_H_dR_stack_11->SetBinError(31,0.001580251);
   VbbHcc_algo_H_dR_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_12 = new TH1D("VbbHcc_algo_H_dR_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(3,0.008927043);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(4,0.02512028);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(5,0.02345944);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(6,0.02325183);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(7,0.01681606);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(8,0.01183352);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(9,0.01141831);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(10,0.009757466);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(11,0.01141831);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(12,0.01785409);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(13,0.01951493);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(14,0.01245634);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(15,0.01619324);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(16,0.009757466);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(17,0.0110031);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(18,0.0110031);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(19,0.00954986);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(20,0.009965071);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(21,0.006850987);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(22,0.007889015);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(23,0.005397747);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(24,0.004982536);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(25,0.003114085);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(26,0.004152113);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(27,0.004567324);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(28,0.002491268);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(29,0.002906479);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(30,0.001245634);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(31,0.0002076057);
   VbbHcc_algo_H_dR_stack_12->SetBinError(3,0.001361361);
   VbbHcc_algo_H_dR_stack_12->SetBinError(4,0.002283662);
   VbbHcc_algo_H_dR_stack_12->SetBinError(5,0.002206878);
   VbbHcc_algo_H_dR_stack_12->SetBinError(6,0.002197092);
   VbbHcc_algo_H_dR_stack_12->SetBinError(7,0.001868451);
   VbbHcc_algo_H_dR_stack_12->SetBinError(8,0.001567388);
   VbbHcc_algo_H_dR_stack_12->SetBinError(9,0.001539645);
   VbbHcc_algo_H_dR_stack_12->SetBinError(10,0.001423273);
   VbbHcc_algo_H_dR_stack_12->SetBinError(11,0.001539645);
   VbbHcc_algo_H_dR_stack_12->SetBinError(12,0.001925256);
   VbbHcc_algo_H_dR_stack_12->SetBinError(13,0.002012812);
   VbbHcc_algo_H_dR_stack_12->SetBinError(14,0.001608106);
   VbbHcc_algo_H_dR_stack_12->SetBinError(15,0.001833524);
   VbbHcc_algo_H_dR_stack_12->SetBinError(16,0.001423273);
   VbbHcc_algo_H_dR_stack_12->SetBinError(17,0.001511392);
   VbbHcc_algo_H_dR_stack_12->SetBinError(18,0.001511392);
   VbbHcc_algo_H_dR_stack_12->SetBinError(19,0.00140805);
   VbbHcc_algo_H_dR_stack_12->SetBinError(20,0.001438334);
   VbbHcc_algo_H_dR_stack_12->SetBinError(21,0.001192604);
   VbbHcc_algo_H_dR_stack_12->SetBinError(22,0.001279767);
   VbbHcc_algo_H_dR_stack_12->SetBinError(23,0.001058585);
   VbbHcc_algo_H_dR_stack_12->SetBinError(24,0.001017056);
   VbbHcc_algo_H_dR_stack_12->SetBinError(25,0.0008040532);
   VbbHcc_algo_H_dR_stack_12->SetBinError(26,0.0009284407);
   VbbHcc_algo_H_dR_stack_12->SetBinError(27,0.0009737568);
   VbbHcc_algo_H_dR_stack_12->SetBinError(28,0.0007191671);
   VbbHcc_algo_H_dR_stack_12->SetBinError(29,0.0007767892);
   VbbHcc_algo_H_dR_stack_12->SetBinError(30,0.0005085279);
   VbbHcc_algo_H_dR_stack_12->SetBinError(31,0.0002076057);
   VbbHcc_algo_H_dR_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR__323 = new TH1D("VbbHcc_algo_H_dR__323","",30,0,6);
   VbbHcc_algo_H_dR__323->SetBinContent(2,4);
   VbbHcc_algo_H_dR__323->SetBinContent(3,8135);
   VbbHcc_algo_H_dR__323->SetBinContent(4,10272);
   VbbHcc_algo_H_dR__323->SetBinContent(5,8809);
   VbbHcc_algo_H_dR__323->SetBinContent(6,8430);
   VbbHcc_algo_H_dR__323->SetBinContent(7,8613);
   VbbHcc_algo_H_dR__323->SetBinContent(8,9156);
   VbbHcc_algo_H_dR__323->SetBinContent(9,9546);
   VbbHcc_algo_H_dR__323->SetBinContent(10,10380);
   VbbHcc_algo_H_dR__323->SetBinContent(11,11698);
   VbbHcc_algo_H_dR__323->SetBinContent(12,13126);
   VbbHcc_algo_H_dR__323->SetBinContent(13,14560);
   VbbHcc_algo_H_dR__323->SetBinContent(14,15486);
   VbbHcc_algo_H_dR__323->SetBinContent(15,15701);
   VbbHcc_algo_H_dR__323->SetBinContent(16,15637);
   VbbHcc_algo_H_dR__323->SetBinContent(17,14861);
   VbbHcc_algo_H_dR__323->SetBinContent(18,13780);
   VbbHcc_algo_H_dR__323->SetBinContent(19,13092);
   VbbHcc_algo_H_dR__323->SetBinContent(20,11324);
   VbbHcc_algo_H_dR__323->SetBinContent(21,9730);
   VbbHcc_algo_H_dR__323->SetBinContent(22,7833);
   VbbHcc_algo_H_dR__323->SetBinContent(23,6320);
   VbbHcc_algo_H_dR__323->SetBinContent(24,4811);
   VbbHcc_algo_H_dR__323->SetBinContent(25,3756);
   VbbHcc_algo_H_dR__323->SetBinContent(26,2982);
   VbbHcc_algo_H_dR__323->SetBinContent(27,2296);
   VbbHcc_algo_H_dR__323->SetBinContent(28,1858);
   VbbHcc_algo_H_dR__323->SetBinContent(29,1434);
   VbbHcc_algo_H_dR__323->SetBinContent(30,999);
   VbbHcc_algo_H_dR__323->SetBinContent(31,710);
   VbbHcc_algo_H_dR__323->SetEntries(255368);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR__323->SetLineColor(ci);
   VbbHcc_algo_H_dR__323->SetLineWidth(2);
   VbbHcc_algo_H_dR__323->SetMarkerStyle(20);
   VbbHcc_algo_H_dR__323->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR__323->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR__323->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__323->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__323->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__323->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__323->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__323->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__323->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__323->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR__323->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__323->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__323->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__323->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__323->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__323->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_fx1235[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fy1235[30] = {
   0,
   1.97287,
   52439.75,
   70144.49,
   70419.29,
   64685.29,
   58551.07,
   61772.32,
   63970.3,
   72495.4,
   79493.01,
   87223.55,
   92411.62,
   115891.7,
   97855.44,
   118930.5,
   102293.7,
   96011.97,
   90885.79,
   79479.86,
   80012.97,
   64861.44,
   38070.3,
   31520.83,
   26322.79,
   20203.73,
   13438.93,
   12824.34,
   9804.068,
   5925.771};
   Double_t Graph_from_VbbHcc_algo_H_dR_fex1235[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fey1235[30] = {
   0,
   0.339708,
   2540.206,
   3181.773,
   15018.99,
   3540.271,
   2644.256,
   3210.014,
   3218,
   3501.027,
   3481.887,
   3516.384,
   3394.217,
   15274.89,
   3690.359,
   15293.69,
   4046.438,
   3815.59,
   3996.472,
   3365.578,
   15088.34,
   15053.04,
   2104.477,
   2291.127,
   2154.939,
   1662.622,
   1258.268,
   1361.997,
   1131.313,
   868.8294};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_fx1235,Graph_from_VbbHcc_algo_H_dR_fy1235,Graph_from_VbbHcc_algo_H_dR_fex1235,Graph_from_VbbHcc_algo_H_dR_fey1235);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR1235 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR1235","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetMaximum(147646.7);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR1235);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR","MC unc. (stat.)","fl");

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
   H_dR_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__324 = new TH1D("data_mc_ratio__324","",30,0,6);
   data_mc_ratio__324->SetBinContent(2,2.027503);
   data_mc_ratio__324->SetBinContent(3,0.1551304);
   data_mc_ratio__324->SetBinContent(4,0.1464406);
   data_mc_ratio__324->SetBinContent(5,0.1250936);
   data_mc_ratio__324->SetBinContent(6,0.1303233);
   data_mc_ratio__324->SetBinContent(7,0.1471024);
   data_mc_ratio__324->SetBinContent(8,0.1482217);
   data_mc_ratio__324->SetBinContent(9,0.1492255);
   data_mc_ratio__324->SetBinContent(10,0.1431815);
   data_mc_ratio__324->SetBinContent(11,0.1471576);
   data_mc_ratio__324->SetBinContent(12,0.1504869);
   data_mc_ratio__324->SetBinContent(13,0.1575559);
   data_mc_ratio__324->SetBinContent(14,0.1336247);
   data_mc_ratio__324->SetBinContent(15,0.160451);
   data_mc_ratio__324->SetBinContent(16,0.1314801);
   data_mc_ratio__324->SetBinContent(17,0.1452777);
   data_mc_ratio__324->SetBinContent(18,0.1435238);
   data_mc_ratio__324->SetBinContent(19,0.1440489);
   data_mc_ratio__324->SetBinContent(20,0.1424764);
   data_mc_ratio__324->SetBinContent(21,0.1216053);
   data_mc_ratio__324->SetBinContent(22,0.1207651);
   data_mc_ratio__324->SetBinContent(23,0.1660087);
   data_mc_ratio__324->SetBinContent(24,0.1526292);
   data_mc_ratio__324->SetBinContent(25,0.1426901);
   data_mc_ratio__324->SetBinContent(26,0.1475965);
   data_mc_ratio__324->SetBinContent(27,0.1708469);
   data_mc_ratio__324->SetBinContent(28,0.1448807);
   data_mc_ratio__324->SetBinContent(29,0.1462658);
   data_mc_ratio__324->SetBinContent(30,0.1685857);
   data_mc_ratio__324->SetBinContent(31,0.1461219);
   data_mc_ratio__324->SetBinError(2,1.013752);
   data_mc_ratio__324->SetBinError(3,0.001719959);
   data_mc_ratio__324->SetBinError(4,0.001444887);
   data_mc_ratio__324->SetBinError(5,0.00133282);
   data_mc_ratio__324->SetBinError(6,0.001419411);
   data_mc_ratio__324->SetBinError(7,0.001585048);
   data_mc_ratio__324->SetBinError(8,0.001549027);
   data_mc_ratio__324->SetBinError(9,0.001527328);
   data_mc_ratio__324->SetBinError(10,0.001405362);
   data_mc_ratio__324->SetBinError(11,0.001360589);
   data_mc_ratio__324->SetBinError(12,0.001313507);
   data_mc_ratio__324->SetBinError(13,0.001305732);
   data_mc_ratio__324->SetBinError(14,0.001073785);
   data_mc_ratio__324->SetBinError(15,0.001280497);
   data_mc_ratio__324->SetBinError(16,0.001051437);
   data_mc_ratio__324->SetBinError(17,0.001191722);
   data_mc_ratio__324->SetBinError(18,0.001222642);
   data_mc_ratio__324->SetBinError(19,0.001258946);
   data_mc_ratio__324->SetBinError(20,0.001338884);
   data_mc_ratio__324->SetBinError(21,0.00123281);
   data_mc_ratio__324->SetBinError(22,0.001364512);
   data_mc_ratio__324->SetBinError(23,0.002088201);
   data_mc_ratio__324->SetBinError(24,0.002200493);
   data_mc_ratio__324->SetBinError(25,0.002328257);
   data_mc_ratio__324->SetBinError(26,0.002702852);
   data_mc_ratio__324->SetBinError(27,0.003565506);
   data_mc_ratio__324->SetBinError(28,0.003361149);
   data_mc_ratio__324->SetBinError(29,0.003862498);
   data_mc_ratio__324->SetBinError(30,0.005333814);
   data_mc_ratio__324->SetBinError(31,0.02650036);
   data_mc_ratio__324->SetMinimum(0.4);
   data_mc_ratio__324->SetMaximum(1.6);
   data_mc_ratio__324->SetEntries(32.3283);
   data_mc_ratio__324->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__324->SetLineColor(ci);
   data_mc_ratio__324->SetLineWidth(2);
   data_mc_ratio__324->SetMarkerStyle(20);
   data_mc_ratio__324->SetMarkerSize(1.2);
   data_mc_ratio__324->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__324->GetXaxis()->SetRange(1,31);
   data_mc_ratio__324->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__324->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__324->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__324->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__324->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__324->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__324->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__324->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__324->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__324->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__324->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__324->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__324->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__324->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__324->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__324->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__324->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1236[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1236[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1236[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1236[30] = {
   0,
   0.1721898,
   0.04844046,
   0.04536026,
   0.2132795,
   0.0547307,
   0.04516154,
   0.05196525,
   0.0503046,
   0.0482931,
   0.04380117,
   0.04031462,
   0.03672933,
   0.1318031,
   0.03771235,
   0.1285935,
   0.03955705,
   0.03974077,
   0.04397246,
   0.04234505,
   0.1885737,
   0.2320799,
   0.05527871,
   0.07268615,
   0.0818659,
   0.0822928,
   0.09362857,
   0.1062041,
   0.1153922,
   0.1466188};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1236,Graph_from_mc_statistical_error_fy1236,Graph_from_mc_statistical_error_fex1236,Graph_from_mc_statistical_error_fey1236);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1236 = new TH1F("Graph_Graph_from_mc_statistical_error1236","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1236->SetMinimum(0.7215041);
   Graph_Graph_from_mc_statistical_error1236->SetMaximum(1.278496);
   Graph_Graph_from_mc_statistical_error1236->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1236->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1236->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1236);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->SetSelected(H_dR_algo_17);
}

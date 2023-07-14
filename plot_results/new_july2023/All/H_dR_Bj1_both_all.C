void H_dR_Bj1_both_all()
{
//=========Macro generated from canvas: H_dR_Bj1_both_all/H_dR_Bj1_both_all
//=========  (Fri Jul 14 13:38:53 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_all = new TCanvas("H_dR_Bj1_both_all", "H_dR_Bj1_both_all",0,0,600,600);
   H_dR_Bj1_both_all->SetHighLightColor(2);
   H_dR_Bj1_both_all->Range(0,0,1,1);
   H_dR_Bj1_both_all->SetFillColor(0);
   H_dR_Bj1_both_all->SetFillStyle(4000);
   H_dR_Bj1_both_all->SetBorderMode(0);
   H_dR_Bj1_both_all->SetBorderSize(2);
   H_dR_Bj1_both_all->SetFrameFillStyle(1000);
   H_dR_Bj1_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2466.611,6.314516,2464445);
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
   st->SetMaximum(2112146);
   
   TH1F *st_stack_240 = new TH1F("st_stack_240","",30,0,6);
   st_stack_240->SetMinimum(0.3);
   st_stack_240->SetMaximum(2217753);
   st_stack_240->SetDirectory(0);
   st_stack_240->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_240->SetLineColor(ci);
   st_stack_240->GetXaxis()->SetRange(1,30);
   st_stack_240->GetXaxis()->SetLabelFont(42);
   st_stack_240->GetXaxis()->SetLabelSize(0.035);
   st_stack_240->GetXaxis()->SetTitleSize(0.035);
   st_stack_240->GetXaxis()->SetTitleFont(42);
   st_stack_240->GetYaxis()->SetTitle("Events/0.2");
   st_stack_240->GetYaxis()->SetLabelFont(42);
   st_stack_240->GetYaxis()->SetLabelSize(0.05);
   st_stack_240->GetYaxis()->SetTitleSize(0.057);
   st_stack_240->GetYaxis()->SetTitleOffset(1.2);
   st_stack_240->GetYaxis()->SetTitleFont(42);
   st_stack_240->GetZaxis()->SetLabelFont(42);
   st_stack_240->GetZaxis()->SetLabelSize(0.035);
   st_stack_240->GetZaxis()->SetTitleSize(0.035);
   st_stack_240->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_240);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(1,274367);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(2,801001.8);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(3,738444);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(4,588824.9);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(5,490637.2);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(6,439697.7);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(7,367971.2);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(8,309899.7);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(9,257704.6);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(10,227731.4);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(11,219974.2);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(12,190342.3);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(13,185783.4);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(14,169347.4);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(15,167581.2);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(16,145144.5);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(17,113571.2);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(18,99546.82);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(19,52985.73);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(20,43996.03);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(21,33389.8);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(22,41505.45);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(23,14361.42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(24,12267.99);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(25,9081.051);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(26,4723.705);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(27,3230.062);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(28,2051.231);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(29,1131.974);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(30,501.1759);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(31,207.0372);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(1,4807.1);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(2,11256.31);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(3,11083.74);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(4,10894.79);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(5,17656.33);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(6,26998.95);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(7,22616.61);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(8,22168.37);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(9,8132.029);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(10,7390.623);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(11,6844.908);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(12,6534.769);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(13,6584.912);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(14,5845.615);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(15,5888.748);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(16,5034.12);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(17,5332.976);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(18,15261.41);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(19,2816.108);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(20,3094.378);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(21,3041.574);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(22,14621.93);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(23,1250.235);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(24,1232.979);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(25,1210.914);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(26,710.6583);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(27,657.9829);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(28,584.1546);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(29,470.8904);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(30,275.2967);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(31,51.76951);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetEntries(513857);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(1,2994.408);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(2,9265.861);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(3,10001.58);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(4,8059.16);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(5,6188.398);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(6,4890.955);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(7,4028.462);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(8,3409.258);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(9,2969.138);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(10,2681.842);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(11,2351.323);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(12,2179.146);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(13,1973.402);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(14,1882.601);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(15,1789.476);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(16,1647.198);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(17,1079.03);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(18,774.1836);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(19,538.1625);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(20,409.3094);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(21,289.2406);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(22,206.5815);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(23,150.36);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(24,100.3828);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(25,67.75999);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(26,42.23551);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(27,23.01304);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(28,14.23247);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(29,5.534467);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(30,3.11595);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(31,5.924991);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(1,23.27967);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(2,39.0477);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(3,39.70018);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(4,35.24439);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(5,31.06387);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(6,27.84365);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(7,25.33546);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(8,23.32142);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(9,21.75143);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(10,20.7044);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(11,19.26246);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(12,18.55651);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(13,17.37665);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(14,17.02341);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(15,16.6396);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(16,15.80256);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(17,12.38585);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(18,10.22578);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(19,8.193993);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(20,6.996548);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(21,5.802561);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(22,4.780033);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(23,4.110627);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(24,3.236941);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(25,2.578414);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(26,2.003151);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(27,1.474001);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(28,1.296804);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(29,0.7109181);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(30,0.5712238);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(31,0.8400575);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetEntries(853526);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(1,34933.36);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(2,129742.1);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(3,160462.7);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(4,140492.2);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(5,111106.5);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(6,88677.95);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(7,73460.9);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(8,62329.59);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(9,53698.54);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(10,47198.91);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(11,42031.87);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(12,38045.38);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(13,34736.21);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(14,32149.04);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(15,30076.08);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(16,27439.29);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(17,17168.99);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(18,11613.04);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(19,8054.452);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(20,5627.539);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(21,3888.311);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(22,2671.369);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(23,1810.769);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(24,1211.135);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(25,778.548);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(26,482.593);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(27,287.6025);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(28,162.6454);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(29,90.07741);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(30,55.74229);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(31,93.06507);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(1,46.7639);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(2,90.20133);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(3,100.5787);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(4,94.29886);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(5,83.98713);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(6,75.11324);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(7,68.4175);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(8,63.06099);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(9,58.55018);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(10,54.91369);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(11,51.82896);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(12,49.31613);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(13,47.12014);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(14,45.33536);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(15,43.85209);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(16,41.88617);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(17,33.08868);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(18,27.17863);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(19,22.60068);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(20,18.8686);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(21,15.65309);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(22,12.95278);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(23,10.65516);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(24,8.70761);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(25,6.970511);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(26,5.488591);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(27,4.238643);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(28,3.189468);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(29,2.370363);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(30,1.871608);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(31,2.423671);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetEntries(1.887335e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(1,2624.917);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(2,6416.191);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(3,6391.857);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(4,5153.177);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(5,4066.336);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(6,3326.608);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(7,2830.165);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(8,2306.459);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(9,1997.969);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(10,1838.727);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(11,1626.771);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(12,1489.01);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(13,1424.176);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(14,1336.809);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(15,1265.849);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(16,1134.81);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(17,716.0193);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(18,529.5255);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(19,335.4393);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(20,289.7055);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(21,192.378);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(22,137.6051);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(23,91.21444);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(24,70.39338);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(25,47.25894);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(26,26.30731);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(27,16.82575);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(28,9.967559);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(29,4.94469);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(30,1.819486);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(31,3.156671);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(1,21.30668);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(2,47.86651);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(3,56.14521);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(4,53.11906);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(5,48.23364);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(6,45.65506);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(7,41.536);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(8,34.71485);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(9,30.7732);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(10,31.98514);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(11,28.06789);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(12,25.50777);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(13,25.3964);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(14,24.51155);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(15,23.36166);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(16,20.5075);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(17,16.76107);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(18,16.11132);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(19,11.07994);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(20,11.43199);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(21,8.705238);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(22,6.226455);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(23,5.343193);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(24,5.449228);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(25,6.131294);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(26,4.224882);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(27,3.155392);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(28,2.978033);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(29,0.9602758);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(30,0.4665783);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(31,0.8432157);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetEntries(365766);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(1,1633.718);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(2,3849.004);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(3,3644.512);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(4,2968.467);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(5,2205.535);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(6,1775.298);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(7,1408.696);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(8,1190.357);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(9,1094.578);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(10,899.2214);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(11,805.373);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(12,795.6159);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(13,717.5204);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(14,722.6818);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(15,651.1737);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(16,621.0636);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(17,384.1587);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(18,282.5629);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(19,216.2844);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(20,130.4892);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(21,97.41696);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(22,85.31806);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(23,49.10818);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(24,35.65684);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(25,32.38098);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(26,19.16231);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(27,5.440473);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(28,2.464003);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(29,1.081458);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(30,0.7699818);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(31,1.147543);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(1,22.99828);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(2,59.71175);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(3,67.63932);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(4,70.43171);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(5,58.86492);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(6,52.87837);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(7,49.02946);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(8,38.93783);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(9,40.19448);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(10,32.97153);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(11,29.32338);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(12,34.74578);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(13,27.45935);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(14,28.36371);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(15,23.50782);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(16,27.75182);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(17,21.39204);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(18,18.13845);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(19,19.65752);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(20,7.427066);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(21,7.61278);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(22,13.49288);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(23,5.663055);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(24,4.567228);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(25,9.341247);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(26,3.435742);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(27,0.9566233);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(28,0.54304);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(29,0.3406018);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(30,0.2790855);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(31,0.3573955);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetEntries(204720);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(1,9.271621);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(2,20.70548);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(3,21.56203);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(4,16.54173);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(5,13.98218);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(6,9.602806);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(7,7.5806);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(8,6.987497);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(9,6.034051);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(10,5.523076);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(11,5.641799);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(12,4.545159);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(13,5.349723);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(14,6.418484);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(15,3.537465);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(16,3.481322);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(17,1.262424);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(18,1.121876);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(19,0.4295969);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(20,0.834341);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(21,0.3436775);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(22,0.2875345);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(23,0.2016151);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(1,1.369378);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(2,1.899056);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(3,1.899587);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(4,1.736262);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(5,1.603963);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(6,1.27332);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(7,1.035753);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(8,1.094153);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(9,0.9694877);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(10,1.001083);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(11,1.051889);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(12,0.9077686);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(13,0.9756462);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(14,1.11498);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(15,0.7874231);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(16,0.7990854);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(17,0.3938511);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(18,0.4491737);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(19,0.1921216);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(20,0.3920793);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(21,0.1718388);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(22,0.2191593);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(23,0.2016151);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetEntries(1131);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(1,17.79669);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(2,37.42154);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(3,39.33322);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(4,27.17025);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(5,19.41706);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(6,15.01068);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(7,13.02708);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(8,10.62879);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(9,9.522809);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(10,8.510826);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(11,9.142164);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(12,7.43349);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(13,7.212825);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(14,8.281586);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(15,4.179401);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(16,4.763301);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(17,3.079222);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(18,1.966561);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(19,0.5097128);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(20,1.127804);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(21,0.4459987);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(22,0.4564715);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(23,0.4564715);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(24,0.1911423);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(25,0.0637141);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(26,0.0637141);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(27,0.0637141);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(31,0.1274282);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(1,1.533489);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(2,2.113152);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(3,2.126336);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(4,1.882281);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(5,1.670102);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(6,1.36627);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(7,1.145846);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(8,1.168034);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(9,1.043882);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(10,1.066397);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(11,1.131322);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(12,0.9829029);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(13,1.008549);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(14,1.143882);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(15,0.7927811);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(16,0.8327709);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(17,0.5017925);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(18,0.4960202);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(19,0.1802107);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(20,0.4059464);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(21,0.1685717);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(22,0.2385091);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(23,0.2385091);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(24,0.1103561);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(25,0.0637141);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(26,0.0637141);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(27,0.0637141);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(31,0.09010534);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetEntries(2911);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(1,22.06432);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(2,57.27065);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(3,61.58358);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(4,43.79909);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(5,29.85758);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(6,21.62695);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(7,18.08228);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(8,14.57725);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(9,11.14847);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(10,11.55611);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(11,11.02704);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(12,11.13084);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(13,8.3939);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(14,8.127176);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(15,7.649659);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(16,7.642436);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(17,4.628527);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(18,3.205219);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(19,2.2475);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(20,1.369897);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(21,0.385473);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(23,0.5529298);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(25,0.3735461);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(28,0.1793837);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(1,2.052474);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(2,3.295857);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(3,3.422282);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(4,2.880523);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(5,2.379414);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(6,2.020367);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(7,1.848916);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(8,1.65287);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(9,1.454001);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(10,1.48219);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(11,1.450761);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(12,1.451957);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(13,1.253173);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(14,1.241714);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(15,1.196426);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(16,1.210746);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(17,0.9467544);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(18,0.7788601);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(19,0.649951);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(20,0.5187796);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(21,0.2732239);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(23,0.3192912);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(25,0.264137);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(28,0.1793837);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetEntries(1897);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(1,14.48942);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(2,43.27417);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(3,40.95081);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(4,28.43672);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(5,19.8232);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(6,15.06699);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(7,12.38351);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(8,10.66578);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(9,9.219932);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(10,8.120345);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(11,7.675404);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(12,6.939232);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(13,6.401634);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(14,6.207565);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(15,5.701553);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(16,5.163786);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(17,3.059626);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(18,1.874806);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(19,1.241384);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(20,0.8720945);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(21,0.5905433);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(22,0.3599767);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(23,0.2300955);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(24,0.2033672);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(25,0.1109302);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(26,0.06458472);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(27,0.04480491);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(28,0.01654957);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(29,0.01493446);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(30,0.004373892);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(31,0.01631384);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(1,0.1607651);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(2,0.2765439);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(3,0.2675278);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(4,0.2216737);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(5,0.1855116);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(6,0.1616077);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(7,0.1470428);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(8,0.1364111);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(9,0.1267409);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(10,0.1190302);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(11,0.1156824);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(12,0.1104175);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(13,0.1060685);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(14,0.1042441);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(15,0.1001249);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(16,0.09516643);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(17,0.07327029);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(18,0.05740016);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(19,0.04657918);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(20,0.03893091);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(21,0.03235716);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(22,0.02471273);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(23,0.02000039);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(24,0.0187286);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(25,0.01377693);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(26,0.01041823);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(27,0.008650289);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(28,0.005338054);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(29,0.00508785);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(30,0.002532592);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(31,0.00527152);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetEntries(149443);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(1,10.23601);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(2,30.45616);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(3,31.13099);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(4,22.81133);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(5,15.38413);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(6,11.76361);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(7,9.73776);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(8,8.189628);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(9,7.009709);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(10,6.200738);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(11,5.610778);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(12,5.071465);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(13,4.763481);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(14,4.444547);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(15,4.293977);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(16,3.694435);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(17,2.311931);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(18,1.511173);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(19,1.066308);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(20,0.6255491);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(21,0.5037244);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(22,0.3408353);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(23,0.2409117);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(24,0.1423569);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(25,0.09855478);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(26,0.06433437);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(27,0.02600751);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(28,0.0164258);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(29,0.01231935);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(30,0.004106449);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(31,0.004106449);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(1,0.07001306);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(2,0.1207678);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(3,0.1220985);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(4,0.1045175);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(5,0.08583218);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(6,0.07505575);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(7,0.06828782);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(8,0.06262472);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(9,0.05793803);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(10,0.05449233);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(11,0.05183526);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(12,0.0492811);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(13,0.04776128);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(14,0.04613467);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(15,0.04534648);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(16,0.04206179);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(17,0.0332737);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(18,0.02690115);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(19,0.02259722);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(20,0.0173079);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(21,0.01553139);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(22,0.01277574);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(23,0.01074095);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(24,0.008256633);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(25,0.006869934);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(26,0.00555054);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(27,0.003529093);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(28,0.002804639);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(29,0.002428888);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(30,0.001402319);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(31,0.001402319);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetEntries(411525);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(1,0.2362437);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(2,1.150856);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(3,1.142597);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(4,0.9435705);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(5,0.7275121);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(6,0.4707251);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(7,0.3280178);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(8,0.2524512);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(9,0.1754721);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(10,0.16381);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(11,0.153498);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(12,0.1094883);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(13,0.101364);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(14,0.1124728);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(15,0.09657626);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(16,0.07890302);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(17,0.05931918);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(18,0.03071309);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(19,0.02454757);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(20,0.01591705);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(21,0.01387755);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(22,0.002735007);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(23,0.002275762);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(24,0.001580251);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(25,0.004315259);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(27,0.001580251);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(1,0.02298286);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(2,0.05045536);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(3,0.0507784);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(4,0.0462834);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(5,0.04072425);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(6,0.03262913);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(7,0.02754229);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(8,0.02403123);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(9,0.02001469);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(10,0.01926302);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(11,0.01828253);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(12,0.01577511);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(13,0.01531169);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(14,0.01597421);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(15,0.0149569);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(16,0.0135921);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(17,0.01167942);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(18,0.008682783);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(19,0.007599229);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(20,0.006147631);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(21,0.005744128);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(22,0.002735007);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(23,0.002275762);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(24,0.001580251);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(25,0.003158712);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(27,0.001580251);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetEntries(2972);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(1,0.09408824);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(2,0.4796708);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(3,0.5736396);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(4,0.4823817);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(5,0.3558373);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(6,0.2283897);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(7,0.1569458);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(8,0.120968);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(9,0.09538919);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(10,0.07776189);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(11,0.06419532);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(12,0.06397773);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(13,0.05730523);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(14,0.04811359);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(15,0.04660605);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(16,0.03785514);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(17,0.02289261);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(18,0.01558535);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(19,0.0110551);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(20,0.006385461);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(21,0.003365726);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(22,0.002293928);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(23,0.002950851);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(24,0.001221794);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(25,0.0008645283);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(28,0.0003572658);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(31,0.0002996568);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(1,0.005245069);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(2,0.01183938);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(3,0.01292367);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(4,0.01190011);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(5,0.01029479);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(6,0.008258998);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(7,0.006813119);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(8,0.005997604);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(9,0.00530418);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(10,0.004819899);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(11,0.00435721);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(12,0.004344312);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(13,0.004055158);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(14,0.003818291);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(15,0.003697948);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(16,0.003371954);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(17,0.002634264);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(18,0.002135422);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(19,0.001792836);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(20,0.0014148);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(21,0.001036688);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(22,0.0008317484);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(23,0.00095354);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(24,0.0006230346);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(25,0.0005104245);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(28,0.0003572658);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(31,0.0002996568);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetEntries(10870);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all__479 = new TH1D("VbbHcc_both_H_dR_Bj1_all__479","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(1,259807);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(2,712241);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(3,688631);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(4,547880);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(5,445190);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(6,365990);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(7,308623);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(8,264495);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(9,230905);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(10,205519);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(11,186272);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(12,171579);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(13,161339);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(14,152658);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(15,145869);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(16,134378);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(17,89522);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(18,65553);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(19,49188);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(20,37092);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(21,28572);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(22,20979);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(23,15268);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(24,10801);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(25,7334);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(26,4652);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(27,2710);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(28,1497);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(29,658);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(30,372);
   VbbHcc_both_H_dR_Bj1_all__479->SetBinContent(31,618);
   VbbHcc_both_H_dR_Bj1_all__479->SetEntries(5316192);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all__479->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all__479->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1_all__479->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1_all__479->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1_all__479->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all__479->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all__479->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__479->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__479->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all__479->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all__479->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__479->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__479->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all__479->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all__479->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all__479->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__479->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__479->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all__479->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fx1479[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fy1479[30] = {
   316627.5,
   950465.7,
   919140.9,
   745638,
   614303.6,
   538442.3,
   449760.7,
   379186.8,
   317508,
   280390.3,
   266828.9,
   232886.8,
   224667,
   205472.1,
   201389.2,
   176011.8,
   132933.8,
   112755.9,
   62135.59,
   50457.92,
   37859.44,
   44607.77,
   16464.56,
   13686.1,
   10007.65,
   5294.196,
   3563.08,
   2240.753,
   1233.639,
   562.6321};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fex1479[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fey1479[30] = {
   4807.487,
   11257,
   11084.62,
   10895.62,
   17656.72,
   26999.16,
   22616.82,
   22168.54,
   8132.426,
   7390.999,
   6845.252,
   6535.124,
   6585.21,
   5845.936,
   5889.028,
   5034.438,
   5333.162,
   15261.46,
   2816.301,
   3094.473,
   3041.642,
   14621.94,
   1250.311,
   1233.035,
   1210.989,
   710.7032,
   658.0065,
   584.1726,
   470.898,
   275.3042};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_all_fx1479,Graph_from_VbbHcc_both_H_dR_Bj1_all_fy1479,Graph_from_VbbHcc_both_H_dR_Bj1_all_fex1479,Graph_from_VbbHcc_both_H_dR_Bj1_all_fey1479);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetMinimum(258.5951);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetMaximum(1057866);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj1_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__480 = new TH1D("data_mc_ratio__480","",30,0,6);
   data_mc_ratio__480->SetBinContent(1,0.8205445);
   data_mc_ratio__480->SetBinContent(2,0.74936);
   data_mc_ratio__480->SetBinContent(3,0.7492116);
   data_mc_ratio__480->SetBinContent(4,0.7347801);
   data_mc_ratio__480->SetBinContent(5,0.7247068);
   data_mc_ratio__480->SetBinContent(6,0.67972);
   data_mc_ratio__480->SetBinContent(7,0.6861937);
   data_mc_ratio__480->SetBinContent(8,0.6975322);
   data_mc_ratio__480->SetBinContent(9,0.7272415);
   data_mc_ratio__480->SetBinContent(10,0.7329748);
   data_mc_ratio__480->SetBinContent(11,0.6980954);
   data_mc_ratio__480->SetBinContent(12,0.7367486);
   data_mc_ratio__480->SetBinContent(13,0.718125);
   data_mc_ratio__480->SetBinContent(14,0.7429621);
   data_mc_ratio__480->SetBinContent(15,0.7243138);
   data_mc_ratio__480->SetBinContent(16,0.7634604);
   data_mc_ratio__480->SetBinContent(17,0.6734329);
   data_mc_ratio__480->SetBinContent(18,0.5813711);
   data_mc_ratio__480->SetBinContent(19,0.7916236);
   data_mc_ratio__480->SetBinContent(20,0.7351075);
   data_mc_ratio__480->SetBinContent(21,0.7546864);
   data_mc_ratio__480->SetBinContent(22,0.4702992);
   data_mc_ratio__480->SetBinContent(23,0.9273251);
   data_mc_ratio__480->SetBinContent(24,0.7891951);
   data_mc_ratio__480->SetBinContent(25,0.7328393);
   data_mc_ratio__480->SetBinContent(26,0.8786981);
   data_mc_ratio__480->SetBinContent(27,0.7605779);
   data_mc_ratio__480->SetBinContent(28,0.6680789);
   data_mc_ratio__480->SetBinContent(29,0.5333811);
   data_mc_ratio__480->SetBinContent(30,0.661178);
   data_mc_ratio__480->SetBinContent(31,1.990469);
   data_mc_ratio__480->SetBinError(1,0.001609818);
   data_mc_ratio__480->SetBinError(2,0.0008879265);
   data_mc_ratio__480->SetBinError(3,0.0009028409);
   data_mc_ratio__480->SetBinError(4,0.0009926923);
   data_mc_ratio__480->SetBinError(5,0.00108615);
   data_mc_ratio__480->SetBinError(6,0.001123558);
   data_mc_ratio__480->SetBinError(7,0.001235187);
   data_mc_ratio__480->SetBinError(8,0.001356299);
   data_mc_ratio__480->SetBinError(9,0.001513429);
   data_mc_ratio__480->SetBinError(10,0.001616825);
   data_mc_ratio__480->SetBinError(11,0.001617488);
   data_mc_ratio__480->SetBinError(12,0.001778637);
   data_mc_ratio__480->SetBinError(13,0.001787847);
   data_mc_ratio__480->SetBinError(14,0.001901546);
   data_mc_ratio__480->SetBinError(15,0.001896467);
   data_mc_ratio__480->SetBinError(16,0.002082679);
   data_mc_ratio__480->SetBinError(17,0.002250761);
   data_mc_ratio__480->SetBinError(18,0.002270686);
   data_mc_ratio__480->SetBinError(19,0.00356935);
   data_mc_ratio__480->SetBinError(20,0.0038169);
   data_mc_ratio__480->SetBinError(21,0.00446474);
   data_mc_ratio__480->SetBinError(22,0.003246997);
   data_mc_ratio__480->SetBinError(23,0.007504832);
   data_mc_ratio__480->SetBinError(24,0.007593682);
   data_mc_ratio__480->SetBinError(25,0.00855733);
   data_mc_ratio__480->SetBinError(26,0.01288308);
   data_mc_ratio__480->SetBinError(27,0.0146103);
   data_mc_ratio__480->SetBinError(28,0.017267);
   data_mc_ratio__480->SetBinError(29,0.02079336);
   data_mc_ratio__480->SetBinError(30,0.03428048);
   data_mc_ratio__480->SetBinError(31,0.3418599);
   data_mc_ratio__480->SetMinimum(0.4);
   data_mc_ratio__480->SetMaximum(1.6);
   data_mc_ratio__480->SetEntries(1694.832);
   data_mc_ratio__480->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__480->SetLineColor(ci);
   data_mc_ratio__480->SetLineWidth(2);
   data_mc_ratio__480->SetMarkerStyle(20);
   data_mc_ratio__480->SetMarkerSize(1.2);
   data_mc_ratio__480->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__480->GetXaxis()->SetRange(1,30);
   data_mc_ratio__480->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__480->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__480->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__480->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__480->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__480->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__480->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__480->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__480->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__480->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__480->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__480->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__480->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__480->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__480->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__480->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__480->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1480[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1480[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1480[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1480[30] = {
   0.01518341,
   0.01184366,
   0.01205976,
   0.01461247,
   0.02874266,
   0.05014309,
   0.05028634,
   0.05846337,
   0.0256133,
   0.02635968,
   0.02565409,
   0.02806138,
   0.02931098,
   0.02845124,
   0.02924202,
   0.02860285,
   0.04011893,
   0.1353496,
   0.04532508,
   0.0613278,
   0.08034039,
   0.3277891,
   0.07593954,
   0.09009396,
   0.1210063,
   0.1342419,
   0.1846735,
   0.2607037,
   0.3817145,
   0.4893148};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1480,Graph_from_mc_statistical_error_fy1480,Graph_from_mc_statistical_error_fex1480,Graph_from_mc_statistical_error_fey1480);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1480 = new TH1F("Graph_Graph_from_mc_statistical_error1480","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1480->SetMinimum(0.4128222);
   Graph_Graph_from_mc_statistical_error1480->SetMaximum(1.587178);
   Graph_Graph_from_mc_statistical_error1480->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1480->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1480->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1480);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_all->cd();
   H_dR_Bj1_both_all->Modified();
   H_dR_Bj1_both_all->cd();
   H_dR_Bj1_both_all->SetSelected(H_dR_Bj1_both_all);
}

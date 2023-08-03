void H_dR_Bj0_both_18()
{
//=========Macro generated from canvas: H_dR_Bj0_both_18/H_dR_Bj0_both_18
//=========  (Thu Aug  3 10:21:50 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_18 = new TCanvas("H_dR_Bj0_both_18", "H_dR_Bj0_both_18",0,0,600,600);
   H_dR_Bj0_both_18->SetHighLightColor(2);
   H_dR_Bj0_both_18->Range(0,0,1,1);
   H_dR_Bj0_both_18->SetFillColor(0);
   H_dR_Bj0_both_18->SetFillStyle(4000);
   H_dR_Bj0_both_18->SetBorderMode(0);
   H_dR_Bj0_both_18->SetBorderSize(2);
   H_dR_Bj0_both_18->SetFrameFillStyle(1000);
   H_dR_Bj0_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-107.165,6.314516,107067.8);
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
   st->SetMaximum(91762.22);
   
   TH1F *st_stack_235 = new TH1F("st_stack_235","",30,0,6);
   st_stack_235->SetMinimum(0.01);
   st_stack_235->SetMaximum(96350.33);
   st_stack_235->SetDirectory(0);
   st_stack_235->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_235->SetLineColor(ci);
   st_stack_235->GetXaxis()->SetRange(1,30);
   st_stack_235->GetXaxis()->SetLabelFont(42);
   st_stack_235->GetXaxis()->SetLabelSize(0.035);
   st_stack_235->GetXaxis()->SetTitleSize(0.035);
   st_stack_235->GetXaxis()->SetTitleFont(42);
   st_stack_235->GetYaxis()->SetTitle("Events/0.2");
   st_stack_235->GetYaxis()->SetLabelFont(42);
   st_stack_235->GetYaxis()->SetLabelSize(0.05);
   st_stack_235->GetYaxis()->SetTitleSize(0.057);
   st_stack_235->GetYaxis()->SetTitleOffset(1.2);
   st_stack_235->GetYaxis()->SetTitleFont(42);
   st_stack_235->GetZaxis()->SetLabelFont(42);
   st_stack_235->GetZaxis()->SetLabelSize(0.035);
   st_stack_235->GetZaxis()->SetTitleSize(0.035);
   st_stack_235->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_235);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,8589.038);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,28994.01);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,28185.21);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,22527.17);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,23067.17);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,13779.66);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,14861.85);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,9820.948);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,10878.05);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,6120.801);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,8443.557);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,8899.935);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,7361.566);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,7690.384);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,3884.62);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,6254.608);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,3273.641);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,2505.656);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,1556.735);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,1035.492);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,436.533);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,1001.458);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,460.054);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,176.9105);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,57.69767);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,20.34259);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,19.5791);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(28,10.55304);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(29,31.92775);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,1041.568);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,2190.096);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,2693.201);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,2970.219);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,2743.041);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,1628.896);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,1786.857);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,1286.141);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,1480.16);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,956.5414);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,1320.976);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,1275.092);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,1152.489);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,1262.369);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,460.9027);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,1021.304);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,577.3387);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,561.781);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,406.5448);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,158.8996);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,94.76323);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,529.0889);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,372.6092);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,61.15656);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,35.295);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,13.86555);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,13.84452);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(28,9.819279);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(29,31.92775);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(10726);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,40.21451);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,135.5171);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,165.2953);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,147.5189);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,117.0561);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,99.50555);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,88.41183);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,78.50185);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,69.38539);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,70.136);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,53.13808);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,52.2057);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,47.87896);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,48.23961);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,43.23148);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,43.98451);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,26.84555);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,20.11922);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,13.74314);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,7.876258);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,6.982777);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,3.504766);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,3.040404);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,1.823434);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.8006945);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.2916045);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.7719934);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,0.2005679);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(29,0.04860075);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(30,0.04860075);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(31,0.4057236);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,2.666674);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,4.741408);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,5.305027);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,5.05886);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,4.501283);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,4.081946);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,3.860435);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,3.693452);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,3.474956);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,3.645579);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,2.960472);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,3.019312);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,2.807994);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,2.84571);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,2.654176);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,2.736459);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,2.103153);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,1.940561);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,1.478989);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.9379816);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.9845775);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.6565814);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.693202);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.4761217);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.3410494);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.119047);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.4170168);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.100426);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(29,0.04860075);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(30,0.04860075);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(31,0.3110967);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(15898);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(1,703.5928);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(2,2821.99);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(3,3497.869);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(4,3120.463);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(5,2593.905);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(6,2135.952);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(7,1782.352);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(8,1515.718);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(9,1335.661);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(10,1187.042);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(11,1071.448);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(12,969.8475);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(13,910.4612);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(14,838.511);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(15,801.156);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(16,720.3288);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(17,445.2894);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(18,303.9274);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(19,199.3045);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(20,136.7032);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(21,93.79156);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(22,59.09471);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(23,41.47784);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(24,25.05019);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(25,14.73582);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(26,9.666326);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(27,5.047831);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(28,3.020209);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(29,1.766449);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(30,1.383664);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(31,1.609845);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(1,6.59184);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(2,13.21843);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(3,14.73985);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(4,13.91252);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(5,12.67364);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(6,11.49164);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(7,10.48494);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(8,9.669278);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(9,9.073273);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(10,8.553672);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(11,8.126542);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(12,7.727475);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(13,7.497606);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(14,7.193764);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(15,7.037589);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(16,6.66913);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(17,5.233832);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(18,4.330087);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(19,3.493343);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(20,2.895385);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(21,2.405073);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(22,1.894758);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(23,1.592956);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(24,1.238721);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(25,0.9456412);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(26,0.7667781);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(27,0.566043);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(28,0.4271005);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(29,0.3341033);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(30,0.2929305);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(31,0.325752);
   VbbHcc_both_H_dR_Bj0_stack_3->SetEntries(458232);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(1,148.5184);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(2,435.8948);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(3,476.1815);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(4,347.4974);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(5,273.7785);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(6,213.8855);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(7,177.7366);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(8,152.0342);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(9,160.8249);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(10,135.1121);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(11,124.4887);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(12,116.5876);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(13,107.6339);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(14,112.1215);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(15,127.6974);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(16,103.0824);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(17,63.02766);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(18,34.45269);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(19,23.90222);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(20,16.80188);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(21,10.98811);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(22,9.241302);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(23,2.699636);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(24,2.60002);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(25,1.905184);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(26,0.2183513);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(27,1.164134);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(28,0.1257783);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(30,0.1257783);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(31,0.2515567);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(1,6.588231);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(2,13.74982);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(3,15.48505);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(4,13.38817);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(5,10.78623);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(6,10.44616);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(7,9.054357);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(8,8.564422);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(9,11.67937);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(10,7.398963);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(11,7.180776);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(12,7.9096);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(13,6.686351);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(14,6.782954);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(15,10.42055);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(16,5.235122);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(17,6.786844);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(18,3.020682);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(19,2.517254);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(20,2.226785);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(21,1.800584);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(22,1.745561);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(23,0.8247783);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(24,0.811485);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(25,0.8761237);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(26,0.1561728);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(27,0.7045197);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(28,0.1257783);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(30,0.1257783);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(31,0.1778774);
   VbbHcc_both_H_dR_Bj0_stack_4->SetEntries(19394);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(1,14.3477);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(2,41.40614);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(3,39.53387);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(4,37.18285);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(5,26.07743);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(6,27.09165);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(7,15.43929);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(8,17.0127);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(9,17.36952);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(10,13.92909);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(11,11.87354);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(12,15.18582);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(13,14.12232);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(14,11.15132);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(15,10.40234);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(16,14.87806);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(17,6.070935);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(18,4.759157);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(19,3.782015);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(20,1.262581);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(21,1.88811);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(22,0.525791);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(23,0.3746698);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(24,0.139725);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(25,0.04495706);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(26,0.386913);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(29,0.01224321);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(31,0.01224321);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(1,2.106691);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(2,11.12633);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(3,4.859966);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(4,5.587431);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(5,3.603145);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(6,5.370408);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(7,1.70619);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(8,3.351507);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(9,4.341429);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(10,3.773564);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(11,2.494854);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(12,3.816358);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(13,3.232855);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(14,2.476403);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(15,1.387969);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(16,3.802071);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(17,2.229838);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(18,0.998302);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(19,2.159305);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(20,0.4664227);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(21,0.6362144);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(22,0.315482);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(23,0.3746698);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(24,0.1271604);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(25,0.04495706);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(26,0.3748698);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(29,0.01224321);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(31,0.01224321);
   VbbHcc_both_H_dR_Bj0_stack_5->SetEntries(2575);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(2,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(3,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(7,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(15,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(16,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(2,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(3,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(7,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(15,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(16,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(1,2.479394);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(2,2.833593);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(3,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(4,1.062597);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(5,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(6,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(7,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(13,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(15,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(16,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(1,0.9371228);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(2,1.001826);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(3,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(4,0.6134909);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(5,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(6,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(7,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(8,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(9,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(13,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(15,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(16,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(1,3.352972);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(2,12.85306);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(3,11.17657);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(4,7.264773);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(5,2.514729);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(6,2.235315);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(7,3.911801);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(8,1.9559);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(9,2.794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(10,3.632387);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(11,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(12,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(13,2.235315);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(14,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(15,1.9559);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(16,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(17,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(18,1.117657);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(22,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(1,0.9679197);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(2,1.89508);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(3,1.767172);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(4,1.424739);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(5,0.8382431);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(6,0.7903031);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(7,1.045473);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(8,0.7392609);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(9,0.8835858);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(10,1.007443);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(11,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(12,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(13,0.7903031);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(14,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(15,0.7392609);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(16,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(17,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(18,0.5588287);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(19,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(20,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(22,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(1,2.717791);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(2,11.83119);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(3,10.95117);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(4,7.289348);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(5,4.46184);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(6,3.147517);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(7,2.548643);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(8,2.308636);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(9,2.14406);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(10,2.08463);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(11,2.050343);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(12,2.038915);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(13,1.924626);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(14,1.853766);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(15,1.945198);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(16,1.77605);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(17,0.9531697);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(18,0.5394438);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(19,0.3177232);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(20,0.1737192);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(21,0.1051458);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(22,0.09371692);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(23,0.02514357);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(24,0.01828623);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(25,0.01828623);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(26,0.01828623);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(28,0.004571557);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(29,0.002285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(30,0.002285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(31,0.002285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(1,0.07881794);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(2,0.164449);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(3,0.1582149);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(4,0.1290807);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(5,0.100989);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(6,0.08482056);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(7,0.07632584);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(8,0.07264318);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(9,0.07000605);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(10,0.069029);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(11,0.06845898);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(12,0.06826791);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(13,0.06632698);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(14,0.06509455);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(15,0.06668052);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(16,0.06371544);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(17,0.04667692);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(18,0.0351148);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(19,0.02694893);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(20,0.01992696);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(21,0.01550291);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(22,0.01463612);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(23,0.00758107);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(24,0.006465158);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(25,0.006465158);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(26,0.006465158);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(28,0.003232579);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(29,0.002285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(30,0.002285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(31,0.002285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetEntries(27714);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(1,0.9913885);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(2,4.587929);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(3,5.367686);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(4,4.069879);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(5,2.697554);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(6,1.932105);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(7,1.47665);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(8,1.236404);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(9,1.118367);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(10,0.993177);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(11,0.8799095);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(12,0.8274488);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(13,0.754123);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(14,0.7469692);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(15,0.6861625);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(16,0.6438362);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(17,0.3618598);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(18,0.2271311);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(19,0.1305557);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(20,0.07332579);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(21,0.04709543);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(22,0.02503807);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(23,0.02146121);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(24,0.01192289);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(25,0.006557591);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(26,0.004769157);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(27,0.002384579);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(28,0.001788434);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(29,0.001788434);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(31,0.001192289);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(1,0.02431072);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(2,0.05229789);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(3,0.05656781);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(4,0.04925685);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(5,0.04010153);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(6,0.03393838);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(7,0.0296698);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(8,0.02714914);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(9,0.0258207);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(10,0.02433264);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(11,0.02290313);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(12,0.02220989);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(13,0.02120298);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(14,0.02110217);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(15,0.02022504);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(16,0.01959131);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(17,0.01468744);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(18,0.01163628);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(19,0.008822135);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(20,0.006611564);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(21,0.005298649);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(22,0.003863459);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(23,0.003576868);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(24,0.00266604);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(25,0.001977188);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(26,0.001686152);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(27,0.001192289);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(28,0.001032553);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(29,0.001032553);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(31,0.0008430758);
   VbbHcc_both_H_dR_Bj0_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(1,0.0182061);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(2,0.03641219);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(3,0.02730914);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(4,0.0182061);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(5,0.02048186);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(6,0.01593033);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(7,0.01365457);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(8,0.004551524);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(9,0.009103048);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(10,0.004551524);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(11,0.006827286);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(12,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(13,0.004551524);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(14,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(15,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(26,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(1,0.006436827);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(2,0.009103048);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(3,0.00788347);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(4,0.006436827);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(5,0.006827286);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(6,0.0060211);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(7,0.005574455);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(8,0.003218413);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(9,0.004551524);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(10,0.003218413);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(11,0.003941735);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(12,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(13,0.003218413);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(14,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(15,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(16,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(26,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetEntries(84);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(1,0.003595882);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(2,0.01378421);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(3,0.01678078);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(4,0.01468318);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(5,0.01018833);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(6,0.00839039);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(7,0.005393822);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(8,0.006292793);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(9,0.002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(10,0.002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(11,0.002397254);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(12,0.002397254);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(13,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(14,0.001198627);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(15,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(16,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(17,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(18,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(20,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(1,0.001038042);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(2,0.002032371);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(3,0.002242426);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(4,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(5,0.001747284);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(6,0.001585635);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(7,0.001271336);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(8,0.0013732);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(9,0.000947598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(10,0.000947598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(11,0.0008475574);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(12,0.0008475574);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(13,0.0007928174);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(14,0.0005993136);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(15,0.0007928174);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(16,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(17,0.0007928174);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(18,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(20,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj0__469 = new TH1D("VbbHcc_both_H_dR_Bj0__469","",30,0,6);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(1,11665);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(2,40869);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(3,41293);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(4,32475);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(5,26637);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(6,22553);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(7,19093);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(8,16630);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(9,15158);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(10,13658);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(11,12671);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(12,11737);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(13,11230);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(14,10729);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(15,10339);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(16,9620);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(17,6203);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(18,4276);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(19,2982);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(20,2152);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(21,1497);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(22,1067);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(23,691);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(24,425);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(25,264);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(26,211);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(27,90);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(28,66);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(29,38);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(30,18);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(31,31);
   VbbHcc_both_H_dR_Bj0__469->SetEntries(326397);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0__469->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0__469->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj0__469->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj0__469->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj0__469->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0__469->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__469->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__469->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__469->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__469->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__469->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__469->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__469->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0__469->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__469->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__469->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__469->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__469->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__469->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fx1469[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fy1469[30] = {
   9505.275,
   32461.43,
   32392.79,
   26199.55,
   26088.4,
   16263.79,
   16934.91,
   11590.08,
   12468.07,
   7533.739,
   9709.121,
   10058.31,
   8447.291,
   8704.688,
   4872.86,
   7141.787,
   3816.471,
   2870.799,
   1798.195,
   1198.662,
   550.3358,
   1074.223,
   507.6932,
   206.5541,
   75.20918,
   30.93112,
   26.56545,
   13.90596,
   33.75912,
   1.560329};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fex1469[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fey1469[30] = {
   1041.616,
   2190.214,
   2693.296,
   2970.292,
   2743.098,
   1628.984,
   1786.916,
   1286.216,
   1480.245,
   956.6231,
   1321.026,
   1275.15,
   1152.541,
   1262.413,
   461.085,
   1021.35,
   577.4105,
   561.8104,
   406.5761,
   158.9453,
   94.81809,
   529.0957,
   372.6144,
   61.17647,
   35.32021,
   13.89319,
   13.88025,
   9.829881,
   31.92954,
   0.3224837};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_fx1469,Graph_from_VbbHcc_both_H_dR_Bj0_fy1469,Graph_from_VbbHcc_both_H_dR_Bj0_fex1469,Graph_from_VbbHcc_both_H_dR_Bj0_fey1469);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj01469 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj01469","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetMinimum(1.114061);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetMaximum(38594.57);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj01469);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__470 = new TH1D("data_mc_ratio__470","",30,0,6);
   data_mc_ratio__470->SetBinContent(1,1.227213);
   data_mc_ratio__470->SetBinContent(2,1.259002);
   data_mc_ratio__470->SetBinContent(3,1.274759);
   data_mc_ratio__470->SetBinContent(4,1.239525);
   data_mc_ratio__470->SetBinContent(5,1.021028);
   data_mc_ratio__470->SetBinContent(6,1.3867);
   data_mc_ratio__470->SetBinContent(7,1.127435);
   data_mc_ratio__470->SetBinContent(8,1.434848);
   data_mc_ratio__470->SetBinContent(9,1.215746);
   data_mc_ratio__470->SetBinContent(10,1.812911);
   data_mc_ratio__470->SetBinContent(11,1.305061);
   data_mc_ratio__470->SetBinContent(12,1.166896);
   data_mc_ratio__470->SetBinContent(13,1.32942);
   data_mc_ratio__470->SetBinContent(14,1.232554);
   data_mc_ratio__470->SetBinContent(15,2.121752);
   data_mc_ratio__470->SetBinContent(16,1.347002);
   data_mc_ratio__470->SetBinContent(17,1.625324);
   data_mc_ratio__470->SetBinContent(18,1.489481);
   data_mc_ratio__470->SetBinContent(19,1.658329);
   data_mc_ratio__470->SetBinContent(20,1.795335);
   data_mc_ratio__470->SetBinContent(21,2.720157);
   data_mc_ratio__470->SetBinContent(22,0.9932759);
   data_mc_ratio__470->SetBinContent(23,1.361058);
   data_mc_ratio__470->SetBinContent(24,2.057573);
   data_mc_ratio__470->SetBinContent(25,3.51021);
   data_mc_ratio__470->SetBinContent(26,6.821609);
   data_mc_ratio__470->SetBinContent(27,3.38786);
   data_mc_ratio__470->SetBinContent(28,4.746167);
   data_mc_ratio__470->SetBinContent(29,1.125622);
   data_mc_ratio__470->SetBinContent(30,11.53603);
   data_mc_ratio__470->SetBinContent(31,13.57954);
   data_mc_ratio__470->SetBinError(1,0.0113626);
   data_mc_ratio__470->SetBinError(2,0.006227724);
   data_mc_ratio__470->SetBinError(3,0.00627321);
   data_mc_ratio__470->SetBinError(4,0.006878294);
   data_mc_ratio__470->SetBinError(5,0.006255978);
   data_mc_ratio__470->SetBinError(6,0.009233798);
   data_mc_ratio__470->SetBinError(7,0.008159326);
   data_mc_ratio__470->SetBinError(8,0.01112653);
   data_mc_ratio__470->SetBinError(9,0.009874654);
   data_mc_ratio__470->SetBinError(10,0.01551254);
   data_mc_ratio__470->SetBinError(11,0.01159379);
   data_mc_ratio__470->SetBinError(12,0.01077094);
   data_mc_ratio__470->SetBinError(13,0.01254505);
   data_mc_ratio__470->SetBinError(14,0.01189944);
   data_mc_ratio__470->SetBinError(15,0.02086678);
   data_mc_ratio__470->SetBinError(16,0.01373348);
   data_mc_ratio__470->SetBinError(17,0.02063664);
   data_mc_ratio__470->SetBinError(18,0.02277803);
   data_mc_ratio__470->SetBinError(19,0.03036805);
   data_mc_ratio__470->SetBinError(20,0.03870119);
   data_mc_ratio__470->SetBinError(21,0.0703045);
   data_mc_ratio__470->SetBinError(22,0.03040799);
   data_mc_ratio__470->SetBinError(23,0.0517771);
   data_mc_ratio__470->SetBinError(24,0.09980694);
   data_mc_ratio__470->SetBinError(25,0.2160385);
   data_mc_ratio__470->SetBinError(26,0.4696189);
   data_mc_ratio__470->SetBinError(27,0.3571118);
   data_mc_ratio__470->SetBinError(28,0.5842128);
   data_mc_ratio__470->SetBinError(29,0.1826);
   data_mc_ratio__470->SetBinError(30,2.719067);
   data_mc_ratio__470->SetBinError(31,3.775318);
   data_mc_ratio__470->SetMinimum(0.4);
   data_mc_ratio__470->SetMaximum(1.6);
   data_mc_ratio__470->SetEntries(99.84069);
   data_mc_ratio__470->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__470->SetLineColor(ci);
   data_mc_ratio__470->SetLineWidth(2);
   data_mc_ratio__470->SetMarkerStyle(20);
   data_mc_ratio__470->SetMarkerSize(1.2);
   data_mc_ratio__470->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__470->GetXaxis()->SetRange(1,30);
   data_mc_ratio__470->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__470->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__470->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__470->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__470->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__470->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__470->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__470->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__470->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__470->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__470->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__470->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__470->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__470->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__470->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__470->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__470->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1470[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1470[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1470[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1470[30] = {
   0.109583,
   0.06747127,
   0.08314492,
   0.1133719,
   0.1051463,
   0.1001602,
   0.1055167,
   0.1109756,
   0.1187229,
   0.1269785,
   0.1360603,
   0.1267758,
   0.1364391,
   0.1450268,
   0.09462307,
   0.1430105,
   0.1512944,
   0.1956983,
   0.2261023,
   0.1326022,
   0.1722913,
   0.492538,
   0.7339361,
   0.2961766,
   0.4696263,
   0.4491653,
   0.5224926,
   0.7068827,
   0.9458049,
   0.2066767};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1470,Graph_from_mc_statistical_error_fy1470,Graph_from_mc_statistical_error_fex1470,Graph_from_mc_statistical_error_fey1470);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1470 = new TH1F("Graph_Graph_from_mc_statistical_error1470","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1470->SetMinimum(0.04877561);
   Graph_Graph_from_mc_statistical_error1470->SetMaximum(2.134966);
   Graph_Graph_from_mc_statistical_error1470->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1470->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1470->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1470);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_both_18->cd();
   H_dR_Bj0_both_18->Modified();
   H_dR_Bj0_both_18->cd();
   H_dR_Bj0_both_18->SetSelected(H_dR_Bj0_both_18);
}

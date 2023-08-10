void Z_dR_algo_18()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Thu Aug 10 12:24:03 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(0,0,1,1);
   Z_dR_algo_18->SetFillColor(0);
   Z_dR_algo_18->SetFillStyle(4000);
   Z_dR_algo_18->SetBorderMode(0);
   Z_dR_algo_18->SetBorderSize(2);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-449.0531,6.314516,448614.1);
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
   st->SetMaximum(384483.6);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",30,0,6);
   st_stack_115->SetMinimum(0.01);
   st_stack_115->SetMaximum(403707.7);
   st_stack_115->SetDirectory(0);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->GetXaxis()->SetRange(1,30);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetLabelSize(0.035);
   st_stack_115->GetXaxis()->SetTitleSize(0.035);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/0.2");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetLabelSize(0.05);
   st_stack_115->GetYaxis()->SetTitleSize(0.057);
   st_stack_115->GetYaxis()->SetTitleOffset(1.2);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetLabelSize(0.035);
   st_stack_115->GetZaxis()->SetTitleSize(0.035);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,45.52345);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,120822.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,148052.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,107267.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,107302.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,120004.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,107867);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,97789.54);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,105895.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,108811.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,92796);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,90438.12);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,86428.88);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,75548.05);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,78228.36);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,64301.19);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,55241.46);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,60085.19);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,41542.43);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,39341.38);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,35529.11);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,35062.95);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,33410.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,34949.88);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,52575.63);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,27499.91);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(28,21665.02);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(29,24310.16);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(30,16042.02);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(31,14189.51);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,18.40084);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,4322.037);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,5722.173);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,4907.852);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,5436.682);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,5315.491);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,4849.327);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,4647.972);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,5108.357);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,5549.22);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,5423.059);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,4744.212);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,4405.62);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,4424.528);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,4530.718);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,4112.574);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,3982.17);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,4223.534);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,2948.482);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,2851.402);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,2832.378);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,2800.929);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,2694.451);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,2953.042);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,23331.15);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,3050.707);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(28,2476.871);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(29,3325.228);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(30,1928.966);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(31,1671.168);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(112239);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.4020349);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,547.8664);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,890.8574);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,949.62);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,925.1779);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,889.0798);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,807.3475);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,780.3006);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,734.162);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,677.9224);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,623.4258);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,568.5592);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,528.9363);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,488.1839);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,450.6449);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,403.9661);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,344.8246);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,317.5338);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,275.8668);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,282.3725);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,260.7747);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,249.4229);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,242.57);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,208.8754);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,200.0808);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,191.1182);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,157.57);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(29,130.6937);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(30,99.08947);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(31,71.00378);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.3047054);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,11.54976);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,14.1928);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,14.13346);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,14.04666);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,14.11895);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,13.09373);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,13.03325);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,12.71245);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,12.19981);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,12.03332);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,11.44459);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,11.51957);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,10.07895);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,9.84475);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,15.83951);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,8.865018);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,8.378017);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,7.570651);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,8.89645);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,7.56406);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,7.218299);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,7.990842);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,6.511388);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,6.408575);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,6.330606);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,5.698142);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(29,5.056915);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(30,4.467852);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(31,3.80641);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(153765);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_3 = new TH1D("VbbHcc_algo_Z_dR_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(2,7.570728);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(3,11997.11);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(4,22480.28);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(5,25562.34);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(6,24849.94);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(7,21153.72);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(8,17261.2);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(9,13969.1);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(10,11681.53);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(11,10094.41);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(12,9051.031);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(13,8342.164);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(14,7791.439);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(15,7307.996);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(16,6792.068);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(17,6104.681);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(18,5520.138);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(19,5081.095);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(20,4735.76);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(21,4370.726);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(22,4153.316);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(23,3964.879);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(24,3928.349);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(25,3898.278);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(26,3934.41);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(27,3869.341);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(28,3501.363);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(29,2836.313);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(30,1737.029);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(31,1252.767);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(2,0.8385839);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(3,34.75893);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(4,47.23398);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(5,50.12982);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(6,49.9166);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(7,45.70329);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(8,41.18356);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(9,36.22636);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(10,33.69526);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(11,31.34373);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(12,29.88948);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(13,29.25018);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(14,27.51516);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(15,26.68744);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(16,25.67416);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(17,24.4184);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(18,23.17932);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(19,22.08434);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(20,21.28631);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(21,20.40076);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(22,19.98279);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(23,19.61555);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(24,20.06267);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(25,19.5167);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(26,20.34246);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(27,19.46599);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(28,19.12736);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(29,16.37215);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(30,12.87522);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(31,11.61302);
   VbbHcc_algo_Z_dR_stack_3->SetEntries(3228671);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_4 = new TH1D("VbbHcc_algo_Z_dR_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(2,0.6935901);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(3,823.3672);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(4,1211.372);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(5,1080.38);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(6,864.2784);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(7,696.1312);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(8,663.2845);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(9,644.5527);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(10,618.8745);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(11,591.7409);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(12,519.6208);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(13,511.9702);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(14,481.7263);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(15,457.3724);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(16,410.7733);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(17,354.1937);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(18,328.5029);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(19,305.507);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(20,288.1167);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(21,246.6726);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(22,253.9216);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(23,217.8613);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(24,207.2342);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(25,179.1091);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(26,179.8901);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(27,176.9499);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(28,160.0293);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(29,145.4156);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(30,100.9393);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(31,79.59809);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(2,0.2940015);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(3,18.50518);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(4,29.27849);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(5,27.61609);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(6,28.29149);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(7,23.13594);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(8,20.21831);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(9,21.90196);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(10,20.82925);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(11,20.80332);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(12,16.75493);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(13,19.35753);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(14,18.34193);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(15,19.59506);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(16,20.72737);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(17,21.50489);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(18,15.18239);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(19,16.43701);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(20,16.89706);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(21,10.68949);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(22,16.97545);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(23,12.55975);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(24,12.62849);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(25,10.53531);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(26,15.76943);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(27,13.19327);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(28,10.37731);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(29,10.92533);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(30,9.229761);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(31,8.031189);
   VbbHcc_algo_Z_dR_stack_4->SetEntries(55877);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_5 = new TH1D("VbbHcc_algo_Z_dR_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(2,0.1851402);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(3,247.4576);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(4,309.723);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(5,243.0678);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(6,242.1965);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(7,225.5851);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(8,234.0797);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(9,227.2618);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(10,194.7908);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(11,186.1863);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(12,177.8312);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(13,148.0481);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(14,184.7764);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(15,153.5076);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(16,165.8284);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(17,121.5218);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(18,100.0332);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(19,107.45);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(20,98.27948);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(21,72.64933);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(22,73.57458);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(23,70.17487);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(24,68.62257);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(25,58.35531);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(26,48.19601);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(27,39.36754);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(28,48.63118);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(29,58.40855);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(30,23.25116);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(31,17.91872);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(2,0.1851402);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(3,14.0643);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(4,19.92652);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(5,22.37154);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(6,24.94125);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(7,26.83514);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(8,27.94191);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(9,27.13883);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(10,23.27693);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(11,20.83628);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(12,20.68208);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(13,19.4573);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(14,33.80278);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(15,17.69777);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(16,20.28361);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(17,15.64832);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(18,14.15306);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(19,18.68811);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(20,15.4307);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(21,8.960653);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(22,9.339729);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(23,9.000091);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(24,14.33549);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(25,10.14201);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(26,6.764528);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(27,6.76006);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(28,8.603624);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(29,14.12328);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(30,4.78144);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(31,2.927281);
   VbbHcc_algo_Z_dR_stack_5->SetEntries(15424);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_6 = new TH1D("VbbHcc_algo_Z_dR_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,2.914546);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,4.212371);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,3.092207);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(6,4.942416);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,1.652183);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,1.60415);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,4.142203);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,2.32989);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,1.5968);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,0.6501005);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(13,2.215473);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,1.461263);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,0.313222);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(16,0.4856374);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,0.5264131);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(19,0.4888996);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,1.50295);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(21,1.668802);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(22,0.5130124);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(23,1.120057);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(24,1.087085);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(26,1.397062);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(28,1.009987);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(29,0.633457);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(30,0.587622);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(31,0.3743199);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,1.190051);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,1.499277);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,1.187685);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(6,2.536021);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,0.9636608);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,0.936955);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,1.805714);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,1.184282);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,0.9350872);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,0.6501005);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(13,1.12024);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,0.8733782);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,0.313222);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(16,0.4856374);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,0.5264131);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(19,0.4888996);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,0.8840493);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(21,0.971796);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(22,0.5130124);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(23,0.8050527);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(24,0.7745702);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(26,0.8581379);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(28,0.7148111);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(29,0.633457);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(30,0.587622);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(31,0.3743199);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(77);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_7 = new TH1D("VbbHcc_algo_Z_dR_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(3,12.26201);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(4,13.53163);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(5,11.6837);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(6,4.202025);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(7,2.942161);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(8,3.321217);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(9,1.845026);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(10,1.93356);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(11,3.343769);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(12,2.648676);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(13,4.55468);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(14,3.609595);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(15,3.773896);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(16,4.008782);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(17,2.295067);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(18,1.179361);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(19,4.725066);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(20,2.341755);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(21,1.579595);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(22,0.3816532);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(23,1.087492);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(24,1.70939);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(25,1.279461);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(26,0.7594282);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(27,2.127874);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(28,0.5317154);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(29,2.703509);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(30,1.31735);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(31,0.699897);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(3,2.228745);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(4,2.331619);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(5,2.23724);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(6,1.42791);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(7,1.128465);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(8,1.183918);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(9,0.8274719);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(10,0.934019);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(11,1.125888);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(12,1.001818);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(13,1.389735);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(14,1.286207);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(15,1.310623);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(16,1.245997);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(17,0.9369907);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(18,0.6820908);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(19,1.442289);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(20,1.055456);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(21,0.7960851);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(22,0.3816532);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(23,0.7910658);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(24,0.8608526);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(25,0.747018);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(26,0.5369981);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(27,0.8236309);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(28,0.338543);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(29,1.115862);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(30,0.6709911);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(31,0.4974678);
   VbbHcc_algo_Z_dR_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_8 = new TH1D("VbbHcc_algo_Z_dR_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(3,17.48131);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(4,26.79737);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(5,22.63767);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(6,12.50463);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(7,5.365412);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(8,7.305891);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(9,5.612324);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(10,3.921076);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(11,7.169284);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(12,5.638183);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(13,7.320868);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(14,7.388561);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(15,4.965391);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(16,5.209398);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(17,2.813357);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(18,3.734474);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(19,2.424113);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(20,2.413595);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(21,2.803191);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(22,2.024184);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(23,0.3010719);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(24,0.4282718);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(25,1.370751);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(26,2.495187);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(27,1.287941);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(28,2.348086);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(29,3.099761);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(30,0.559928);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(31,0.8460316);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(3,2.367239);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(4,2.975108);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(5,2.709142);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(6,2.030474);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(7,1.278716);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(8,1.587738);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(9,1.340102);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(10,1.095199);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(11,1.51667);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(12,1.309284);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(13,1.574783);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(14,1.56827);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(15,1.300084);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(16,1.278798);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(17,0.9008232);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(18,1.166845);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(19,0.8842969);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(20,0.8575981);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(21,0.9433736);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(22,0.8391873);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(23,0.3010719);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(24,0.3323174);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(25,0.6445887);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(26,0.8960313);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(27,0.651949);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(28,0.8603851);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(29,0.9948971);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(30,0.4341018);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(31,0.4892428);
   VbbHcc_algo_Z_dR_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_9 = new TH1D("VbbHcc_algo_Z_dR_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(2,0.002971343);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(3,12.23976);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(4,20.86173);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(5,17.7969);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(6,11.24378);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(7,6.57295);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(8,3.974595);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(9,3.229507);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(10,3.080394);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(11,3.15737);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(12,3.293296);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(13,3.147482);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(14,3.274275);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(15,2.987715);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(16,2.850253);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(17,2.533466);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(18,2.430953);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(19,2.218936);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(20,1.871723);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(21,1.669491);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(22,1.45679);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(23,1.000272);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(24,0.9883965);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(25,0.9408997);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(26,1.151608);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(27,1.528596);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(28,1.733973);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(29,1.834242);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(30,1.159237);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(31,0.6303232);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(2,0.002971343);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(3,0.194065);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(4,0.2737945);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(5,0.2349606);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(6,0.1845027);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(7,0.1572451);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(8,0.1091883);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(9,0.09731596);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(10,0.09734234);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(11,0.09532863);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(12,0.09677422);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(13,0.09643471);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(14,0.1021494);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(15,0.09019271);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(16,0.09424585);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(17,0.08578974);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(18,0.08318436);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(19,0.08177319);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(20,0.0819361);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(21,0.07787894);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(22,0.06485263);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(23,0.0519675);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(24,0.05241733);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(25,0.05057861);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(26,0.05999188);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(27,0.06474811);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(28,0.07277084);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(29,0.0768372);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(30,0.05664982);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(31,0.04223468);
   VbbHcc_algo_Z_dR_stack_9->SetEntries(47604);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_10 = new TH1D("VbbHcc_algo_Z_dR_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(2,0.001975423);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(3,3.080004);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(4,6.852685);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(5,8.234076);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(6,7.673269);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(7,5.437163);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(8,3.825392);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(9,2.990712);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(10,2.681065);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(11,2.645697);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(12,2.574146);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(13,2.535094);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(14,2.298739);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(15,2.111997);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(16,1.91551);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(17,1.686212);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(18,1.556316);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(19,1.486152);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(20,1.377359);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(21,1.295387);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(22,1.150263);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(23,1.020925);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(24,0.9155722);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(25,0.929585);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(26,0.9786107);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(27,1.082655);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(28,1.057171);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(29,0.7921534);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(30,0.5023752);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(31,0.3182522);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(2,0.001149034);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(3,0.04453978);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(4,0.06646138);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(5,0.07287573);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(6,0.0703922);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(7,0.05922771);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(8,0.04962699);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(9,0.04387598);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(10,0.04149269);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(11,0.04118621);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(12,0.04069523);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(13,0.04035758);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(14,0.03834993);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(15,0.03678307);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(16,0.03503112);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(17,0.03283171);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(18,0.03153947);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(19,0.030919);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(20,0.02973598);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(21,0.02882451);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(22,0.02714176);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(23,0.02552801);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(24,0.02423322);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(25,0.02446865);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(26,0.02513027);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(27,0.02645696);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(28,0.02614476);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(29,0.02260783);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(30,0.01799048);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(31,0.01435479);
   VbbHcc_algo_Z_dR_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_11 = new TH1D("VbbHcc_algo_Z_dR_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(3,0.08445059);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(4,0.1789813);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(5,0.0970518);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(6,0.0632959);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(7,0.02936564);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(8,0.02504119);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(9,0.03013519);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(10,0.03029985);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(11,0.01982034);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(12,0.01225273);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(13,0.04553542);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(14,0.02899153);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(15,0.02780411);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(16,0.0117977);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(17,0.01954742);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(18,0.02335838);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(19,0.02073589);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(20,0.01918194);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(21,0.009629834);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(22,0.0184496);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(23,0.01500563);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(24,0.00283147);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(25,0.005387581);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(26,0.01009742);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(27,0.01028105);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(28,0.01258325);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(29,0.0104594);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(30,0.00272295);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(3,0.01703373);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(4,0.02387961);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(5,0.01820066);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(6,0.01321309);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(7,0.009420138);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(8,0.008493668);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(9,0.009252946);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(10,0.009814323);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(11,0.007851513);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(12,0.005611154);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(13,0.01179116);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(14,0.009310703);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(15,0.009360002);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(16,0.005901213);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(17,0.007627017);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(18,0.009603914);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(19,0.007917784);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(20,0.007645746);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(21,0.005613804);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(22,0.0075951);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(23,0.006772538);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(24,0.00283147);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(25,0.003813205);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(26,0.005538834);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(27,0.005190755);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(28,0.00617142);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(29,0.006093399);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(30,0.00272295);
   VbbHcc_algo_Z_dR_stack_11->SetEntries(313);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_12 = new TH1D("VbbHcc_algo_Z_dR_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(3,0.02850007);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(4,0.05498011);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(5,0.05035694);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(6,0.03701562);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(7,0.02676104);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(8,0.01953834);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(9,0.01596661);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(10,0.01509285);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(11,0.01663685);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(12,0.01458468);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(13,0.01484504);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(14,0.01822799);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(15,0.01291389);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(16,0.01159562);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(17,0.01047146);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(18,0.009420493);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(19,0.005882195);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(20,0.008208974);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(21,0.009194825);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(22,0.00842086);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(23,0.007293006);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(24,0.00297124);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(25,0.004689824);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(26,0.004711058);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(27,0.007048038);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(28,0.005773771);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(29,0.006497125);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(30,0.002277515);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(31,0.001612487);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(3,0.004734215);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(4,0.00444649);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(5,0.00444395);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(6,0.003595478);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(7,0.003032636);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(8,0.002615137);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(9,0.002336207);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(10,0.002251019);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(11,0.002380719);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(12,0.002305243);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(13,0.002299795);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(14,0.004340236);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(15,0.002099269);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(16,0.001982163);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(17,0.001911047);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(18,0.00180194);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(19,0.001449765);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(20,0.001585425);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(21,0.001722075);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(22,0.001723424);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(23,0.001653503);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(24,0.001056964);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(25,0.001308903);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(26,0.001339354);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(27,0.00155191);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(28,0.001374458);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(29,0.001526752);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(30,0.0008742161);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(31,0.0007350081);
   VbbHcc_algo_Z_dR_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR__315 = new TH1D("VbbHcc_algo_Z_dR__315","",30,0,6);
   VbbHcc_algo_Z_dR__315->SetBinContent(2,70);
   VbbHcc_algo_Z_dR__315->SetBinContent(3,111884);
   VbbHcc_algo_Z_dR__315->SetBinContent(4,151692);
   VbbHcc_algo_Z_dR__315->SetBinContent(5,132747);
   VbbHcc_algo_Z_dR__315->SetBinContent(6,126224);
   VbbHcc_algo_Z_dR__315->SetBinContent(7,121477);
   VbbHcc_algo_Z_dR__315->SetBinContent(8,117959);
   VbbHcc_algo_Z_dR__315->SetBinContent(9,115467);
   VbbHcc_algo_Z_dR__315->SetBinContent(10,111597);
   VbbHcc_algo_Z_dR__315->SetBinContent(11,107752);
   VbbHcc_algo_Z_dR__315->SetBinContent(12,102382);
   VbbHcc_algo_Z_dR__315->SetBinContent(13,97481);
   VbbHcc_algo_Z_dR__315->SetBinContent(14,92521);
   VbbHcc_algo_Z_dR__315->SetBinContent(15,87381);
   VbbHcc_algo_Z_dR__315->SetBinContent(16,82433);
   VbbHcc_algo_Z_dR__315->SetBinContent(17,70091);
   VbbHcc_algo_Z_dR__315->SetBinContent(18,62040);
   VbbHcc_algo_Z_dR__315->SetBinContent(19,56424);
   VbbHcc_algo_Z_dR__315->SetBinContent(20,51523);
   VbbHcc_algo_Z_dR__315->SetBinContent(21,46976);
   VbbHcc_algo_Z_dR__315->SetBinContent(22,43440);
   VbbHcc_algo_Z_dR__315->SetBinContent(23,39962);
   VbbHcc_algo_Z_dR__315->SetBinContent(24,37405);
   VbbHcc_algo_Z_dR__315->SetBinContent(25,34154);
   VbbHcc_algo_Z_dR__315->SetBinContent(26,31602);
   VbbHcc_algo_Z_dR__315->SetBinContent(27,28353);
   VbbHcc_algo_Z_dR__315->SetBinContent(28,25948);
   VbbHcc_algo_Z_dR__315->SetBinContent(29,23211);
   VbbHcc_algo_Z_dR__315->SetBinContent(30,16052);
   VbbHcc_algo_Z_dR__315->SetBinContent(31,14438);
   VbbHcc_algo_Z_dR__315->SetEntries(2140715);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR__315->SetLineColor(ci);
   VbbHcc_algo_Z_dR__315->SetLineWidth(2);
   VbbHcc_algo_Z_dR__315->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR__315->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR__315->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR__315->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__315->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__315->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__315->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__315->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__315->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__315->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__315->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR__315->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__315->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__315->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__315->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__315->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__315->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_fx1229[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fy1229[30] = {
   0,
   54.37989,
   134486.2,
   173017.6,
   135166.1,
   134224.7,
   142990.7,
   126853,
   113428.6,
   119138.6,
   120379.6,
   103182.7,
   100028.7,
   95433.84,
   83969.3,
   86062.17,
   71295.43,
   61543.89,
   65908.15,
   46949.99,
   44322.83,
   40276.24,
   39569.84,
   37862.61,
   39299.03,
   56945,
   31782.73,
   25539.32,
   27490.07,
   18006.46};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fex1229[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fey1229[30] = {
   0,
   18.42574,
   4322.256,
   5722.496,
   4908.258,
   5437.061,
   5315.825,
   4849.642,
   4648.263,
   5108.579,
   5549.401,
   5423.22,
   4744.396,
   4405.889,
   4424.699,
   4530.895,
   4112.763,
   3982.301,
   4223.674,
   2948.657,
   2851.523,
   2832.525,
   2801.049,
   2694.606,
   2953.15,
   23331.17,
   3050.812,
   2476.989,
   3325.32,
   1929.042};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_fx1229,Graph_from_VbbHcc_algo_Z_dR_fy1229,Graph_from_VbbHcc_algo_Z_dR_fex1229,Graph_from_VbbHcc_algo_Z_dR_fey1229);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR1229 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR1229","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetMaximum(196614.1);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR1229);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__316 = new TH1D("data_mc_ratio__316","",30,0,6);
   data_mc_ratio__316->SetBinContent(2,1.287241);
   data_mc_ratio__316->SetBinContent(3,0.8319367);
   data_mc_ratio__316->SetBinContent(4,0.8767432);
   data_mc_ratio__316->SetBinContent(5,0.9821028);
   data_mc_ratio__316->SetBinContent(6,0.9403935);
   data_mc_ratio__316->SetBinContent(7,0.849545);
   data_mc_ratio__316->SetBinContent(8,0.9298877);
   data_mc_ratio__316->SetBinContent(9,1.017971);
   data_mc_ratio__316->SetBinContent(10,0.9366989);
   data_mc_ratio__316->SetBinContent(11,0.8951015);
   data_mc_ratio__316->SetBinContent(12,0.9922396);
   data_mc_ratio__316->SetBinContent(13,0.9745304);
   data_mc_ratio__316->SetBinContent(14,0.9694779);
   data_mc_ratio__316->SetBinContent(15,1.04063);
   data_mc_ratio__316->SetBinContent(16,0.9578308);
   data_mc_ratio__316->SetBinContent(17,0.9831064);
   data_mc_ratio__316->SetBinContent(18,1.008061);
   data_mc_ratio__316->SetBinContent(19,0.8561006);
   data_mc_ratio__316->SetBinContent(20,1.097402);
   data_mc_ratio__316->SetBinContent(21,1.05986);
   data_mc_ratio__316->SetBinContent(22,1.078551);
   data_mc_ratio__316->SetBinContent(23,1.009911);
   data_mc_ratio__316->SetBinContent(24,0.987914);
   data_mc_ratio__316->SetBinContent(25,0.8690801);
   data_mc_ratio__316->SetBinContent(26,0.5549565);
   data_mc_ratio__316->SetBinContent(27,0.8920883);
   data_mc_ratio__316->SetBinContent(28,1.016002);
   data_mc_ratio__316->SetBinContent(29,0.8443413);
   data_mc_ratio__316->SetBinContent(30,0.8914579);
   data_mc_ratio__316->SetBinContent(31,0.9247028);
   data_mc_ratio__316->SetBinError(2,0.1538547);
   data_mc_ratio__316->SetBinError(3,0.002487175);
   data_mc_ratio__316->SetBinError(4,0.002251081);
   data_mc_ratio__316->SetBinError(5,0.002695533);
   data_mc_ratio__316->SetBinError(6,0.002646907);
   data_mc_ratio__316->SetBinError(7,0.00243747);
   data_mc_ratio__316->SetBinError(8,0.002707478);
   data_mc_ratio__316->SetBinError(9,0.002995755);
   data_mc_ratio__316->SetBinError(10,0.002803972);
   data_mc_ratio__316->SetBinError(11,0.00272684);
   data_mc_ratio__316->SetBinError(12,0.003101021);
   data_mc_ratio__316->SetBinError(13,0.003121299);
   data_mc_ratio__316->SetBinError(14,0.003187262);
   data_mc_ratio__316->SetBinError(15,0.003520367);
   data_mc_ratio__316->SetBinError(16,0.003336094);
   data_mc_ratio__316->SetBinError(17,0.00371338);
   data_mc_ratio__316->SetBinError(18,0.004047165);
   data_mc_ratio__316->SetBinError(19,0.003604067);
   data_mc_ratio__316->SetBinError(20,0.00483465);
   data_mc_ratio__316->SetBinError(21,0.004890018);
   data_mc_ratio__316->SetBinError(22,0.005174828);
   data_mc_ratio__316->SetBinError(23,0.005051953);
   data_mc_ratio__316->SetBinError(24,0.00510804);
   data_mc_ratio__316->SetBinError(25,0.00470261);
   data_mc_ratio__316->SetBinError(26,0.003121775);
   data_mc_ratio__316->SetBinError(27,0.005297956);
   data_mc_ratio__316->SetBinError(28,0.006307288);
   data_mc_ratio__316->SetBinError(29,0.005542059);
   data_mc_ratio__316->SetBinError(30,0.007036169);
   data_mc_ratio__316->SetBinError(31,0.09927584);
   data_mc_ratio__316->SetMinimum(0.4);
   data_mc_ratio__316->SetMaximum(1.6);
   data_mc_ratio__316->SetEntries(2082.464);
   data_mc_ratio__316->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__316->SetLineColor(ci);
   data_mc_ratio__316->SetLineWidth(2);
   data_mc_ratio__316->SetMarkerStyle(20);
   data_mc_ratio__316->SetMarkerSize(1.2);
   data_mc_ratio__316->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__316->GetXaxis()->SetRange(1,30);
   data_mc_ratio__316->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__316->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__316->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__316->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__316->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__316->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__316->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__316->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__316->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__316->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__316->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__316->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__316->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__316->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__316->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__316->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__316->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1230[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1230[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1230[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1230[30] = {
   0,
   0.3388337,
   0.03213903,
   0.03307465,
   0.03631279,
   0.04050717,
   0.03717603,
   0.03823042,
   0.04097963,
   0.04287929,
   0.04609916,
   0.05255938,
   0.04743035,
   0.04616695,
   0.05269424,
   0.05264676,
   0.05768621,
   0.06470669,
   0.06408425,
   0.06280421,
   0.06433531,
   0.07032745,
   0.07078749,
   0.07116799,
   0.07514562,
   0.4097141,
   0.09598963,
   0.09698728,
   0.1209644,
   0.1071306};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1230,Graph_from_mc_statistical_error_fy1230,Graph_from_mc_statistical_error_fex1230,Graph_from_mc_statistical_error_fey1230);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1230 = new TH1F("Graph_Graph_from_mc_statistical_error1230","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1230->SetMinimum(0.5083431);
   Graph_Graph_from_mc_statistical_error1230->SetMaximum(1.491657);
   Graph_Graph_from_mc_statistical_error1230->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1230->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1230->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1230);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->SetSelected(Z_dR_algo_18);
}

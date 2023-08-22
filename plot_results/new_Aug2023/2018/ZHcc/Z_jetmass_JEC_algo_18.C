void Z_jetmass_JEC_algo_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_algo_18/Z_jetmass_JEC_algo_18
//=========  (Tue Aug 22 09:22:23 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_algo_18 = new TCanvas("Z_jetmass_JEC_algo_18", "Z_jetmass_JEC_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_algo_18->SetHighLightColor(2);
   Z_jetmass_JEC_algo_18->Range(-60,-0.03265383,340,0.1848883);
   Z_jetmass_JEC_algo_18->SetFillColor(0);
   Z_jetmass_JEC_algo_18->SetBorderMode(0);
   Z_jetmass_JEC_algo_18->SetBorderSize(2);
   Z_jetmass_JEC_algo_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_stack_11 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(4,0.005087522);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(5,0.03914393);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(6,0.09769678);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(7,0.1220323);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(8,0.1548468);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(9,0.08762891);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(10,0.07983276);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(11,0.0672859);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(12,0.02684497);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(13,0.02443283);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(14,0.01069763);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(15,0.02603718);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(16,0.01220153);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(17,0.007542568);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(18,0.009621859);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(19,0.006574221);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(20,0.004192851);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(21,-0.0004329616);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(23,0.004685157);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(24,-0.003006932);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(33,0.002532203);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(41,0.002607922);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(4,0.003603486);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(5,0.009822696);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(6,0.01726172);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(7,0.01748072);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(8,0.02063188);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(9,0.01452256);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(10,0.01382712);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(11,0.01290573);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(12,0.008525065);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(13,0.007462043);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(14,0.0049442);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(15,0.007909379);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(16,0.005501388);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(17,0.004415125);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(18,0.004873356);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(19,0.003796507);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(20,0.002971229);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(21,0.002759043);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(23,0.003313004);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(24,0.003006932);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(33,0.002532203);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(41,0.002607922);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetEntries(352);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_algo_18->Modified();
   Z_jetmass_JEC_algo_18->cd();
   Z_jetmass_JEC_algo_18->SetSelected(Z_jetmass_JEC_algo_18);
}

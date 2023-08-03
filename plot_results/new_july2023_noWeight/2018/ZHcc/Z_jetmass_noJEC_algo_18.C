void Z_jetmass_noJEC_algo_18()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_algo_18/Z_jetmass_noJEC_algo_18
//=========  (Thu Aug  3 12:25:21 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_algo_18 = new TCanvas("Z_jetmass_noJEC_algo_18", "Z_jetmass_noJEC_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_algo_18->SetHighLightColor(2);
   Z_jetmass_noJEC_algo_18->Range(-60,-0.01851901,340,0.1666711);
   Z_jetmass_noJEC_algo_18->SetFillColor(0);
   Z_jetmass_noJEC_algo_18->SetBorderMode(0);
   Z_jetmass_noJEC_algo_18->SetBorderSize(2);
   Z_jetmass_noJEC_algo_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_algo_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(4,0.01365457);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(5,0.05461829);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(6,0.104685);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(7,0.1319942);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(8,0.1410972);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(9,0.08192743);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(10,0.07510014);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(11,0.04096371);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(12,0.04096371);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(13,0.02275762);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(14,0.02275762);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(15,0.01593033);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(16,0.01137881);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(17,0.01137881);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(18,0.006827286);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(19,0.009103048);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(20,0.002275762);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(22,0.002275762);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(23,0.004551524);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(25,0.002275762);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(33,0.002275762);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(39,0.002275762);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(4,0.005574455);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(5,0.01114891);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(6,0.01543497);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(7,0.01733169);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(8,0.01791937);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(9,0.01365457);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(10,0.01307326);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(11,0.00965524);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(12,0.00965524);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(13,0.007196591);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(14,0.007196591);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(15,0.0060211);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(16,0.005088758);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(17,0.005088758);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(18,0.003941735);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(19,0.004551524);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(20,0.002275762);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(22,0.002275762);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(23,0.003218413);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(25,0.002275762);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(33,0.002275762);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(39,0.002275762);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetEntries(352);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_algo_18->Modified();
   Z_jetmass_noJEC_algo_18->cd();
   Z_jetmass_noJEC_algo_18->SetSelected(Z_jetmass_noJEC_algo_18);
}

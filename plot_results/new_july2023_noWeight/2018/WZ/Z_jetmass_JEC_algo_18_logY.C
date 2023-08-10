void Z_jetmass_JEC_algo_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_algo_18/Z_jetmass_JEC_algo_18
//=========  (Thu Aug 10 12:32:35 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_algo_18 = new TCanvas("Z_jetmass_JEC_algo_18", "Z_jetmass_JEC_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_algo_18->SetHighLightColor(2);
   Z_jetmass_JEC_algo_18->Range(-60,-1.03195,340,1.769721);
   Z_jetmass_JEC_algo_18->SetFillColor(0);
   Z_jetmass_JEC_algo_18->SetBorderMode(0);
   Z_jetmass_JEC_algo_18->SetBorderSize(2);
   Z_jetmass_JEC_algo_18->SetLogy();
   Z_jetmass_JEC_algo_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_stack_7 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_stack_7","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(4,1.770996);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(5,4.250389);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(6,8.14658);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(7,16.29316);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(8,14.87636);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(9,9.563376);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(10,8.14658);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(11,4.958788);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(12,6.021385);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(13,2.833593);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(14,3.89619);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(15,1.416796);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(16,1.062597);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(17,0.3541991);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(19,1.062597);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(20,0.7083982);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(24,0.3541991);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(26,0.3541991);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(27,0.3541991);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(31,0.3541991);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(44,0.3541991);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(4,0.7920133);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(5,1.226982);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(6,1.698679);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(7,2.402295);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(8,2.295473);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(9,1.840473);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(10,1.698679);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(11,1.325292);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(12,1.4604);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(13,1.001826);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(14,1.174746);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(15,0.7083982);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(16,0.6134909);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(17,0.3541991);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(18,0.3541991);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(19,0.6134909);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(20,0.5009132);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(24,0.3541991);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(26,0.3541991);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(27,0.3541991);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(31,0.3541991);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(44,0.3541991);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetEntries(247);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->Draw("HIST");
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

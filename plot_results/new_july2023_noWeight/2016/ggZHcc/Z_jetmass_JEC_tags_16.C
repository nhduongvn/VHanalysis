void Z_jetmass_JEC_tags_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_16/Z_jetmass_JEC_tags_16
//=========  (Thu Aug 10 12:28:11 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_16 = new TCanvas("Z_jetmass_JEC_tags_16", "Z_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_16->SetHighLightColor(2);
   Z_jetmass_JEC_tags_16->Range(-60,-0.00121917,340,0.01097253);
   Z_jetmass_JEC_tags_16->SetFillColor(0);
   Z_jetmass_JEC_tags_16->SetBorderMode(0);
   Z_jetmass_JEC_tags_16->SetBorderSize(2);
   Z_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_12 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(4,0.002500861);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(5,0.007859849);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(6,0.009288912);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(7,0.007859849);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(8,0.005358988);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(9,0.003929924);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(10,0.001786329);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(11,0.001786329);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(12,0.001786329);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(14,0.0003572658);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(16,0.0007145317);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(21,0.0003572658);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(22,0.0003572658);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(23,0.0003572658);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(33,0.0003572658);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(4,0.0009452366);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(5,0.001675725);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(6,0.001821706);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(7,0.001675725);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(8,0.001383685);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(9,0.001184917);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(10,0.0007988707);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(11,0.0007988707);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(12,0.0007988707);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(14,0.0003572658);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(16,0.0005052502);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(21,0.0003572658);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(22,0.0003572658);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(23,0.0003572658);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(33,0.0003572658);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetEntries(127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_16->Modified();
   Z_jetmass_JEC_tags_16->cd();
   Z_jetmass_JEC_tags_16->SetSelected(Z_jetmass_JEC_tags_16);
}

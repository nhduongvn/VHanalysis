void Z_jetmass_JEC_tags_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_18/Z_jetmass_JEC_tags_18
//=========  (Thu Aug 10 12:31:48 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_18 = new TCanvas("Z_jetmass_JEC_tags_18", "Z_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_18->SetHighLightColor(2);
   Z_jetmass_JEC_tags_18->Range(-60,-4.113277,340,-1.224562);
   Z_jetmass_JEC_tags_18->SetFillColor(0);
   Z_jetmass_JEC_tags_18->SetBorderMode(0);
   Z_jetmass_JEC_tags_18->SetBorderSize(2);
   Z_jetmass_JEC_tags_18->SetLogy();
   Z_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_12 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(3,0.0002996568);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(4,0.002097598);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(5,0.01078764);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(6,0.01618147);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(7,0.0152825);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(8,0.01348456);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(9,0.009289361);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(10,0.008690047);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(11,0.004195195);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(12,0.002097598);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(13,0.001797941);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(14,0.0005993136);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(15,0.0008989704);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(16,0.0002996568);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(18,0.0005993136);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(20,0.0002996568);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(21,0.0005993136);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(24,0.0002996568);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(31,0.0002996568);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(43,0.0002996568);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(3,0.0002996568);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(4,0.0007928174);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(5,0.001797941);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(6,0.002202019);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(7,0.002139978);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(8,0.002010159);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(9,0.001668418);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(10,0.001613701);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(11,0.001121213);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(12,0.0007928174);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(13,0.0007340063);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(14,0.0004237787);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(15,0.0005190208);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(16,0.0002996568);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(18,0.0004237787);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(20,0.0002996568);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(21,0.0004237787);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(24,0.0002996568);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(31,0.0002996568);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(43,0.0002996568);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetEntries(298);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_18->Modified();
   Z_jetmass_JEC_tags_18->cd();
   Z_jetmass_JEC_tags_18->SetSelected(Z_jetmass_JEC_tags_18);
}

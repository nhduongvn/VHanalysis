void Z_jetmass_JEC_tags_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_16/Z_jetmass_JEC_tags_16
//=========  (Tue Aug 22 09:16:49 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_16 = new TCanvas("Z_jetmass_JEC_tags_16", "Z_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_16->SetHighLightColor(2);
   Z_jetmass_JEC_tags_16->Range(-60,-3.150643,340,-1.39092);
   Z_jetmass_JEC_tags_16->SetFillColor(0);
   Z_jetmass_JEC_tags_16->SetBorderMode(0);
   Z_jetmass_JEC_tags_16->SetBorderSize(2);
   Z_jetmass_JEC_tags_16->SetLogy();
   Z_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_11 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(4,0.006769628);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(5,0.01430734);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(6,0.01407705);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(7,0.0133049);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(8,0.01295177);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(9,0.002238844);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(11,0.004654419);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(12,0.00235356);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(14,0.002450362);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(16,0.002120116);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinContent(22,0.002369166);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(4,0.003918127);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(5,0.005420481);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(6,0.005368634);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(7,0.005526864);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(8,0.005296585);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(9,0.002238844);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(11,0.003292075);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(12,0.00235356);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(14,0.002450362);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(16,0.002120116);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetBinError(22,0.002369166);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_jetmass_JEC_stack_11->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_11->Draw("HIST");
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

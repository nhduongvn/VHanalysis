void H_jetmass_JEC_tags_18_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_18/H_jetmass_JEC_tags_18
//=========  (Thu Aug 10 12:20:24 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_18 = new TCanvas("H_jetmass_JEC_tags_18", "H_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_18->SetHighLightColor(2);
   H_jetmass_JEC_tags_18->Range(-60,-1.317927,340,1.720254);
   H_jetmass_JEC_tags_18->SetFillColor(0);
   H_jetmass_JEC_tags_18->SetBorderMode(0);
   H_jetmass_JEC_tags_18->SetBorderSize(2);
   H_jetmass_JEC_tags_18->SetLogy();
   H_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(3,0.650994);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(4,7.78682);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(5,13.76853);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(6,13.45632);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(7,9.971546);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(8,7.523946);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(9,7.176382);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(10,3.501892);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(11,2.737903);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(12,1.57519);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(13,0.7312141);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(14,0.6953631);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(15,0.7060457);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(16,0.1936072);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(17,0.2313727);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(18,0.3001798);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(19,0.294318);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(21,0.2479135);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(25,0.3915493);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(27,0.3010719);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(30,0.2830566);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(3,0.4615002);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(4,1.640072);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(5,2.215622);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(6,2.097652);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(7,1.76417);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(8,1.55629);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(9,1.535697);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(10,1.024745);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(11,0.9744311);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(12,0.6596049);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(13,0.5201662);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(14,0.4985253);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(15,0.5039999);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(16,0.1936072);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(17,0.2313727);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(18,0.3001798);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(19,0.294318);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(21,0.2479135);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(25,0.3915493);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(27,0.3010719);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(30,0.2830566);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_18->Modified();
   H_jetmass_JEC_tags_18->cd();
   H_jetmass_JEC_tags_18->SetSelected(H_jetmass_JEC_tags_18);
}

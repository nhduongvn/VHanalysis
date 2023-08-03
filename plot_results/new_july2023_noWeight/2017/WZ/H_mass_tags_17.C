void H_mass_tags_17()
{
//=========Macro generated from canvas: H_mass_tags_17/H_mass_tags_17
//=========  (Thu Aug  3 12:22:54 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_17 = new TCanvas("H_mass_tags_17", "H_mass_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_17->SetHighLightColor(2);
   H_mass_tags_17->Range(-80,-0.06508483,453.3333,0.5857634);
   H_mass_tags_17->SetFillColor(0);
   H_mass_tags_17->SetBorderMode(0);
   H_mass_tags_17->SetBorderSize(2);
   H_mass_tags_17->SetLeftMargin(0.15);
   H_mass_tags_17->SetFrameBorderMode(0);
   H_mass_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass_stack_7 = new TH1D("VbbHcc_tags_H_mass_stack_7","",40,0,400);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(7,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(10,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(14,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(17,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(31,0.4958844);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(32,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(35,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(36,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(37,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(40,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(41,3.223248);
   VbbHcc_tags_H_mass_stack_7->SetBinError(7,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(10,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(14,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(17,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(31,0.3506432);
   VbbHcc_tags_H_mass_stack_7->SetBinError(32,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(35,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(36,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(37,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(40,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(41,0.8939683);
   VbbHcc_tags_H_mass_stack_7->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_mass_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_17->Modified();
   H_mass_tags_17->cd();
   H_mass_tags_17->SetSelected(H_mass_tags_17);
}

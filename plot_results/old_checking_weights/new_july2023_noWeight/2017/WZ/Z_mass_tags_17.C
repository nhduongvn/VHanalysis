void Z_mass_tags_17()
{
//=========Macro generated from canvas: Z_mass_tags_17/Z_mass_tags_17
//=========  (Thu Aug  3 12:22:52 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_17 = new TCanvas("Z_mass_tags_17", "Z_mass_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_17->SetHighLightColor(2);
   Z_mass_tags_17->Range(-80,-0.09762724,453.3333,0.8786451);
   Z_mass_tags_17->SetFillColor(0);
   Z_mass_tags_17->SetBorderMode(0);
   Z_mass_tags_17->SetBorderSize(2);
   Z_mass_tags_17->SetLeftMargin(0.15);
   Z_mass_tags_17->SetFrameBorderMode(0);
   Z_mass_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass_stack_7 = new TH1D("VbbHcc_tags_Z_mass_stack_7","",40,0,400);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(5,0.4958844);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(8,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(9,0.4958844);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(10,0.7438266);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(11,0.4958844);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(16,0.4958844);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(19,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(25,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(30,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(32,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(41,1.983537);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(5,0.3506432);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(8,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(9,0.3506432);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(10,0.4294485);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(11,0.3506432);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(16,0.3506432);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(19,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(25,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(30,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(32,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(41,0.7012864);
   VbbHcc_tags_Z_mass_stack_7->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_mass_stack_7->SetFillColor(ci);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_tags_17->Modified();
   Z_mass_tags_17->cd();
   Z_mass_tags_17->SetSelected(Z_mass_tags_17);
}

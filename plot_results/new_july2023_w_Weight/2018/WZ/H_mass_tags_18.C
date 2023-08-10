void H_mass_tags_18()
{
//=========Macro generated from canvas: H_mass_tags_18/H_mass_tags_18
//=========  (Thu Aug 10 12:23:09 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_18 = new TCanvas("H_mass_tags_18", "H_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_18->SetHighLightColor(2);
   H_mass_tags_18->Range(-80,-0.3399752,453.3333,3.059777);
   H_mass_tags_18->SetFillColor(0);
   H_mass_tags_18->SetBorderMode(0);
   H_mass_tags_18->SetBorderSize(2);
   H_mass_tags_18->SetLeftMargin(0.15);
   H_mass_tags_18->SetFrameBorderMode(0);
   H_mass_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass_stack_7 = new TH1D("VbbHcc_tags_H_mass_stack_7","",40,0,400);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(7,0.5144501);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(8,0.3856298);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(9,2.590287);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(10,0.4786962);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(11,0.9391289);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(12,0.5144501);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(13,0.870586);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(16,0.9833285);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(23,0.5144501);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(27,0.7556114);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(28,0.4963468);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(36,0.5166625);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(41,4.873772);
   VbbHcc_tags_H_mass_stack_7->SetBinError(7,0.5144501);
   VbbHcc_tags_H_mass_stack_7->SetBinError(8,0.3856298);
   VbbHcc_tags_H_mass_stack_7->SetBinError(9,1.0659);
   VbbHcc_tags_H_mass_stack_7->SetBinError(10,0.4786962);
   VbbHcc_tags_H_mass_stack_7->SetBinError(11,0.6641899);
   VbbHcc_tags_H_mass_stack_7->SetBinError(12,0.5144501);
   VbbHcc_tags_H_mass_stack_7->SetBinError(13,0.6587386);
   VbbHcc_tags_H_mass_stack_7->SetBinError(16,0.9833285);
   VbbHcc_tags_H_mass_stack_7->SetBinError(23,0.5144501);
   VbbHcc_tags_H_mass_stack_7->SetBinError(27,0.5343002);
   VbbHcc_tags_H_mass_stack_7->SetBinError(28,0.4963468);
   VbbHcc_tags_H_mass_stack_7->SetBinError(36,0.5166625);
   VbbHcc_tags_H_mass_stack_7->SetBinError(41,1.477998);
   VbbHcc_tags_H_mass_stack_7->SetEntries(32);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_18->Modified();
   H_mass_tags_18->cd();
   H_mass_tags_18->SetSelected(H_mass_tags_18);
}

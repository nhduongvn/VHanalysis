void H_mass_tags_17()
{
//=========Macro generated from canvas: H_mass_tags_17/H_mass_tags_17
//=========  (Tue Aug 22 09:20:05 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_17 = new TCanvas("H_mass_tags_17", "H_mass_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_17->SetHighLightColor(2);
   H_mass_tags_17->Range(-80,-0.04925366,453.3333,0.4432829);
   H_mass_tags_17->SetFillColor(0);
   H_mass_tags_17->SetBorderMode(0);
   H_mass_tags_17->SetBorderSize(2);
   H_mass_tags_17->SetLeftMargin(0.15);
   H_mass_tags_17->SetFrameBorderMode(0);
   H_mass_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass_stack_6 = new TH1D("VbbHcc_tags_H_mass_stack_6","",40,0,400);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(4,0.3752659);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(6,0.3049337);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(7,0.2355824);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(10,0.2950387);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(41,0.232904);
   VbbHcc_tags_H_mass_stack_6->SetBinError(4,0.3752659);
   VbbHcc_tags_H_mass_stack_6->SetBinError(6,0.3049337);
   VbbHcc_tags_H_mass_stack_6->SetBinError(7,0.2355824);
   VbbHcc_tags_H_mass_stack_6->SetBinError(10,0.2950387);
   VbbHcc_tags_H_mass_stack_6->SetBinError(41,0.232904);
   VbbHcc_tags_H_mass_stack_6->SetEntries(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_mass_stack_6->SetFillColor(ci);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->Draw("HIST");
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

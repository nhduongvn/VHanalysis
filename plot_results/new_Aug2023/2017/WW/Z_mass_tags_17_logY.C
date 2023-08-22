void Z_mass_tags_17_logY()
{
//=========Macro generated from canvas: Z_mass_tags_17/Z_mass_tags_17
//=========  (Tue Aug 22 09:15:50 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_17 = new TCanvas("Z_mass_tags_17", "Z_mass_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_17->SetHighLightColor(2);
   Z_mass_tags_17->Range(-80,-1.026484,453.3333,-0.05051506);
   Z_mass_tags_17->SetFillColor(0);
   Z_mass_tags_17->SetBorderMode(0);
   Z_mass_tags_17->SetBorderSize(2);
   Z_mass_tags_17->SetLogy();
   Z_mass_tags_17->SetLeftMargin(0.15);
   Z_mass_tags_17->SetFrameBorderMode(0);
   Z_mass_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass_stack_6 = new TH1D("VbbHcc_tags_Z_mass_stack_6","",40,0,400);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(11,0.3049337);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(12,0.3752659);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(15,0.2355824);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(26,0.2950387);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(41,0.232904);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(11,0.3049337);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(12,0.3752659);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(15,0.2355824);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(26,0.2950387);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(41,0.232904);
   VbbHcc_tags_Z_mass_stack_6->SetEntries(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_mass_stack_6->SetFillColor(ci);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->Draw("HIST");
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

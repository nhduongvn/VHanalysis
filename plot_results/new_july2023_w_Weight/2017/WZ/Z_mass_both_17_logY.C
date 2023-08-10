void Z_mass_both_17_logY()
{
//=========Macro generated from canvas: Z_mass_both_17/Z_mass_both_17
//=========  (Thu Aug 10 10:42:51 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_17 = new TCanvas("Z_mass_both_17", "Z_mass_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_17->SetHighLightColor(2);
   Z_mass_both_17->Range(-80,-1.193465,453.3333,0.6089169);
   Z_mass_both_17->SetFillColor(0);
   Z_mass_both_17->SetBorderMode(0);
   Z_mass_both_17->SetBorderSize(2);
   Z_mass_both_17->SetLogy();
   Z_mass_both_17->SetLeftMargin(0.15);
   Z_mass_both_17->SetFrameBorderMode(0);
   Z_mass_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass_stack_7 = new TH1D("VbbHcc_both_Z_mass_stack_7","",40,0,400);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(5,0.597075);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(6,0.1940007);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(8,0.3138408);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(9,0.7956075);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(10,1.416217);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(15,0.2948417);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(16,0.2891015);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(19,0.2655071);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(25,0.3047304);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(30,0.3152355);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(32,0.294848);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(41,2.048503);
   VbbHcc_both_Z_mass_stack_7->SetBinError(5,0.4247946);
   VbbHcc_both_Z_mass_stack_7->SetBinError(6,0.1940007);
   VbbHcc_both_Z_mass_stack_7->SetBinError(8,0.3138408);
   VbbHcc_both_Z_mass_stack_7->SetBinError(9,0.4735664);
   VbbHcc_both_Z_mass_stack_7->SetBinError(10,0.5908833);
   VbbHcc_both_Z_mass_stack_7->SetBinError(15,0.2948417);
   VbbHcc_both_Z_mass_stack_7->SetBinError(16,0.2891015);
   VbbHcc_both_Z_mass_stack_7->SetBinError(19,0.2655071);
   VbbHcc_both_Z_mass_stack_7->SetBinError(25,0.3047304);
   VbbHcc_both_Z_mass_stack_7->SetBinError(30,0.3152355);
   VbbHcc_both_Z_mass_stack_7->SetBinError(32,0.294848);
   VbbHcc_both_Z_mass_stack_7->SetBinError(41,0.7753083);
   VbbHcc_both_Z_mass_stack_7->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_mass_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_both_17->Modified();
   Z_mass_both_17->cd();
   Z_mass_both_17->SetSelected(Z_mass_both_17);
}

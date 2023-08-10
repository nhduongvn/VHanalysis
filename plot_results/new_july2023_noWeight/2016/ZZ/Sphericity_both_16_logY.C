void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:33:05 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-1.181914,1.133333,1.486688);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,8.755457);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,6.080179);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,5.350557);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,4.620936);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,2.432072);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,3.4049);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,1.945657);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,2.675279);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,0.9728286);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,1.216036);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,0.9728286);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,1.70245);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,0.7296215);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,0.4864143);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(16,0.4864143);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.2432072);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(18,0.2432072);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,1.459243);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,1.216036);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,1.140743);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,1.060115);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,0.7690885);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,0.9099978);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,0.6878937);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,0.8066269);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.4864143);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.5438277);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.4864143);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.6434656);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.4212471);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.3439469);
   VbbHcc_both_Sphericity_stack_8->SetBinError(16,0.3439469);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.2432072);
   VbbHcc_both_Sphericity_stack_8->SetBinError(18,0.2432072);
   VbbHcc_both_Sphericity_stack_8->SetBinError(20,0.2432072);
   VbbHcc_both_Sphericity_stack_8->SetEntries(175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}

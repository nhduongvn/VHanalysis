void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Tue Aug 22 09:18:46 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-1.266808,1.133333,0.6930583);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_7 = new TH1D("VbbHcc_both_Sphericity_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,1.657764);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,0.6861364);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(4,1.091422);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,0.4641428);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,0.3983082);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,0.6061748);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,0.6901933);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(9,0.2275793);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(12,0.2849003);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(13,0.2364404);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,0.1699058);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,0.6803981);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,0.4027076);
   VbbHcc_both_Sphericity_stack_7->SetBinError(4,0.5482108);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,0.3497805);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.2827442);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.4315985);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.4058153);
   VbbHcc_both_Sphericity_stack_7->SetBinError(9,0.2275793);
   VbbHcc_both_Sphericity_stack_7->SetBinError(12,0.2849003);
   VbbHcc_both_Sphericity_stack_7->SetBinError(13,0.2364404);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.1699058);
   VbbHcc_both_Sphericity_stack_7->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_stack_7->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}

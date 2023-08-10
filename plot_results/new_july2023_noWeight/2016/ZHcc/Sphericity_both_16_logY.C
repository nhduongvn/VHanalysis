void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:33:05 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-3.055674,1.133333,-1.139647);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.02188006);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.02188006);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.02461507);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.005470015);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.005470015);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.005470015);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.005470015);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.007735769);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.007735769);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.008205022);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.003867885);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.003867885);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.003867885);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.003867885);
   VbbHcc_both_Sphericity_stack_11->SetBinError(12,0.002735007);
   VbbHcc_both_Sphericity_stack_11->SetBinError(13,0.002735007);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.002735007);
   VbbHcc_both_Sphericity_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_11->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->Draw("HIST");
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

void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Tue Aug 22 09:23:17 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-0.006858361,1.133333,0.06172524);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_11 = new TH1D("VbbHcc_both_Aplanarity_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,0.05225417);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.01295679);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.003880419);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.002186347);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(6,0.002083618);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(9,0.002109186);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(10,0.002126611);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.01074993);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.005330841);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.002754198);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.002186347);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(6,0.002083618);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(9,0.002109186);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(10,0.002126611);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_11->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}

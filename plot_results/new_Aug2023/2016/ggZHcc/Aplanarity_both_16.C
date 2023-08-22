void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Tue Aug 22 09:23:17 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-0.002514077,1.133333,0.02262669);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_12 = new TH1D("VbbHcc_both_Aplanarity_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.01915487);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.009601039);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.003651786);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.002131151);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.001423579);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.0008182779);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.0008299033);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0006056176);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0003371612);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.00234116);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.00165148);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.001015049);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.0007634846);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.0006370334);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.0004763225);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.0004791449);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0004289514);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.0003371612);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_12->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->Draw("HIST");
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

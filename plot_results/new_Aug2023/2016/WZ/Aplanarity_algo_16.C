void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Tue Aug 22 09:21:56 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-10.90923,1.133333,98.18302);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,83.1179);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,9.305097);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,1.922098);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(4,0.2942369);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(5,0.3302794);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(6,0.1627677);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(7,0.08998196);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,2.691826);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,0.8856802);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,0.4055613);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(4,0.1534527);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(5,0.1663747);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(6,0.1152427);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(7,0.08998196);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(1121);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_stack_7->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}

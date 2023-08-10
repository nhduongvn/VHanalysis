void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug 10 12:24:19 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-15.2822,1.133333,137.5398);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,116.4358);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,13.83548);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,2.751364);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(4,0.4049486);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(5,0.4672681);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(6,0.2184507);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(7,0.1228988);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,3.694923);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,1.273629);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,0.5674424);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(4,0.2126199);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(5,0.2342996);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(6,0.1548394);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(7,0.1228988);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(1163);

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

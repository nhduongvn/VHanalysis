#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Fri Sep  1 13:23:39 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-0.03554903,1.133333,0.3199413);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__600 = new TH1D("VbbHcc_algo_Aplanarity__600","",50,0,1);
   VbbHcc_algo_Aplanarity__600->SetBinContent(1,0.2708498);
   VbbHcc_algo_Aplanarity__600->SetBinContent(2,0.0350512);
   VbbHcc_algo_Aplanarity__600->SetBinContent(3,0.006869039);
   VbbHcc_algo_Aplanarity__600->SetBinContent(4,0.001315612);
   VbbHcc_algo_Aplanarity__600->SetBinContent(5,0.000745945);
   VbbHcc_algo_Aplanarity__600->SetBinError(1,0.008829179);
   VbbHcc_algo_Aplanarity__600->SetBinError(2,0.003174437);
   VbbHcc_algo_Aplanarity__600->SetBinError(3,0.001368587);
   VbbHcc_algo_Aplanarity__600->SetBinError(4,0.0005942915);
   VbbHcc_algo_Aplanarity__600->SetBinError(5,0.000431681);
   VbbHcc_algo_Aplanarity__600->SetEntries(1132);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity__600->SetFillColor(ci);
   VbbHcc_algo_Aplanarity__600->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__600->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__600->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__600->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__600->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__600->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__600->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__600->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__600->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__600->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__600->Draw("HIST");
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

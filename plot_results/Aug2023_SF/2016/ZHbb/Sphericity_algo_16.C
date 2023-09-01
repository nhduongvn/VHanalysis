#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-3.287259,1.133333,29.58533);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__582 = new TH1D("VbbHcc_algo_Sphericity__582","",25,0,1);
   VbbHcc_algo_Sphericity__582->SetBinContent(1,24.80381);
   VbbHcc_algo_Sphericity__582->SetBinContent(2,25.04578);
   VbbHcc_algo_Sphericity__582->SetBinContent(3,13.87701);
   VbbHcc_algo_Sphericity__582->SetBinContent(4,8.961456);
   VbbHcc_algo_Sphericity__582->SetBinContent(5,5.542981);
   VbbHcc_algo_Sphericity__582->SetBinContent(6,2.664942);
   VbbHcc_algo_Sphericity__582->SetBinContent(7,0.7467165);
   VbbHcc_algo_Sphericity__582->SetBinContent(8,0.1748242);
   VbbHcc_algo_Sphericity__582->SetBinContent(9,0.06485643);
   VbbHcc_algo_Sphericity__582->SetBinContent(10,0.03510089);
   VbbHcc_algo_Sphericity__582->SetBinContent(11,0.01887862);
   VbbHcc_algo_Sphericity__582->SetBinContent(12,0.01283068);
   VbbHcc_algo_Sphericity__582->SetBinContent(13,0.003989504);
   VbbHcc_algo_Sphericity__582->SetBinContent(14,0.001754003);
   VbbHcc_algo_Sphericity__582->SetBinContent(15,0.001037855);
   VbbHcc_algo_Sphericity__582->SetBinContent(17,0.0008816117);
   VbbHcc_algo_Sphericity__582->SetBinContent(19,0.001161909);
   VbbHcc_algo_Sphericity__582->SetBinError(1,0.1756053);
   VbbHcc_algo_Sphericity__582->SetBinError(2,0.1754059);
   VbbHcc_algo_Sphericity__582->SetBinError(3,0.1305724);
   VbbHcc_algo_Sphericity__582->SetBinError(4,0.1057394);
   VbbHcc_algo_Sphericity__582->SetBinError(5,0.08381068);
   VbbHcc_algo_Sphericity__582->SetBinError(6,0.05795826);
   VbbHcc_algo_Sphericity__582->SetBinError(7,0.0305652);
   VbbHcc_algo_Sphericity__582->SetBinError(8,0.01443295);
   VbbHcc_algo_Sphericity__582->SetBinError(9,0.008856818);
   VbbHcc_algo_Sphericity__582->SetBinError(10,0.006431726);
   VbbHcc_algo_Sphericity__582->SetBinError(11,0.004742997);
   VbbHcc_algo_Sphericity__582->SetBinError(12,0.003811747);
   VbbHcc_algo_Sphericity__582->SetBinError(13,0.001828635);
   VbbHcc_algo_Sphericity__582->SetBinError(14,0.001353935);
   VbbHcc_algo_Sphericity__582->SetBinError(15,0.001037855);
   VbbHcc_algo_Sphericity__582->SetBinError(17,0.0008816117);
   VbbHcc_algo_Sphericity__582->SetBinError(19,0.001161909);
   VbbHcc_algo_Sphericity__582->SetEntries(72469);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity__582->SetFillColor(ci);
   VbbHcc_algo_Sphericity__582->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__582->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__582->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__582->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__582->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__582->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__582->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__582->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__582->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__582->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__582->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}

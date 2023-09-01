#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-4.222551,1.133333,38.00296);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__938 = new TH1D("VbbHcc_both_Sphericity__938","",25,0,1);
   VbbHcc_both_Sphericity__938->SetBinContent(1,32.17182);
   VbbHcc_both_Sphericity__938->SetBinContent(2,26.93838);
   VbbHcc_both_Sphericity__938->SetBinContent(3,25.59738);
   VbbHcc_both_Sphericity__938->SetBinContent(4,13.9862);
   VbbHcc_both_Sphericity__938->SetBinContent(5,14.13256);
   VbbHcc_both_Sphericity__938->SetBinContent(6,10.92888);
   VbbHcc_both_Sphericity__938->SetBinContent(7,8.58912);
   VbbHcc_both_Sphericity__938->SetBinContent(8,12.76449);
   VbbHcc_both_Sphericity__938->SetBinContent(9,5.32248);
   VbbHcc_both_Sphericity__938->SetBinContent(10,10.76027);
   VbbHcc_both_Sphericity__938->SetBinContent(11,3.270501);
   VbbHcc_both_Sphericity__938->SetBinContent(12,2.866822);
   VbbHcc_both_Sphericity__938->SetBinContent(13,2.412944);
   VbbHcc_both_Sphericity__938->SetBinContent(14,2.808665);
   VbbHcc_both_Sphericity__938->SetBinContent(15,3.041262);
   VbbHcc_both_Sphericity__938->SetBinContent(16,1.911985);
   VbbHcc_both_Sphericity__938->SetBinContent(17,1.250238);
   VbbHcc_both_Sphericity__938->SetBinContent(18,0.2379978);
   VbbHcc_both_Sphericity__938->SetBinContent(19,0.422321);
   VbbHcc_both_Sphericity__938->SetBinContent(20,3.67813e-05);
   VbbHcc_both_Sphericity__938->SetBinContent(21,0.0008726468);
   VbbHcc_both_Sphericity__938->SetBinError(1,2.890923);
   VbbHcc_both_Sphericity__938->SetBinError(2,2.777357);
   VbbHcc_both_Sphericity__938->SetBinError(3,2.771027);
   VbbHcc_both_Sphericity__938->SetBinError(4,1.372629);
   VbbHcc_both_Sphericity__938->SetBinError(5,2.247774);
   VbbHcc_both_Sphericity__938->SetBinError(6,1.71488);
   VbbHcc_both_Sphericity__938->SetBinError(7,1.415791);
   VbbHcc_both_Sphericity__938->SetBinError(8,4.596042);
   VbbHcc_both_Sphericity__938->SetBinError(9,1.051653);
   VbbHcc_both_Sphericity__938->SetBinError(10,4.610189);
   VbbHcc_both_Sphericity__938->SetBinError(11,0.5545929);
   VbbHcc_both_Sphericity__938->SetBinError(12,0.5574491);
   VbbHcc_both_Sphericity__938->SetBinError(13,0.4488187);
   VbbHcc_both_Sphericity__938->SetBinError(14,0.5904954);
   VbbHcc_both_Sphericity__938->SetBinError(15,0.8506936);
   VbbHcc_both_Sphericity__938->SetBinError(16,0.4694728);
   VbbHcc_both_Sphericity__938->SetBinError(17,0.3602566);
   VbbHcc_both_Sphericity__938->SetBinError(18,0.1228229);
   VbbHcc_both_Sphericity__938->SetBinError(19,0.2184895);
   VbbHcc_both_Sphericity__938->SetBinError(20,3.67813e-05);
   VbbHcc_both_Sphericity__938->SetBinError(21,0.0005276778);
   VbbHcc_both_Sphericity__938->SetEntries(3785);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity__938->SetFillColor(ci);
   VbbHcc_both_Sphericity__938->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__938->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__938->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__938->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__938->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__938->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__938->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__938->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__938->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__938->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__938->Draw("HIST");
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

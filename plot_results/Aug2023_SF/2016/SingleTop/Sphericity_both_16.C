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
   Sphericity_both_16->Range(-0.2,-13.70358,1.133333,123.3322);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__935 = new TH1D("VbbHcc_both_Sphericity__935","",25,0,1);
   VbbHcc_both_Sphericity__935->SetBinContent(1,102.6491);
   VbbHcc_both_Sphericity__935->SetBinContent(2,104.4082);
   VbbHcc_both_Sphericity__935->SetBinContent(3,86.91584);
   VbbHcc_both_Sphericity__935->SetBinContent(4,61.28776);
   VbbHcc_both_Sphericity__935->SetBinContent(5,48.96955);
   VbbHcc_both_Sphericity__935->SetBinContent(6,35.75357);
   VbbHcc_both_Sphericity__935->SetBinContent(7,29.42562);
   VbbHcc_both_Sphericity__935->SetBinContent(8,29.7182);
   VbbHcc_both_Sphericity__935->SetBinContent(9,23.57999);
   VbbHcc_both_Sphericity__935->SetBinContent(10,19.92317);
   VbbHcc_both_Sphericity__935->SetBinContent(11,14.60471);
   VbbHcc_both_Sphericity__935->SetBinContent(12,14.02155);
   VbbHcc_both_Sphericity__935->SetBinContent(13,15.24004);
   VbbHcc_both_Sphericity__935->SetBinContent(14,8.184601);
   VbbHcc_both_Sphericity__935->SetBinContent(15,9.167892);
   VbbHcc_both_Sphericity__935->SetBinContent(16,7.851503);
   VbbHcc_both_Sphericity__935->SetBinContent(17,3.827565);
   VbbHcc_both_Sphericity__935->SetBinContent(18,4.506982);
   VbbHcc_both_Sphericity__935->SetBinContent(19,1.980226);
   VbbHcc_both_Sphericity__935->SetBinContent(20,0.7598872);
   VbbHcc_both_Sphericity__935->SetBinContent(21,0.5324162);
   VbbHcc_both_Sphericity__935->SetBinContent(23,0.04330472);
   VbbHcc_both_Sphericity__935->SetBinError(1,3.973104);
   VbbHcc_both_Sphericity__935->SetBinError(2,3.884577);
   VbbHcc_both_Sphericity__935->SetBinError(3,3.625317);
   VbbHcc_both_Sphericity__935->SetBinError(4,3.128251);
   VbbHcc_both_Sphericity__935->SetBinError(5,2.7809);
   VbbHcc_both_Sphericity__935->SetBinError(6,2.397957);
   VbbHcc_both_Sphericity__935->SetBinError(7,2.17074);
   VbbHcc_both_Sphericity__935->SetBinError(8,2.219304);
   VbbHcc_both_Sphericity__935->SetBinError(9,1.959236);
   VbbHcc_both_Sphericity__935->SetBinError(10,1.785404);
   VbbHcc_both_Sphericity__935->SetBinError(11,1.448402);
   VbbHcc_both_Sphericity__935->SetBinError(12,1.505278);
   VbbHcc_both_Sphericity__935->SetBinError(13,1.70913);
   VbbHcc_both_Sphericity__935->SetBinError(14,1.154395);
   VbbHcc_both_Sphericity__935->SetBinError(15,1.323501);
   VbbHcc_both_Sphericity__935->SetBinError(16,1.199512);
   VbbHcc_both_Sphericity__935->SetBinError(17,0.7849757);
   VbbHcc_both_Sphericity__935->SetBinError(18,0.9016823);
   VbbHcc_both_Sphericity__935->SetBinError(19,0.5539825);
   VbbHcc_both_Sphericity__935->SetBinError(20,0.3427853);
   VbbHcc_both_Sphericity__935->SetBinError(21,0.3592876);
   VbbHcc_both_Sphericity__935->SetBinError(23,0.04330472);
   VbbHcc_both_Sphericity__935->SetEntries(9878);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity__935->SetFillColor(ci);
   VbbHcc_both_Sphericity__935->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__935->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__935->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__935->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__935->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__935->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__935->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__935->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__935->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__935->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__935->Draw("HIST");
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

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
   Sphericity_both_16->Range(-0.2,-287.3826,1.133333,2586.443);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__936 = new TH1D("VbbHcc_both_Sphericity__936","",25,0,1);
   VbbHcc_both_Sphericity__936->SetBinContent(1,1922.272);
   VbbHcc_both_Sphericity__936->SetBinContent(2,2189.581);
   VbbHcc_both_Sphericity__936->SetBinContent(3,1669.509);
   VbbHcc_both_Sphericity__936->SetBinContent(4,1258.309);
   VbbHcc_both_Sphericity__936->SetBinContent(5,994.9446);
   VbbHcc_both_Sphericity__936->SetBinContent(6,783.9955);
   VbbHcc_both_Sphericity__936->SetBinContent(7,657.8264);
   VbbHcc_both_Sphericity__936->SetBinContent(8,544.6908);
   VbbHcc_both_Sphericity__936->SetBinContent(9,458.1289);
   VbbHcc_both_Sphericity__936->SetBinContent(10,390.6562);
   VbbHcc_both_Sphericity__936->SetBinContent(11,333.8736);
   VbbHcc_both_Sphericity__936->SetBinContent(12,286.9848);
   VbbHcc_both_Sphericity__936->SetBinContent(13,243.4924);
   VbbHcc_both_Sphericity__936->SetBinContent(14,204.9997);
   VbbHcc_both_Sphericity__936->SetBinContent(15,166.0188);
   VbbHcc_both_Sphericity__936->SetBinContent(16,134.2587);
   VbbHcc_both_Sphericity__936->SetBinContent(17,105.7479);
   VbbHcc_both_Sphericity__936->SetBinContent(18,76.92999);
   VbbHcc_both_Sphericity__936->SetBinContent(19,44.59353);
   VbbHcc_both_Sphericity__936->SetBinContent(20,23.46427);
   VbbHcc_both_Sphericity__936->SetBinContent(21,7.26551);
   VbbHcc_both_Sphericity__936->SetBinContent(22,3.565191);
   VbbHcc_both_Sphericity__936->SetBinContent(23,0.9048094);
   VbbHcc_both_Sphericity__936->SetBinContent(25,0.06263217);
   VbbHcc_both_Sphericity__936->SetBinError(1,10.39732);
   VbbHcc_both_Sphericity__936->SetBinError(2,11.03561);
   VbbHcc_both_Sphericity__936->SetBinError(3,9.664744);
   VbbHcc_both_Sphericity__936->SetBinError(4,8.41208);
   VbbHcc_both_Sphericity__936->SetBinError(5,7.487627);
   VbbHcc_both_Sphericity__936->SetBinError(6,6.64581);
   VbbHcc_both_Sphericity__936->SetBinError(7,6.084148);
   VbbHcc_both_Sphericity__936->SetBinError(8,5.544575);
   VbbHcc_both_Sphericity__936->SetBinError(9,5.094513);
   VbbHcc_both_Sphericity__936->SetBinError(10,4.697677);
   VbbHcc_both_Sphericity__936->SetBinError(11,4.346683);
   VbbHcc_both_Sphericity__936->SetBinError(12,4.023745);
   VbbHcc_both_Sphericity__936->SetBinError(13,3.683527);
   VbbHcc_both_Sphericity__936->SetBinError(14,3.39805);
   VbbHcc_both_Sphericity__936->SetBinError(15,3.051473);
   VbbHcc_both_Sphericity__936->SetBinError(16,2.752802);
   VbbHcc_both_Sphericity__936->SetBinError(17,2.440069);
   VbbHcc_both_Sphericity__936->SetBinError(18,2.08615);
   VbbHcc_both_Sphericity__936->SetBinError(19,1.558346);
   VbbHcc_both_Sphericity__936->SetBinError(20,1.140209);
   VbbHcc_both_Sphericity__936->SetBinError(21,0.6197296);
   VbbHcc_both_Sphericity__936->SetBinError(22,0.4370678);
   VbbHcc_both_Sphericity__936->SetBinError(23,0.2251079);
   VbbHcc_both_Sphericity__936->SetBinError(25,0.06263217);
   VbbHcc_both_Sphericity__936->SetEntries(244052);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity__936->SetFillColor(ci);
   VbbHcc_both_Sphericity__936->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__936->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__936->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__936->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__936->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__936->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__936->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__936->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__936->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__936->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__936->Draw("HIST");
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

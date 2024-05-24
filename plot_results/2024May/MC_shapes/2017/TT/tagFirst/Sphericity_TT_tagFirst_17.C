#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_TT_tagFirst_17()
{
//=========Macro generated from canvas: Sphericity_TT_tagFirst_17/Sphericity_TT_tagFirst_17
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_TT_tagFirst_17 = new TCanvas("Sphericity_TT_tagFirst_17", "Sphericity_TT_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_TT_tagFirst_17->SetHighLightColor(2);
   Sphericity_TT_tagFirst_17->Range(-0.2,-12904.92,1.133333,116144.3);
   Sphericity_TT_tagFirst_17->SetFillColor(0);
   Sphericity_TT_tagFirst_17->SetFillStyle(4000);
   Sphericity_TT_tagFirst_17->SetBorderMode(0);
   Sphericity_TT_tagFirst_17->SetBorderSize(2);
   Sphericity_TT_tagFirst_17->SetLeftMargin(0.15);
   Sphericity_TT_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_TT_tagFirst_17->SetFrameBorderMode(0);
   Sphericity_TT_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_TT_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__437 = new TH1D("VH_tagFirst_Sphericity__437","",25,0,1);
   VH_tagFirst_Sphericity__437->SetBinContent(1,98323.2);
   VH_tagFirst_Sphericity__437->SetBinContent(2,83554.96);
   VH_tagFirst_Sphericity__437->SetBinContent(3,46554.17);
   VH_tagFirst_Sphericity__437->SetBinContent(4,26719.64);
   VH_tagFirst_Sphericity__437->SetBinContent(5,15487.07);
   VH_tagFirst_Sphericity__437->SetBinContent(6,8932.776);
   VH_tagFirst_Sphericity__437->SetBinContent(7,5191.317);
   VH_tagFirst_Sphericity__437->SetBinContent(8,3204.207);
   VH_tagFirst_Sphericity__437->SetBinContent(9,2084.277);
   VH_tagFirst_Sphericity__437->SetBinContent(10,1444.749);
   VH_tagFirst_Sphericity__437->SetBinContent(11,1046.281);
   VH_tagFirst_Sphericity__437->SetBinContent(12,771.7329);
   VH_tagFirst_Sphericity__437->SetBinContent(13,590.5629);
   VH_tagFirst_Sphericity__437->SetBinContent(14,454.4616);
   VH_tagFirst_Sphericity__437->SetBinContent(15,362.2878);
   VH_tagFirst_Sphericity__437->SetBinContent(16,267.9147);
   VH_tagFirst_Sphericity__437->SetBinContent(17,186.2339);
   VH_tagFirst_Sphericity__437->SetBinContent(18,126.7811);
   VH_tagFirst_Sphericity__437->SetBinContent(19,74.93045);
   VH_tagFirst_Sphericity__437->SetBinContent(20,28.74698);
   VH_tagFirst_Sphericity__437->SetBinContent(21,10.41475);
   VH_tagFirst_Sphericity__437->SetBinContent(22,2.503244);
   VH_tagFirst_Sphericity__437->SetBinContent(23,0.4569018);
   VH_tagFirst_Sphericity__437->SetBinContent(24,0.4411163);
   VH_tagFirst_Sphericity__437->SetBinError(1,98.10449);
   VH_tagFirst_Sphericity__437->SetBinError(2,89.17845);
   VH_tagFirst_Sphericity__437->SetBinError(3,66.74479);
   VH_tagFirst_Sphericity__437->SetBinError(4,50.90655);
   VH_tagFirst_Sphericity__437->SetBinError(5,38.92438);
   VH_tagFirst_Sphericity__437->SetBinError(6,29.82621);
   VH_tagFirst_Sphericity__437->SetBinError(7,22.74242);
   VH_tagFirst_Sphericity__437->SetBinError(8,18.00283);
   VH_tagFirst_Sphericity__437->SetBinError(9,14.50472);
   VH_tagFirst_Sphericity__437->SetBinError(10,12.09572);
   VH_tagFirst_Sphericity__437->SetBinError(11,10.33853);
   VH_tagFirst_Sphericity__437->SetBinError(12,8.971832);
   VH_tagFirst_Sphericity__437->SetBinError(13,7.755944);
   VH_tagFirst_Sphericity__437->SetBinError(14,6.926626);
   VH_tagFirst_Sphericity__437->SetBinError(15,6.244152);
   VH_tagFirst_Sphericity__437->SetBinError(16,5.21213);
   VH_tagFirst_Sphericity__437->SetBinError(17,4.363704);
   VH_tagFirst_Sphericity__437->SetBinError(18,3.626382);
   VH_tagFirst_Sphericity__437->SetBinError(19,2.728209);
   VH_tagFirst_Sphericity__437->SetBinError(20,1.700711);
   VH_tagFirst_Sphericity__437->SetBinError(21,0.990088);
   VH_tagFirst_Sphericity__437->SetBinError(22,0.472752);
   VH_tagFirst_Sphericity__437->SetBinError(23,0.1549453);
   VH_tagFirst_Sphericity__437->SetBinError(24,0.2315628);
   VH_tagFirst_Sphericity__437->SetEntries(4351060);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__437->SetLineColor(ci);
   VH_tagFirst_Sphericity__437->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__437->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__437->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__437->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__437->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__437->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__437->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__437->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__437->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__437->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__437->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__437->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__437->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__437->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__437->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_TT_tagFirst_17->Modified();
   Sphericity_TT_tagFirst_17->cd();
   Sphericity_TT_tagFirst_17->SetSelected(Sphericity_TT_tagFirst_17);
}

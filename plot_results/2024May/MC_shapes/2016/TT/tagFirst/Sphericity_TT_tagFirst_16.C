#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_TT_tagFirst_16()
{
//=========Macro generated from canvas: Sphericity_TT_tagFirst_16/Sphericity_TT_tagFirst_16
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_TT_tagFirst_16 = new TCanvas("Sphericity_TT_tagFirst_16", "Sphericity_TT_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_TT_tagFirst_16->SetHighLightColor(2);
   Sphericity_TT_tagFirst_16->Range(-0.2,-17218.9,1.133333,154970.1);
   Sphericity_TT_tagFirst_16->SetFillColor(0);
   Sphericity_TT_tagFirst_16->SetFillStyle(4000);
   Sphericity_TT_tagFirst_16->SetBorderMode(0);
   Sphericity_TT_tagFirst_16->SetBorderSize(2);
   Sphericity_TT_tagFirst_16->SetLeftMargin(0.15);
   Sphericity_TT_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_TT_tagFirst_16->SetFrameBorderMode(0);
   Sphericity_TT_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_TT_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__436 = new TH1D("VH_tagFirst_Sphericity__436","",25,0,1);
   VH_tagFirst_Sphericity__436->SetBinContent(1,131191.6);
   VH_tagFirst_Sphericity__436->SetBinContent(2,117031.3);
   VH_tagFirst_Sphericity__436->SetBinContent(3,64681.23);
   VH_tagFirst_Sphericity__436->SetBinContent(4,36808.14);
   VH_tagFirst_Sphericity__436->SetBinContent(5,21147.88);
   VH_tagFirst_Sphericity__436->SetBinContent(6,12018.09);
   VH_tagFirst_Sphericity__436->SetBinContent(7,6896.465);
   VH_tagFirst_Sphericity__436->SetBinContent(8,4159.989);
   VH_tagFirst_Sphericity__436->SetBinContent(9,2697.199);
   VH_tagFirst_Sphericity__436->SetBinContent(10,1833.876);
   VH_tagFirst_Sphericity__436->SetBinContent(11,1298.62);
   VH_tagFirst_Sphericity__436->SetBinContent(12,956.8347);
   VH_tagFirst_Sphericity__436->SetBinContent(13,709.9272);
   VH_tagFirst_Sphericity__436->SetBinContent(14,532.3592);
   VH_tagFirst_Sphericity__436->SetBinContent(15,415.0627);
   VH_tagFirst_Sphericity__436->SetBinContent(16,301.94);
   VH_tagFirst_Sphericity__436->SetBinContent(17,221.2675);
   VH_tagFirst_Sphericity__436->SetBinContent(18,144.2348);
   VH_tagFirst_Sphericity__436->SetBinContent(19,80.70321);
   VH_tagFirst_Sphericity__436->SetBinContent(20,34.26712);
   VH_tagFirst_Sphericity__436->SetBinContent(21,13.40509);
   VH_tagFirst_Sphericity__436->SetBinContent(22,3.832565);
   VH_tagFirst_Sphericity__436->SetBinContent(23,0.7082701);
   VH_tagFirst_Sphericity__436->SetBinContent(24,0.1539116);
   VH_tagFirst_Sphericity__436->SetBinError(1,92.49364);
   VH_tagFirst_Sphericity__436->SetBinError(2,86.60899);
   VH_tagFirst_Sphericity__436->SetBinError(3,64.58076);
   VH_tagFirst_Sphericity__436->SetBinError(4,48.92382);
   VH_tagFirst_Sphericity__436->SetBinError(5,37.23307);
   VH_tagFirst_Sphericity__436->SetBinError(6,28.13832);
   VH_tagFirst_Sphericity__436->SetBinError(7,21.31932);
   VH_tagFirst_Sphericity__436->SetBinError(8,16.58132);
   VH_tagFirst_Sphericity__436->SetBinError(9,13.3711);
   VH_tagFirst_Sphericity__436->SetBinError(10,11.03833);
   VH_tagFirst_Sphericity__436->SetBinError(11,9.300594);
   VH_tagFirst_Sphericity__436->SetBinError(12,8.00611);
   VH_tagFirst_Sphericity__436->SetBinError(13,6.910613);
   VH_tagFirst_Sphericity__436->SetBinError(14,6.001653);
   VH_tagFirst_Sphericity__436->SetBinError(15,5.286379);
   VH_tagFirst_Sphericity__436->SetBinError(16,4.519224);
   VH_tagFirst_Sphericity__436->SetBinError(17,3.859341);
   VH_tagFirst_Sphericity__436->SetBinError(18,3.125816);
   VH_tagFirst_Sphericity__436->SetBinError(19,2.320206);
   VH_tagFirst_Sphericity__436->SetBinError(20,1.503726);
   VH_tagFirst_Sphericity__436->SetBinError(21,0.9522718);
   VH_tagFirst_Sphericity__436->SetBinError(22,0.5204162);
   VH_tagFirst_Sphericity__436->SetBinError(23,0.2136307);
   VH_tagFirst_Sphericity__436->SetBinError(24,0.1103562);
   VH_tagFirst_Sphericity__436->SetEntries(6851129);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__436->SetLineColor(ci);
   VH_tagFirst_Sphericity__436->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__436->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__436->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__436->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__436->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__436->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__436->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__436->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__436->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__436->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__436->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__436->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__436->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__436->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__436->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_TT_tagFirst_16->Modified();
   Sphericity_TT_tagFirst_16->cd();
   Sphericity_TT_tagFirst_16->SetSelected(Sphericity_TT_tagFirst_16);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_tagOnly_18()
{
//=========Macro generated from canvas: Sphericity_SingleTop_tagOnly_18/Sphericity_SingleTop_tagOnly_18
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_tagOnly_18 = new TCanvas("Sphericity_SingleTop_tagOnly_18", "Sphericity_SingleTop_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_tagOnly_18->SetHighLightColor(2);
   Sphericity_SingleTop_tagOnly_18->Range(-0.2,-1575.986,1.133333,14183.88);
   Sphericity_SingleTop_tagOnly_18->SetFillColor(0);
   Sphericity_SingleTop_tagOnly_18->SetFillStyle(4000);
   Sphericity_SingleTop_tagOnly_18->SetBorderMode(0);
   Sphericity_SingleTop_tagOnly_18->SetBorderSize(2);
   Sphericity_SingleTop_tagOnly_18->SetLeftMargin(0.15);
   Sphericity_SingleTop_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagOnly_18->SetFrameBorderMode(0);
   Sphericity_SingleTop_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1161 = new TH1D("VH_tagOnly_Sphericity__1161","",25,0,1);
   VH_tagOnly_Sphericity__1161->SetBinContent(1,12007.51);
   VH_tagOnly_Sphericity__1161->SetBinContent(2,9667.998);
   VH_tagOnly_Sphericity__1161->SetBinContent(3,5716.517);
   VH_tagOnly_Sphericity__1161->SetBinContent(4,3356.35);
   VH_tagOnly_Sphericity__1161->SetBinContent(5,1861.045);
   VH_tagOnly_Sphericity__1161->SetBinContent(6,1045.589);
   VH_tagOnly_Sphericity__1161->SetBinContent(7,563.0711);
   VH_tagOnly_Sphericity__1161->SetBinContent(8,355.1408);
   VH_tagOnly_Sphericity__1161->SetBinContent(9,211.6136);
   VH_tagOnly_Sphericity__1161->SetBinContent(10,144.2127);
   VH_tagOnly_Sphericity__1161->SetBinContent(11,108.4912);
   VH_tagOnly_Sphericity__1161->SetBinContent(12,76.91186);
   VH_tagOnly_Sphericity__1161->SetBinContent(13,52.14282);
   VH_tagOnly_Sphericity__1161->SetBinContent(14,34.84825);
   VH_tagOnly_Sphericity__1161->SetBinContent(15,25.55609);
   VH_tagOnly_Sphericity__1161->SetBinContent(16,19.7846);
   VH_tagOnly_Sphericity__1161->SetBinContent(17,16.45598);
   VH_tagOnly_Sphericity__1161->SetBinContent(18,10.67207);
   VH_tagOnly_Sphericity__1161->SetBinContent(19,5.596267);
   VH_tagOnly_Sphericity__1161->SetBinContent(20,1.904521);
   VH_tagOnly_Sphericity__1161->SetBinContent(21,1.300343);
   VH_tagOnly_Sphericity__1161->SetBinContent(22,0.4015152);
   VH_tagOnly_Sphericity__1161->SetBinError(1,73.50076);
   VH_tagOnly_Sphericity__1161->SetBinError(2,63.90755);
   VH_tagOnly_Sphericity__1161->SetBinError(3,49.6857);
   VH_tagOnly_Sphericity__1161->SetBinError(4,46.13858);
   VH_tagOnly_Sphericity__1161->SetBinError(5,27.65537);
   VH_tagOnly_Sphericity__1161->SetBinError(6,23.1184);
   VH_tagOnly_Sphericity__1161->SetBinError(7,15.8711);
   VH_tagOnly_Sphericity__1161->SetBinError(8,14.01505);
   VH_tagOnly_Sphericity__1161->SetBinError(9,9.866865);
   VH_tagOnly_Sphericity__1161->SetBinError(10,7.800388);
   VH_tagOnly_Sphericity__1161->SetBinError(11,9.654242);
   VH_tagOnly_Sphericity__1161->SetBinError(12,5.797947);
   VH_tagOnly_Sphericity__1161->SetBinError(13,4.376726);
   VH_tagOnly_Sphericity__1161->SetBinError(14,3.899097);
   VH_tagOnly_Sphericity__1161->SetBinError(15,2.836476);
   VH_tagOnly_Sphericity__1161->SetBinError(16,2.419748);
   VH_tagOnly_Sphericity__1161->SetBinError(17,2.580638);
   VH_tagOnly_Sphericity__1161->SetBinError(18,2.029045);
   VH_tagOnly_Sphericity__1161->SetBinError(19,1.414322);
   VH_tagOnly_Sphericity__1161->SetBinError(20,0.9500811);
   VH_tagOnly_Sphericity__1161->SetBinError(21,0.5642375);
   VH_tagOnly_Sphericity__1161->SetBinError(22,0.2797727);
   VH_tagOnly_Sphericity__1161->SetEntries(232514);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1161->SetLineColor(ci);
   VH_tagOnly_Sphericity__1161->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1161->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1161->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1161->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1161->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1161->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1161->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1161->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1161->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1161->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1161->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1161->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1161->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1161->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1161->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_tagOnly_18->Modified();
   Sphericity_SingleTop_tagOnly_18->cd();
   Sphericity_SingleTop_tagOnly_18->SetSelected(Sphericity_SingleTop_tagOnly_18);
}

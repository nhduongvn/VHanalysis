#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_tagFirst_18()
{
//=========Macro generated from canvas: Sphericity_SingleTop_tagFirst_18/Sphericity_SingleTop_tagFirst_18
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_tagFirst_18 = new TCanvas("Sphericity_SingleTop_tagFirst_18", "Sphericity_SingleTop_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_tagFirst_18->SetHighLightColor(2);
   Sphericity_SingleTop_tagFirst_18->Range(-0.2,-1675.541,1.133333,15079.87);
   Sphericity_SingleTop_tagFirst_18->SetFillColor(0);
   Sphericity_SingleTop_tagFirst_18->SetFillStyle(4000);
   Sphericity_SingleTop_tagFirst_18->SetBorderMode(0);
   Sphericity_SingleTop_tagFirst_18->SetBorderSize(2);
   Sphericity_SingleTop_tagFirst_18->SetLeftMargin(0.15);
   Sphericity_SingleTop_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagFirst_18->SetFrameBorderMode(0);
   Sphericity_SingleTop_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__441 = new TH1D("VH_tagFirst_Sphericity__441","",25,0,1);
   VH_tagFirst_Sphericity__441->SetBinContent(1,12766.03);
   VH_tagFirst_Sphericity__441->SetBinContent(2,10213.85);
   VH_tagFirst_Sphericity__441->SetBinContent(3,6037.582);
   VH_tagFirst_Sphericity__441->SetBinContent(4,3550.737);
   VH_tagFirst_Sphericity__441->SetBinContent(5,1974.598);
   VH_tagFirst_Sphericity__441->SetBinContent(6,1112.137);
   VH_tagFirst_Sphericity__441->SetBinContent(7,599.5088);
   VH_tagFirst_Sphericity__441->SetBinContent(8,381.455);
   VH_tagFirst_Sphericity__441->SetBinContent(9,231.8582);
   VH_tagFirst_Sphericity__441->SetBinContent(10,158.8622);
   VH_tagFirst_Sphericity__441->SetBinContent(11,114.347);
   VH_tagFirst_Sphericity__441->SetBinContent(12,82.92703);
   VH_tagFirst_Sphericity__441->SetBinContent(13,62.1784);
   VH_tagFirst_Sphericity__441->SetBinContent(14,37.55188);
   VH_tagFirst_Sphericity__441->SetBinContent(15,29.25172);
   VH_tagFirst_Sphericity__441->SetBinContent(16,21.59726);
   VH_tagFirst_Sphericity__441->SetBinContent(17,18.95734);
   VH_tagFirst_Sphericity__441->SetBinContent(18,12.04333);
   VH_tagFirst_Sphericity__441->SetBinContent(19,7.882556);
   VH_tagFirst_Sphericity__441->SetBinContent(20,2.514125);
   VH_tagFirst_Sphericity__441->SetBinContent(21,1.3489);
   VH_tagFirst_Sphericity__441->SetBinContent(22,0.4015152);
   VH_tagFirst_Sphericity__441->SetBinError(1,76.34734);
   VH_tagFirst_Sphericity__441->SetBinError(2,66.27268);
   VH_tagFirst_Sphericity__441->SetBinError(3,51.60022);
   VH_tagFirst_Sphericity__441->SetBinError(4,47.16024);
   VH_tagFirst_Sphericity__441->SetBinError(5,28.58653);
   VH_tagFirst_Sphericity__441->SetBinError(6,23.83227);
   VH_tagFirst_Sphericity__441->SetBinError(7,16.41813);
   VH_tagFirst_Sphericity__441->SetBinError(8,14.41756);
   VH_tagFirst_Sphericity__441->SetBinError(9,10.47588);
   VH_tagFirst_Sphericity__441->SetBinError(10,8.522857);
   VH_tagFirst_Sphericity__441->SetBinError(11,9.734981);
   VH_tagFirst_Sphericity__441->SetBinError(12,6.025914);
   VH_tagFirst_Sphericity__441->SetBinError(13,5.213849);
   VH_tagFirst_Sphericity__441->SetBinError(14,3.989629);
   VH_tagFirst_Sphericity__441->SetBinError(15,3.065999);
   VH_tagFirst_Sphericity__441->SetBinError(16,2.517029);
   VH_tagFirst_Sphericity__441->SetBinError(17,2.960455);
   VH_tagFirst_Sphericity__441->SetBinError(18,2.186707);
   VH_tagFirst_Sphericity__441->SetBinError(19,1.925732);
   VH_tagFirst_Sphericity__441->SetBinError(20,1.128836);
   VH_tagFirst_Sphericity__441->SetBinError(21,0.566323);
   VH_tagFirst_Sphericity__441->SetBinError(22,0.2797727);
   VH_tagFirst_Sphericity__441->SetEntries(244394);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__441->SetLineColor(ci);
   VH_tagFirst_Sphericity__441->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__441->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__441->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__441->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__441->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__441->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__441->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__441->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__441->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__441->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__441->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__441->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__441->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__441->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__441->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_tagFirst_18->Modified();
   Sphericity_SingleTop_tagFirst_18->cd();
   Sphericity_SingleTop_tagFirst_18->SetSelected(Sphericity_SingleTop_tagFirst_18);
}

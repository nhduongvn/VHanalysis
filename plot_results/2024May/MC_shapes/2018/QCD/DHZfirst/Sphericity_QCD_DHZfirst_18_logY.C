#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Sphericity_QCD_DHZfirst_18/Sphericity_QCD_DHZfirst_18
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_DHZfirst_18 = new TCanvas("Sphericity_QCD_DHZfirst_18", "Sphericity_QCD_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_DHZfirst_18->SetHighLightColor(2);
   Sphericity_QCD_DHZfirst_18->Range(-0.2,0.2985278,1.133333,5.855282);
   Sphericity_QCD_DHZfirst_18->SetFillColor(0);
   Sphericity_QCD_DHZfirst_18->SetFillStyle(4000);
   Sphericity_QCD_DHZfirst_18->SetBorderMode(0);
   Sphericity_QCD_DHZfirst_18->SetBorderSize(2);
   Sphericity_QCD_DHZfirst_18->SetLogy();
   Sphericity_QCD_DHZfirst_18->SetLeftMargin(0.15);
   Sphericity_QCD_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_QCD_DHZfirst_18->SetFrameBorderMode(0);
   Sphericity_QCD_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_QCD_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1869 = new TH1D("VH_DHZfirst_Sphericity__1869","",25,0,1);
   VH_DHZfirst_Sphericity__1869->SetBinContent(1,105210.1);
   VH_DHZfirst_Sphericity__1869->SetBinContent(2,94427.39);
   VH_DHZfirst_Sphericity__1869->SetBinContent(3,46760.51);
   VH_DHZfirst_Sphericity__1869->SetBinContent(4,25134.33);
   VH_DHZfirst_Sphericity__1869->SetBinContent(5,13433.19);
   VH_DHZfirst_Sphericity__1869->SetBinContent(6,5405.713);
   VH_DHZfirst_Sphericity__1869->SetBinContent(7,1408.267);
   VH_DHZfirst_Sphericity__1869->SetBinContent(8,285.653);
   VH_DHZfirst_Sphericity__1869->SetBinContent(9,57.52822);
   VH_DHZfirst_Sphericity__1869->SetBinContent(10,66.31242);
   VH_DHZfirst_Sphericity__1869->SetBinContent(11,30.55283);
   VH_DHZfirst_Sphericity__1869->SetBinContent(12,41.84197);
   VH_DHZfirst_Sphericity__1869->SetBinContent(13,20.73732);
   VH_DHZfirst_Sphericity__1869->SetBinContent(14,14.29661);
   VH_DHZfirst_Sphericity__1869->SetBinError(1,7533.55);
   VH_DHZfirst_Sphericity__1869->SetBinError(2,6739.801);
   VH_DHZfirst_Sphericity__1869->SetBinError(3,4691.35);
   VH_DHZfirst_Sphericity__1869->SetBinError(4,3498.883);
   VH_DHZfirst_Sphericity__1869->SetBinError(5,2466.646);
   VH_DHZfirst_Sphericity__1869->SetBinError(6,1565.089);
   VH_DHZfirst_Sphericity__1869->SetBinError(7,314.9807);
   VH_DHZfirst_Sphericity__1869->SetBinError(8,153.5181);
   VH_DHZfirst_Sphericity__1869->SetBinError(9,34.99331);
   VH_DHZfirst_Sphericity__1869->SetBinError(10,45.17027);
   VH_DHZfirst_Sphericity__1869->SetBinError(11,17.83201);
   VH_DHZfirst_Sphericity__1869->SetBinError(12,33.67406);
   VH_DHZfirst_Sphericity__1869->SetBinError(13,15.6586);
   VH_DHZfirst_Sphericity__1869->SetBinError(14,14.29661);
   VH_DHZfirst_Sphericity__1869->SetEntries(8468);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1869->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1869->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1869->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1869->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1869->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1869->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1869->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1869->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1869->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1869->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1869->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1869->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1869->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1869->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1869->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1869->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_DHZfirst_18->Modified();
   Sphericity_QCD_DHZfirst_18->cd();
   Sphericity_QCD_DHZfirst_18->SetSelected(Sphericity_QCD_DHZfirst_18);
}

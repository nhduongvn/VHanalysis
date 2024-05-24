#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_DHZfirst_17()
{
//=========Macro generated from canvas: Sphericity_ZJets_DHZfirst_17/Sphericity_ZJets_DHZfirst_17
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_DHZfirst_17 = new TCanvas("Sphericity_ZJets_DHZfirst_17", "Sphericity_ZJets_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_DHZfirst_17->SetHighLightColor(2);
   Sphericity_ZJets_DHZfirst_17->Range(-0.2,-55.02259,1.133333,495.2033);
   Sphericity_ZJets_DHZfirst_17->SetFillColor(0);
   Sphericity_ZJets_DHZfirst_17->SetFillStyle(4000);
   Sphericity_ZJets_DHZfirst_17->SetBorderMode(0);
   Sphericity_ZJets_DHZfirst_17->SetBorderSize(2);
   Sphericity_ZJets_DHZfirst_17->SetLeftMargin(0.15);
   Sphericity_ZJets_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_ZJets_DHZfirst_17->SetFrameBorderMode(0);
   Sphericity_ZJets_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_ZJets_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1874 = new TH1D("VH_DHZfirst_Sphericity__1874","",25,0,1);
   VH_DHZfirst_Sphericity__1874->SetBinContent(1,419.2197);
   VH_DHZfirst_Sphericity__1874->SetBinContent(2,332.5048);
   VH_DHZfirst_Sphericity__1874->SetBinContent(3,207.0615);
   VH_DHZfirst_Sphericity__1874->SetBinContent(4,120.1424);
   VH_DHZfirst_Sphericity__1874->SetBinContent(5,64.55552);
   VH_DHZfirst_Sphericity__1874->SetBinContent(6,30.98104);
   VH_DHZfirst_Sphericity__1874->SetBinContent(7,9.445339);
   VH_DHZfirst_Sphericity__1874->SetBinContent(8,2.314315);
   VH_DHZfirst_Sphericity__1874->SetBinContent(9,0.3324166);
   VH_DHZfirst_Sphericity__1874->SetBinContent(10,0.06781609);
   VH_DHZfirst_Sphericity__1874->SetBinContent(11,0.4249006);
   VH_DHZfirst_Sphericity__1874->SetBinContent(12,0.006560615);
   VH_DHZfirst_Sphericity__1874->SetBinContent(14,0.1075587);
   VH_DHZfirst_Sphericity__1874->SetBinContent(15,0.02402017);
   VH_DHZfirst_Sphericity__1874->SetBinContent(17,0.04826377);
   VH_DHZfirst_Sphericity__1874->SetBinError(1,13.61781);
   VH_DHZfirst_Sphericity__1874->SetBinError(2,14.17272);
   VH_DHZfirst_Sphericity__1874->SetBinError(3,9.762259);
   VH_DHZfirst_Sphericity__1874->SetBinError(4,10.28222);
   VH_DHZfirst_Sphericity__1874->SetBinError(5,5.220847);
   VH_DHZfirst_Sphericity__1874->SetBinError(6,3.297008);
   VH_DHZfirst_Sphericity__1874->SetBinError(7,1.720748);
   VH_DHZfirst_Sphericity__1874->SetBinError(8,0.8006075);
   VH_DHZfirst_Sphericity__1874->SetBinError(9,0.1450052);
   VH_DHZfirst_Sphericity__1874->SetBinError(10,0.06781609);
   VH_DHZfirst_Sphericity__1874->SetBinError(11,0.2545659);
   VH_DHZfirst_Sphericity__1874->SetBinError(12,0.006560615);
   VH_DHZfirst_Sphericity__1874->SetBinError(14,0.1075587);
   VH_DHZfirst_Sphericity__1874->SetBinError(15,0.02402017);
   VH_DHZfirst_Sphericity__1874->SetBinError(17,0.04826377);
   VH_DHZfirst_Sphericity__1874->SetEntries(8198);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1874->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1874->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1874->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1874->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1874->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1874->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1874->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1874->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1874->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1874->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1874->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1874->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1874->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1874->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1874->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1874->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_DHZfirst_17->Modified();
   Sphericity_ZJets_DHZfirst_17->cd();
   Sphericity_ZJets_DHZfirst_17->SetSelected(Sphericity_ZJets_DHZfirst_17);
}

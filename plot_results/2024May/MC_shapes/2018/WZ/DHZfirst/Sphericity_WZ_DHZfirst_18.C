#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_DHZfirst_18()
{
//=========Macro generated from canvas: Sphericity_WZ_DHZfirst_18/Sphericity_WZ_DHZfirst_18
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_DHZfirst_18 = new TCanvas("Sphericity_WZ_DHZfirst_18", "Sphericity_WZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_DHZfirst_18->SetHighLightColor(2);
   Sphericity_WZ_DHZfirst_18->Range(-0.2,-2.952681,1.133333,26.57413);
   Sphericity_WZ_DHZfirst_18->SetFillColor(0);
   Sphericity_WZ_DHZfirst_18->SetFillStyle(4000);
   Sphericity_WZ_DHZfirst_18->SetBorderMode(0);
   Sphericity_WZ_DHZfirst_18->SetBorderSize(2);
   Sphericity_WZ_DHZfirst_18->SetLeftMargin(0.15);
   Sphericity_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_WZ_DHZfirst_18->SetFrameBorderMode(0);
   Sphericity_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_WZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1887 = new TH1D("VH_DHZfirst_Sphericity__1887","",25,0,1);
   VH_DHZfirst_Sphericity__1887->SetBinContent(1,22.49662);
   VH_DHZfirst_Sphericity__1887->SetBinContent(2,11.37759);
   VH_DHZfirst_Sphericity__1887->SetBinContent(3,8.938077);
   VH_DHZfirst_Sphericity__1887->SetBinContent(4,5.999717);
   VH_DHZfirst_Sphericity__1887->SetBinContent(5,2.9256);
   VH_DHZfirst_Sphericity__1887->SetBinContent(6,2.568273);
   VH_DHZfirst_Sphericity__1887->SetBinContent(7,0.8986731);
   VH_DHZfirst_Sphericity__1887->SetBinError(1,4.499674);
   VH_DHZfirst_Sphericity__1887->SetBinError(2,2.746347);
   VH_DHZfirst_Sphericity__1887->SetBinError(3,2.510544);
   VH_DHZfirst_Sphericity__1887->SetBinError(4,2.22969);
   VH_DHZfirst_Sphericity__1887->SetBinError(5,1.52894);
   VH_DHZfirst_Sphericity__1887->SetBinError(6,1.563658);
   VH_DHZfirst_Sphericity__1887->SetBinError(7,0.6735365);
   VH_DHZfirst_Sphericity__1887->SetEntries(90);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1887->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1887->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1887->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1887->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1887->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1887->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1887->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1887->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1887->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1887->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1887->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1887->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1887->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1887->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1887->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1887->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_DHZfirst_18->Modified();
   Sphericity_WZ_DHZfirst_18->cd();
   Sphericity_WZ_DHZfirst_18->SetSelected(Sphericity_WZ_DHZfirst_18);
}

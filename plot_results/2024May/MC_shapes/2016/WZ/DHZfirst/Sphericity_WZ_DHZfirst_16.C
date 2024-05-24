#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_DHZfirst_16()
{
//=========Macro generated from canvas: Sphericity_WZ_DHZfirst_16/Sphericity_WZ_DHZfirst_16
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_DHZfirst_16 = new TCanvas("Sphericity_WZ_DHZfirst_16", "Sphericity_WZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_DHZfirst_16->SetHighLightColor(2);
   Sphericity_WZ_DHZfirst_16->Range(-0.2,-2.065629,1.133333,18.59066);
   Sphericity_WZ_DHZfirst_16->SetFillColor(0);
   Sphericity_WZ_DHZfirst_16->SetFillStyle(4000);
   Sphericity_WZ_DHZfirst_16->SetBorderMode(0);
   Sphericity_WZ_DHZfirst_16->SetBorderSize(2);
   Sphericity_WZ_DHZfirst_16->SetLeftMargin(0.15);
   Sphericity_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_WZ_DHZfirst_16->SetFrameBorderMode(0);
   Sphericity_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_WZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1885 = new TH1D("VH_DHZfirst_Sphericity__1885","",25,0,1);
   VH_DHZfirst_Sphericity__1885->SetBinContent(1,15.73812);
   VH_DHZfirst_Sphericity__1885->SetBinContent(2,10.99214);
   VH_DHZfirst_Sphericity__1885->SetBinContent(3,7.245091);
   VH_DHZfirst_Sphericity__1885->SetBinContent(4,4.046132);
   VH_DHZfirst_Sphericity__1885->SetBinContent(5,2.620221);
   VH_DHZfirst_Sphericity__1885->SetBinContent(6,1.589063);
   VH_DHZfirst_Sphericity__1885->SetBinContent(7,0.2032813);
   VH_DHZfirst_Sphericity__1885->SetBinContent(8,0.03842012);
   VH_DHZfirst_Sphericity__1885->SetBinContent(13,0.07623354);
   VH_DHZfirst_Sphericity__1885->SetBinError(1,1.226511);
   VH_DHZfirst_Sphericity__1885->SetBinError(2,1.007895);
   VH_DHZfirst_Sphericity__1885->SetBinError(3,0.8159006);
   VH_DHZfirst_Sphericity__1885->SetBinError(4,0.6208211);
   VH_DHZfirst_Sphericity__1885->SetBinError(5,0.5023127);
   VH_DHZfirst_Sphericity__1885->SetBinError(6,0.3901027);
   VH_DHZfirst_Sphericity__1885->SetBinError(7,0.1439145);
   VH_DHZfirst_Sphericity__1885->SetBinError(8,0.03842012);
   VH_DHZfirst_Sphericity__1885->SetBinError(13,0.07623354);
   VH_DHZfirst_Sphericity__1885->SetEntries(469);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1885->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1885->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1885->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1885->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1885->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1885->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1885->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1885->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1885->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1885->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1885->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1885->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1885->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1885->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1885->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1885->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_DHZfirst_16->Modified();
   Sphericity_WZ_DHZfirst_16->cd();
   Sphericity_WZ_DHZfirst_16->SetSelected(Sphericity_WZ_DHZfirst_16);
}

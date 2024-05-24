#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Sphericity_ZZ_DHZfirst_18/Sphericity_ZZ_DHZfirst_18
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_DHZfirst_18 = new TCanvas("Sphericity_ZZ_DHZfirst_18", "Sphericity_ZZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_DHZfirst_18->SetHighLightColor(2);
   Sphericity_ZZ_DHZfirst_18->Range(-0.2,-0.3525493,1.133333,1.562998);
   Sphericity_ZZ_DHZfirst_18->SetFillColor(0);
   Sphericity_ZZ_DHZfirst_18->SetFillStyle(4000);
   Sphericity_ZZ_DHZfirst_18->SetBorderMode(0);
   Sphericity_ZZ_DHZfirst_18->SetBorderSize(2);
   Sphericity_ZZ_DHZfirst_18->SetLogy();
   Sphericity_ZZ_DHZfirst_18->SetLeftMargin(0.15);
   Sphericity_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   Sphericity_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1890 = new TH1D("VH_DHZfirst_Sphericity__1890","",25,0,1);
   VH_DHZfirst_Sphericity__1890->SetBinContent(1,12.41351);
   VH_DHZfirst_Sphericity__1890->SetBinContent(2,7.534765);
   VH_DHZfirst_Sphericity__1890->SetBinContent(3,5.599269);
   VH_DHZfirst_Sphericity__1890->SetBinContent(4,3.277373);
   VH_DHZfirst_Sphericity__1890->SetBinContent(5,5.300031);
   VH_DHZfirst_Sphericity__1890->SetBinContent(6,1.602045);
   VH_DHZfirst_Sphericity__1890->SetBinContent(7,1.380497);
   VH_DHZfirst_Sphericity__1890->SetBinError(1,2.373226);
   VH_DHZfirst_Sphericity__1890->SetBinError(2,1.651512);
   VH_DHZfirst_Sphericity__1890->SetBinError(3,1.848396);
   VH_DHZfirst_Sphericity__1890->SetBinError(4,1.295455);
   VH_DHZfirst_Sphericity__1890->SetBinError(5,1.659975);
   VH_DHZfirst_Sphericity__1890->SetBinError(6,0.683594);
   VH_DHZfirst_Sphericity__1890->SetBinError(7,1.001456);
   VH_DHZfirst_Sphericity__1890->SetEntries(93);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1890->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1890->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1890->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1890->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1890->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1890->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1890->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1890->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1890->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1890->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1890->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1890->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1890->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1890->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1890->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1890->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_DHZfirst_18->Modified();
   Sphericity_ZZ_DHZfirst_18->cd();
   Sphericity_ZZ_DHZfirst_18->SetSelected(Sphericity_ZZ_DHZfirst_18);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_TT_DHZfirst_18()
{
//=========Macro generated from canvas: Aplanarity_TT_DHZfirst_18/Aplanarity_TT_DHZfirst_18
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_TT_DHZfirst_18 = new TCanvas("Aplanarity_TT_DHZfirst_18", "Aplanarity_TT_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_TT_DHZfirst_18->SetHighLightColor(2);
   Aplanarity_TT_DHZfirst_18->Range(-0.2,-3676.84,1.133333,33091.56);
   Aplanarity_TT_DHZfirst_18->SetFillColor(0);
   Aplanarity_TT_DHZfirst_18->SetFillStyle(4000);
   Aplanarity_TT_DHZfirst_18->SetBorderMode(0);
   Aplanarity_TT_DHZfirst_18->SetBorderSize(2);
   Aplanarity_TT_DHZfirst_18->SetLeftMargin(0.15);
   Aplanarity_TT_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_TT_DHZfirst_18->SetFrameBorderMode(0);
   Aplanarity_TT_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_TT_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1908 = new TH1D("VH_DHZfirst_Aplanarity__1908","",50,0,1);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(1,28014.02);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(2,3639.161);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(3,788.92);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(4,225.7167);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(5,77.13615);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(6,33.88832);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(7,13.90179);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(8,4.90946);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(9,3.592016);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(10,2.998209);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(11,1.136095);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(12,0.735693);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(13,0.6043545);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(15,0.1089219);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(17,0.05716526);
   VH_DHZfirst_Aplanarity__1908->SetBinContent(18,0.1275447);
   VH_DHZfirst_Aplanarity__1908->SetBinError(1,72.65565);
   VH_DHZfirst_Aplanarity__1908->SetBinError(2,26.1982);
   VH_DHZfirst_Aplanarity__1908->SetBinError(3,12.10554);
   VH_DHZfirst_Aplanarity__1908->SetBinError(4,6.558129);
   VH_DHZfirst_Aplanarity__1908->SetBinError(5,3.773789);
   VH_DHZfirst_Aplanarity__1908->SetBinError(6,2.661912);
   VH_DHZfirst_Aplanarity__1908->SetBinError(7,1.568601);
   VH_DHZfirst_Aplanarity__1908->SetBinError(8,0.8476712);
   VH_DHZfirst_Aplanarity__1908->SetBinError(9,0.8978681);
   VH_DHZfirst_Aplanarity__1908->SetBinError(10,0.6587216);
   VH_DHZfirst_Aplanarity__1908->SetBinError(11,0.369547);
   VH_DHZfirst_Aplanarity__1908->SetBinError(12,0.3871122);
   VH_DHZfirst_Aplanarity__1908->SetBinError(13,0.3828349);
   VH_DHZfirst_Aplanarity__1908->SetBinError(15,0.07884187);
   VH_DHZfirst_Aplanarity__1908->SetBinError(17,0.05716526);
   VH_DHZfirst_Aplanarity__1908->SetBinError(18,0.07544577);
   VH_DHZfirst_Aplanarity__1908->SetEntries(285831);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1908->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1908->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1908->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1908->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1908->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1908->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1908->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1908->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1908->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1908->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1908->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1908->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1908->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1908->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1908->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1908->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_TT_DHZfirst_18->Modified();
   Aplanarity_TT_DHZfirst_18->cd();
   Aplanarity_TT_DHZfirst_18->SetSelected(Aplanarity_TT_DHZfirst_18);
}

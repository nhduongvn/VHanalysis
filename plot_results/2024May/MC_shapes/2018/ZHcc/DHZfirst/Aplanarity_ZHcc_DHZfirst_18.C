#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_DHZfirst_18()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_DHZfirst_18/Aplanarity_ZHcc_DHZfirst_18
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_DHZfirst_18 = new TCanvas("Aplanarity_ZHcc_DHZfirst_18", "Aplanarity_ZHcc_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_DHZfirst_18->SetHighLightColor(2);
   Aplanarity_ZHcc_DHZfirst_18->Range(-0.2,-0.1025409,1.133333,0.9228676);
   Aplanarity_ZHcc_DHZfirst_18->SetFillColor(0);
   Aplanarity_ZHcc_DHZfirst_18->SetFillStyle(4000);
   Aplanarity_ZHcc_DHZfirst_18->SetBorderMode(0);
   Aplanarity_ZHcc_DHZfirst_18->SetBorderSize(2);
   Aplanarity_ZHcc_DHZfirst_18->SetLeftMargin(0.15);
   Aplanarity_ZHcc_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_DHZfirst_18->SetFrameBorderMode(0);
   Aplanarity_ZHcc_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1893 = new TH1D("VH_DHZfirst_Aplanarity__1893","",50,0,1);
   VH_DHZfirst_Aplanarity__1893->SetBinContent(1,0.7812636);
   VH_DHZfirst_Aplanarity__1893->SetBinContent(2,0.05204374);
   VH_DHZfirst_Aplanarity__1893->SetBinContent(3,0.02031456);
   VH_DHZfirst_Aplanarity__1893->SetBinContent(4,0.0003284004);
   VH_DHZfirst_Aplanarity__1893->SetBinContent(5,0.0006085905);
   VH_DHZfirst_Aplanarity__1893->SetBinError(1,0.0424159);
   VH_DHZfirst_Aplanarity__1893->SetBinError(2,0.01126494);
   VH_DHZfirst_Aplanarity__1893->SetBinError(3,0.01097835);
   VH_DHZfirst_Aplanarity__1893->SetBinError(4,0.0003284004);
   VH_DHZfirst_Aplanarity__1893->SetBinError(5,0.0006085905);
   VH_DHZfirst_Aplanarity__1893->SetEntries(830);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1893->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1893->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1893->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1893->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1893->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1893->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1893->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1893->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1893->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1893->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1893->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1893->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1893->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1893->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1893->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1893->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_DHZfirst_18->Modified();
   Aplanarity_ZHcc_DHZfirst_18->cd();
   Aplanarity_ZHcc_DHZfirst_18->SetSelected(Aplanarity_ZHcc_DHZfirst_18);
}

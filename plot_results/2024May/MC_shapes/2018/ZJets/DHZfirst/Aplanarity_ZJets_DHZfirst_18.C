#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_DHZfirst_18()
{
//=========Macro generated from canvas: Aplanarity_ZJets_DHZfirst_18/Aplanarity_ZJets_DHZfirst_18
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_DHZfirst_18 = new TCanvas("Aplanarity_ZJets_DHZfirst_18", "Aplanarity_ZJets_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_DHZfirst_18->SetHighLightColor(2);
   Aplanarity_ZJets_DHZfirst_18->Range(-0.2,-319.8354,1.133333,2878.518);
   Aplanarity_ZJets_DHZfirst_18->SetFillColor(0);
   Aplanarity_ZJets_DHZfirst_18->SetFillStyle(4000);
   Aplanarity_ZJets_DHZfirst_18->SetBorderMode(0);
   Aplanarity_ZJets_DHZfirst_18->SetBorderSize(2);
   Aplanarity_ZJets_DHZfirst_18->SetLeftMargin(0.15);
   Aplanarity_ZJets_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZJets_DHZfirst_18->SetFrameBorderMode(0);
   Aplanarity_ZJets_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZJets_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1905 = new TH1D("VH_DHZfirst_Aplanarity__1905","",50,0,1);
   VH_DHZfirst_Aplanarity__1905->SetBinContent(1,2436.841);
   VH_DHZfirst_Aplanarity__1905->SetBinContent(2,217.6498);
   VH_DHZfirst_Aplanarity__1905->SetBinContent(3,38.18852);
   VH_DHZfirst_Aplanarity__1905->SetBinContent(4,7.433811);
   VH_DHZfirst_Aplanarity__1905->SetBinContent(5,0.5969102);
   VH_DHZfirst_Aplanarity__1905->SetBinContent(6,0.1452474);
   VH_DHZfirst_Aplanarity__1905->SetBinContent(7,0.1265579);
   VH_DHZfirst_Aplanarity__1905->SetBinError(1,48.69593);
   VH_DHZfirst_Aplanarity__1905->SetBinError(2,14.64556);
   VH_DHZfirst_Aplanarity__1905->SetBinError(3,5.300676);
   VH_DHZfirst_Aplanarity__1905->SetBinError(4,1.950316);
   VH_DHZfirst_Aplanarity__1905->SetBinError(5,0.3019395);
   VH_DHZfirst_Aplanarity__1905->SetBinError(6,0.1452474);
   VH_DHZfirst_Aplanarity__1905->SetBinError(7,0.1265579);
   VH_DHZfirst_Aplanarity__1905->SetEntries(8398);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1905->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1905->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1905->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1905->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1905->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1905->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1905->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1905->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1905->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1905->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1905->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1905->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1905->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1905->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1905->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1905->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_DHZfirst_18->Modified();
   Aplanarity_ZJets_DHZfirst_18->cd();
   Aplanarity_ZJets_DHZfirst_18->SetSelected(Aplanarity_ZJets_DHZfirst_18);
}

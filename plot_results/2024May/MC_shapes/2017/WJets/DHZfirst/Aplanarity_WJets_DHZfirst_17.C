#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_DHZfirst_17()
{
//=========Macro generated from canvas: Aplanarity_WJets_DHZfirst_17/Aplanarity_WJets_DHZfirst_17
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_DHZfirst_17 = new TCanvas("Aplanarity_WJets_DHZfirst_17", "Aplanarity_WJets_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_DHZfirst_17->SetHighLightColor(2);
   Aplanarity_WJets_DHZfirst_17->Range(-0.2,-71.79326,1.133333,646.1393);
   Aplanarity_WJets_DHZfirst_17->SetFillColor(0);
   Aplanarity_WJets_DHZfirst_17->SetFillStyle(4000);
   Aplanarity_WJets_DHZfirst_17->SetBorderMode(0);
   Aplanarity_WJets_DHZfirst_17->SetBorderSize(2);
   Aplanarity_WJets_DHZfirst_17->SetLeftMargin(0.15);
   Aplanarity_WJets_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_WJets_DHZfirst_17->SetFrameBorderMode(0);
   Aplanarity_WJets_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_WJets_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1901 = new TH1D("VH_DHZfirst_Aplanarity__1901","",50,0,1);
   VH_DHZfirst_Aplanarity__1901->SetBinContent(1,546.9962);
   VH_DHZfirst_Aplanarity__1901->SetBinContent(2,38.03271);
   VH_DHZfirst_Aplanarity__1901->SetBinContent(3,6.671068);
   VH_DHZfirst_Aplanarity__1901->SetBinContent(4,0.4582944);
   VH_DHZfirst_Aplanarity__1901->SetBinContent(5,0.098175);
   VH_DHZfirst_Aplanarity__1901->SetBinContent(7,0.07349531);
   VH_DHZfirst_Aplanarity__1901->SetBinError(1,25.83034);
   VH_DHZfirst_Aplanarity__1901->SetBinError(2,5.585075);
   VH_DHZfirst_Aplanarity__1901->SetBinError(3,1.971291);
   VH_DHZfirst_Aplanarity__1901->SetBinError(4,0.2475475);
   VH_DHZfirst_Aplanarity__1901->SetBinError(5,0.098175);
   VH_DHZfirst_Aplanarity__1901->SetBinError(7,0.07349531);
   VH_DHZfirst_Aplanarity__1901->SetEntries(3550);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1901->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1901->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1901->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1901->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1901->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1901->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1901->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1901->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1901->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1901->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1901->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1901->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1901->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1901->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1901->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1901->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_DHZfirst_17->Modified();
   Aplanarity_WJets_DHZfirst_17->cd();
   Aplanarity_WJets_DHZfirst_17->SetSelected(Aplanarity_WJets_DHZfirst_17);
}

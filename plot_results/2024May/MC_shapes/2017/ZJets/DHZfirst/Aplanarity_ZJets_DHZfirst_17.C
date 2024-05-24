#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_DHZfirst_17()
{
//=========Macro generated from canvas: Aplanarity_ZJets_DHZfirst_17/Aplanarity_ZJets_DHZfirst_17
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_DHZfirst_17 = new TCanvas("Aplanarity_ZJets_DHZfirst_17", "Aplanarity_ZJets_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_DHZfirst_17->SetHighLightColor(2);
   Aplanarity_ZJets_DHZfirst_17->Range(-0.2,-139.8896,1.133333,1259.006);
   Aplanarity_ZJets_DHZfirst_17->SetFillColor(0);
   Aplanarity_ZJets_DHZfirst_17->SetFillStyle(4000);
   Aplanarity_ZJets_DHZfirst_17->SetBorderMode(0);
   Aplanarity_ZJets_DHZfirst_17->SetBorderSize(2);
   Aplanarity_ZJets_DHZfirst_17->SetLeftMargin(0.15);
   Aplanarity_ZJets_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZJets_DHZfirst_17->SetFrameBorderMode(0);
   Aplanarity_ZJets_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZJets_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1904 = new TH1D("VH_DHZfirst_Aplanarity__1904","",50,0,1);
   VH_DHZfirst_Aplanarity__1904->SetBinContent(1,1065.825);
   VH_DHZfirst_Aplanarity__1904->SetBinContent(2,100.301);
   VH_DHZfirst_Aplanarity__1904->SetBinContent(3,16.8989);
   VH_DHZfirst_Aplanarity__1904->SetBinContent(4,3.654341);
   VH_DHZfirst_Aplanarity__1904->SetBinContent(5,0.4007684);
   VH_DHZfirst_Aplanarity__1904->SetBinContent(7,0.1558225);
   VH_DHZfirst_Aplanarity__1904->SetBinError(1,22.96057);
   VH_DHZfirst_Aplanarity__1904->SetBinError(2,9.540684);
   VH_DHZfirst_Aplanarity__1904->SetBinError(3,3.159102);
   VH_DHZfirst_Aplanarity__1904->SetBinError(4,0.9655403);
   VH_DHZfirst_Aplanarity__1904->SetBinError(5,0.1796644);
   VH_DHZfirst_Aplanarity__1904->SetBinError(7,0.1178909);
   VH_DHZfirst_Aplanarity__1904->SetEntries(8198);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1904->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1904->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1904->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1904->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1904->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1904->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1904->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1904->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1904->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1904->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1904->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1904->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1904->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1904->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1904->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1904->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_DHZfirst_17->Modified();
   Aplanarity_ZJets_DHZfirst_17->cd();
   Aplanarity_ZJets_DHZfirst_17->SetSelected(Aplanarity_ZJets_DHZfirst_17);
}

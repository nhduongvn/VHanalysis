#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Aplanarity_WJets_DHZfirst_16/Aplanarity_WJets_DHZfirst_16
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_DHZfirst_16 = new TCanvas("Aplanarity_WJets_DHZfirst_16", "Aplanarity_WJets_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_DHZfirst_16->SetHighLightColor(2);
   Aplanarity_WJets_DHZfirst_16->Range(-0.2,-2.064314,1.133333,3.885454);
   Aplanarity_WJets_DHZfirst_16->SetFillColor(0);
   Aplanarity_WJets_DHZfirst_16->SetFillStyle(4000);
   Aplanarity_WJets_DHZfirst_16->SetBorderMode(0);
   Aplanarity_WJets_DHZfirst_16->SetBorderSize(2);
   Aplanarity_WJets_DHZfirst_16->SetLogy();
   Aplanarity_WJets_DHZfirst_16->SetLeftMargin(0.15);
   Aplanarity_WJets_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_WJets_DHZfirst_16->SetFrameBorderMode(0);
   Aplanarity_WJets_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_WJets_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1900 = new TH1D("VH_DHZfirst_Aplanarity__1900","",50,0,1);
   VH_DHZfirst_Aplanarity__1900->SetBinContent(1,1030.217);
   VH_DHZfirst_Aplanarity__1900->SetBinContent(2,105.6015);
   VH_DHZfirst_Aplanarity__1900->SetBinContent(3,25.19947);
   VH_DHZfirst_Aplanarity__1900->SetBinContent(4,3.741808);
   VH_DHZfirst_Aplanarity__1900->SetBinContent(5,2.307108);
   VH_DHZfirst_Aplanarity__1900->SetBinContent(7,0.06787235);
   VH_DHZfirst_Aplanarity__1900->SetBinContent(11,0.1352765);
   VH_DHZfirst_Aplanarity__1900->SetBinError(1,36.26475);
   VH_DHZfirst_Aplanarity__1900->SetBinError(2,14.24736);
   VH_DHZfirst_Aplanarity__1900->SetBinError(3,7.369983);
   VH_DHZfirst_Aplanarity__1900->SetBinError(4,1.67375);
   VH_DHZfirst_Aplanarity__1900->SetBinError(5,1.457713);
   VH_DHZfirst_Aplanarity__1900->SetBinError(7,0.06787235);
   VH_DHZfirst_Aplanarity__1900->SetBinError(11,0.1352765);
   VH_DHZfirst_Aplanarity__1900->SetEntries(9167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1900->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1900->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1900->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1900->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1900->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1900->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1900->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1900->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1900->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1900->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1900->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1900->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1900->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1900->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1900->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1900->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_DHZfirst_16->Modified();
   Aplanarity_WJets_DHZfirst_16->cd();
   Aplanarity_WJets_DHZfirst_16->SetSelected(Aplanarity_WJets_DHZfirst_16);
}

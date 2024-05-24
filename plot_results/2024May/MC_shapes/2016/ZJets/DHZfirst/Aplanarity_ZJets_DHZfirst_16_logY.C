#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Aplanarity_ZJets_DHZfirst_16/Aplanarity_ZJets_DHZfirst_16
//=========  (Thu May 23 20:48:52 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_DHZfirst_16 = new TCanvas("Aplanarity_ZJets_DHZfirst_16", "Aplanarity_ZJets_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_DHZfirst_16->SetHighLightColor(2);
   Aplanarity_ZJets_DHZfirst_16->Range(-0.2,-2.584918,1.133333,4.20729);
   Aplanarity_ZJets_DHZfirst_16->SetFillColor(0);
   Aplanarity_ZJets_DHZfirst_16->SetFillStyle(4000);
   Aplanarity_ZJets_DHZfirst_16->SetBorderMode(0);
   Aplanarity_ZJets_DHZfirst_16->SetBorderSize(2);
   Aplanarity_ZJets_DHZfirst_16->SetLogy();
   Aplanarity_ZJets_DHZfirst_16->SetLeftMargin(0.15);
   Aplanarity_ZJets_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZJets_DHZfirst_16->SetFrameBorderMode(0);
   Aplanarity_ZJets_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZJets_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1903 = new TH1D("VH_DHZfirst_Aplanarity__1903","",50,0,1);
   VH_DHZfirst_Aplanarity__1903->SetBinContent(1,1780.412);
   VH_DHZfirst_Aplanarity__1903->SetBinContent(2,171.307);
   VH_DHZfirst_Aplanarity__1903->SetBinContent(3,37.19621);
   VH_DHZfirst_Aplanarity__1903->SetBinContent(4,7.479325);
   VH_DHZfirst_Aplanarity__1903->SetBinContent(5,1.842683);
   VH_DHZfirst_Aplanarity__1903->SetBinContent(6,0.06360331);
   VH_DHZfirst_Aplanarity__1903->SetBinContent(8,0.02485038);
   VH_DHZfirst_Aplanarity__1903->SetBinError(1,30.56344);
   VH_DHZfirst_Aplanarity__1903->SetBinError(2,11.48331);
   VH_DHZfirst_Aplanarity__1903->SetBinError(3,5.850341);
   VH_DHZfirst_Aplanarity__1903->SetBinError(4,2.950362);
   VH_DHZfirst_Aplanarity__1903->SetBinError(5,0.5480508);
   VH_DHZfirst_Aplanarity__1903->SetBinError(6,0.06360331);
   VH_DHZfirst_Aplanarity__1903->SetBinError(8,0.02485038);
   VH_DHZfirst_Aplanarity__1903->SetEntries(15554);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1903->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1903->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1903->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1903->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1903->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1903->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1903->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1903->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1903->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1903->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1903->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1903->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1903->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1903->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1903->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1903->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_DHZfirst_16->Modified();
   Aplanarity_ZJets_DHZfirst_16->cd();
   Aplanarity_ZJets_DHZfirst_16->SetSelected(Aplanarity_ZJets_DHZfirst_16);
}

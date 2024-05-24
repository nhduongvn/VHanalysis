#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_tagOnly_16()
{
//=========Macro generated from canvas: Aplanarity_ZJets_tagOnly_16/Aplanarity_ZJets_tagOnly_16
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_tagOnly_16 = new TCanvas("Aplanarity_ZJets_tagOnly_16", "Aplanarity_ZJets_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_tagOnly_16->SetHighLightColor(2);
   Aplanarity_ZJets_tagOnly_16->Range(-0.2,-1948.432,1.133333,17535.89);
   Aplanarity_ZJets_tagOnly_16->SetFillColor(0);
   Aplanarity_ZJets_tagOnly_16->SetFillStyle(4000);
   Aplanarity_ZJets_tagOnly_16->SetBorderMode(0);
   Aplanarity_ZJets_tagOnly_16->SetBorderSize(2);
   Aplanarity_ZJets_tagOnly_16->SetLeftMargin(0.15);
   Aplanarity_ZJets_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagOnly_16->SetFrameBorderMode(0);
   Aplanarity_ZJets_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1183 = new TH1D("VH_tagOnly_Aplanarity__1183","",50,0,1);
   VH_tagOnly_Aplanarity__1183->SetBinContent(1,14845.19);
   VH_tagOnly_Aplanarity__1183->SetBinContent(2,1692.327);
   VH_tagOnly_Aplanarity__1183->SetBinContent(3,435.4886);
   VH_tagOnly_Aplanarity__1183->SetBinContent(4,139.0449);
   VH_tagOnly_Aplanarity__1183->SetBinContent(5,56.4722);
   VH_tagOnly_Aplanarity__1183->SetBinContent(6,24.9162);
   VH_tagOnly_Aplanarity__1183->SetBinContent(7,15.90951);
   VH_tagOnly_Aplanarity__1183->SetBinContent(8,7.604233);
   VH_tagOnly_Aplanarity__1183->SetBinContent(9,3.176311);
   VH_tagOnly_Aplanarity__1183->SetBinContent(10,7.6881);
   VH_tagOnly_Aplanarity__1183->SetBinContent(11,1.89743);
   VH_tagOnly_Aplanarity__1183->SetBinContent(12,1.570758);
   VH_tagOnly_Aplanarity__1183->SetBinContent(13,0.6730252);
   VH_tagOnly_Aplanarity__1183->SetBinContent(14,0.7635971);
   VH_tagOnly_Aplanarity__1183->SetBinContent(15,0.1484544);
   VH_tagOnly_Aplanarity__1183->SetBinContent(16,0.3193688);
   VH_tagOnly_Aplanarity__1183->SetBinError(1,76.4959);
   VH_tagOnly_Aplanarity__1183->SetBinError(2,30.19506);
   VH_tagOnly_Aplanarity__1183->SetBinError(3,15.70836);
   VH_tagOnly_Aplanarity__1183->SetBinError(4,8.776631);
   VH_tagOnly_Aplanarity__1183->SetBinError(5,5.078821);
   VH_tagOnly_Aplanarity__1183->SetBinError(6,2.494745);
   VH_tagOnly_Aplanarity__1183->SetBinError(7,1.479625);
   VH_tagOnly_Aplanarity__1183->SetBinError(8,0.9728364);
   VH_tagOnly_Aplanarity__1183->SetBinError(9,0.5333101);
   VH_tagOnly_Aplanarity__1183->SetBinError(10,3.098189);
   VH_tagOnly_Aplanarity__1183->SetBinError(11,0.4796581);
   VH_tagOnly_Aplanarity__1183->SetBinError(12,0.4514099);
   VH_tagOnly_Aplanarity__1183->SetBinError(13,0.2162553);
   VH_tagOnly_Aplanarity__1183->SetBinError(14,0.3451599);
   VH_tagOnly_Aplanarity__1183->SetBinError(15,0.1072434);
   VH_tagOnly_Aplanarity__1183->SetBinError(16,0.2608187);
   VH_tagOnly_Aplanarity__1183->SetEntries(161332);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1183->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1183->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1183->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1183->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1183->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1183->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1183->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1183->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1183->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1183->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1183->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1183->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1183->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1183->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1183->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1183->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_tagOnly_16->Modified();
   Aplanarity_ZJets_tagOnly_16->cd();
   Aplanarity_ZJets_tagOnly_16->SetSelected(Aplanarity_ZJets_tagOnly_16);
}

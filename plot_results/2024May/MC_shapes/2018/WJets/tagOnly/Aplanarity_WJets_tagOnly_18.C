#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_WJets_tagOnly_18/Aplanarity_WJets_tagOnly_18
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_tagOnly_18 = new TCanvas("Aplanarity_WJets_tagOnly_18", "Aplanarity_WJets_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_tagOnly_18->SetHighLightColor(2);
   Aplanarity_WJets_tagOnly_18->Range(-0.2,-1485.591,1.133333,13370.32);
   Aplanarity_WJets_tagOnly_18->SetFillColor(0);
   Aplanarity_WJets_tagOnly_18->SetFillStyle(4000);
   Aplanarity_WJets_tagOnly_18->SetBorderMode(0);
   Aplanarity_WJets_tagOnly_18->SetBorderSize(2);
   Aplanarity_WJets_tagOnly_18->SetLeftMargin(0.15);
   Aplanarity_WJets_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagOnly_18->SetFrameBorderMode(0);
   Aplanarity_WJets_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1182 = new TH1D("VH_tagOnly_Aplanarity__1182","",50,0,1);
   VH_tagOnly_Aplanarity__1182->SetBinContent(1,11318.79);
   VH_tagOnly_Aplanarity__1182->SetBinContent(2,1169.579);
   VH_tagOnly_Aplanarity__1182->SetBinContent(3,349.204);
   VH_tagOnly_Aplanarity__1182->SetBinContent(4,123.0298);
   VH_tagOnly_Aplanarity__1182->SetBinContent(5,52.15609);
   VH_tagOnly_Aplanarity__1182->SetBinContent(6,40.66868);
   VH_tagOnly_Aplanarity__1182->SetBinContent(7,13.96551);
   VH_tagOnly_Aplanarity__1182->SetBinContent(8,13.17842);
   VH_tagOnly_Aplanarity__1182->SetBinContent(9,1.246425);
   VH_tagOnly_Aplanarity__1182->SetBinContent(10,1.993473);
   VH_tagOnly_Aplanarity__1182->SetBinContent(11,0.6273636);
   VH_tagOnly_Aplanarity__1182->SetBinContent(12,2.454735);
   VH_tagOnly_Aplanarity__1182->SetBinContent(14,0.1500469);
   VH_tagOnly_Aplanarity__1182->SetBinContent(16,0.4105738);
   VH_tagOnly_Aplanarity__1182->SetBinContent(17,0.1468603);
   VH_tagOnly_Aplanarity__1182->SetBinContent(18,2.31318);
   VH_tagOnly_Aplanarity__1182->SetBinError(1,194.6436);
   VH_tagOnly_Aplanarity__1182->SetBinError(2,61.86459);
   VH_tagOnly_Aplanarity__1182->SetBinError(3,34.68379);
   VH_tagOnly_Aplanarity__1182->SetBinError(4,24.37852);
   VH_tagOnly_Aplanarity__1182->SetBinError(5,12.49744);
   VH_tagOnly_Aplanarity__1182->SetBinError(6,14.3716);
   VH_tagOnly_Aplanarity__1182->SetBinError(7,3.969804);
   VH_tagOnly_Aplanarity__1182->SetBinError(8,6.163769);
   VH_tagOnly_Aplanarity__1182->SetBinError(9,0.5570939);
   VH_tagOnly_Aplanarity__1182->SetBinError(10,0.7302544);
   VH_tagOnly_Aplanarity__1182->SetBinError(11,0.3763613);
   VH_tagOnly_Aplanarity__1182->SetBinError(12,1.725207);
   VH_tagOnly_Aplanarity__1182->SetBinError(14,0.1289603);
   VH_tagOnly_Aplanarity__1182->SetBinError(16,0.4105738);
   VH_tagOnly_Aplanarity__1182->SetBinError(17,0.1468603);
   VH_tagOnly_Aplanarity__1182->SetBinError(18,2.31318);
   VH_tagOnly_Aplanarity__1182->SetEntries(39888);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1182->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1182->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1182->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1182->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1182->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1182->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1182->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1182->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1182->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1182->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1182->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1182->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1182->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1182->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1182->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1182->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_tagOnly_18->Modified();
   Aplanarity_WJets_tagOnly_18->cd();
   Aplanarity_WJets_tagOnly_18->SetSelected(Aplanarity_WJets_tagOnly_18);
}

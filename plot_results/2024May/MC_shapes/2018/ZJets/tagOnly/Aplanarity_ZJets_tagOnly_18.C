#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_ZJets_tagOnly_18/Aplanarity_ZJets_tagOnly_18
//=========  (Fri May 24 12:42:22 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_tagOnly_18 = new TCanvas("Aplanarity_ZJets_tagOnly_18", "Aplanarity_ZJets_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_tagOnly_18->SetHighLightColor(2);
   Aplanarity_ZJets_tagOnly_18->Range(-0.2,-2722.491,1.133333,24502.42);
   Aplanarity_ZJets_tagOnly_18->SetFillColor(0);
   Aplanarity_ZJets_tagOnly_18->SetFillStyle(4000);
   Aplanarity_ZJets_tagOnly_18->SetBorderMode(0);
   Aplanarity_ZJets_tagOnly_18->SetBorderSize(2);
   Aplanarity_ZJets_tagOnly_18->SetLeftMargin(0.15);
   Aplanarity_ZJets_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagOnly_18->SetFrameBorderMode(0);
   Aplanarity_ZJets_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1185 = new TH1D("VH_tagOnly_Aplanarity__1185","",50,0,1);
   VH_tagOnly_Aplanarity__1185->SetBinContent(1,20742.79);
   VH_tagOnly_Aplanarity__1185->SetBinContent(2,2275.042);
   VH_tagOnly_Aplanarity__1185->SetBinContent(3,546.015);
   VH_tagOnly_Aplanarity__1185->SetBinContent(4,183.807);
   VH_tagOnly_Aplanarity__1185->SetBinContent(5,86.33268);
   VH_tagOnly_Aplanarity__1185->SetBinContent(6,39.95181);
   VH_tagOnly_Aplanarity__1185->SetBinContent(7,30.74511);
   VH_tagOnly_Aplanarity__1185->SetBinContent(8,13.24288);
   VH_tagOnly_Aplanarity__1185->SetBinContent(9,9.833201);
   VH_tagOnly_Aplanarity__1185->SetBinContent(10,6.894097);
   VH_tagOnly_Aplanarity__1185->SetBinContent(11,3.385934);
   VH_tagOnly_Aplanarity__1185->SetBinContent(12,2.487665);
   VH_tagOnly_Aplanarity__1185->SetBinContent(13,0.6730799);
   VH_tagOnly_Aplanarity__1185->SetBinContent(14,0.6707463);
   VH_tagOnly_Aplanarity__1185->SetBinContent(15,0.4291464);
   VH_tagOnly_Aplanarity__1185->SetBinContent(16,0.1035803);
   VH_tagOnly_Aplanarity__1185->SetBinContent(17,0.02098532);
   VH_tagOnly_Aplanarity__1185->SetBinContent(18,1.523737);
   VH_tagOnly_Aplanarity__1185->SetBinContent(19,0.1315472);
   VH_tagOnly_Aplanarity__1185->SetBinError(1,139.1891);
   VH_tagOnly_Aplanarity__1185->SetBinError(2,52.0686);
   VH_tagOnly_Aplanarity__1185->SetBinError(3,20.79925);
   VH_tagOnly_Aplanarity__1185->SetBinError(4,10.12596);
   VH_tagOnly_Aplanarity__1185->SetBinError(5,7.321163);
   VH_tagOnly_Aplanarity__1185->SetBinError(6,4.651332);
   VH_tagOnly_Aplanarity__1185->SetBinError(7,13.49399);
   VH_tagOnly_Aplanarity__1185->SetBinError(8,2.469756);
   VH_tagOnly_Aplanarity__1185->SetBinError(9,2.219009);
   VH_tagOnly_Aplanarity__1185->SetBinError(10,3.926674);
   VH_tagOnly_Aplanarity__1185->SetBinError(11,1.228755);
   VH_tagOnly_Aplanarity__1185->SetBinError(12,1.48283);
   VH_tagOnly_Aplanarity__1185->SetBinError(13,0.347377);
   VH_tagOnly_Aplanarity__1185->SetBinError(14,0.4407273);
   VH_tagOnly_Aplanarity__1185->SetBinError(15,0.3256562);
   VH_tagOnly_Aplanarity__1185->SetBinError(16,0.1035803);
   VH_tagOnly_Aplanarity__1185->SetBinError(17,0.02098532);
   VH_tagOnly_Aplanarity__1185->SetBinError(18,1.373786);
   VH_tagOnly_Aplanarity__1185->SetBinError(19,0.1315472);
   VH_tagOnly_Aplanarity__1185->SetEntries(86590);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1185->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1185->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1185->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1185->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1185->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1185->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1185->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1185->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1185->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1185->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1185->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1185->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1185->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1185->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1185->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1185->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_tagOnly_18->Modified();
   Aplanarity_ZJets_tagOnly_18->cd();
   Aplanarity_ZJets_tagOnly_18->SetSelected(Aplanarity_ZJets_tagOnly_18);
}

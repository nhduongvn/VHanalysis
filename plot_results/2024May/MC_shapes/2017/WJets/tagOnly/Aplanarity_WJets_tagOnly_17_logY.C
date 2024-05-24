#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_tagOnly_17_logY()
{
//=========Macro generated from canvas: Aplanarity_WJets_tagOnly_17/Aplanarity_WJets_tagOnly_17
//=========  (Thu May 23 20:48:42 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_tagOnly_17 = new TCanvas("Aplanarity_WJets_tagOnly_17", "Aplanarity_WJets_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_tagOnly_17->SetHighLightColor(2);
   Aplanarity_WJets_tagOnly_17->Range(-0.2,-2.120515,1.133333,4.693542);
   Aplanarity_WJets_tagOnly_17->SetFillColor(0);
   Aplanarity_WJets_tagOnly_17->SetFillStyle(4000);
   Aplanarity_WJets_tagOnly_17->SetBorderMode(0);
   Aplanarity_WJets_tagOnly_17->SetBorderSize(2);
   Aplanarity_WJets_tagOnly_17->SetLogy();
   Aplanarity_WJets_tagOnly_17->SetLeftMargin(0.15);
   Aplanarity_WJets_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagOnly_17->SetFrameBorderMode(0);
   Aplanarity_WJets_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1181 = new TH1D("VH_tagOnly_Aplanarity__1181","",50,0,1);
   VH_tagOnly_Aplanarity__1181->SetBinContent(1,5427.349);
   VH_tagOnly_Aplanarity__1181->SetBinContent(2,570.2088);
   VH_tagOnly_Aplanarity__1181->SetBinContent(3,140.1998);
   VH_tagOnly_Aplanarity__1181->SetBinContent(4,55.26215);
   VH_tagOnly_Aplanarity__1181->SetBinContent(5,21.06698);
   VH_tagOnly_Aplanarity__1181->SetBinContent(6,14.2199);
   VH_tagOnly_Aplanarity__1181->SetBinContent(7,5.744995);
   VH_tagOnly_Aplanarity__1181->SetBinContent(8,2.57324);
   VH_tagOnly_Aplanarity__1181->SetBinContent(9,1.538774);
   VH_tagOnly_Aplanarity__1181->SetBinContent(10,0.5859825);
   VH_tagOnly_Aplanarity__1181->SetBinContent(11,0.6715958);
   VH_tagOnly_Aplanarity__1181->SetBinContent(12,0.5452484);
   VH_tagOnly_Aplanarity__1181->SetBinContent(13,0.09834596);
   VH_tagOnly_Aplanarity__1181->SetBinContent(14,0.07276465);
   VH_tagOnly_Aplanarity__1181->SetBinError(1,78.2463);
   VH_tagOnly_Aplanarity__1181->SetBinError(2,27.66994);
   VH_tagOnly_Aplanarity__1181->SetBinError(3,14.04507);
   VH_tagOnly_Aplanarity__1181->SetBinError(4,7.596503);
   VH_tagOnly_Aplanarity__1181->SetBinError(5,3.730701);
   VH_tagOnly_Aplanarity__1181->SetBinError(6,5.094453);
   VH_tagOnly_Aplanarity__1181->SetBinError(7,1.688982);
   VH_tagOnly_Aplanarity__1181->SetBinError(8,0.6925372);
   VH_tagOnly_Aplanarity__1181->SetBinError(9,0.4441239);
   VH_tagOnly_Aplanarity__1181->SetBinError(10,0.2967392);
   VH_tagOnly_Aplanarity__1181->SetBinError(11,0.2382996);
   VH_tagOnly_Aplanarity__1181->SetBinError(12,0.3310989);
   VH_tagOnly_Aplanarity__1181->SetBinError(13,0.08406827);
   VH_tagOnly_Aplanarity__1181->SetBinError(14,0.07276465);
   VH_tagOnly_Aplanarity__1181->SetEntries(42681);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1181->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1181->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1181->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1181->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1181->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1181->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1181->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1181->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1181->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1181->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1181->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1181->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1181->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1181->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1181->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1181->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_tagOnly_17->Modified();
   Aplanarity_WJets_tagOnly_17->cd();
   Aplanarity_WJets_tagOnly_17->SetSelected(Aplanarity_WJets_tagOnly_17);
}

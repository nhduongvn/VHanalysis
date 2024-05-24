#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_tagOnly_17_logY()
{
//=========Macro generated from canvas: Aplanarity_ZJets_tagOnly_17/Aplanarity_ZJets_tagOnly_17
//=========  (Thu May 23 20:48:42 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_tagOnly_17 = new TCanvas("Aplanarity_ZJets_tagOnly_17", "Aplanarity_ZJets_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_tagOnly_17->SetHighLightColor(2);
   Aplanarity_ZJets_tagOnly_17->Range(-0.2,-1.951963,1.133333,4.955284);
   Aplanarity_ZJets_tagOnly_17->SetFillColor(0);
   Aplanarity_ZJets_tagOnly_17->SetFillStyle(4000);
   Aplanarity_ZJets_tagOnly_17->SetBorderMode(0);
   Aplanarity_ZJets_tagOnly_17->SetBorderSize(2);
   Aplanarity_ZJets_tagOnly_17->SetLogy();
   Aplanarity_ZJets_tagOnly_17->SetLeftMargin(0.15);
   Aplanarity_ZJets_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagOnly_17->SetFrameBorderMode(0);
   Aplanarity_ZJets_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1184 = new TH1D("VH_tagOnly_Aplanarity__1184","",50,0,1);
   VH_tagOnly_Aplanarity__1184->SetBinContent(1,9705.341);
   VH_tagOnly_Aplanarity__1184->SetBinContent(2,1066.623);
   VH_tagOnly_Aplanarity__1184->SetBinContent(3,284.0979);
   VH_tagOnly_Aplanarity__1184->SetBinContent(4,96.09787);
   VH_tagOnly_Aplanarity__1184->SetBinContent(5,38.34829);
   VH_tagOnly_Aplanarity__1184->SetBinContent(6,16.56542);
   VH_tagOnly_Aplanarity__1184->SetBinContent(7,9.871843);
   VH_tagOnly_Aplanarity__1184->SetBinContent(8,6.006924);
   VH_tagOnly_Aplanarity__1184->SetBinContent(9,3.876025);
   VH_tagOnly_Aplanarity__1184->SetBinContent(10,2.789866);
   VH_tagOnly_Aplanarity__1184->SetBinContent(11,2.191146);
   VH_tagOnly_Aplanarity__1184->SetBinContent(12,0.4877802);
   VH_tagOnly_Aplanarity__1184->SetBinContent(13,0.2994622);
   VH_tagOnly_Aplanarity__1184->SetBinContent(14,0.4719848);
   VH_tagOnly_Aplanarity__1184->SetBinContent(15,0.1256136);
   VH_tagOnly_Aplanarity__1184->SetBinContent(16,0.1196562);
   VH_tagOnly_Aplanarity__1184->SetBinContent(17,0.1095954);
   VH_tagOnly_Aplanarity__1184->SetBinError(1,66.12834);
   VH_tagOnly_Aplanarity__1184->SetBinError(2,25.34547);
   VH_tagOnly_Aplanarity__1184->SetBinError(3,16.29389);
   VH_tagOnly_Aplanarity__1184->SetBinError(4,7.070051);
   VH_tagOnly_Aplanarity__1184->SetBinError(5,3.201517);
   VH_tagOnly_Aplanarity__1184->SetBinError(6,1.74148);
   VH_tagOnly_Aplanarity__1184->SetBinError(7,1.747408);
   VH_tagOnly_Aplanarity__1184->SetBinError(8,2.360119);
   VH_tagOnly_Aplanarity__1184->SetBinError(9,0.8816918);
   VH_tagOnly_Aplanarity__1184->SetBinError(10,0.6593986);
   VH_tagOnly_Aplanarity__1184->SetBinError(11,0.8165851);
   VH_tagOnly_Aplanarity__1184->SetBinError(12,0.2332376);
   VH_tagOnly_Aplanarity__1184->SetBinError(13,0.1454672);
   VH_tagOnly_Aplanarity__1184->SetBinError(14,0.2100241);
   VH_tagOnly_Aplanarity__1184->SetBinError(15,0.08952342);
   VH_tagOnly_Aplanarity__1184->SetBinError(16,0.1196562);
   VH_tagOnly_Aplanarity__1184->SetBinError(17,0.07779615);
   VH_tagOnly_Aplanarity__1184->SetEntries(88024);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1184->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1184->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1184->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1184->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1184->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1184->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1184->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1184->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1184->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1184->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1184->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1184->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1184->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1184->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1184->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1184->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_tagOnly_17->Modified();
   Aplanarity_ZJets_tagOnly_17->cd();
   Aplanarity_ZJets_tagOnly_17->SetSelected(Aplanarity_ZJets_tagOnly_17);
}

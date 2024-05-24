#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_tagFirst_17_logY()
{
//=========Macro generated from canvas: Aplanarity_WJets_tagFirst_17/Aplanarity_WJets_tagFirst_17
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_tagFirst_17 = new TCanvas("Aplanarity_WJets_tagFirst_17", "Aplanarity_WJets_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_tagFirst_17->SetHighLightColor(2);
   Aplanarity_WJets_tagFirst_17->Range(-0.2,-2.503816,1.133333,4.754689);
   Aplanarity_WJets_tagFirst_17->SetFillColor(0);
   Aplanarity_WJets_tagFirst_17->SetFillStyle(4000);
   Aplanarity_WJets_tagFirst_17->SetBorderMode(0);
   Aplanarity_WJets_tagFirst_17->SetBorderSize(2);
   Aplanarity_WJets_tagFirst_17->SetLogy();
   Aplanarity_WJets_tagFirst_17->SetLeftMargin(0.15);
   Aplanarity_WJets_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagFirst_17->SetFrameBorderMode(0);
   Aplanarity_WJets_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__461 = new TH1D("VH_tagFirst_Aplanarity__461","",50,0,1);
   VH_tagFirst_Aplanarity__461->SetBinContent(1,5640.136);
   VH_tagFirst_Aplanarity__461->SetBinContent(2,598.4603);
   VH_tagFirst_Aplanarity__461->SetBinContent(3,143.9667);
   VH_tagFirst_Aplanarity__461->SetBinContent(4,58.0627);
   VH_tagFirst_Aplanarity__461->SetBinContent(5,21.82423);
   VH_tagFirst_Aplanarity__461->SetBinContent(6,14.85718);
   VH_tagFirst_Aplanarity__461->SetBinContent(7,5.805523);
   VH_tagFirst_Aplanarity__461->SetBinContent(8,3.162163);
   VH_tagFirst_Aplanarity__461->SetBinContent(9,4.191229);
   VH_tagFirst_Aplanarity__461->SetBinContent(10,0.5859825);
   VH_tagFirst_Aplanarity__461->SetBinContent(11,0.9040387);
   VH_tagFirst_Aplanarity__461->SetBinContent(12,0.5566079);
   VH_tagFirst_Aplanarity__461->SetBinContent(13,0.09834596);
   VH_tagFirst_Aplanarity__461->SetBinContent(14,0.07741106);
   VH_tagFirst_Aplanarity__461->SetBinContent(16,0.03334759);
   VH_tagFirst_Aplanarity__461->SetBinError(1,78.81594);
   VH_tagFirst_Aplanarity__461->SetBinError(2,28.00727);
   VH_tagFirst_Aplanarity__461->SetBinError(3,14.07275);
   VH_tagFirst_Aplanarity__461->SetBinError(4,7.711228);
   VH_tagFirst_Aplanarity__461->SetBinError(5,3.745686);
   VH_tagFirst_Aplanarity__461->SetBinError(6,5.103064);
   VH_tagFirst_Aplanarity__461->SetBinError(7,1.689724);
   VH_tagFirst_Aplanarity__461->SetBinError(8,0.9020253);
   VH_tagFirst_Aplanarity__461->SetBinError(9,2.597411);
   VH_tagFirst_Aplanarity__461->SetBinError(10,0.2967392);
   VH_tagFirst_Aplanarity__461->SetBinError(11,0.2665562);
   VH_tagFirst_Aplanarity__461->SetBinError(12,0.3312937);
   VH_tagFirst_Aplanarity__461->SetBinError(13,0.08406827);
   VH_tagFirst_Aplanarity__461->SetBinError(14,0.07291285);
   VH_tagFirst_Aplanarity__461->SetBinError(16,0.03334759);
   VH_tagFirst_Aplanarity__461->SetEntries(45049);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__461->SetLineColor(ci);
   VH_tagFirst_Aplanarity__461->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__461->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__461->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__461->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__461->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__461->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__461->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__461->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__461->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__461->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__461->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__461->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__461->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__461->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__461->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_tagFirst_17->Modified();
   Aplanarity_WJets_tagFirst_17->cd();
   Aplanarity_WJets_tagFirst_17->SetSelected(Aplanarity_WJets_tagFirst_17);
}

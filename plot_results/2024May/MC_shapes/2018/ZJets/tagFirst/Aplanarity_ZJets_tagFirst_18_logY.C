#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_tagFirst_18_logY()
{
//=========Macro generated from canvas: Aplanarity_ZJets_tagFirst_18/Aplanarity_ZJets_tagFirst_18
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_tagFirst_18 = new TCanvas("Aplanarity_ZJets_tagFirst_18", "Aplanarity_ZJets_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_tagFirst_18->SetHighLightColor(2);
   Aplanarity_ZJets_tagFirst_18->Range(-0.2,-2.805393,1.133333,5.45739);
   Aplanarity_ZJets_tagFirst_18->SetFillColor(0);
   Aplanarity_ZJets_tagFirst_18->SetFillStyle(4000);
   Aplanarity_ZJets_tagFirst_18->SetBorderMode(0);
   Aplanarity_ZJets_tagFirst_18->SetBorderSize(2);
   Aplanarity_ZJets_tagFirst_18->SetLogy();
   Aplanarity_ZJets_tagFirst_18->SetLeftMargin(0.15);
   Aplanarity_ZJets_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagFirst_18->SetFrameBorderMode(0);
   Aplanarity_ZJets_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__465 = new TH1D("VH_tagFirst_Aplanarity__465","",50,0,1);
   VH_tagFirst_Aplanarity__465->SetBinContent(1,22571.63);
   VH_tagFirst_Aplanarity__465->SetBinContent(2,2492.621);
   VH_tagFirst_Aplanarity__465->SetBinContent(3,616.1725);
   VH_tagFirst_Aplanarity__465->SetBinContent(4,201.5212);
   VH_tagFirst_Aplanarity__465->SetBinContent(5,99.63706);
   VH_tagFirst_Aplanarity__465->SetBinContent(6,47.35331);
   VH_tagFirst_Aplanarity__465->SetBinContent(7,32.94601);
   VH_tagFirst_Aplanarity__465->SetBinContent(8,14.46611);
   VH_tagFirst_Aplanarity__465->SetBinContent(9,11.54886);
   VH_tagFirst_Aplanarity__465->SetBinContent(10,7.071508);
   VH_tagFirst_Aplanarity__465->SetBinContent(11,3.385934);
   VH_tagFirst_Aplanarity__465->SetBinContent(12,3.116672);
   VH_tagFirst_Aplanarity__465->SetBinContent(13,0.6730799);
   VH_tagFirst_Aplanarity__465->SetBinContent(14,0.802373);
   VH_tagFirst_Aplanarity__465->SetBinContent(15,0.7040072);
   VH_tagFirst_Aplanarity__465->SetBinContent(16,0.1035803);
   VH_tagFirst_Aplanarity__465->SetBinContent(17,0.02098532);
   VH_tagFirst_Aplanarity__465->SetBinContent(18,1.523737);
   VH_tagFirst_Aplanarity__465->SetBinContent(19,0.1315472);
   VH_tagFirst_Aplanarity__465->SetBinError(1,143.7571);
   VH_tagFirst_Aplanarity__465->SetBinError(2,53.28438);
   VH_tagFirst_Aplanarity__465->SetBinError(3,22.28662);
   VH_tagFirst_Aplanarity__465->SetBinError(4,11.36337);
   VH_tagFirst_Aplanarity__465->SetBinError(5,7.76891);
   VH_tagFirst_Aplanarity__465->SetBinError(6,5.568958);
   VH_tagFirst_Aplanarity__465->SetBinError(7,13.51192);
   VH_tagFirst_Aplanarity__465->SetBinError(8,2.530521);
   VH_tagFirst_Aplanarity__465->SetBinError(9,2.379485);
   VH_tagFirst_Aplanarity__465->SetBinError(10,3.928268);
   VH_tagFirst_Aplanarity__465->SetBinError(11,1.228755);
   VH_tagFirst_Aplanarity__465->SetBinError(12,1.521391);
   VH_tagFirst_Aplanarity__465->SetBinError(13,0.347377);
   VH_tagFirst_Aplanarity__465->SetBinError(14,0.4599632);
   VH_tagFirst_Aplanarity__465->SetBinError(15,0.426146);
   VH_tagFirst_Aplanarity__465->SetBinError(16,0.1035803);
   VH_tagFirst_Aplanarity__465->SetBinError(17,0.02098532);
   VH_tagFirst_Aplanarity__465->SetBinError(18,1.373786);
   VH_tagFirst_Aplanarity__465->SetBinError(19,0.1315472);
   VH_tagFirst_Aplanarity__465->SetEntries(94686);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__465->SetLineColor(ci);
   VH_tagFirst_Aplanarity__465->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__465->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__465->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__465->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__465->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__465->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__465->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__465->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__465->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__465->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__465->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__465->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__465->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__465->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__465->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_tagFirst_18->Modified();
   Aplanarity_ZJets_tagFirst_18->cd();
   Aplanarity_ZJets_tagFirst_18->SetSelected(Aplanarity_ZJets_tagFirst_18);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_tagOnly_18_logY()
{
//=========Macro generated from canvas: Sphericity_ZHbb_tagOnly_18/Sphericity_ZHbb_tagOnly_18
//=========  (Thu May 23 20:48:41 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_tagOnly_18 = new TCanvas("Sphericity_ZHbb_tagOnly_18", "Sphericity_ZHbb_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_tagOnly_18->SetHighLightColor(2);
   Sphericity_ZHbb_tagOnly_18->Range(-0.2,-4.218253,1.133333,2.744919);
   Sphericity_ZHbb_tagOnly_18->SetFillColor(0);
   Sphericity_ZHbb_tagOnly_18->SetFillStyle(4000);
   Sphericity_ZHbb_tagOnly_18->SetBorderMode(0);
   Sphericity_ZHbb_tagOnly_18->SetBorderSize(2);
   Sphericity_ZHbb_tagOnly_18->SetLogy();
   Sphericity_ZHbb_tagOnly_18->SetLeftMargin(0.15);
   Sphericity_ZHbb_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagOnly_18->SetFrameBorderMode(0);
   Sphericity_ZHbb_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1146 = new TH1D("VH_tagOnly_Sphericity__1146","",25,0,1);
   VH_tagOnly_Sphericity__1146->SetBinContent(1,59.02733);
   VH_tagOnly_Sphericity__1146->SetBinContent(2,47.9831);
   VH_tagOnly_Sphericity__1146->SetBinContent(3,27.62205);
   VH_tagOnly_Sphericity__1146->SetBinContent(4,17.71753);
   VH_tagOnly_Sphericity__1146->SetBinContent(5,11.48252);
   VH_tagOnly_Sphericity__1146->SetBinContent(6,6.40985);
   VH_tagOnly_Sphericity__1146->SetBinContent(7,2.85725);
   VH_tagOnly_Sphericity__1146->SetBinContent(8,1.520075);
   VH_tagOnly_Sphericity__1146->SetBinContent(9,1.025254);
   VH_tagOnly_Sphericity__1146->SetBinContent(10,0.6829517);
   VH_tagOnly_Sphericity__1146->SetBinContent(11,0.4785268);
   VH_tagOnly_Sphericity__1146->SetBinContent(12,0.4254709);
   VH_tagOnly_Sphericity__1146->SetBinContent(13,0.3385265);
   VH_tagOnly_Sphericity__1146->SetBinContent(14,0.2026142);
   VH_tagOnly_Sphericity__1146->SetBinContent(15,0.2168168);
   VH_tagOnly_Sphericity__1146->SetBinContent(16,0.1070318);
   VH_tagOnly_Sphericity__1146->SetBinContent(17,0.1450177);
   VH_tagOnly_Sphericity__1146->SetBinContent(18,0.07371602);
   VH_tagOnly_Sphericity__1146->SetBinContent(19,0.03506812);
   VH_tagOnly_Sphericity__1146->SetBinContent(20,0.02642243);
   VH_tagOnly_Sphericity__1146->SetBinContent(21,0.01596542);
   VH_tagOnly_Sphericity__1146->SetBinContent(22,0.0006013037);
   VH_tagOnly_Sphericity__1146->SetBinError(1,0.5184958);
   VH_tagOnly_Sphericity__1146->SetBinError(2,0.4138591);
   VH_tagOnly_Sphericity__1146->SetBinError(3,0.3200147);
   VH_tagOnly_Sphericity__1146->SetBinError(4,0.241911);
   VH_tagOnly_Sphericity__1146->SetBinError(5,0.1983347);
   VH_tagOnly_Sphericity__1146->SetBinError(6,0.1503534);
   VH_tagOnly_Sphericity__1146->SetBinError(7,0.09345323);
   VH_tagOnly_Sphericity__1146->SetBinError(8,0.06537513);
   VH_tagOnly_Sphericity__1146->SetBinError(9,0.05961541);
   VH_tagOnly_Sphericity__1146->SetBinError(10,0.04588251);
   VH_tagOnly_Sphericity__1146->SetBinError(11,0.03455671);
   VH_tagOnly_Sphericity__1146->SetBinError(12,0.03501721);
   VH_tagOnly_Sphericity__1146->SetBinError(13,0.03297257);
   VH_tagOnly_Sphericity__1146->SetBinError(14,0.02053764);
   VH_tagOnly_Sphericity__1146->SetBinError(15,0.04260946);
   VH_tagOnly_Sphericity__1146->SetBinError(16,0.01572069);
   VH_tagOnly_Sphericity__1146->SetBinError(17,0.06260994);
   VH_tagOnly_Sphericity__1146->SetBinError(18,0.01563201);
   VH_tagOnly_Sphericity__1146->SetBinError(19,0.008642399);
   VH_tagOnly_Sphericity__1146->SetBinError(20,0.01122334);
   VH_tagOnly_Sphericity__1146->SetBinError(21,0.01178388);
   VH_tagOnly_Sphericity__1146->SetBinError(22,0.0006013037);
   VH_tagOnly_Sphericity__1146->SetEntries(154874);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1146->SetLineColor(ci);
   VH_tagOnly_Sphericity__1146->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1146->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1146->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1146->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1146->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1146->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1146->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1146->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1146->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1146->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1146->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1146->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1146->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1146->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1146->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_tagOnly_18->Modified();
   Sphericity_ZHbb_tagOnly_18->cd();
   Sphericity_ZHbb_tagOnly_18->SetSelected(Sphericity_ZHbb_tagOnly_18);
}

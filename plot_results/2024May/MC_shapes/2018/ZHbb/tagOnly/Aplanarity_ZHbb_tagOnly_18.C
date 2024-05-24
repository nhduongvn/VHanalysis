#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_tagOnly_18/Aplanarity_ZHbb_tagOnly_18
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_tagOnly_18 = new TCanvas("Aplanarity_ZHbb_tagOnly_18", "Aplanarity_ZHbb_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_tagOnly_18->SetHighLightColor(2);
   Aplanarity_ZHbb_tagOnly_18->Range(-0.2,-20.64133,1.133333,185.7719);
   Aplanarity_ZHbb_tagOnly_18->SetFillColor(0);
   Aplanarity_ZHbb_tagOnly_18->SetFillStyle(4000);
   Aplanarity_ZHbb_tagOnly_18->SetBorderMode(0);
   Aplanarity_ZHbb_tagOnly_18->SetBorderSize(2);
   Aplanarity_ZHbb_tagOnly_18->SetLeftMargin(0.15);
   Aplanarity_ZHbb_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagOnly_18->SetFrameBorderMode(0);
   Aplanarity_ZHbb_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1176 = new TH1D("VH_tagOnly_Aplanarity__1176","",50,0,1);
   VH_tagOnly_Aplanarity__1176->SetBinContent(1,157.2673);
   VH_tagOnly_Aplanarity__1176->SetBinContent(2,15.20482);
   VH_tagOnly_Aplanarity__1176->SetBinContent(3,3.597136);
   VH_tagOnly_Aplanarity__1176->SetBinContent(4,1.128282);
   VH_tagOnly_Aplanarity__1176->SetBinContent(5,0.570693);
   VH_tagOnly_Aplanarity__1176->SetBinContent(6,0.2375365);
   VH_tagOnly_Aplanarity__1176->SetBinContent(7,0.1368482);
   VH_tagOnly_Aplanarity__1176->SetBinContent(8,0.1062008);
   VH_tagOnly_Aplanarity__1176->SetBinContent(9,0.03314216);
   VH_tagOnly_Aplanarity__1176->SetBinContent(10,0.04465121);
   VH_tagOnly_Aplanarity__1176->SetBinContent(11,0.03973459);
   VH_tagOnly_Aplanarity__1176->SetBinContent(12,0.005471212);
   VH_tagOnly_Aplanarity__1176->SetBinContent(13,0.002834215);
   VH_tagOnly_Aplanarity__1176->SetBinContent(14,0.008910392);
   VH_tagOnly_Aplanarity__1176->SetBinContent(16,0.006145408);
   VH_tagOnly_Aplanarity__1176->SetBinContent(17,0.0005658798);
   VH_tagOnly_Aplanarity__1176->SetBinContent(18,0.002125486);
   VH_tagOnly_Aplanarity__1176->SetBinContent(19,0.0007295109);
   VH_tagOnly_Aplanarity__1176->SetBinContent(21,0.0006013037);
   VH_tagOnly_Aplanarity__1176->SetBinError(1,0.7903597);
   VH_tagOnly_Aplanarity__1176->SetBinError(2,0.2201311);
   VH_tagOnly_Aplanarity__1176->SetBinError(3,0.1097231);
   VH_tagOnly_Aplanarity__1176->SetBinError(4,0.05956891);
   VH_tagOnly_Aplanarity__1176->SetBinError(5,0.03980953);
   VH_tagOnly_Aplanarity__1176->SetBinError(6,0.02609026);
   VH_tagOnly_Aplanarity__1176->SetBinError(7,0.01564495);
   VH_tagOnly_Aplanarity__1176->SetBinError(8,0.02228595);
   VH_tagOnly_Aplanarity__1176->SetBinError(9,0.006659858);
   VH_tagOnly_Aplanarity__1176->SetBinError(10,0.01064463);
   VH_tagOnly_Aplanarity__1176->SetBinError(11,0.01513032);
   VH_tagOnly_Aplanarity__1176->SetBinError(12,0.001723556);
   VH_tagOnly_Aplanarity__1176->SetBinError(13,0.001282451);
   VH_tagOnly_Aplanarity__1176->SetBinError(14,0.00459324);
   VH_tagOnly_Aplanarity__1176->SetBinError(16,0.003810599);
   VH_tagOnly_Aplanarity__1176->SetBinError(17,0.0005658798);
   VH_tagOnly_Aplanarity__1176->SetBinError(18,0.002125486);
   VH_tagOnly_Aplanarity__1176->SetBinError(19,0.0007295109);
   VH_tagOnly_Aplanarity__1176->SetBinError(21,0.0006013037);
   VH_tagOnly_Aplanarity__1176->SetEntries(154874);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1176->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1176->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1176->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1176->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1176->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1176->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1176->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1176->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1176->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1176->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1176->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1176->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1176->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1176->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1176->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1176->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_tagOnly_18->Modified();
   Aplanarity_ZHbb_tagOnly_18->cd();
   Aplanarity_ZHbb_tagOnly_18->SetSelected(Aplanarity_ZHbb_tagOnly_18);
}

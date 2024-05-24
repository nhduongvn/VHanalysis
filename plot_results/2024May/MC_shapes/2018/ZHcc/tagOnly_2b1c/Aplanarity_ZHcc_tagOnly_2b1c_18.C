#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_tagOnly_2b1c_18/Aplanarity_ZHcc_tagOnly_2b1c_18
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_tagOnly_2b1c_18 = new TCanvas("Aplanarity_ZHcc_tagOnly_2b1c_18", "Aplanarity_ZHcc_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_tagOnly_2b1c_18->SetHighLightColor(2);
   Aplanarity_ZHcc_tagOnly_2b1c_18->Range(-0.2,-0.8923537,1.133333,8.031182);
   Aplanarity_ZHcc_tagOnly_2b1c_18->SetFillColor(0);
   Aplanarity_ZHcc_tagOnly_2b1c_18->SetFillStyle(4000);
   Aplanarity_ZHcc_tagOnly_2b1c_18->SetBorderMode(0);
   Aplanarity_ZHcc_tagOnly_2b1c_18->SetBorderSize(2);
   Aplanarity_ZHcc_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_ZHcc_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_ZHcc_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3333 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3333","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinContent(1,6.798885);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinContent(2,0.571189);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinContent(3,0.134549);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinContent(4,0.0387712);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinContent(5,0.01811605);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinContent(6,0.004500732);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinContent(7,0.008626685);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinContent(8,0.01089703);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinContent(9,0.001399395);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinContent(10,0.0008107704);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinContent(12,0.0007021084);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinContent(14,0.001357012);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinError(1,0.1313238);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinError(2,0.03479689);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinError(3,0.019052);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinError(4,0.01026322);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinError(5,0.006087652);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinError(6,0.002086237);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinError(7,0.004443614);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinError(8,0.006448907);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinError(9,0.0007035784);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinError(10,0.0008107704);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinError(12,0.0004964887);
   VH_tagOnly_2b1c_Aplanarity__3333->SetBinError(14,0.0008122958);
   VH_tagOnly_2b1c_Aplanarity__3333->SetEntries(8105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3333->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3333->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3333->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3333->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3333->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3333->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3333->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3333->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3333->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3333->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3333->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3333->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3333->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3333->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3333->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3333->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_tagOnly_2b1c_18->Modified();
   Aplanarity_ZHcc_tagOnly_2b1c_18->cd();
   Aplanarity_ZHcc_tagOnly_2b1c_18->SetSelected(Aplanarity_ZHcc_tagOnly_2b1c_18);
}

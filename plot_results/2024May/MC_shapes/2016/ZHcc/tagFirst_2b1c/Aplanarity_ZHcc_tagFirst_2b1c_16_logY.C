#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_tagFirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_tagFirst_2b1c_16/Aplanarity_ZHcc_tagFirst_2b1c_16
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_tagFirst_2b1c_16 = new TCanvas("Aplanarity_ZHcc_tagFirst_2b1c_16", "Aplanarity_ZHcc_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_tagFirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_ZHcc_tagFirst_2b1c_16->Range(-0.2,-4.470416,1.133333,1.514213);
   Aplanarity_ZHcc_tagFirst_2b1c_16->SetFillColor(0);
   Aplanarity_ZHcc_tagFirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_ZHcc_tagFirst_2b1c_16->SetBorderMode(0);
   Aplanarity_ZHcc_tagFirst_2b1c_16->SetBorderSize(2);
   Aplanarity_ZHcc_tagFirst_2b1c_16->SetLogy();
   Aplanarity_ZHcc_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_ZHcc_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_ZHcc_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2611 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2611","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinContent(1,4.347116);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinContent(2,0.4394763);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinContent(3,0.1009449);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinContent(4,0.02785917);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinContent(5,0.0144245);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinContent(6,0.004147829);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinContent(7,0.001934596);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinContent(8,0.001359443);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinContent(9,0.0004297189);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinContent(17,0.0002685819);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinError(1,0.08034315);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinError(2,0.02475178);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinError(3,0.01151887);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinError(4,0.006162272);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinError(5,0.004258024);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinError(6,0.001922422);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinError(7,0.000795252);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinError(8,0.0006099254);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinError(9,0.0004297189);
   VH_tagFirst_2b1c_Aplanarity__2611->SetBinError(17,0.0002685819);
   VH_tagFirst_2b1c_Aplanarity__2611->SetEntries(7495);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2611->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2611->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2611->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2611->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2611->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2611->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2611->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2611->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2611->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2611->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2611->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2611->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2611->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2611->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2611->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2611->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_tagFirst_2b1c_16->Modified();
   Aplanarity_ZHcc_tagFirst_2b1c_16->cd();
   Aplanarity_ZHcc_tagFirst_2b1c_16->SetSelected(Aplanarity_ZHcc_tagFirst_2b1c_16);
}

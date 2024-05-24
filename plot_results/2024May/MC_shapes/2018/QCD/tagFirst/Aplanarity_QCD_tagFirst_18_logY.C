#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_tagFirst_18_logY()
{
//=========Macro generated from canvas: Aplanarity_QCD_tagFirst_18/Aplanarity_QCD_tagFirst_18
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_tagFirst_18 = new TCanvas("Aplanarity_QCD_tagFirst_18", "Aplanarity_QCD_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_tagFirst_18->SetHighLightColor(2);
   Aplanarity_QCD_tagFirst_18->Range(-0.2,-0.07631568,1.133333,7.382118);
   Aplanarity_QCD_tagFirst_18->SetFillColor(0);
   Aplanarity_QCD_tagFirst_18->SetFillStyle(4000);
   Aplanarity_QCD_tagFirst_18->SetBorderMode(0);
   Aplanarity_QCD_tagFirst_18->SetBorderSize(2);
   Aplanarity_QCD_tagFirst_18->SetLogy();
   Aplanarity_QCD_tagFirst_18->SetLeftMargin(0.15);
   Aplanarity_QCD_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagFirst_18->SetFrameBorderMode(0);
   Aplanarity_QCD_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__459 = new TH1D("VH_tagFirst_Aplanarity__459","",50,0,1);
   VH_tagFirst_Aplanarity__459->SetBinContent(1,2284154);
   VH_tagFirst_Aplanarity__459->SetBinContent(2,290129.1);
   VH_tagFirst_Aplanarity__459->SetBinContent(3,71649.67);
   VH_tagFirst_Aplanarity__459->SetBinContent(4,26628.72);
   VH_tagFirst_Aplanarity__459->SetBinContent(5,10094.53);
   VH_tagFirst_Aplanarity__459->SetBinContent(6,4402.135);
   VH_tagFirst_Aplanarity__459->SetBinContent(7,1297.16);
   VH_tagFirst_Aplanarity__459->SetBinContent(8,5774.231);
   VH_tagFirst_Aplanarity__459->SetBinContent(9,1069.772);
   VH_tagFirst_Aplanarity__459->SetBinContent(10,445.1674);
   VH_tagFirst_Aplanarity__459->SetBinContent(11,102.1232);
   VH_tagFirst_Aplanarity__459->SetBinContent(12,95.44002);
   VH_tagFirst_Aplanarity__459->SetBinContent(13,892.9812);
   VH_tagFirst_Aplanarity__459->SetBinContent(14,66.75794);
   VH_tagFirst_Aplanarity__459->SetBinContent(15,14.53589);
   VH_tagFirst_Aplanarity__459->SetBinContent(16,9.344535);
   VH_tagFirst_Aplanarity__459->SetBinContent(17,54.67183);
   VH_tagFirst_Aplanarity__459->SetBinContent(19,23.60995);
   VH_tagFirst_Aplanarity__459->SetBinError(1,42512.95);
   VH_tagFirst_Aplanarity__459->SetBinError(2,12580.78);
   VH_tagFirst_Aplanarity__459->SetBinError(3,6354.359);
   VH_tagFirst_Aplanarity__459->SetBinError(4,4803.852);
   VH_tagFirst_Aplanarity__459->SetBinError(5,2529.858);
   VH_tagFirst_Aplanarity__459->SetBinError(6,1042.935);
   VH_tagFirst_Aplanarity__459->SetBinError(7,249.6183);
   VH_tagFirst_Aplanarity__459->SetBinError(8,3890.694);
   VH_tagFirst_Aplanarity__459->SetBinError(9,479.2431);
   VH_tagFirst_Aplanarity__459->SetBinError(10,167.3531);
   VH_tagFirst_Aplanarity__459->SetBinError(11,48.68949);
   VH_tagFirst_Aplanarity__459->SetBinError(12,39.69113);
   VH_tagFirst_Aplanarity__459->SetBinError(13,752.967);
   VH_tagFirst_Aplanarity__459->SetBinError(14,37.34851);
   VH_tagFirst_Aplanarity__459->SetBinError(15,14.53589);
   VH_tagFirst_Aplanarity__459->SetBinError(16,8.633725);
   VH_tagFirst_Aplanarity__459->SetBinError(17,54.67183);
   VH_tagFirst_Aplanarity__459->SetBinError(19,23.60995);
   VH_tagFirst_Aplanarity__459->SetEntries(100082);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__459->SetLineColor(ci);
   VH_tagFirst_Aplanarity__459->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__459->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__459->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__459->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__459->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__459->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__459->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__459->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__459->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__459->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__459->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__459->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__459->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__459->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__459->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_tagFirst_18->Modified();
   Aplanarity_QCD_tagFirst_18->cd();
   Aplanarity_QCD_tagFirst_18->SetSelected(Aplanarity_QCD_tagFirst_18);
}

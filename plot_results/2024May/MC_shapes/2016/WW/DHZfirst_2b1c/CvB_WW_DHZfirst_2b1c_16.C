#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_WW_DHZfirst_2b1c_16()
{
//=========Macro generated from canvas: CvB_WW_DHZfirst_2b1c_16/CvB_WW_DHZfirst_2b1c_16
//=========  (Fri May 24 12:44:35 2024) by ROOT version 6.28/10
   TCanvas *CvB_WW_DHZfirst_2b1c_16 = new TCanvas("CvB_WW_DHZfirst_2b1c_16", "CvB_WW_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_WW_DHZfirst_2b1c_16->SetHighLightColor(2);
   CvB_WW_DHZfirst_2b1c_16->Range(-0.2,-301474.1,1.133333,2713267);
   CvB_WW_DHZfirst_2b1c_16->SetFillColor(0);
   CvB_WW_DHZfirst_2b1c_16->SetFillStyle(4000);
   CvB_WW_DHZfirst_2b1c_16->SetBorderMode(0);
   CvB_WW_DHZfirst_2b1c_16->SetBorderSize(2);
   CvB_WW_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   CvB_WW_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   CvB_WW_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   CvB_WW_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   CvB_WW_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__8332 = new TH1D("Jets_cut_CvB__8332","",20,0,1);
   Jets_cut_CvB__8332->SetBinContent(1,16512.03);
   Jets_cut_CvB__8332->SetBinContent(2,9970.04);
   Jets_cut_CvB__8332->SetBinContent(3,11252.96);
   Jets_cut_CvB__8332->SetBinContent(4,14302.67);
   Jets_cut_CvB__8332->SetBinContent(5,18947.97);
   Jets_cut_CvB__8332->SetBinContent(6,24415.64);
   Jets_cut_CvB__8332->SetBinContent(7,30600.48);
   Jets_cut_CvB__8332->SetBinContent(8,39872.02);
   Jets_cut_CvB__8332->SetBinContent(9,54892.82);
   Jets_cut_CvB__8332->SetBinContent(10,77618.81);
   Jets_cut_CvB__8332->SetBinContent(11,105771.4);
   Jets_cut_CvB__8332->SetBinContent(12,141411);
   Jets_cut_CvB__8332->SetBinContent(13,204839.4);
   Jets_cut_CvB__8332->SetBinContent(14,298826.7);
   Jets_cut_CvB__8332->SetBinContent(15,461453.9);
   Jets_cut_CvB__8332->SetBinContent(16,696545.3);
   Jets_cut_CvB__8332->SetBinContent(17,1086993);
   Jets_cut_CvB__8332->SetBinContent(18,1857946);
   Jets_cut_CvB__8332->SetBinContent(19,2296945);
   Jets_cut_CvB__8332->SetBinContent(20,328814.9);
   Jets_cut_CvB__8332->SetBinError(1,85.46688);
   Jets_cut_CvB__8332->SetBinError(2,71.18204);
   Jets_cut_CvB__8332->SetBinError(3,76.82851);
   Jets_cut_CvB__8332->SetBinError(4,87.42612);
   Jets_cut_CvB__8332->SetBinError(5,100.9066);
   Jets_cut_CvB__8332->SetBinError(6,115.1291);
   Jets_cut_CvB__8332->SetBinError(7,129.1646);
   Jets_cut_CvB__8332->SetBinError(8,148.1389);
   Jets_cut_CvB__8332->SetBinError(9,174.2871);
   Jets_cut_CvB__8332->SetBinError(10,207.9735);
   Jets_cut_CvB__8332->SetBinError(11,243.0645);
   Jets_cut_CvB__8332->SetBinError(12,281.4475);
   Jets_cut_CvB__8332->SetBinError(13,338.9719);
   Jets_cut_CvB__8332->SetBinError(14,409.1344);
   Jets_cut_CvB__8332->SetBinError(15,507.468);
   Jets_cut_CvB__8332->SetBinError(16,622.1301);
   Jets_cut_CvB__8332->SetBinError(17,772.5128);
   Jets_cut_CvB__8332->SetBinError(18,1008.042);
   Jets_cut_CvB__8332->SetBinError(19,1136.453);
   Jets_cut_CvB__8332->SetBinError(20,423.0841);
   Jets_cut_CvB__8332->SetEntries(2.853026e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__8332->SetLineColor(ci);
   Jets_cut_CvB__8332->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__8332->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__8332->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__8332->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__8332->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__8332->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__8332->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__8332->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__8332->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__8332->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__8332->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__8332->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__8332->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__8332->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__8332->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_WW_DHZfirst_2b1c_16->Modified();
   CvB_WW_DHZfirst_2b1c_16->cd();
   CvB_WW_DHZfirst_2b1c_16->SetSelected(CvB_WW_DHZfirst_2b1c_16);
}

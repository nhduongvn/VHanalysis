#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_ZJets_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: CvL_ZJets_DHZfirst_2b1c_18/CvL_ZJets_DHZfirst_2b1c_18
//=========  (Fri May 24 12:44:35 2024) by ROOT version 6.28/10
   TCanvas *CvL_ZJets_DHZfirst_2b1c_18 = new TCanvas("CvL_ZJets_DHZfirst_2b1c_18", "CvL_ZJets_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_ZJets_DHZfirst_2b1c_18->SetHighLightColor(2);
   CvL_ZJets_DHZfirst_2b1c_18->Range(-0.2,-6075728,1.133333,5.468155e+07);
   CvL_ZJets_DHZfirst_2b1c_18->SetFillColor(0);
   CvL_ZJets_DHZfirst_2b1c_18->SetFillStyle(4000);
   CvL_ZJets_DHZfirst_2b1c_18->SetBorderMode(0);
   CvL_ZJets_DHZfirst_2b1c_18->SetBorderSize(2);
   CvL_ZJets_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   CvL_ZJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CvL_ZJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   CvL_ZJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CvL_ZJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__8295 = new TH1D("Jets_cut_CvL__8295","",20,0,1);
   Jets_cut_CvL__8295->SetBinContent(1,4.25507e+07);
   Jets_cut_CvL__8295->SetBinContent(2,4.629126e+07);
   Jets_cut_CvL__8295->SetBinContent(3,1.742527e+07);
   Jets_cut_CvL__8295->SetBinContent(4,7413869);
   Jets_cut_CvL__8295->SetBinContent(5,3983339);
   Jets_cut_CvL__8295->SetBinContent(6,2637212);
   Jets_cut_CvL__8295->SetBinContent(7,1910938);
   Jets_cut_CvL__8295->SetBinContent(8,1480497);
   Jets_cut_CvL__8295->SetBinContent(9,1243214);
   Jets_cut_CvL__8295->SetBinContent(10,1106945);
   Jets_cut_CvL__8295->SetBinContent(11,1030091);
   Jets_cut_CvL__8295->SetBinContent(12,973191.8);
   Jets_cut_CvL__8295->SetBinContent(13,960796.5);
   Jets_cut_CvL__8295->SetBinContent(14,994659.5);
   Jets_cut_CvL__8295->SetBinContent(15,1084379);
   Jets_cut_CvL__8295->SetBinContent(16,1249949);
   Jets_cut_CvL__8295->SetBinContent(17,1482675);
   Jets_cut_CvL__8295->SetBinContent(18,1896518);
   Jets_cut_CvL__8295->SetBinContent(19,2581140);
   Jets_cut_CvL__8295->SetBinContent(20,6275781);
   Jets_cut_CvL__8295->SetBinError(1,12480.51);
   Jets_cut_CvL__8295->SetBinError(2,12642.3);
   Jets_cut_CvL__8295->SetBinError(3,8896.787);
   Jets_cut_CvL__8295->SetBinError(4,5805.621);
   Jets_cut_CvL__8295->SetBinError(5,4171.143);
   Jets_cut_CvL__8295->SetBinError(6,3428.926);
   Jets_cut_CvL__8295->SetBinError(7,2824.607);
   Jets_cut_CvL__8295->SetBinError(8,2518.131);
   Jets_cut_CvL__8295->SetBinError(9,2304.508);
   Jets_cut_CvL__8295->SetBinError(10,2165.054);
   Jets_cut_CvL__8295->SetBinError(11,2063.566);
   Jets_cut_CvL__8295->SetBinError(12,2014.109);
   Jets_cut_CvL__8295->SetBinError(13,1924.255);
   Jets_cut_CvL__8295->SetBinError(14,1944.452);
   Jets_cut_CvL__8295->SetBinError(15,2042.503);
   Jets_cut_CvL__8295->SetBinError(16,2179.504);
   Jets_cut_CvL__8295->SetBinError(17,2348.424);
   Jets_cut_CvL__8295->SetBinError(18,2618.023);
   Jets_cut_CvL__8295->SetBinError(19,3064.75);
   Jets_cut_CvL__8295->SetBinError(20,4794.106);
   Jets_cut_CvL__8295->SetEntries(1.507272e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__8295->SetLineColor(ci);
   Jets_cut_CvL__8295->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__8295->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__8295->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__8295->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__8295->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__8295->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__8295->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__8295->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__8295->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__8295->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__8295->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__8295->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__8295->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__8295->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__8295->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_ZJets_DHZfirst_2b1c_18->Modified();
   CvL_ZJets_DHZfirst_2b1c_18->cd();
   CvL_ZJets_DHZfirst_2b1c_18->SetSelected(CvL_ZJets_DHZfirst_2b1c_18);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_WW_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: CvB_WW_tagFirst_2b1c_17/CvB_WW_tagFirst_2b1c_17
//=========  (Fri May 24 12:44:02 2024) by ROOT version 6.28/10
   TCanvas *CvB_WW_tagFirst_2b1c_17 = new TCanvas("CvB_WW_tagFirst_2b1c_17", "CvB_WW_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_WW_tagFirst_2b1c_17->SetHighLightColor(2);
   CvB_WW_tagFirst_2b1c_17->Range(-0.2,-147090.5,1.133333,1323814);
   CvB_WW_tagFirst_2b1c_17->SetFillColor(0);
   CvB_WW_tagFirst_2b1c_17->SetFillStyle(4000);
   CvB_WW_tagFirst_2b1c_17->SetBorderMode(0);
   CvB_WW_tagFirst_2b1c_17->SetBorderSize(2);
   CvB_WW_tagFirst_2b1c_17->SetLeftMargin(0.15);
   CvB_WW_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   CvB_WW_tagFirst_2b1c_17->SetFrameBorderMode(0);
   CvB_WW_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   CvB_WW_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__6773 = new TH1D("Jets_cut_CvB__6773","",20,0,1);
   Jets_cut_CvB__6773->SetBinContent(1,13467.79);
   Jets_cut_CvB__6773->SetBinContent(2,6211.427);
   Jets_cut_CvB__6773->SetBinContent(3,6689.981);
   Jets_cut_CvB__6773->SetBinContent(4,8166.426);
   Jets_cut_CvB__6773->SetBinContent(5,10349.17);
   Jets_cut_CvB__6773->SetBinContent(6,12713.25);
   Jets_cut_CvB__6773->SetBinContent(7,15504.07);
   Jets_cut_CvB__6773->SetBinContent(8,19586.8);
   Jets_cut_CvB__6773->SetBinContent(9,26278.77);
   Jets_cut_CvB__6773->SetBinContent(10,35256.89);
   Jets_cut_CvB__6773->SetBinContent(11,46383.19);
   Jets_cut_CvB__6773->SetBinContent(12,60951.98);
   Jets_cut_CvB__6773->SetBinContent(13,88069.81);
   Jets_cut_CvB__6773->SetBinContent(14,129291.1);
   Jets_cut_CvB__6773->SetBinContent(15,198790.4);
   Jets_cut_CvB__6773->SetBinContent(16,301466.1);
   Jets_cut_CvB__6773->SetBinContent(17,491487.3);
   Jets_cut_CvB__6773->SetBinContent(18,901624.1);
   Jets_cut_CvB__6773->SetBinContent(19,1120689);
   Jets_cut_CvB__6773->SetBinContent(20,184339.2);
   Jets_cut_CvB__6773->SetBinError(1,63.79861);
   Jets_cut_CvB__6773->SetBinError(2,43.15844);
   Jets_cut_CvB__6773->SetBinError(3,45.12354);
   Jets_cut_CvB__6773->SetBinError(4,49.74848);
   Jets_cut_CvB__6773->SetBinError(5,56.04267);
   Jets_cut_CvB__6773->SetBinError(6,62.17145);
   Jets_cut_CvB__6773->SetBinError(7,68.71349);
   Jets_cut_CvB__6773->SetBinError(8,77.9153);
   Jets_cut_CvB__6773->SetBinError(9,89.65514);
   Jets_cut_CvB__6773->SetBinError(10,103.5424);
   Jets_cut_CvB__6773->SetBinError(11,118.5606);
   Jets_cut_CvB__6773->SetBinError(12,135.93);
   Jets_cut_CvB__6773->SetBinError(13,163.2844);
   Jets_cut_CvB__6773->SetBinError(14,198.0454);
   Jets_cut_CvB__6773->SetBinError(15,245.1701);
   Jets_cut_CvB__6773->SetBinError(16,300.7101);
   Jets_cut_CvB__6773->SetBinError(17,381.6546);
   Jets_cut_CvB__6773->SetBinError(18,514.5145);
   Jets_cut_CvB__6773->SetBinError(19,577.494);
   Jets_cut_CvB__6773->SetBinError(20,234.6046);
   Jets_cut_CvB__6773->SetEntries(1.415125e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__6773->SetLineColor(ci);
   Jets_cut_CvB__6773->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__6773->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__6773->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__6773->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__6773->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__6773->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__6773->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__6773->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__6773->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__6773->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__6773->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__6773->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__6773->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__6773->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__6773->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_WW_tagFirst_2b1c_17->Modified();
   CvB_WW_tagFirst_2b1c_17->cd();
   CvB_WW_tagFirst_2b1c_17->SetSelected(CvB_WW_tagFirst_2b1c_17);
}

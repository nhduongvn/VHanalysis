#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_ZHbb_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: CvL_ZHbb_tagOnly_2b1c_17/CvL_ZHbb_tagOnly_2b1c_17
//=========  (Fri May 24 12:44:18 2024) by ROOT version 6.28/10
   TCanvas *CvL_ZHbb_tagOnly_2b1c_17 = new TCanvas("CvL_ZHbb_tagOnly_2b1c_17", "CvL_ZHbb_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_ZHbb_tagOnly_2b1c_17->SetHighLightColor(2);
   CvL_ZHbb_tagOnly_2b1c_17->Range(-0.2,-578.3935,1.133333,6922.55);
   CvL_ZHbb_tagOnly_2b1c_17->SetFillColor(0);
   CvL_ZHbb_tagOnly_2b1c_17->SetFillStyle(4000);
   CvL_ZHbb_tagOnly_2b1c_17->SetBorderMode(0);
   CvL_ZHbb_tagOnly_2b1c_17->SetBorderSize(2);
   CvL_ZHbb_tagOnly_2b1c_17->SetLeftMargin(0.15);
   CvL_ZHbb_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   CvL_ZHbb_tagOnly_2b1c_17->SetFrameBorderMode(0);
   CvL_ZHbb_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   CvL_ZHbb_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__7505 = new TH1D("Jets_cut_CvL__7505","",20,0,1);
   Jets_cut_CvL__7505->SetBinContent(1,4557.349);
   Jets_cut_CvL__7505->SetBinContent(2,5886.705);
   Jets_cut_CvL__7505->SetBinContent(3,2330.586);
   Jets_cut_CvL__7505->SetBinContent(4,1202.67);
   Jets_cut_CvL__7505->SetBinContent(5,788.5896);
   Jets_cut_CvL__7505->SetBinContent(6,623.9484);
   Jets_cut_CvL__7505->SetBinContent(7,530.4971);
   Jets_cut_CvL__7505->SetBinContent(8,470.3287);
   Jets_cut_CvL__7505->SetBinContent(9,444.6137);
   Jets_cut_CvL__7505->SetBinContent(10,443.844);
   Jets_cut_CvL__7505->SetBinContent(11,457.5252);
   Jets_cut_CvL__7505->SetBinContent(12,485.4048);
   Jets_cut_CvL__7505->SetBinContent(13,542.4723);
   Jets_cut_CvL__7505->SetBinContent(14,618.5571);
   Jets_cut_CvL__7505->SetBinContent(15,735.4691);
   Jets_cut_CvL__7505->SetBinContent(16,904.2691);
   Jets_cut_CvL__7505->SetBinContent(17,1144.489);
   Jets_cut_CvL__7505->SetBinContent(18,1542.094);
   Jets_cut_CvL__7505->SetBinContent(19,2163.179);
   Jets_cut_CvL__7505->SetBinContent(20,4399.018);
   Jets_cut_CvL__7505->SetBinError(1,2.522725);
   Jets_cut_CvL__7505->SetBinError(2,2.90591);
   Jets_cut_CvL__7505->SetBinError(3,1.886709);
   Jets_cut_CvL__7505->SetBinError(4,1.361207);
   Jets_cut_CvL__7505->SetBinError(5,1.102964);
   Jets_cut_CvL__7505->SetBinError(6,0.9788891);
   Jets_cut_CvL__7505->SetBinError(7,0.8988499);
   Jets_cut_CvL__7505->SetBinError(8,0.8427253);
   Jets_cut_CvL__7505->SetBinError(9,0.8154163);
   Jets_cut_CvL__7505->SetBinError(10,0.8139248);
   Jets_cut_CvL__7505->SetBinError(11,0.8246384);
   Jets_cut_CvL__7505->SetBinError(12,0.8497413);
   Jets_cut_CvL__7505->SetBinError(13,0.89938);
   Jets_cut_CvL__7505->SetBinError(14,0.9610162);
   Jets_cut_CvL__7505->SetBinError(15,1.049691);
   Jets_cut_CvL__7505->SetBinError(16,1.166408);
   Jets_cut_CvL__7505->SetBinError(17,1.315555);
   Jets_cut_CvL__7505->SetBinError(18,1.534184);
   Jets_cut_CvL__7505->SetBinError(19,1.826875);
   Jets_cut_CvL__7505->SetBinError(20,2.622442);
   Jets_cut_CvL__7505->SetEntries(3.46496e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__7505->SetLineColor(ci);
   Jets_cut_CvL__7505->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__7505->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__7505->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__7505->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__7505->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__7505->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__7505->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__7505->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__7505->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__7505->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__7505->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__7505->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__7505->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__7505->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__7505->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_ZHbb_tagOnly_2b1c_17->Modified();
   CvL_ZHbb_tagOnly_2b1c_17->cd();
   CvL_ZHbb_tagOnly_2b1c_17->SetSelected(CvL_ZHbb_tagOnly_2b1c_17);
}

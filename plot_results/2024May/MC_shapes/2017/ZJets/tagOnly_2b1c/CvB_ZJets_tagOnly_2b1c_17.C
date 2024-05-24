#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_ZJets_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: CvB_ZJets_tagOnly_2b1c_17/CvB_ZJets_tagOnly_2b1c_17
//=========  (Fri May 24 12:44:18 2024) by ROOT version 6.28/10
   TCanvas *CvB_ZJets_tagOnly_2b1c_17 = new TCanvas("CvB_ZJets_tagOnly_2b1c_17", "CvB_ZJets_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_ZJets_tagOnly_2b1c_17->SetHighLightColor(2);
   CvB_ZJets_tagOnly_2b1c_17->Range(-0.2,-2622390,1.133333,2.360151e+07);
   CvB_ZJets_tagOnly_2b1c_17->SetFillColor(0);
   CvB_ZJets_tagOnly_2b1c_17->SetFillStyle(4000);
   CvB_ZJets_tagOnly_2b1c_17->SetBorderMode(0);
   CvB_ZJets_tagOnly_2b1c_17->SetBorderSize(2);
   CvB_ZJets_tagOnly_2b1c_17->SetLeftMargin(0.15);
   CvB_ZJets_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   CvB_ZJets_tagOnly_2b1c_17->SetFrameBorderMode(0);
   CvB_ZJets_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   CvB_ZJets_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__7544 = new TH1D("Jets_cut_CvB__7544","",20,0,1);
   Jets_cut_CvB__7544->SetBinContent(1,4349093);
   Jets_cut_CvB__7544->SetBinContent(2,678781.3);
   Jets_cut_CvB__7544->SetBinContent(3,467669.4);
   Jets_cut_CvB__7544->SetBinContent(4,432164.2);
   Jets_cut_CvB__7544->SetBinContent(5,428466);
   Jets_cut_CvB__7544->SetBinContent(6,425725);
   Jets_cut_CvB__7544->SetBinContent(7,441357.2);
   Jets_cut_CvB__7544->SetBinContent(8,473285.2);
   Jets_cut_CvB__7544->SetBinContent(9,571133.1);
   Jets_cut_CvB__7544->SetBinContent(10,708327.7);
   Jets_cut_CvB__7544->SetBinContent(11,882790.5);
   Jets_cut_CvB__7544->SetBinContent(12,1122419);
   Jets_cut_CvB__7544->SetBinContent(13,1577785);
   Jets_cut_CvB__7544->SetBinContent(14,2252200);
   Jets_cut_CvB__7544->SetBinContent(15,3484280);
   Jets_cut_CvB__7544->SetBinContent(16,5501984);
   Jets_cut_CvB__7544->SetBinContent(17,9591533);
   Jets_cut_CvB__7544->SetBinContent(18,1.851223e+07);
   Jets_cut_CvB__7544->SetBinContent(19,1.998012e+07);
   Jets_cut_CvB__7544->SetBinContent(20,3535631);
   Jets_cut_CvB__7544->SetBinError(1,3309.511);
   Jets_cut_CvB__7544->SetBinError(2,1292.247);
   Jets_cut_CvB__7544->SetBinError(3,1065.232);
   Jets_cut_CvB__7544->SetBinError(4,1019.46);
   Jets_cut_CvB__7544->SetBinError(5,1009.798);
   Jets_cut_CvB__7544->SetBinError(6,1003.412);
   Jets_cut_CvB__7544->SetBinError(7,1010.424);
   Jets_cut_CvB__7544->SetBinError(8,1017.871);
   Jets_cut_CvB__7544->SetBinError(9,1121.981);
   Jets_cut_CvB__7544->SetBinError(10,1249.918);
   Jets_cut_CvB__7544->SetBinError(11,1398.512);
   Jets_cut_CvB__7544->SetBinError(12,1578.988);
   Jets_cut_CvB__7544->SetBinError(13,1870.514);
   Jets_cut_CvB__7544->SetBinError(14,2230.109);
   Jets_cut_CvB__7544->SetBinError(15,2755.139);
   Jets_cut_CvB__7544->SetBinError(16,3430.362);
   Jets_cut_CvB__7544->SetBinError(17,4461.026);
   Jets_cut_CvB__7544->SetBinError(18,6191.276);
   Jets_cut_CvB__7544->SetBinError(19,6648.606);
   Jets_cut_CvB__7544->SetBinError(20,2819.945);
   Jets_cut_CvB__7544->SetEntries(1.363191e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__7544->SetLineColor(ci);
   Jets_cut_CvB__7544->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__7544->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__7544->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__7544->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7544->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__7544->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__7544->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__7544->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__7544->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__7544->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__7544->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__7544->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__7544->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7544->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__7544->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_ZJets_tagOnly_2b1c_17->Modified();
   CvB_ZJets_tagOnly_2b1c_17->cd();
   CvB_ZJets_tagOnly_2b1c_17->SetSelected(CvB_ZJets_tagOnly_2b1c_17);
}

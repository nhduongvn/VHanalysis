#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_ZJets_tagFirst_18()
{
//=========Macro generated from canvas: CvB_ZJets_tagFirst_18/CvB_ZJets_tagFirst_18
//=========  (Fri May 24 12:43:14 2024) by ROOT version 6.28/10
   TCanvas *CvB_ZJets_tagFirst_18 = new TCanvas("CvB_ZJets_tagFirst_18", "CvB_ZJets_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_ZJets_tagFirst_18->SetHighLightColor(2);
   CvB_ZJets_tagFirst_18->Range(-0.2,-5093526,1.133333,4.584173e+07);
   CvB_ZJets_tagFirst_18->SetFillColor(0);
   CvB_ZJets_tagFirst_18->SetFillStyle(4000);
   CvB_ZJets_tagFirst_18->SetBorderMode(0);
   CvB_ZJets_tagFirst_18->SetBorderSize(2);
   CvB_ZJets_tagFirst_18->SetLeftMargin(0.15);
   CvB_ZJets_tagFirst_18->SetFrameFillStyle(1000);
   CvB_ZJets_tagFirst_18->SetFrameBorderMode(0);
   CvB_ZJets_tagFirst_18->SetFrameFillStyle(1000);
   CvB_ZJets_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__4425 = new TH1D("Jets_cut_CvB__4425","",20,0,1);
   Jets_cut_CvB__4425->SetBinContent(1,7613916);
   Jets_cut_CvB__4425->SetBinContent(2,1195183);
   Jets_cut_CvB__4425->SetBinContent(3,825830);
   Jets_cut_CvB__4425->SetBinContent(4,767035.5);
   Jets_cut_CvB__4425->SetBinContent(5,765711.4);
   Jets_cut_CvB__4425->SetBinContent(6,764522.6);
   Jets_cut_CvB__4425->SetBinContent(7,814464.2);
   Jets_cut_CvB__4425->SetBinContent(8,920168.7);
   Jets_cut_CvB__4425->SetBinContent(9,1097517);
   Jets_cut_CvB__4425->SetBinContent(10,1350218);
   Jets_cut_CvB__4425->SetBinContent(11,1677558);
   Jets_cut_CvB__4425->SetBinContent(12,2117768);
   Jets_cut_CvB__4425->SetBinContent(13,2968750);
   Jets_cut_CvB__4425->SetBinContent(14,4266508);
   Jets_cut_CvB__4425->SetBinContent(15,6611154);
   Jets_cut_CvB__4425->SetBinContent(16,1.046024e+07);
   Jets_cut_CvB__4425->SetBinContent(17,1.842775e+07);
   Jets_cut_CvB__4425->SetBinContent(18,3.60467e+07);
   Jets_cut_CvB__4425->SetBinContent(19,3.880782e+07);
   Jets_cut_CvB__4425->SetBinContent(20,7073614);
   Jets_cut_CvB__4425->SetBinError(1,5302.106);
   Jets_cut_CvB__4425->SetBinError(2,2082.854);
   Jets_cut_CvB__4425->SetBinError(3,1732.488);
   Jets_cut_CvB__4425->SetBinError(4,1700.498);
   Jets_cut_CvB__4425->SetBinError(5,1708.299);
   Jets_cut_CvB__4425->SetBinError(6,1683.299);
   Jets_cut_CvB__4425->SetBinError(7,1838.062);
   Jets_cut_CvB__4425->SetBinError(8,2030.615);
   Jets_cut_CvB__4425->SetBinError(9,2173.084);
   Jets_cut_CvB__4425->SetBinError(10,2368.597);
   Jets_cut_CvB__4425->SetBinError(11,2665.771);
   Jets_cut_CvB__4425->SetBinError(12,2966.215);
   Jets_cut_CvB__4425->SetBinError(13,3473.473);
   Jets_cut_CvB__4425->SetBinError(14,4167.55);
   Jets_cut_CvB__4425->SetBinError(15,5069.939);
   Jets_cut_CvB__4425->SetBinError(16,6260.593);
   Jets_cut_CvB__4425->SetBinError(17,8142.826);
   Jets_cut_CvB__4425->SetBinError(18,11426.36);
   Jets_cut_CvB__4425->SetBinError(19,12364.13);
   Jets_cut_CvB__4425->SetBinError(20,5429.743);
   Jets_cut_CvB__4425->SetEntries(1.507272e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__4425->SetLineColor(ci);
   Jets_cut_CvB__4425->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__4425->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__4425->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__4425->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__4425->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__4425->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__4425->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__4425->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__4425->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__4425->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__4425->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__4425->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__4425->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__4425->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__4425->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_ZJets_tagFirst_18->Modified();
   CvB_ZJets_tagFirst_18->cd();
   CvB_ZJets_tagFirst_18->SetSelected(CvB_ZJets_tagFirst_18);
}

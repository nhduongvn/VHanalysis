#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_WJets_DHZfirst_17()
{
//=========Macro generated from canvas: CvB_WJets_DHZfirst_17/CvB_WJets_DHZfirst_17
//=========  (Fri May 24 12:43:45 2024) by ROOT version 6.28/10
   TCanvas *CvB_WJets_DHZfirst_17 = new TCanvas("CvB_WJets_DHZfirst_17", "CvB_WJets_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_WJets_DHZfirst_17->SetHighLightColor(2);
   CvB_WJets_DHZfirst_17->Range(-0.2,-9845243,1.133333,8.860718e+07);
   CvB_WJets_DHZfirst_17->SetFillColor(0);
   CvB_WJets_DHZfirst_17->SetFillStyle(4000);
   CvB_WJets_DHZfirst_17->SetBorderMode(0);
   CvB_WJets_DHZfirst_17->SetBorderSize(2);
   CvB_WJets_DHZfirst_17->SetLeftMargin(0.15);
   CvB_WJets_DHZfirst_17->SetFrameFillStyle(1000);
   CvB_WJets_DHZfirst_17->SetFrameBorderMode(0);
   CvB_WJets_DHZfirst_17->SetFrameFillStyle(1000);
   CvB_WJets_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__5981 = new TH1D("Jets_cut_CvB__5981","",20,0,1);
   Jets_cut_CvB__5981->SetBinContent(1,1691426);
   Jets_cut_CvB__5981->SetBinContent(2,513807.1);
   Jets_cut_CvB__5981->SetBinContent(3,488135.6);
   Jets_cut_CvB__5981->SetBinContent(4,566177.9);
   Jets_cut_CvB__5981->SetBinContent(5,691583.7);
   Jets_cut_CvB__5981->SetBinContent(6,829145.8);
   Jets_cut_CvB__5981->SetBinContent(7,998971.7);
   Jets_cut_CvB__5981->SetBinContent(8,1252401);
   Jets_cut_CvB__5981->SetBinContent(9,1638458);
   Jets_cut_CvB__5981->SetBinContent(10,2213498);
   Jets_cut_CvB__5981->SetBinContent(11,2926568);
   Jets_cut_CvB__5981->SetBinContent(12,3897238);
   Jets_cut_CvB__5981->SetBinContent(13,5684044);
   Jets_cut_CvB__5981->SetBinContent(14,8361134);
   Jets_cut_CvB__5981->SetBinContent(15,1.317425e+07);
   Jets_cut_CvB__5981->SetBinContent(16,2.08484e+07);
   Jets_cut_CvB__5981->SetBinContent(17,3.657631e+07);
   Jets_cut_CvB__5981->SetBinContent(18,7.110805e+07);
   Jets_cut_CvB__5981->SetBinContent(19,7.501137e+07);
   Jets_cut_CvB__5981->SetBinContent(20,1.340604e+07);
   Jets_cut_CvB__5981->SetBinError(1,2251.572);
   Jets_cut_CvB__5981->SetBinError(2,1280.961);
   Jets_cut_CvB__5981->SetBinError(3,1270.222);
   Jets_cut_CvB__5981->SetBinError(4,1380.715);
   Jets_cut_CvB__5981->SetBinError(5,1531.086);
   Jets_cut_CvB__5981->SetBinError(6,1680.481);
   Jets_cut_CvB__5981->SetBinError(7,1847.395);
   Jets_cut_CvB__5981->SetBinError(8,2083.287);
   Jets_cut_CvB__5981->SetBinError(9,2362.466);
   Jets_cut_CvB__5981->SetBinError(10,2737.158);
   Jets_cut_CvB__5981->SetBinError(11,3143.035);
   Jets_cut_CvB__5981->SetBinError(12,3627.89);
   Jets_cut_CvB__5981->SetBinError(13,4375.73);
   Jets_cut_CvB__5981->SetBinError(14,5302.491);
   Jets_cut_CvB__5981->SetBinError(15,6649.604);
   Jets_cut_CvB__5981->SetBinError(16,8350.935);
   Jets_cut_CvB__5981->SetBinError(17,10954.84);
   Jets_cut_CvB__5981->SetBinError(18,15272.75);
   Jets_cut_CvB__5981->SetBinError(19,16302.71);
   Jets_cut_CvB__5981->SetBinError(20,6972.2);
   Jets_cut_CvB__5981->SetEntries(3.578415e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__5981->SetLineColor(ci);
   Jets_cut_CvB__5981->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__5981->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__5981->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__5981->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5981->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__5981->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__5981->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__5981->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__5981->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__5981->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__5981->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__5981->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__5981->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5981->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__5981->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_WJets_DHZfirst_17->Modified();
   CvB_WJets_DHZfirst_17->cd();
   CvB_WJets_DHZfirst_17->SetSelected(CvB_WJets_DHZfirst_17);
}

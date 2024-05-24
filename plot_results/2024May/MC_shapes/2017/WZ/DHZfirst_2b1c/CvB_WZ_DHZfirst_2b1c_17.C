#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_WZ_DHZfirst_2b1c_17()
{
//=========Macro generated from canvas: CvB_WZ_DHZfirst_2b1c_17/CvB_WZ_DHZfirst_2b1c_17
//=========  (Fri May 24 12:44:35 2024) by ROOT version 6.28/10
   TCanvas *CvB_WZ_DHZfirst_2b1c_17 = new TCanvas("CvB_WZ_DHZfirst_2b1c_17", "CvB_WZ_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_WZ_DHZfirst_2b1c_17->SetHighLightColor(2);
   CvB_WZ_DHZfirst_2b1c_17->Range(-0.2,-59736.1,1.133333,537624.8);
   CvB_WZ_DHZfirst_2b1c_17->SetFillColor(0);
   CvB_WZ_DHZfirst_2b1c_17->SetFillStyle(4000);
   CvB_WZ_DHZfirst_2b1c_17->SetBorderMode(0);
   CvB_WZ_DHZfirst_2b1c_17->SetBorderSize(2);
   CvB_WZ_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   CvB_WZ_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   CvB_WZ_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   CvB_WZ_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   CvB_WZ_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__8336 = new TH1D("Jets_cut_CvB__8336","",20,0,1);
   Jets_cut_CvB__8336->SetBinContent(1,67415.29);
   Jets_cut_CvB__8336->SetBinContent(2,11073.65);
   Jets_cut_CvB__8336->SetBinContent(3,7964.85);
   Jets_cut_CvB__8336->SetBinContent(4,7779.185);
   Jets_cut_CvB__8336->SetBinContent(5,8079.94);
   Jets_cut_CvB__8336->SetBinContent(6,8428.212);
   Jets_cut_CvB__8336->SetBinContent(7,9140.446);
   Jets_cut_CvB__8336->SetBinContent(8,10393.65);
   Jets_cut_CvB__8336->SetBinContent(9,12958.62);
   Jets_cut_CvB__8336->SetBinContent(10,16454.6);
   Jets_cut_CvB__8336->SetBinContent(11,20609.57);
   Jets_cut_CvB__8336->SetBinContent(12,26460.07);
   Jets_cut_CvB__8336->SetBinContent(13,37284.5);
   Jets_cut_CvB__8336->SetBinContent(14,53502.87);
   Jets_cut_CvB__8336->SetBinContent(15,81334.38);
   Jets_cut_CvB__8336->SetBinContent(16,122961.4);
   Jets_cut_CvB__8336->SetBinContent(17,200661);
   Jets_cut_CvB__8336->SetBinContent(18,370631.3);
   Jets_cut_CvB__8336->SetBinContent(19,455132.1);
   Jets_cut_CvB__8336->SetBinContent(20,75155.3);
   Jets_cut_CvB__8336->SetBinError(1,132.9542);
   Jets_cut_CvB__8336->SetBinError(2,53.25924);
   Jets_cut_CvB__8336->SetBinError(3,44.99113);
   Jets_cut_CvB__8336->SetBinError(4,44.21147);
   Jets_cut_CvB__8336->SetBinError(5,44.97328);
   Jets_cut_CvB__8336->SetBinError(6,45.86185);
   Jets_cut_CvB__8336->SetBinError(7,47.52976);
   Jets_cut_CvB__8336->SetBinError(8,50.03982);
   Jets_cut_CvB__8336->SetBinError(9,56.01507);
   Jets_cut_CvB__8336->SetBinError(10,63.11458);
   Jets_cut_CvB__8336->SetBinError(11,70.55739);
   Jets_cut_CvB__8336->SetBinError(12,79.98469);
   Jets_cut_CvB__8336->SetBinError(13,94.98687);
   Jets_cut_CvB__8336->SetBinError(14,113.9106);
   Jets_cut_CvB__8336->SetBinError(15,139.9577);
   Jets_cut_CvB__8336->SetBinError(16,171.2704);
   Jets_cut_CvB__8336->SetBinError(17,217.3131);
   Jets_cut_CvB__8336->SetBinError(18,293.643);
   Jets_cut_CvB__8336->SetBinError(19,327.1782);
   Jets_cut_CvB__8336->SetBinError(20,133.2912);
   Jets_cut_CvB__8336->SetEntries(7822457);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__8336->SetLineColor(ci);
   Jets_cut_CvB__8336->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__8336->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__8336->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__8336->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__8336->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__8336->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__8336->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__8336->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__8336->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__8336->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__8336->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__8336->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__8336->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__8336->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__8336->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_WZ_DHZfirst_2b1c_17->Modified();
   CvB_WZ_DHZfirst_2b1c_17->cd();
   CvB_WZ_DHZfirst_2b1c_17->SetSelected(CvB_WZ_DHZfirst_2b1c_17);
}

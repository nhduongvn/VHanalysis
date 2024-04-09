#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_DHZfirst_17()
{
//=========Macro generated from canvas: CvB_DHZfirst_17/CvB_DHZfirst_17
//=========  (Mon Apr  8 11:27:55 2024) by ROOT version 6.28/10
   TCanvas *CvB_DHZfirst_17 = new TCanvas("CvB_DHZfirst_17", "CvB_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_DHZfirst_17->SetHighLightColor(2);
   CvB_DHZfirst_17->Range(-0.2,-34.68071,1.133333,312.1264);
   CvB_DHZfirst_17->SetFillColor(0);
   CvB_DHZfirst_17->SetFillStyle(4000);
   CvB_DHZfirst_17->SetBorderMode(0);
   CvB_DHZfirst_17->SetBorderSize(2);
   CvB_DHZfirst_17->SetLeftMargin(0.15);
   CvB_DHZfirst_17->SetFrameFillStyle(1000);
   CvB_DHZfirst_17->SetFrameBorderMode(0);
   CvB_DHZfirst_17->SetFrameFillStyle(1000);
   CvB_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__383 = new TH1D("Jets_cut_CvB__383","",20,0,1);
   Jets_cut_CvB__383->SetBinContent(1,49.88526);
   Jets_cut_CvB__383->SetBinContent(2,9.848872);
   Jets_cut_CvB__383->SetBinContent(3,7.868577);
   Jets_cut_CvB__383->SetBinContent(4,8.230081);
   Jets_cut_CvB__383->SetBinContent(5,9.038659);
   Jets_cut_CvB__383->SetBinContent(6,9.654957);
   Jets_cut_CvB__383->SetBinContent(7,10.76634);
   Jets_cut_CvB__383->SetBinContent(8,11.96272);
   Jets_cut_CvB__383->SetBinContent(9,14.81982);
   Jets_cut_CvB__383->SetBinContent(10,17.91227);
   Jets_cut_CvB__383->SetBinContent(11,21.94502);
   Jets_cut_CvB__383->SetBinContent(12,26.80228);
   Jets_cut_CvB__383->SetBinContent(13,36.64752);
   Jets_cut_CvB__383->SetBinContent(14,48.05909);
   Jets_cut_CvB__383->SetBinContent(15,66.61561);
   Jets_cut_CvB__383->SetBinContent(16,93.95792);
   Jets_cut_CvB__383->SetBinContent(17,144.5311);
   Jets_cut_CvB__383->SetBinContent(18,238.3255);
   Jets_cut_CvB__383->SetBinContent(19,264.234);
   Jets_cut_CvB__383->SetBinContent(20,56.65777);
   Jets_cut_CvB__383->SetBinError(1,0.2614626);
   Jets_cut_CvB__383->SetBinError(2,0.1143464);
   Jets_cut_CvB__383->SetBinError(3,0.1017);
   Jets_cut_CvB__383->SetBinError(4,0.1037553);
   Jets_cut_CvB__383->SetBinError(5,0.1075731);
   Jets_cut_CvB__383->SetBinError(6,0.1111319);
   Jets_cut_CvB__383->SetBinError(7,0.1172383);
   Jets_cut_CvB__383->SetBinError(8,0.1214028);
   Jets_cut_CvB__383->SetBinError(9,0.1360496);
   Jets_cut_CvB__383->SetBinError(10,0.1502711);
   Jets_cut_CvB__383->SetBinError(11,0.1665487);
   Jets_cut_CvB__383->SetBinError(12,0.1848888);
   Jets_cut_CvB__383->SetBinError(13,0.2167668);
   Jets_cut_CvB__383->SetBinError(14,0.2495233);
   Jets_cut_CvB__383->SetBinError(15,0.2948505);
   Jets_cut_CvB__383->SetBinError(16,0.3490862);
   Jets_cut_CvB__383->SetBinError(17,0.4324519);
   Jets_cut_CvB__383->SetBinError(18,0.5527382);
   Jets_cut_CvB__383->SetBinError(19,0.5803311);
   Jets_cut_CvB__383->SetBinError(20,0.2684213);
   Jets_cut_CvB__383->SetEntries(1023696);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__383->SetLineColor(ci);
   Jets_cut_CvB__383->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__383->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__383->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__383->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__383->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__383->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__383->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__383->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__383->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__383->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__383->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__383->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__383->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__383->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__383->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_DHZfirst_17->Modified();
   CvB_DHZfirst_17->cd();
   CvB_DHZfirst_17->SetSelected(CvB_DHZfirst_17);
}

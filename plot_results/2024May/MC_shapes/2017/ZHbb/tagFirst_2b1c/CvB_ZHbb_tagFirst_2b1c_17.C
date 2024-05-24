#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_ZHbb_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: CvB_ZHbb_tagFirst_2b1c_17/CvB_ZHbb_tagFirst_2b1c_17
//=========  (Fri May 24 12:44:01 2024) by ROOT version 6.28/10
   TCanvas *CvB_ZHbb_tagFirst_2b1c_17 = new TCanvas("CvB_ZHbb_tagFirst_2b1c_17", "CvB_ZHbb_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_ZHbb_tagFirst_2b1c_17->SetHighLightColor(2);
   CvB_ZHbb_tagFirst_2b1c_17->Range(-0.2,-945.5311,1.133333,9132.21);
   CvB_ZHbb_tagFirst_2b1c_17->SetFillColor(0);
   CvB_ZHbb_tagFirst_2b1c_17->SetFillStyle(4000);
   CvB_ZHbb_tagFirst_2b1c_17->SetBorderMode(0);
   CvB_ZHbb_tagFirst_2b1c_17->SetBorderSize(2);
   CvB_ZHbb_tagFirst_2b1c_17->SetLeftMargin(0.15);
   CvB_ZHbb_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   CvB_ZHbb_tagFirst_2b1c_17->SetFrameBorderMode(0);
   CvB_ZHbb_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   CvB_ZHbb_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__6755 = new TH1D("Jets_cut_CvB__6755","",20,0,1);
   Jets_cut_CvB__6755->SetBinContent(1,7740.522);
   Jets_cut_CvB__6755->SetBinContent(2,1145.446);
   Jets_cut_CvB__6755->SetBinContent(3,728.1377);
   Jets_cut_CvB__6755->SetBinContent(4,625.8414);
   Jets_cut_CvB__6755->SetBinContent(5,564.7709);
   Jets_cut_CvB__6755->SetBinContent(6,502.9742);
   Jets_cut_CvB__6755->SetBinContent(7,465.5882);
   Jets_cut_CvB__6755->SetBinContent(8,427.8754);
   Jets_cut_CvB__6755->SetBinContent(9,457.2462);
   Jets_cut_CvB__6755->SetBinContent(10,494.126);
   Jets_cut_CvB__6755->SetBinContent(11,531.2638);
   Jets_cut_CvB__6755->SetBinContent(12,588.3688);
   Jets_cut_CvB__6755->SetBinContent(13,718.3832);
   Jets_cut_CvB__6755->SetBinContent(14,879.8754);
   Jets_cut_CvB__6755->SetBinContent(15,1176.822);
   Jets_cut_CvB__6755->SetBinContent(16,1619.751);
   Jets_cut_CvB__6755->SetBinContent(17,2481.14);
   Jets_cut_CvB__6755->SetBinContent(18,4151.328);
   Jets_cut_CvB__6755->SetBinContent(19,4280.274);
   Jets_cut_CvB__6755->SetBinContent(20,691.8765);
   Jets_cut_CvB__6755->SetBinError(1,3.484892);
   Jets_cut_CvB__6755->SetBinError(2,1.324948);
   Jets_cut_CvB__6755->SetBinError(3,1.054179);
   Jets_cut_CvB__6755->SetBinError(4,0.9780189);
   Jets_cut_CvB__6755->SetBinError(5,0.9263715);
   Jets_cut_CvB__6755->SetBinError(6,0.8761625);
   Jets_cut_CvB__6755->SetBinError(7,0.833773);
   Jets_cut_CvB__6755->SetBinError(8,0.7495886);
   Jets_cut_CvB__6755->SetBinError(9,0.7859236);
   Jets_cut_CvB__6755->SetBinError(10,0.833636);
   Jets_cut_CvB__6755->SetBinError(11,0.8780792);
   Jets_cut_CvB__6755->SetBinError(12,0.9343352);
   Jets_cut_CvB__6755->SetBinError(13,1.040956);
   Jets_cut_CvB__6755->SetBinError(14,1.159671);
   Jets_cut_CvB__6755->SetBinError(15,1.344041);
   Jets_cut_CvB__6755->SetBinError(16,1.559122);
   Jets_cut_CvB__6755->SetBinError(17,1.902509);
   Jets_cut_CvB__6755->SetBinError(18,2.432338);
   Jets_cut_CvB__6755->SetBinError(19,2.475749);
   Jets_cut_CvB__6755->SetBinError(20,0.9995284);
   Jets_cut_CvB__6755->SetEntries(3.46496e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__6755->SetLineColor(ci);
   Jets_cut_CvB__6755->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__6755->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__6755->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__6755->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__6755->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__6755->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__6755->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__6755->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__6755->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__6755->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__6755->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__6755->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__6755->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__6755->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__6755->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_ZHbb_tagFirst_2b1c_17->Modified();
   CvB_ZHbb_tagFirst_2b1c_17->cd();
   CvB_ZHbb_tagFirst_2b1c_17->SetSelected(CvB_ZHbb_tagFirst_2b1c_17);
}

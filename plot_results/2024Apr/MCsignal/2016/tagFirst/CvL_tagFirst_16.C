#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_tagFirst_16()
{
//=========Macro generated from canvas: CvL_tagFirst_16/CvL_tagFirst_16
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *CvL_tagFirst_16 = new TCanvas("CvL_tagFirst_16", "CvL_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_tagFirst_16->SetHighLightColor(2);
   CvL_tagFirst_16->Range(-0.2,-54.77124,1.133333,492.9411);
   CvL_tagFirst_16->SetFillColor(0);
   CvL_tagFirst_16->SetFillStyle(4000);
   CvL_tagFirst_16->SetBorderMode(0);
   CvL_tagFirst_16->SetBorderSize(2);
   CvL_tagFirst_16->SetLeftMargin(0.15);
   CvL_tagFirst_16->SetFrameFillStyle(1000);
   CvL_tagFirst_16->SetFrameBorderMode(0);
   CvL_tagFirst_16->SetFrameFillStyle(1000);
   CvL_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__223 = new TH1D("Jets_cut_CvL__223","",20,0,1);
   Jets_cut_CvL__223->SetBinContent(1,246.2555);
   Jets_cut_CvL__223->SetBinContent(2,417.3046);
   Jets_cut_CvL__223->SetBinContent(3,181.665);
   Jets_cut_CvL__223->SetBinContent(4,93.2428);
   Jets_cut_CvL__223->SetBinContent(5,58.05415);
   Jets_cut_CvL__223->SetBinContent(6,41.47949);
   Jets_cut_CvL__223->SetBinContent(7,34.76594);
   Jets_cut_CvL__223->SetBinContent(8,28.04196);
   Jets_cut_CvL__223->SetBinContent(9,25.74548);
   Jets_cut_CvL__223->SetBinContent(10,23.36708);
   Jets_cut_CvL__223->SetBinContent(11,21.90028);
   Jets_cut_CvL__223->SetBinContent(12,20.61758);
   Jets_cut_CvL__223->SetBinContent(13,19.39682);
   Jets_cut_CvL__223->SetBinContent(14,19.73668);
   Jets_cut_CvL__223->SetBinContent(15,21.40212);
   Jets_cut_CvL__223->SetBinContent(16,23.4637);
   Jets_cut_CvL__223->SetBinContent(17,25.13844);
   Jets_cut_CvL__223->SetBinContent(18,28.38641);
   Jets_cut_CvL__223->SetBinContent(19,36.51168);
   Jets_cut_CvL__223->SetBinContent(20,102.9487);
   Jets_cut_CvL__223->SetBinError(1,1.268481);
   Jets_cut_CvL__223->SetBinError(2,1.685089);
   Jets_cut_CvL__223->SetBinError(3,1.125541);
   Jets_cut_CvL__223->SetBinError(4,0.8123823);
   Jets_cut_CvL__223->SetBinError(5,0.6409948);
   Jets_cut_CvL__223->SetBinError(6,0.5416163);
   Jets_cut_CvL__223->SetBinError(7,0.5088508);
   Jets_cut_CvL__223->SetBinError(8,0.4531548);
   Jets_cut_CvL__223->SetBinError(9,0.4380777);
   Jets_cut_CvL__223->SetBinError(10,0.4145425);
   Jets_cut_CvL__223->SetBinError(11,0.4009103);
   Jets_cut_CvL__223->SetBinError(12,0.3859617);
   Jets_cut_CvL__223->SetBinError(13,0.3730991);
   Jets_cut_CvL__223->SetBinError(14,0.3796471);
   Jets_cut_CvL__223->SetBinError(15,0.3956641);
   Jets_cut_CvL__223->SetBinError(16,0.4140853);
   Jets_cut_CvL__223->SetBinError(17,0.4282631);
   Jets_cut_CvL__223->SetBinError(18,0.4500005);
   Jets_cut_CvL__223->SetBinError(19,0.5155702);
   Jets_cut_CvL__223->SetBinError(20,0.8647567);
   Jets_cut_CvL__223->SetEntries(509664);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__223->SetLineColor(ci);
   Jets_cut_CvL__223->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__223->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__223->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__223->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__223->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__223->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__223->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__223->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__223->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__223->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__223->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__223->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__223->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__223->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__223->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_tagFirst_16->Modified();
   CvL_tagFirst_16->cd();
   CvL_tagFirst_16->SetSelected(CvL_tagFirst_16);
}

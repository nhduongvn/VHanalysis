#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_TT_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: CvB_TT_tagOnly_2b1c_17/CvB_TT_tagOnly_2b1c_17
//=========  (Fri May 24 12:44:18 2024) by ROOT version 6.28/10
   TCanvas *CvB_TT_tagOnly_2b1c_17 = new TCanvas("CvB_TT_tagOnly_2b1c_17", "CvB_TT_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_TT_tagOnly_2b1c_17->SetHighLightColor(2);
   CvB_TT_tagOnly_2b1c_17->Range(-0.2,-1892403,1.133333,1.945006e+07);
   CvB_TT_tagOnly_2b1c_17->SetFillColor(0);
   CvB_TT_tagOnly_2b1c_17->SetFillStyle(4000);
   CvB_TT_tagOnly_2b1c_17->SetBorderMode(0);
   CvB_TT_tagOnly_2b1c_17->SetBorderSize(2);
   CvB_TT_tagOnly_2b1c_17->SetLeftMargin(0.15);
   CvB_TT_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   CvB_TT_tagOnly_2b1c_17->SetFrameBorderMode(0);
   CvB_TT_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   CvB_TT_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__7547 = new TH1D("Jets_cut_CvB__7547","",20,0,1);
   Jets_cut_CvB__7547->SetBinContent(1,1.650277e+07);
   Jets_cut_CvB__7547->SetBinContent(2,2354729);
   Jets_cut_CvB__7547->SetBinContent(3,1524844);
   Jets_cut_CvB__7547->SetBinContent(4,1334897);
   Jets_cut_CvB__7547->SetBinContent(5,1217440);
   Jets_cut_CvB__7547->SetBinContent(6,1104361);
   Jets_cut_CvB__7547->SetBinContent(7,1058796);
   Jets_cut_CvB__7547->SetBinContent(8,1016173);
   Jets_cut_CvB__7547->SetBinContent(9,1136118);
   Jets_cut_CvB__7547->SetBinContent(10,1272496);
   Jets_cut_CvB__7547->SetBinContent(11,1425532);
   Jets_cut_CvB__7547->SetBinContent(12,1660800);
   Jets_cut_CvB__7547->SetBinContent(13,2135720);
   Jets_cut_CvB__7547->SetBinContent(14,2744888);
   Jets_cut_CvB__7547->SetBinContent(15,3804223);
   Jets_cut_CvB__7547->SetBinContent(16,5374192);
   Jets_cut_CvB__7547->SetBinContent(17,8520183);
   Jets_cut_CvB__7547->SetBinContent(18,1.452536e+07);
   Jets_cut_CvB__7547->SetBinContent(19,1.460204e+07);
   Jets_cut_CvB__7547->SetBinContent(20,2584377);
   Jets_cut_CvB__7547->SetBinError(1,1028.92);
   Jets_cut_CvB__7547->SetBinError(2,388.0685);
   Jets_cut_CvB__7547->SetBinError(3,312.6631);
   Jets_cut_CvB__7547->SetBinError(4,293.0844);
   Jets_cut_CvB__7547->SetBinError(5,280.7158);
   Jets_cut_CvB__7547->SetBinError(6,269.0145);
   Jets_cut_CvB__7547->SetBinError(7,262.6991);
   Jets_cut_CvB__7547->SetBinError(8,248.3422);
   Jets_cut_CvB__7547->SetBinError(9,267.3775);
   Jets_cut_CvB__7547->SetBinError(10,289.0717);
   Jets_cut_CvB__7547->SetBinError(11,311.6095);
   Jets_cut_CvB__7547->SetBinError(12,340.7776);
   Jets_cut_CvB__7547->SetBinError(13,390.6749);
   Jets_cut_CvB__7547->SetBinError(14,446.6655);
   Jets_cut_CvB__7547->SetBinError(15,529.2405);
   Jets_cut_CvB__7547->SetBinError(16,628.5782);
   Jets_cut_CvB__7547->SetBinError(17,788.6109);
   Jets_cut_CvB__7547->SetBinError(18,1024.666);
   Jets_cut_CvB__7547->SetBinError(19,1029.948);
   Jets_cut_CvB__7547->SetBinError(20,437.4485);
   Jets_cut_CvB__7547->SetEntries(1.690701e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__7547->SetLineColor(ci);
   Jets_cut_CvB__7547->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__7547->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__7547->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__7547->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7547->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__7547->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__7547->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__7547->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__7547->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__7547->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__7547->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__7547->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__7547->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7547->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__7547->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_TT_tagOnly_2b1c_17->Modified();
   CvB_TT_tagOnly_2b1c_17->cd();
   CvB_TT_tagOnly_2b1c_17->SetSelected(CvB_TT_tagOnly_2b1c_17);
}

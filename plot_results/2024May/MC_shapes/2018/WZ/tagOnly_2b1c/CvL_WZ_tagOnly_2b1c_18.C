#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_WZ_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: CvL_WZ_tagOnly_2b1c_18/CvL_WZ_tagOnly_2b1c_18
//=========  (Fri May 24 12:44:18 2024) by ROOT version 6.28/10
   TCanvas *CvL_WZ_tagOnly_2b1c_18 = new TCanvas("CvL_WZ_tagOnly_2b1c_18", "CvL_WZ_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_WZ_tagOnly_2b1c_18->SetHighLightColor(2);
   CvL_WZ_tagOnly_2b1c_18->Range(-0.2,-117727.1,1.133333,1059544);
   CvL_WZ_tagOnly_2b1c_18->SetFillColor(0);
   CvL_WZ_tagOnly_2b1c_18->SetFillStyle(4000);
   CvL_WZ_tagOnly_2b1c_18->SetBorderMode(0);
   CvL_WZ_tagOnly_2b1c_18->SetBorderSize(2);
   CvL_WZ_tagOnly_2b1c_18->SetLeftMargin(0.15);
   CvL_WZ_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   CvL_WZ_tagOnly_2b1c_18->SetFrameBorderMode(0);
   CvL_WZ_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   CvL_WZ_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__7527 = new TH1D("Jets_cut_CvL__7527","",20,0,1);
   Jets_cut_CvL__7527->SetBinContent(1,822578.7);
   Jets_cut_CvL__7527->SetBinContent(2,896968);
   Jets_cut_CvL__7527->SetBinContent(3,349468.3);
   Jets_cut_CvL__7527->SetBinContent(4,151208.1);
   Jets_cut_CvL__7527->SetBinContent(5,82619.8);
   Jets_cut_CvL__7527->SetBinContent(6,55971.88);
   Jets_cut_CvL__7527->SetBinContent(7,41362.67);
   Jets_cut_CvL__7527->SetBinContent(8,32521.06);
   Jets_cut_CvL__7527->SetBinContent(9,27862.31);
   Jets_cut_CvL__7527->SetBinContent(10,24764.41);
   Jets_cut_CvL__7527->SetBinContent(11,23123.96);
   Jets_cut_CvL__7527->SetBinContent(12,21772.72);
   Jets_cut_CvL__7527->SetBinContent(13,21291.97);
   Jets_cut_CvL__7527->SetBinContent(14,21410.57);
   Jets_cut_CvL__7527->SetBinContent(15,23011.07);
   Jets_cut_CvL__7527->SetBinContent(16,25625.76);
   Jets_cut_CvL__7527->SetBinContent(17,29624.1);
   Jets_cut_CvL__7527->SetBinContent(18,36738.26);
   Jets_cut_CvL__7527->SetBinContent(19,48320.49);
   Jets_cut_CvL__7527->SetBinContent(20,137233.5);
   Jets_cut_CvL__7527->SetBinError(1,645.0132);
   Jets_cut_CvL__7527->SetBinError(2,671.9622);
   Jets_cut_CvL__7527->SetBinError(3,477.2485);
   Jets_cut_CvL__7527->SetBinError(4,312.9316);
   Jets_cut_CvL__7527->SetBinError(5,228.0127);
   Jets_cut_CvL__7527->SetBinError(6,182.4802);
   Jets_cut_CvL__7527->SetBinError(7,160.5413);
   Jets_cut_CvL__7527->SetBinError(8,137.6675);
   Jets_cut_CvL__7527->SetBinError(9,138.9656);
   Jets_cut_CvL__7527->SetBinError(10,120.8871);
   Jets_cut_CvL__7527->SetBinError(11,115.7737);
   Jets_cut_CvL__7527->SetBinError(12,111.4408);
   Jets_cut_CvL__7527->SetBinError(13,108.5623);
   Jets_cut_CvL__7527->SetBinError(14,108.0198);
   Jets_cut_CvL__7527->SetBinError(15,113.2163);
   Jets_cut_CvL__7527->SetBinError(16,116.3354);
   Jets_cut_CvL__7527->SetBinError(17,133.3256);
   Jets_cut_CvL__7527->SetBinError(18,144.3346);
   Jets_cut_CvL__7527->SetBinError(19,159.0753);
   Jets_cut_CvL__7527->SetBinError(20,272.4117);
   Jets_cut_CvL__7527->SetEntries(7874549);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__7527->SetLineColor(ci);
   Jets_cut_CvL__7527->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__7527->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__7527->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__7527->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__7527->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__7527->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__7527->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__7527->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__7527->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__7527->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__7527->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__7527->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__7527->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__7527->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__7527->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_WZ_tagOnly_2b1c_18->Modified();
   CvL_WZ_tagOnly_2b1c_18->cd();
   CvL_WZ_tagOnly_2b1c_18->SetSelected(CvL_WZ_tagOnly_2b1c_18);
}

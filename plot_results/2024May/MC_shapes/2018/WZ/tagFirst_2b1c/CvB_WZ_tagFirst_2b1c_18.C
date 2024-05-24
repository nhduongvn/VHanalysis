#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_WZ_tagFirst_2b1c_18()
{
//=========Macro generated from canvas: CvB_WZ_tagFirst_2b1c_18/CvB_WZ_tagFirst_2b1c_18
//=========  (Fri May 24 12:44:02 2024) by ROOT version 6.28/10
   TCanvas *CvB_WZ_tagFirst_2b1c_18 = new TCanvas("CvB_WZ_tagFirst_2b1c_18", "CvB_WZ_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_WZ_tagFirst_2b1c_18->SetHighLightColor(2);
   CvB_WZ_tagFirst_2b1c_18->Range(-0.2,-108333.4,1.133333,975000.4);
   CvB_WZ_tagFirst_2b1c_18->SetFillColor(0);
   CvB_WZ_tagFirst_2b1c_18->SetFillStyle(4000);
   CvB_WZ_tagFirst_2b1c_18->SetBorderMode(0);
   CvB_WZ_tagFirst_2b1c_18->SetBorderSize(2);
   CvB_WZ_tagFirst_2b1c_18->SetLeftMargin(0.15);
   CvB_WZ_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   CvB_WZ_tagFirst_2b1c_18->SetFrameBorderMode(0);
   CvB_WZ_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   CvB_WZ_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__6777 = new TH1D("Jets_cut_CvB__6777","",20,0,1);
   Jets_cut_CvB__6777->SetBinContent(1,111707.9);
   Jets_cut_CvB__6777->SetBinContent(2,18684.9);
   Jets_cut_CvB__6777->SetBinContent(3,13440.45);
   Jets_cut_CvB__6777->SetBinContent(4,13082.69);
   Jets_cut_CvB__6777->SetBinContent(5,13797.25);
   Jets_cut_CvB__6777->SetBinContent(6,14501.01);
   Jets_cut_CvB__6777->SetBinContent(7,16025.87);
   Jets_cut_CvB__6777->SetBinContent(8,18795.74);
   Jets_cut_CvB__6777->SetBinContent(9,23545.64);
   Jets_cut_CvB__6777->SetBinContent(10,29272.21);
   Jets_cut_CvB__6777->SetBinContent(11,36963.93);
   Jets_cut_CvB__6777->SetBinContent(12,47232.89);
   Jets_cut_CvB__6777->SetBinContent(13,65773.05);
   Jets_cut_CvB__6777->SetBinContent(14,94598.51);
   Jets_cut_CvB__6777->SetBinContent(15,143414.9);
   Jets_cut_CvB__6777->SetBinContent(16,216574.7);
   Jets_cut_CvB__6777->SetBinContent(17,358324.7);
   Jets_cut_CvB__6777->SetBinContent(18,668737.4);
   Jets_cut_CvB__6777->SetBinContent(19,825397.2);
   Jets_cut_CvB__6777->SetBinContent(20,143606.8);
   Jets_cut_CvB__6777->SetBinError(1,239.6145);
   Jets_cut_CvB__6777->SetBinError(2,99.27739);
   Jets_cut_CvB__6777->SetBinError(3,86.5825);
   Jets_cut_CvB__6777->SetBinError(4,85.78728);
   Jets_cut_CvB__6777->SetBinError(5,84.08708);
   Jets_cut_CvB__6777->SetBinError(6,86.09599);
   Jets_cut_CvB__6777->SetBinError(7,96.44073);
   Jets_cut_CvB__6777->SetBinError(8,107.9732);
   Jets_cut_CvB__6777->SetBinError(9,121.9806);
   Jets_cut_CvB__6777->SetBinError(10,133.4206);
   Jets_cut_CvB__6777->SetBinError(11,151.6699);
   Jets_cut_CvB__6777->SetBinError(12,172.8119);
   Jets_cut_CvB__6777->SetBinError(13,194.2631);
   Jets_cut_CvB__6777->SetBinError(14,233.6775);
   Jets_cut_CvB__6777->SetBinError(15,290.2637);
   Jets_cut_CvB__6777->SetBinError(16,342.3916);
   Jets_cut_CvB__6777->SetBinError(17,434.187);
   Jets_cut_CvB__6777->SetBinError(18,593.7139);
   Jets_cut_CvB__6777->SetBinError(19,670.6839);
   Jets_cut_CvB__6777->SetBinError(20,288.4099);
   Jets_cut_CvB__6777->SetEntries(7874549);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__6777->SetLineColor(ci);
   Jets_cut_CvB__6777->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__6777->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__6777->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__6777->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__6777->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__6777->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__6777->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__6777->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__6777->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__6777->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__6777->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__6777->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__6777->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__6777->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__6777->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_WZ_tagFirst_2b1c_18->Modified();
   CvB_WZ_tagFirst_2b1c_18->cd();
   CvB_WZ_tagFirst_2b1c_18->SetSelected(CvB_WZ_tagFirst_2b1c_18);
}

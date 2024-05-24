#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_ZHcc_tagFirst_18()
{
//=========Macro generated from canvas: CvL_ZHcc_tagFirst_18/CvL_ZHcc_tagFirst_18
//=========  (Fri May 24 12:43:13 2024) by ROOT version 6.28/10
   TCanvas *CvL_ZHcc_tagFirst_18 = new TCanvas("CvL_ZHcc_tagFirst_18", "CvL_ZHcc_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_ZHcc_tagFirst_18->SetHighLightColor(2);
   CvL_ZHcc_tagFirst_18->Range(-0.2,-89.42342,1.133333,837.68);
   CvL_ZHcc_tagFirst_18->SetFillColor(0);
   CvL_ZHcc_tagFirst_18->SetFillStyle(4000);
   CvL_ZHcc_tagFirst_18->SetBorderMode(0);
   CvL_ZHcc_tagFirst_18->SetBorderSize(2);
   CvL_ZHcc_tagFirst_18->SetLeftMargin(0.15);
   CvL_ZHcc_tagFirst_18->SetFrameFillStyle(1000);
   CvL_ZHcc_tagFirst_18->SetFrameBorderMode(0);
   CvL_ZHcc_tagFirst_18->SetFrameFillStyle(1000);
   CvL_ZHcc_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__4383 = new TH1D("Jets_cut_CvL__4383","",20,0,1);
   Jets_cut_CvL__4383->SetBinContent(1,536.2903);
   Jets_cut_CvL__4383->SetBinContent(2,709.6514);
   Jets_cut_CvL__4383->SetBinContent(3,302.9313);
   Jets_cut_CvL__4383->SetBinContent(4,152.1237);
   Jets_cut_CvL__4383->SetBinContent(5,94.37896);
   Jets_cut_CvL__4383->SetBinContent(6,70.16097);
   Jets_cut_CvL__4383->SetBinContent(7,55.52979);
   Jets_cut_CvL__4383->SetBinContent(8,46.83561);
   Jets_cut_CvL__4383->SetBinContent(9,42.23934);
   Jets_cut_CvL__4383->SetBinContent(10,39.53745);
   Jets_cut_CvL__4383->SetBinContent(11,38.62858);
   Jets_cut_CvL__4383->SetBinContent(12,37.05358);
   Jets_cut_CvL__4383->SetBinContent(13,36.92333);
   Jets_cut_CvL__4383->SetBinContent(14,38.00658);
   Jets_cut_CvL__4383->SetBinContent(15,40.96218);
   Jets_cut_CvL__4383->SetBinContent(16,45.53021);
   Jets_cut_CvL__4383->SetBinContent(17,51.04331);
   Jets_cut_CvL__4383->SetBinContent(18,63.18868);
   Jets_cut_CvL__4383->SetBinContent(19,82.00007);
   Jets_cut_CvL__4383->SetBinContent(20,281.9381);
   Jets_cut_CvL__4383->SetBinError(1,1.15354);
   Jets_cut_CvL__4383->SetBinError(2,1.313752);
   Jets_cut_CvL__4383->SetBinError(3,0.9174708);
   Jets_cut_CvL__4383->SetBinError(4,0.6311221);
   Jets_cut_CvL__4383->SetBinError(5,0.4886048);
   Jets_cut_CvL__4383->SetBinError(6,0.4173235);
   Jets_cut_CvL__4383->SetBinError(7,0.3823526);
   Jets_cut_CvL__4383->SetBinError(8,0.3303026);
   Jets_cut_CvL__4383->SetBinError(9,0.3153081);
   Jets_cut_CvL__4383->SetBinError(10,0.303966);
   Jets_cut_CvL__4383->SetBinError(11,0.3154722);
   Jets_cut_CvL__4383->SetBinError(12,0.2969382);
   Jets_cut_CvL__4383->SetBinError(13,0.2992535);
   Jets_cut_CvL__4383->SetBinError(14,0.3045828);
   Jets_cut_CvL__4383->SetBinError(15,0.3118713);
   Jets_cut_CvL__4383->SetBinError(16,0.3434859);
   Jets_cut_CvL__4383->SetBinError(17,0.3536194);
   Jets_cut_CvL__4383->SetBinError(18,0.3779865);
   Jets_cut_CvL__4383->SetBinError(19,0.4381975);
   Jets_cut_CvL__4383->SetBinError(20,0.8073157);
   Jets_cut_CvL__4383->SetEntries(2587055);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__4383->SetLineColor(ci);
   Jets_cut_CvL__4383->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__4383->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__4383->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__4383->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__4383->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__4383->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__4383->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__4383->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__4383->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__4383->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__4383->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__4383->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__4383->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__4383->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__4383->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_ZHcc_tagFirst_18->Modified();
   CvL_ZHcc_tagFirst_18->cd();
   CvL_ZHcc_tagFirst_18->SetSelected(CvL_ZHcc_tagFirst_18);
}

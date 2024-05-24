#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_ZHcc_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: CvB_ZHcc_tagOnly_2b1c_18/CvB_ZHcc_tagOnly_2b1c_18
//=========  (Fri May 24 12:44:18 2024) by ROOT version 6.28/10
   TCanvas *CvB_ZHcc_tagOnly_2b1c_18 = new TCanvas("CvB_ZHcc_tagOnly_2b1c_18", "CvB_ZHcc_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_ZHcc_tagOnly_2b1c_18->SetHighLightColor(2);
   CvB_ZHcc_tagOnly_2b1c_18->Range(-0.2,-86.58949,1.133333,779.3053);
   CvB_ZHcc_tagOnly_2b1c_18->SetFillColor(0);
   CvB_ZHcc_tagOnly_2b1c_18->SetFillStyle(4000);
   CvB_ZHcc_tagOnly_2b1c_18->SetBorderMode(0);
   CvB_ZHcc_tagOnly_2b1c_18->SetBorderSize(2);
   CvB_ZHcc_tagOnly_2b1c_18->SetLeftMargin(0.15);
   CvB_ZHcc_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   CvB_ZHcc_tagOnly_2b1c_18->SetFrameBorderMode(0);
   CvB_ZHcc_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   CvB_ZHcc_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__7533 = new TH1D("Jets_cut_CvB__7533","",20,0,1);
   Jets_cut_CvB__7533->SetBinContent(1,117.3708);
   Jets_cut_CvB__7533->SetBinContent(2,22.87009);
   Jets_cut_CvB__7533->SetBinContent(3,17.77429);
   Jets_cut_CvB__7533->SetBinContent(4,18.63185);
   Jets_cut_CvB__7533->SetBinContent(5,20.07849);
   Jets_cut_CvB__7533->SetBinContent(6,21.99803);
   Jets_cut_CvB__7533->SetBinContent(7,24.06398);
   Jets_cut_CvB__7533->SetBinContent(8,27.52086);
   Jets_cut_CvB__7533->SetBinContent(9,33.7384);
   Jets_cut_CvB__7533->SetBinContent(10,41.42233);
   Jets_cut_CvB__7533->SetBinContent(11,49.3332);
   Jets_cut_CvB__7533->SetBinContent(12,61.01554);
   Jets_cut_CvB__7533->SetBinContent(13,82.56514);
   Jets_cut_CvB__7533->SetBinContent(14,110.1735);
   Jets_cut_CvB__7533->SetBinContent(15,152.5924);
   Jets_cut_CvB__7533->SetBinContent(16,220.5285);
   Jets_cut_CvB__7533->SetBinContent(17,345.0771);
   Jets_cut_CvB__7533->SetBinContent(18,591.2742);
   Jets_cut_CvB__7533->SetBinContent(19,659.7294);
   Jets_cut_CvB__7533->SetBinContent(20,147.1955);
   Jets_cut_CvB__7533->SetBinError(1,0.5339348);
   Jets_cut_CvB__7533->SetBinError(2,0.2280028);
   Jets_cut_CvB__7533->SetBinError(3,0.1981042);
   Jets_cut_CvB__7533->SetBinError(4,0.2050644);
   Jets_cut_CvB__7533->SetBinError(5,0.2103856);
   Jets_cut_CvB__7533->SetBinError(6,0.2318213);
   Jets_cut_CvB__7533->SetBinError(7,0.2351777);
   Jets_cut_CvB__7533->SetBinError(8,0.255685);
   Jets_cut_CvB__7533->SetBinError(9,0.2871531);
   Jets_cut_CvB__7533->SetBinError(10,0.3253277);
   Jets_cut_CvB__7533->SetBinError(11,0.3423571);
   Jets_cut_CvB__7533->SetBinError(12,0.3965722);
   Jets_cut_CvB__7533->SetBinError(13,0.4482778);
   Jets_cut_CvB__7533->SetBinError(14,0.5407976);
   Jets_cut_CvB__7533->SetBinError(15,0.6154687);
   Jets_cut_CvB__7533->SetBinError(16,0.7450982);
   Jets_cut_CvB__7533->SetBinError(17,0.9135908);
   Jets_cut_CvB__7533->SetBinError(18,1.215297);
   Jets_cut_CvB__7533->SetBinError(19,1.282464);
   Jets_cut_CvB__7533->SetBinError(20,0.6083606);
   Jets_cut_CvB__7533->SetEntries(2587055);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__7533->SetLineColor(ci);
   Jets_cut_CvB__7533->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__7533->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__7533->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__7533->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7533->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__7533->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__7533->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__7533->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__7533->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__7533->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__7533->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__7533->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__7533->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7533->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__7533->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_ZHcc_tagOnly_2b1c_18->Modified();
   CvB_ZHcc_tagOnly_2b1c_18->cd();
   CvB_ZHcc_tagOnly_2b1c_18->SetSelected(CvB_ZHcc_tagOnly_2b1c_18);
}

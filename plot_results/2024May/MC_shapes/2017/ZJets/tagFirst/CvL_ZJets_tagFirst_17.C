#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_ZJets_tagFirst_17()
{
//=========Macro generated from canvas: CvL_ZJets_tagFirst_17/CvL_ZJets_tagFirst_17
//=========  (Fri May 24 12:43:13 2024) by ROOT version 6.28/10
   TCanvas *CvL_ZJets_tagFirst_17 = new TCanvas("CvL_ZJets_tagFirst_17", "CvL_ZJets_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_ZJets_tagFirst_17->SetHighLightColor(2);
   CvL_ZJets_tagFirst_17->Range(-0.2,-3230690,1.133333,2.907621e+07);
   CvL_ZJets_tagFirst_17->SetFillColor(0);
   CvL_ZJets_tagFirst_17->SetFillStyle(4000);
   CvL_ZJets_tagFirst_17->SetBorderMode(0);
   CvL_ZJets_tagFirst_17->SetBorderSize(2);
   CvL_ZJets_tagFirst_17->SetLeftMargin(0.15);
   CvL_ZJets_tagFirst_17->SetFrameFillStyle(1000);
   CvL_ZJets_tagFirst_17->SetFrameBorderMode(0);
   CvL_ZJets_tagFirst_17->SetFrameFillStyle(1000);
   CvL_ZJets_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__4394 = new TH1D("Jets_cut_CvL__4394","",20,0,1);
   Jets_cut_CvL__4394->SetBinContent(1,2.21681e+07);
   Jets_cut_CvL__4394->SetBinContent(2,2.461478e+07);
   Jets_cut_CvL__4394->SetBinContent(3,8284703);
   Jets_cut_CvL__4394->SetBinContent(4,3605375);
   Jets_cut_CvL__4394->SetBinContent(5,1980852);
   Jets_cut_CvL__4394->SetBinContent(6,1334778);
   Jets_cut_CvL__4394->SetBinContent(7,980554.2);
   Jets_cut_CvL__4394->SetBinContent(8,768077.4);
   Jets_cut_CvL__4394->SetBinContent(9,651333.7);
   Jets_cut_CvL__4394->SetBinContent(10,585655.4);
   Jets_cut_CvL__4394->SetBinContent(11,549781.6);
   Jets_cut_CvL__4394->SetBinContent(12,522619);
   Jets_cut_CvL__4394->SetBinContent(13,520823.1);
   Jets_cut_CvL__4394->SetBinContent(14,545377.4);
   Jets_cut_CvL__4394->SetBinContent(15,603256.9);
   Jets_cut_CvL__4394->SetBinContent(16,694695.2);
   Jets_cut_CvL__4394->SetBinContent(17,827564.6);
   Jets_cut_CvL__4394->SetBinContent(18,1069637);
   Jets_cut_CvL__4394->SetBinContent(19,1469363);
   Jets_cut_CvL__4394->SetBinContent(20,3639650);
   Jets_cut_CvL__4394->SetBinError(1,6859.589);
   Jets_cut_CvL__4394->SetBinError(2,7177.507);
   Jets_cut_CvL__4394->SetBinError(3,4322.266);
   Jets_cut_CvL__4394->SetBinError(4,2851.098);
   Jets_cut_CvL__4394->SetBinError(5,2114.301);
   Jets_cut_CvL__4394->SetBinError(6,1737.745);
   Jets_cut_CvL__4394->SetBinError(7,1494.568);
   Jets_cut_CvL__4394->SetBinError(8,1321.473);
   Jets_cut_CvL__4394->SetBinError(9,1220.203);
   Jets_cut_CvL__4394->SetBinError(10,1158.979);
   Jets_cut_CvL__4394->SetBinError(11,1124.638);
   Jets_cut_CvL__4394->SetBinError(12,1098.151);
   Jets_cut_CvL__4394->SetBinError(13,1097.478);
   Jets_cut_CvL__4394->SetBinError(14,1127.756);
   Jets_cut_CvL__4394->SetBinError(15,1189.934);
   Jets_cut_CvL__4394->SetBinError(16,1280.72);
   Jets_cut_CvL__4394->SetBinError(17,1404.974);
   Jets_cut_CvL__4394->SetBinError(18,1602.075);
   Jets_cut_CvL__4394->SetBinError(19,1881.577);
   Jets_cut_CvL__4394->SetBinError(20,2932.908);
   Jets_cut_CvL__4394->SetEntries(1.363191e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__4394->SetLineColor(ci);
   Jets_cut_CvL__4394->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__4394->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__4394->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__4394->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__4394->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__4394->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__4394->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__4394->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__4394->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__4394->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__4394->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__4394->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__4394->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__4394->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__4394->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_ZJets_tagFirst_17->Modified();
   CvL_ZJets_tagFirst_17->cd();
   CvL_ZJets_tagFirst_17->SetSelected(CvL_ZJets_tagFirst_17);
}

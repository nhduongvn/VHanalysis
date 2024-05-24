#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_TT_tagFirst_2b1c_16()
{
//=========Macro generated from canvas: CvB_TT_tagFirst_2b1c_16/CvB_TT_tagFirst_2b1c_16
//=========  (Fri May 24 12:44:01 2024) by ROOT version 6.28/10
   TCanvas *CvB_TT_tagFirst_2b1c_16 = new TCanvas("CvB_TT_tagFirst_2b1c_16", "CvB_TT_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_TT_tagFirst_2b1c_16->SetHighLightColor(2);
   CvB_TT_tagFirst_2b1c_16->Range(-0.2,-1220698,1.133333,1.491702e+07);
   CvB_TT_tagFirst_2b1c_16->SetFillColor(0);
   CvB_TT_tagFirst_2b1c_16->SetFillStyle(4000);
   CvB_TT_tagFirst_2b1c_16->SetBorderMode(0);
   CvB_TT_tagFirst_2b1c_16->SetBorderSize(2);
   CvB_TT_tagFirst_2b1c_16->SetLeftMargin(0.15);
   CvB_TT_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   CvB_TT_tagFirst_2b1c_16->SetFrameBorderMode(0);
   CvB_TT_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   CvB_TT_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__6766 = new TH1D("Jets_cut_CvB__6766","",20,0,1);
   Jets_cut_CvB__6766->SetBinContent(1,1.268848e+07);
   Jets_cut_CvB__6766->SetBinContent(2,2145147);
   Jets_cut_CvB__6766->SetBinContent(3,1395404);
   Jets_cut_CvB__6766->SetBinContent(4,1204096);
   Jets_cut_CvB__6766->SetBinContent(5,1130464);
   Jets_cut_CvB__6766->SetBinContent(6,1044086);
   Jets_cut_CvB__6766->SetBinContent(7,1007713);
   Jets_cut_CvB__6766->SetBinContent(8,978569.7);
   Jets_cut_CvB__6766->SetBinContent(9,1063780);
   Jets_cut_CvB__6766->SetBinContent(10,1193549);
   Jets_cut_CvB__6766->SetBinContent(11,1334427);
   Jets_cut_CvB__6766->SetBinContent(12,1528050);
   Jets_cut_CvB__6766->SetBinContent(13,1937907);
   Jets_cut_CvB__6766->SetBinContent(14,2470896);
   Jets_cut_CvB__6766->SetBinContent(15,3414595);
   Jets_cut_CvB__6766->SetBinContent(16,4820709);
   Jets_cut_CvB__6766->SetBinContent(17,7417209);
   Jets_cut_CvB__6766->SetBinContent(18,1.163741e+07);
   Jets_cut_CvB__6766->SetBinContent(19,1.115636e+07);
   Jets_cut_CvB__6766->SetBinContent(20,1827513);
   Jets_cut_CvB__6766->SetBinError(1,973.2586);
   Jets_cut_CvB__6766->SetBinError(2,405.0512);
   Jets_cut_CvB__6766->SetBinError(3,326.9924);
   Jets_cut_CvB__6766->SetBinError(4,303.4363);
   Jets_cut_CvB__6766->SetBinError(5,294.0378);
   Jets_cut_CvB__6766->SetBinError(6,282.9257);
   Jets_cut_CvB__6766->SetBinError(7,278.5137);
   Jets_cut_CvB__6766->SetBinError(8,267.1056);
   Jets_cut_CvB__6766->SetBinError(9,279.3294);
   Jets_cut_CvB__6766->SetBinError(10,296.7643);
   Jets_cut_CvB__6766->SetBinError(11,314.0063);
   Jets_cut_CvB__6766->SetBinError(12,335.4472);
   Jets_cut_CvB__6766->SetBinError(13,376.4707);
   Jets_cut_CvB__6766->SetBinError(14,423.4119);
   Jets_cut_CvB__6766->SetBinError(15,494.1986);
   Jets_cut_CvB__6766->SetBinError(16,582.038);
   Jets_cut_CvB__6766->SetBinError(17,712.7441);
   Jets_cut_CvB__6766->SetBinError(18,886.2863);
   Jets_cut_CvB__6766->SetBinError(19,881.5589);
   Jets_cut_CvB__6766->SetBinError(20,354.1291);
   Jets_cut_CvB__6766->SetEntries(1.413682e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__6766->SetLineColor(ci);
   Jets_cut_CvB__6766->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__6766->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__6766->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__6766->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__6766->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__6766->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__6766->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__6766->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__6766->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__6766->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__6766->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__6766->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__6766->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__6766->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__6766->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_TT_tagFirst_2b1c_16->Modified();
   CvB_TT_tagFirst_2b1c_16->cd();
   CvB_TT_tagFirst_2b1c_16->SetSelected(CvB_TT_tagFirst_2b1c_16);
}

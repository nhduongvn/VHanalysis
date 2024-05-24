#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_ZHcc_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: CvB_ZHcc_tagOnly_2b1c_16/CvB_ZHcc_tagOnly_2b1c_16
//=========  (Fri May 24 12:44:18 2024) by ROOT version 6.28/10
   TCanvas *CvB_ZHcc_tagOnly_2b1c_16 = new TCanvas("CvB_ZHcc_tagOnly_2b1c_16", "CvB_ZHcc_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_ZHcc_tagOnly_2b1c_16->SetHighLightColor(2);
   CvB_ZHcc_tagOnly_2b1c_16->Range(-0.2,-48.81111,1.133333,439.3);
   CvB_ZHcc_tagOnly_2b1c_16->SetFillColor(0);
   CvB_ZHcc_tagOnly_2b1c_16->SetFillStyle(4000);
   CvB_ZHcc_tagOnly_2b1c_16->SetBorderMode(0);
   CvB_ZHcc_tagOnly_2b1c_16->SetBorderSize(2);
   CvB_ZHcc_tagOnly_2b1c_16->SetLeftMargin(0.15);
   CvB_ZHcc_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   CvB_ZHcc_tagOnly_2b1c_16->SetFrameBorderMode(0);
   CvB_ZHcc_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   CvB_ZHcc_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__7531 = new TH1D("Jets_cut_CvB__7531","",20,0,1);
   Jets_cut_CvB__7531->SetBinContent(1,63.54213);
   Jets_cut_CvB__7531->SetBinContent(2,14.04875);
   Jets_cut_CvB__7531->SetBinContent(3,10.8874);
   Jets_cut_CvB__7531->SetBinContent(4,11.62295);
   Jets_cut_CvB__7531->SetBinContent(5,12.96597);
   Jets_cut_CvB__7531->SetBinContent(6,13.97311);
   Jets_cut_CvB__7531->SetBinContent(7,16.34708);
   Jets_cut_CvB__7531->SetBinContent(8,18.00427);
   Jets_cut_CvB__7531->SetBinContent(9,22.47332);
   Jets_cut_CvB__7531->SetBinContent(10,28.8865);
   Jets_cut_CvB__7531->SetBinContent(11,35.02267);
   Jets_cut_CvB__7531->SetBinContent(12,41.59157);
   Jets_cut_CvB__7531->SetBinContent(13,57.55312);
   Jets_cut_CvB__7531->SetBinContent(14,73.95404);
   Jets_cut_CvB__7531->SetBinContent(15,105.123);
   Jets_cut_CvB__7531->SetBinContent(16,151.3665);
   Jets_cut_CvB__7531->SetBinContent(17,223.4246);
   Jets_cut_CvB__7531->SetBinContent(18,350.0343);
   Jets_cut_CvB__7531->SetBinContent(19,371.8941);
   Jets_cut_CvB__7531->SetBinContent(20,66.14404);
   Jets_cut_CvB__7531->SetBinError(1,0.6243948);
   Jets_cut_CvB__7531->SetBinError(2,0.2959516);
   Jets_cut_CvB__7531->SetBinError(3,0.2591174);
   Jets_cut_CvB__7531->SetBinError(4,0.2685515);
   Jets_cut_CvB__7531->SetBinError(5,0.2874224);
   Jets_cut_CvB__7531->SetBinError(6,0.2977977);
   Jets_cut_CvB__7531->SetBinError(7,0.3300443);
   Jets_cut_CvB__7531->SetBinError(8,0.3323652);
   Jets_cut_CvB__7531->SetBinError(9,0.3752996);
   Jets_cut_CvB__7531->SetBinError(10,0.4348671);
   Jets_cut_CvB__7531->SetBinError(11,0.4756961);
   Jets_cut_CvB__7531->SetBinError(12,0.5147745);
   Jets_cut_CvB__7531->SetBinError(13,0.610019);
   Jets_cut_CvB__7531->SetBinError(14,0.6877577);
   Jets_cut_CvB__7531->SetBinError(15,0.8131846);
   Jets_cut_CvB__7531->SetBinError(16,0.9773127);
   Jets_cut_CvB__7531->SetBinError(17,1.159528);
   Jets_cut_CvB__7531->SetBinError(18,1.435172);
   Jets_cut_CvB__7531->SetBinError(19,1.505728);
   Jets_cut_CvB__7531->SetBinError(20,0.5938684);
   Jets_cut_CvB__7531->SetEntries(1296561);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__7531->SetLineColor(ci);
   Jets_cut_CvB__7531->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__7531->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__7531->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__7531->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7531->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__7531->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__7531->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__7531->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__7531->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__7531->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__7531->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__7531->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__7531->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7531->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__7531->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_ZHcc_tagOnly_2b1c_16->Modified();
   CvB_ZHcc_tagOnly_2b1c_16->cd();
   CvB_ZHcc_tagOnly_2b1c_16->SetSelected(CvB_ZHcc_tagOnly_2b1c_16);
}

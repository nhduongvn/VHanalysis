#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_SingleTop_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: CvB_SingleTop_tagOnly_2b1c_16/CvB_SingleTop_tagOnly_2b1c_16
//=========  (Fri May 24 12:44:18 2024) by ROOT version 6.28/10
   TCanvas *CvB_SingleTop_tagOnly_2b1c_16 = new TCanvas("CvB_SingleTop_tagOnly_2b1c_16", "CvB_SingleTop_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_SingleTop_tagOnly_2b1c_16->SetHighLightColor(2);
   CvB_SingleTop_tagOnly_2b1c_16->Range(-0.2,-442677.5,1.133333,5249686);
   CvB_SingleTop_tagOnly_2b1c_16->SetFillColor(0);
   CvB_SingleTop_tagOnly_2b1c_16->SetFillStyle(4000);
   CvB_SingleTop_tagOnly_2b1c_16->SetBorderMode(0);
   CvB_SingleTop_tagOnly_2b1c_16->SetBorderSize(2);
   CvB_SingleTop_tagOnly_2b1c_16->SetLeftMargin(0.15);
   CvB_SingleTop_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   CvB_SingleTop_tagOnly_2b1c_16->SetFrameBorderMode(0);
   CvB_SingleTop_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   CvB_SingleTop_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__7549 = new TH1D("Jets_cut_CvB__7549","",20,0,1);
   Jets_cut_CvB__7549->SetBinContent(1,4463598);
   Jets_cut_CvB__7549->SetBinContent(2,759839.8);
   Jets_cut_CvB__7549->SetBinContent(3,492141.8);
   Jets_cut_CvB__7549->SetBinContent(4,422123.3);
   Jets_cut_CvB__7549->SetBinContent(5,397632.5);
   Jets_cut_CvB__7549->SetBinContent(6,367206.3);
   Jets_cut_CvB__7549->SetBinContent(7,351288);
   Jets_cut_CvB__7549->SetBinContent(8,333084.6);
   Jets_cut_CvB__7549->SetBinContent(9,360127);
   Jets_cut_CvB__7549->SetBinContent(10,401627.1);
   Jets_cut_CvB__7549->SetBinContent(11,445279.7);
   Jets_cut_CvB__7549->SetBinContent(12,503359.8);
   Jets_cut_CvB__7549->SetBinContent(13,626706.8);
   Jets_cut_CvB__7549->SetBinContent(14,791615.6);
   Jets_cut_CvB__7549->SetBinContent(15,1077880);
   Jets_cut_CvB__7549->SetBinContent(16,1493486);
   Jets_cut_CvB__7549->SetBinContent(17,2211609);
   Jets_cut_CvB__7549->SetBinContent(18,3524406);
   Jets_cut_CvB__7549->SetBinContent(19,3940342);
   Jets_cut_CvB__7549->SetBinContent(20,608324.8);
   Jets_cut_CvB__7549->SetBinError(1,1056.352);
   Jets_cut_CvB__7549->SetBinError(2,437.3415);
   Jets_cut_CvB__7549->SetBinError(3,352.7505);
   Jets_cut_CvB__7549->SetBinError(4,326.7246);
   Jets_cut_CvB__7549->SetBinError(5,317.9929);
   Jets_cut_CvB__7549->SetBinError(6,306.0639);
   Jets_cut_CvB__7549->SetBinError(7,300.4049);
   Jets_cut_CvB__7549->SetBinError(8,284.6634);
   Jets_cut_CvB__7549->SetBinError(9,298.8641);
   Jets_cut_CvB__7549->SetBinError(10,318.6589);
   Jets_cut_CvB__7549->SetBinError(11,337.4298);
   Jets_cut_CvB__7549->SetBinError(12,360.9985);
   Jets_cut_CvB__7549->SetBinError(13,403.9771);
   Jets_cut_CvB__7549->SetBinError(14,454.6238);
   Jets_cut_CvB__7549->SetBinError(15,528.6055);
   Jets_cut_CvB__7549->SetBinError(16,616.6742);
   Jets_cut_CvB__7549->SetBinError(17,741.2651);
   Jets_cut_CvB__7549->SetBinError(18,928.3123);
   Jets_cut_CvB__7549->SetBinError(19,998.8696);
   Jets_cut_CvB__7549->SetBinError(20,390.6154);
   Jets_cut_CvB__7549->SetEntries(3.067202e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__7549->SetLineColor(ci);
   Jets_cut_CvB__7549->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__7549->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__7549->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__7549->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7549->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__7549->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__7549->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__7549->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__7549->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__7549->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__7549->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__7549->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__7549->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7549->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__7549->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_SingleTop_tagOnly_2b1c_16->Modified();
   CvB_SingleTop_tagOnly_2b1c_16->cd();
   CvB_SingleTop_tagOnly_2b1c_16->SetSelected(CvB_SingleTop_tagOnly_2b1c_16);
}

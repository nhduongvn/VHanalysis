#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_signal_tags_16_logY()
{
//=========Macro generated from canvas: CutFlow_signal_tags_16/CutFlow_signal_tags_16
//=========  (Thu Mar  9 13:36:11 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_signal_tags_16 = new TCanvas("CutFlow_signal_tags_16", "CutFlow_signal_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_signal_tags_16->SetHighLightColor(2);
   CutFlow_signal_tags_16->Range(-1.4,0.07360939,7.933333,3.481067);
   CutFlow_signal_tags_16->SetFillColor(0);
   CutFlow_signal_tags_16->SetBorderMode(0);
   CutFlow_signal_tags_16->SetBorderSize(2);
   CutFlow_signal_tags_16->SetLogy();
   CutFlow_signal_tags_16->SetLeftMargin(0.15);
   CutFlow_signal_tags_16->SetFrameBorderMode(0);
   CutFlow_signal_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_CutFlow__1 = new TH1D("VbbHcc_tags_CutFlow__1","",7,0,7);
   VbbHcc_tags_CutFlow__1->SetBinContent(1,729.0745);
   VbbHcc_tags_CutFlow__1->SetBinContent(2,728.4357);
   VbbHcc_tags_CutFlow__1->SetBinContent(3,120.2642);
   VbbHcc_tags_CutFlow__1->SetBinContent(4,50.19344);
   VbbHcc_tags_CutFlow__1->SetBinContent(5,15.43508);
   VbbHcc_tags_CutFlow__1->SetBinContent(6,12.01603);
   VbbHcc_tags_CutFlow__1->SetBinContent(7,5.192603);
   VbbHcc_tags_CutFlow__1->SetBinError(1,1.376893);
   VbbHcc_tags_CutFlow__1->SetBinError(2,1.376354);
   VbbHcc_tags_CutFlow__1->SetBinError(3,0.504486);
   VbbHcc_tags_CutFlow__1->SetBinError(4,0.3251413);
   VbbHcc_tags_CutFlow__1->SetBinError(5,0.1787052);
   VbbHcc_tags_CutFlow__1->SetBinError(6,0.1572385);
   VbbHcc_tags_CutFlow__1->SetBinError(7,0.1033438);
   VbbHcc_tags_CutFlow__1->SetEntries(1210986);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   VbbHcc_tags_CutFlow__1->SetLineColor(ci);
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetBinLabel(4,"b-tag #1");
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetBinLabel(5,"b-tag #2");
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetBinLabel(6,"c-tag #1");
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetBinLabel(7,"c-tag #2");
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetRange(1,7);
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__1->GetYaxis()->SetTitle("Events");
   VbbHcc_tags_CutFlow__1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow__1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__1->Draw("HIST");
   CutFlow_signal_tags_16->Modified();
   CutFlow_signal_tags_16->cd();
   CutFlow_signal_tags_16->SetSelected(CutFlow_signal_tags_16);
}

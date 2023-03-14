#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_signal_algo_17_logY()
{
//=========Macro generated from canvas: CutFlow_signal_algo_17/CutFlow_signal_algo_17
//=========  (Thu Feb 16 12:44:09 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_signal_algo_17 = new TCanvas("CutFlow_signal_algo_17", "CutFlow_signal_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_signal_algo_17->SetHighLightColor(2);
   CutFlow_signal_algo_17->Range(-1,-0.4269425,5.666667,3.60748);
   CutFlow_signal_algo_17->SetFillColor(0);
   CutFlow_signal_algo_17->SetBorderMode(0);
   CutFlow_signal_algo_17->SetBorderSize(2);
   CutFlow_signal_algo_17->SetLogy();
   CutFlow_signal_algo_17->SetLeftMargin(0.15);
   CutFlow_signal_algo_17->SetFrameBorderMode(0);
   CutFlow_signal_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_CutFlow__9 = new TH1D("VbbHcc_algo_CutFlow__9","",5,0,5);
   VbbHcc_algo_CutFlow__9->SetBinContent(1,844.2846);
   VbbHcc_algo_CutFlow__9->SetBinContent(2,843.2789);
   VbbHcc_algo_CutFlow__9->SetBinContent(3,140.6181);
   VbbHcc_algo_CutFlow__9->SetBinContent(4,6.386133);
   VbbHcc_algo_CutFlow__9->SetBinContent(5,1.894653);
   VbbHcc_algo_CutFlow__9->SetBinError(1,1.126508);
   VbbHcc_algo_CutFlow__9->SetBinError(2,1.125928);
   VbbHcc_algo_CutFlow__9->SetBinError(3,0.4148543);
   VbbHcc_algo_CutFlow__9->SetBinError(4,0.08887103);
   VbbHcc_algo_CutFlow__9->SetBinError(5,0.04897527);
   VbbHcc_algo_CutFlow__9->SetEntries(2257850);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VbbHcc_algo_CutFlow__9->SetLineColor(ci);
   VbbHcc_algo_CutFlow__9->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_algo_CutFlow__9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow__9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow__9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow__9->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow__9->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow__9->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow__9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow__9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__9->GetYaxis()->SetTitle("Events");
   VbbHcc_algo_CutFlow__9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow__9->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__9->Draw("HIST");
   CutFlow_signal_algo_17->Modified();
   CutFlow_signal_algo_17->cd();
   CutFlow_signal_algo_17->SetSelected(CutFlow_signal_algo_17);
}

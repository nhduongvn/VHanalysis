#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_TT_tagFirst_17_logY()
{
//=========Macro generated from canvas: CutFlow_TT_tagFirst_17/CutFlow_TT_tagFirst_17
//=========  (Thu May 23 15:31:42 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_TT_tagFirst_17 = new TCanvas("CutFlow_TT_tagFirst_17", "CutFlow_TT_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_TT_tagFirst_17->SetHighLightColor(2);
   CutFlow_TT_tagFirst_17->Range(-1.2,4.800737,6.8,8.093064);
   CutFlow_TT_tagFirst_17->SetFillColor(0);
   CutFlow_TT_tagFirst_17->SetFillStyle(4000);
   CutFlow_TT_tagFirst_17->SetBorderMode(0);
   CutFlow_TT_tagFirst_17->SetBorderSize(2);
   CutFlow_TT_tagFirst_17->SetLogy();
   CutFlow_TT_tagFirst_17->SetLeftMargin(0.15);
   CutFlow_TT_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_TT_tagFirst_17->SetFrameBorderMode(0);
   CutFlow_TT_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_TT_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__17 = new TH1D("CutFlow_evt_tagFirst__17","",5,0,5);
   CutFlow_evt_tagFirst__17->SetBinContent(1,3.063958e+07);
   CutFlow_evt_tagFirst__17->SetBinContent(2,2.905105e+07);
   CutFlow_evt_tagFirst__17->SetBinContent(3,9323322);
   CutFlow_evt_tagFirst__17->SetBinContent(4,975882.8);
   CutFlow_evt_tagFirst__17->SetBinContent(5,269773.5);
   CutFlow_evt_tagFirst__17->SetBinError(1,1301.043);
   CutFlow_evt_tagFirst__17->SetBinError(2,1276.501);
   CutFlow_evt_tagFirst__17->SetBinError(3,772.1683);
   CutFlow_evt_tagFirst__17->SetBinError(4,251.5843);
   CutFlow_evt_tagFirst__17->SetBinError(5,133.6277);
   CutFlow_evt_tagFirst__17->SetEntries(1.366106e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__17->SetLineColor(ci);
   CutFlow_evt_tagFirst__17->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__17->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__17->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__17->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__17->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__17->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__17->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__17->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__17->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__17->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__17->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__17->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__17->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__17->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__17->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__17->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__17->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__17->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__17->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__17->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_TT_tagFirst_17->Modified();
   CutFlow_TT_tagFirst_17->cd();
   CutFlow_TT_tagFirst_17->SetSelected(CutFlow_TT_tagFirst_17);
}

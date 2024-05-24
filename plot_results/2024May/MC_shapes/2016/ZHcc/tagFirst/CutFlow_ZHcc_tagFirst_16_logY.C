#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHcc_tagFirst_16_logY()
{
//=========Macro generated from canvas: CutFlow_ZHcc_tagFirst_16/CutFlow_ZHcc_tagFirst_16
//=========  (Thu May 23 15:31:42 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHcc_tagFirst_16 = new TCanvas("CutFlow_ZHcc_tagFirst_16", "CutFlow_ZHcc_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHcc_tagFirst_16->SetHighLightColor(2);
   CutFlow_ZHcc_tagFirst_16->Range(-1.2,-0.1236609,6.8,3.502985);
   CutFlow_ZHcc_tagFirst_16->SetFillColor(0);
   CutFlow_ZHcc_tagFirst_16->SetFillStyle(4000);
   CutFlow_ZHcc_tagFirst_16->SetBorderMode(0);
   CutFlow_ZHcc_tagFirst_16->SetBorderSize(2);
   CutFlow_ZHcc_tagFirst_16->SetLogy();
   CutFlow_ZHcc_tagFirst_16->SetLeftMargin(0.15);
   CutFlow_ZHcc_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_ZHcc_tagFirst_16->SetFrameBorderMode(0);
   CutFlow_ZHcc_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_ZHcc_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__1 = new TH1D("CutFlow_evt_tagFirst__1","",5,0,5);
   CutFlow_evt_tagFirst__1->SetBinContent(1,729.0745);
   CutFlow_evt_tagFirst__1->SetBinContent(2,728.4512);
   CutFlow_evt_tagFirst__1->SetBinContent(3,116.7884);
   CutFlow_evt_tagFirst__1->SetBinContent(4,28.28116);
   CutFlow_evt_tagFirst__1->SetBinContent(5,3.467638);
   CutFlow_evt_tagFirst__1->SetBinError(1,1.294664);
   CutFlow_evt_tagFirst__1->SetBinError(2,1.294157);
   CutFlow_evt_tagFirst__1->SetBinError(3,0.4753212);
   CutFlow_evt_tagFirst__1->SetBinError(4,0.2313271);
   CutFlow_evt_tagFirst__1->SetBinError(5,0.08005347);
   CutFlow_evt_tagFirst__1->SetEntries(1157831);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__1->SetLineColor(ci);
   CutFlow_evt_tagFirst__1->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__1->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__1->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__1->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__1->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__1->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__1->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__1->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__1->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__1->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__1->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__1->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__1->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__1->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__1->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__1->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__1->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__1->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__1->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__1->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHcc_tagFirst_16->Modified();
   CutFlow_ZHcc_tagFirst_16->cd();
   CutFlow_ZHcc_tagFirst_16->SetSelected(CutFlow_ZHcc_tagFirst_16);
}

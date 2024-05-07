#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZJets_DHZfirst_17()
{
//=========Macro generated from canvas: CutFlow_ZJets_DHZfirst_17/CutFlow_ZJets_DHZfirst_17
//=========  (Mon Apr 22 15:10:08 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZJets_DHZfirst_17 = new TCanvas("CutFlow_ZJets_DHZfirst_17", "CutFlow_ZJets_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZJets_DHZfirst_17->SetHighLightColor(2);
   CutFlow_ZJets_DHZfirst_17->Range(-1.4,-5578547,7.933333,5.020692e+07);
   CutFlow_ZJets_DHZfirst_17->SetFillColor(0);
   CutFlow_ZJets_DHZfirst_17->SetFillStyle(4000);
   CutFlow_ZJets_DHZfirst_17->SetBorderMode(0);
   CutFlow_ZJets_DHZfirst_17->SetBorderSize(2);
   CutFlow_ZJets_DHZfirst_17->SetLeftMargin(0.15);
   CutFlow_ZJets_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_ZJets_DHZfirst_17->SetFrameBorderMode(0);
   CutFlow_ZJets_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_ZJets_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__74 = new TH1D("CutFlow_evt_DHZfirst__74","",8,0,8);
   CutFlow_evt_DHZfirst__74->SetBinContent(1,4.250321e+07);
   CutFlow_evt_DHZfirst__74->SetBinContent(2,4.247063e+07);
   CutFlow_evt_DHZfirst__74->SetBinContent(3,3177452);
   CutFlow_evt_DHZfirst__74->SetBinContent(4,66999.88);
   CutFlow_evt_DHZfirst__74->SetBinContent(5,22489.83);
   CutFlow_evt_DHZfirst__74->SetBinContent(6,9691.526);
   CutFlow_evt_DHZfirst__74->SetBinContent(7,3092.875);
   CutFlow_evt_DHZfirst__74->SetBinContent(8,922.9564);
   CutFlow_evt_DHZfirst__74->SetBinError(1,9940.055);
   CutFlow_evt_DHZfirst__74->SetBinError(2,9938.845);
   CutFlow_evt_DHZfirst__74->SetBinError(3,1934.008);
   CutFlow_evt_DHZfirst__74->SetBinError(4,176.001);
   CutFlow_evt_DHZfirst__74->SetBinError(5,107.3734);
   CutFlow_evt_DHZfirst__74->SetBinError(6,73.00578);
   CutFlow_evt_DHZfirst__74->SetBinError(7,40.48408);
   CutFlow_evt_DHZfirst__74->SetBinError(8,22.9914);
   CutFlow_evt_DHZfirst__74->SetEntries(1.061379e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__74->SetLineColor(ci);
   CutFlow_evt_DHZfirst__74->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__74->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__74->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__74->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__74->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__74->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__74->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__74->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__74->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__74->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__74->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__74->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__74->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__74->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__74->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__74->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__74->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__74->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__74->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__74->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__74->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__74->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__74->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZJets_DHZfirst_17->Modified();
   CutFlow_ZJets_DHZfirst_17->cd();
   CutFlow_ZJets_DHZfirst_17->SetSelected(CutFlow_ZJets_DHZfirst_17);
}

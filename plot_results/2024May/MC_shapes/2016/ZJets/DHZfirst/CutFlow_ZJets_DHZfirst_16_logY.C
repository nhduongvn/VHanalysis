#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZJets_DHZfirst_16_logY()
{
//=========Macro generated from canvas: CutFlow_ZJets_DHZfirst_16/CutFlow_ZJets_DHZfirst_16
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZJets_DHZfirst_16 = new TCanvas("CutFlow_ZJets_DHZfirst_16", "CutFlow_ZJets_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZJets_DHZfirst_16->SetHighLightColor(2);
   CutFlow_ZJets_DHZfirst_16->Range(-1.4,3.107779,7.933333,8.4273);
   CutFlow_ZJets_DHZfirst_16->SetFillColor(0);
   CutFlow_ZJets_DHZfirst_16->SetFillStyle(4000);
   CutFlow_ZJets_DHZfirst_16->SetBorderMode(0);
   CutFlow_ZJets_DHZfirst_16->SetBorderSize(2);
   CutFlow_ZJets_DHZfirst_16->SetLogy();
   CutFlow_ZJets_DHZfirst_16->SetLeftMargin(0.15);
   CutFlow_ZJets_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_ZJets_DHZfirst_16->SetFrameBorderMode(0);
   CutFlow_ZJets_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_ZJets_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__73 = new TH1D("CutFlow_evt_DHZfirst__73","",8,0,8);
   CutFlow_evt_DHZfirst__73->SetBinContent(1,4.14762e+07);
   CutFlow_evt_DHZfirst__73->SetBinContent(2,4.145527e+07);
   CutFlow_evt_DHZfirst__73->SetBinContent(3,3097075);
   CutFlow_evt_DHZfirst__73->SetBinContent(4,403652.2);
   CutFlow_evt_DHZfirst__73->SetBinContent(5,90685.69);
   CutFlow_evt_DHZfirst__73->SetBinContent(6,26923.86);
   CutFlow_evt_DHZfirst__73->SetBinContent(7,8724.906);
   CutFlow_evt_DHZfirst__73->SetBinContent(8,2400.66);
   CutFlow_evt_DHZfirst__73->SetBinError(1,9879.738);
   CutFlow_evt_DHZfirst__73->SetBinError(2,9879.36);
   CutFlow_evt_DHZfirst__73->SetBinError(3,1903.692);
   CutFlow_evt_DHZfirst__73->SetBinError(4,564.844);
   CutFlow_evt_DHZfirst__73->SetBinError(5,267.3662);
   CutFlow_evt_DHZfirst__73->SetBinError(6,150.7079);
   CutFlow_evt_DHZfirst__73->SetBinError(7,81.5);
   CutFlow_evt_DHZfirst__73->SetBinError(8,42.43294);
   CutFlow_evt_DHZfirst__73->SetEntries(1.131823e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__73->SetLineColor(ci);
   CutFlow_evt_DHZfirst__73->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__73->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__73->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__73->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__73->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__73->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__73->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__73->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__73->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__73->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__73->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__73->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__73->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__73->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__73->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__73->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__73->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__73->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__73->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__73->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__73->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__73->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__73->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZJets_DHZfirst_16->Modified();
   CutFlow_ZJets_DHZfirst_16->cd();
   CutFlow_ZJets_DHZfirst_16->SetSelected(CutFlow_ZJets_DHZfirst_16);
}
